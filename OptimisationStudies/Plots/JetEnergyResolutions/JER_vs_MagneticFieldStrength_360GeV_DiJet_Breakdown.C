{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->SetTopMargin(0.05);
    pCanvasEj->SetRightMargin(0.05);
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,0.5,5.5,12000,0,6);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->GetYaxis()->SetDecimals();
    pAxesEj->GetYaxis()->SetTitleSize(0.05);
    pAxesEj->GetYaxis()->SetLabelSize(0.05);
    pAxesEj->GetXaxis()->SetTitle("Magnetic Field Strength [T]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetXaxis()->SetDecimals();
    pAxesEj->GetXaxis()->SetTitleSize(0.05);
    pAxesEj->GetXaxis()->SetLabelSize(0.05);
    pAxesEj->Draw();

    float xAxisVairable[9] = {1,1.5,2,2.5,3,3.5,4,4.5,5};

    float xAxisVairableError[9] = {0,0,0,0,0,0,0,0,0};

    float Pandora_Settings_Default_JER[9] = {3.61798,3.47626,3.25132,3.13399,3.01075,2.84624,2.80579,2.72983,2.67988};

    float Pandora_Settings_PerfectPFA_JER[9] = {2.00645,1.84881,1.75397,1.76674,1.76591,1.79003,1.75838,1.78577,1.81116};

    float Pandora_Settings_TotalConfusion_JER[9] = {3.01063742053,2.94385549433,2.73763967342,2.58853686327,2.43847850809,2.2128883245,2.18644855867,2.0647027234,1.97521043659};

    float Pandora_Settings_PhotonConfusion_JER[9] = {1.41809737677,1.36540904245,1.30488193412,1.1096696799,1.07341005795,1.01562417296,0.923051662693,0.903777657668,0.822962734454};

    float Pandora_Settings_Default_JERError[9] = {0.0460823,0.0442773,0.0414122,0.0399178,0.038348,0.0363619,0.0357375,0.03477,0.0341337};

    float Pandora_Settings_PerfectPFA_JERError[9] = {0.0255563,0.0235484,0.0223404,0.0225031,0.0224925,0.0228684,0.0223966,0.0227455,0.0230688};

    float Pandora_Settings_TotalConfusion_JERError[9] = {0.0526943609209,0.0501498311999,0.0470538323987,0.0458237691187,0.0444575934214,0.0429552070939,0.0421755291057,0.0415488509868,0.0411980370838};

    float Pandora_Settings_PhotonConfusion_JERError[9] = {0.0626169029672,0.0601540687356,0.0561580583567,0.0546547683667,0.0524805022522,0.0497590592529,0.0491541111798,0.0478059406097,0.0471197549862};

    TLegend *pLegend = new TLegend(0.15, 0.70, 0.9, 0.925);
    pLegend->SetNColumns(2);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Pandora_SettingsDefault = new TGraphErrors(9,xAxisVairable,Pandora_Settings_Default_JER,xAxisVairableError,Pandora_Settings_Default_JERError);

    pTGraphErrors_Pandora_SettingsDefault->SetLineColor(1);
    pTGraphErrors_Pandora_SettingsDefault->SetMarkerColor(1);
    pTGraphErrors_Pandora_SettingsDefault->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsDefault, "#splitline{Standard}{Reconstruction}", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPerfectPFA = new TGraphErrors(9,xAxisVairable,Pandora_Settings_PerfectPFA_JER,xAxisVairableError,Pandora_Settings_PerfectPFA_JERError);

    pTGraphErrors_Pandora_SettingsPerfectPFA->SetLineColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->SetMarkerColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPerfectPFA, "#splitline{Intrinsic Energy}{Resolution}", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsTotalConfusion = new TGraphErrors(9,xAxisVairable,Pandora_Settings_TotalConfusion_JER,xAxisVairableError,Pandora_Settings_TotalConfusion_JERError);

    pTGraphErrors_Pandora_SettingsTotalConfusion->SetLineColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->SetMarkerColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsTotalConfusion, "Total Confusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPhotonConfusion = new TGraphErrors(9,xAxisVairable,Pandora_Settings_PhotonConfusion_JER,xAxisVairableError,Pandora_Settings_PhotonConfusion_JERError);

    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetMarkerColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPhotonConfusion, "Photon Confusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_MagneticFieldStrength_360GeV_DiJet_Breakdown.pdf");
}
