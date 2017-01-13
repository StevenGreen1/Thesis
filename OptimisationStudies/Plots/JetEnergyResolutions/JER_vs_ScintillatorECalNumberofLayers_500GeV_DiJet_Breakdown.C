{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,12,36,12000,1.5,5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("N_{Layers ECal}");
    pAxesEj->GetXaxis()->SetTitleOffset(0.9);
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->Draw();

    float xAxisVairable[4] = {16,20,26,30};

    float xAxisVairableError[4] = {0,0,0,0};

    float Pandora_Settings_Default_JER[4] = {3.23834,3.14833,3.16672,3.12067};

    float Pandora_Settings_PerfectPFA_JER[4] = {1.82499,1.73519,1.71621,1.74903};

    float Pandora_Settings_TotalConfusion_JER[4] = {2.67511821337,2.62699399558,2.66134154033,2.58446808996};

    float Pandora_Settings_PhotonConfusion_JER[4] = {1.23811421908,1.19198108513,1.24842320385,1.33987277635};

    float Pandora_Settings_NeutralHadronConfusion_JER[4] = {1.77902748017,1.76717446199,1.83209575252,1.74221842262};

    float Pandora_Settings_OtherConfusion_JER[4] = {1.56792597427,1.53537388489,1.47227832016,1.35973939382};

    float Pandora_Settings_Default_JERError[4] = {0.0413544,0.0402049,0.0404398,0.0398517};

    float Pandora_Settings_PerfectPFA_JERError[4] = {0.0233056,0.0221588,0.0219164,0.0223356};

    float Pandora_Settings_TotalConfusion_JERError[4] = {0.0474693110038,0.0459069155768,0.0459968229015,0.0456840505041};

    float Pandora_Settings_PhotonConfusion_JERError[4] = {0.0563063097001,0.0547830339158,0.0549235089905,0.0536984080542};

    float Pandora_Settings_NeutralHadronConfusion_JERError[4] = {0.0490331715643,0.0475412209914,0.0470640308669,0.0457799583376};

    float Pandora_Settings_OtherConfusion_JERError[4] = {0.0385643714913,0.036965671336,0.0362513193992,0.0360450968727};

    TLegend *pLegend = new TLegend(0.45, 0.7, 0.85, 0.9);
    TGraphErrors *pTGraphErrors_Pandora_SettingsDefault = new TGraphErrors(4,xAxisVairable,Pandora_Settings_Default_JER,xAxisVairableError,Pandora_Settings_Default_JERError);

    pTGraphErrors_Pandora_SettingsDefault->SetLineColor(1);
    pTGraphErrors_Pandora_SettingsDefault->SetMarkerColor(1);
    pTGraphErrors_Pandora_SettingsDefault->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsDefault, "Standard Reconstruction", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPerfectPFA = new TGraphErrors(4,xAxisVairable,Pandora_Settings_PerfectPFA_JER,xAxisVairableError,Pandora_Settings_PerfectPFA_JERError);

    pTGraphErrors_Pandora_SettingsPerfectPFA->SetLineColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->SetMarkerColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPerfectPFA, "Intrinsic Energy Resolution", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsTotalConfusion = new TGraphErrors(4,xAxisVairable,Pandora_Settings_TotalConfusion_JER,xAxisVairableError,Pandora_Settings_TotalConfusion_JERError);

    pTGraphErrors_Pandora_SettingsTotalConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsTotalConfusion->SetMarkerColor(kMagenta);
    pTGraphErrors_Pandora_SettingsTotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsTotalConfusion, "Total Confusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPhotonConfusion = new TGraphErrors(4,xAxisVairable,Pandora_Settings_PhotonConfusion_JER,xAxisVairableError,Pandora_Settings_PhotonConfusion_JERError);

    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetLineColor(kOrange);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetMarkerColor(kOrange);
//    pTGraphErrors_Pandora_SettingsPhotonConfusion->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPhotonConfusion, "PhotonConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsNeutralHadronConfusion = new TGraphErrors(4,xAxisVairable,Pandora_Settings_NeutralHadronConfusion_JER,xAxisVairableError,Pandora_Settings_NeutralHadronConfusion_JERError);

    pTGraphErrors_Pandora_SettingsNeutralHadronConfusion->SetLineColor(kGreen-2);
    pTGraphErrors_Pandora_SettingsNeutralHadronConfusion->SetMarkerColor(kGreen-2);
//    pTGraphErrors_Pandora_SettingsNeutralHadronConfusion->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsNeutralHadronConfusion, "NeutralHadronConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsOtherConfusion = new TGraphErrors(4,xAxisVairable,Pandora_Settings_OtherConfusion_JER,xAxisVairableError,Pandora_Settings_OtherConfusion_JERError);

    pTGraphErrors_Pandora_SettingsOtherConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsOtherConfusion->SetMarkerColor(kMagenta);
//    pTGraphErrors_Pandora_SettingsOtherConfusion->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsOtherConfusion, "OtherConfusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_ScintillatorECalNumberofLayers_500GeV_DiJet_Breakdown.pdf");
}
