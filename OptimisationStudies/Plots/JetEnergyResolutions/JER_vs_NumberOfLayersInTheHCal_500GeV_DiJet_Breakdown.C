{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,12,66,12000,0,5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->GetYaxis()->SetDecimals();
    pAxesEj->GetYaxis()->SetTitleSize(0.05);
    pAxesEj->GetYaxis()->SetLabelSize(0.05);
    pAxesEj->GetXaxis()->SetTitle("N_{Readout Layers HCal}");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetXaxis()->SetDecimals();
    pAxesEj->GetXaxis()->SetTitleSize(0.05);
    pAxesEj->GetXaxis()->SetLabelSize(0.05);
    pAxesEj->Draw();

    float xAxisVairable[8] = {18,24,30,36,42,48,54,60};

    float xAxisVairableError[8] = {0,0,0,0,0,0,0,0};

    float Pandora_Settings_Default_JER[8] = {3.5954,3.33187,3.19261,3.15088,3.06618,2.97436,3.02383,2.91974};

    float Pandora_Settings_PerfectPFA_JER[8] = {1.8712,1.81321,1.73629,1.74092,1.65118,1.69254,1.61833,1.60028};

    float Pandora_Settings_TotalConfusion_JER[8] = {3.07009962705,2.79528660298,2.67918936397,2.62626014096,2.58361459974,2.44583845705,2.55432102133,2.4421272672};

    float Pandora_Settings_PhotonConfusion_JER[8] = {1.41775265653,1.31724178191,1.21652396179,1.28899175668,1.21946063073,1.17751627891,1.27421066013,0.999236459853};

    float Pandora_Settings_Default_JERError[8] = {0.0459403,0.0425731,0.0407937,0.0402604,0.0391782,0.0453691,0.038637,0.0373071};

    float Pandora_Settings_PerfectPFA_JERError[8] = {0.0239093,0.0231684,0.0221854,0.0222447,0.021098,0.0241841,0.0206782,0.0204476};

    float Pandora_Settings_TotalConfusion_JERError[8] = {0.0517896287611,0.0484689705634,0.0464362477609,0.045996972852,0.0444978297816,0.0525734765383,0.0438224459922,0.0425432329067};

    float Pandora_Settings_PhotonConfusion_JERError[8] = {0.0623928459675,0.0578072555259,0.0555574578952,0.0545025667604,0.0531701598333,0.0615962308486,0.0521586804962,0.0511919781818};

    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Pandora_SettingsDefault = new TGraphErrors(8,xAxisVairable,Pandora_Settings_Default_JER,xAxisVairableError,Pandora_Settings_Default_JERError);

    pTGraphErrors_Pandora_SettingsDefault->SetLineColor(1);
    pTGraphErrors_Pandora_SettingsDefault->SetMarkerColor(1);
    pTGraphErrors_Pandora_SettingsDefault->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsDefault, "Default", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPerfectPFA = new TGraphErrors(8,xAxisVairable,Pandora_Settings_PerfectPFA_JER,xAxisVairableError,Pandora_Settings_PerfectPFA_JERError);

    pTGraphErrors_Pandora_SettingsPerfectPFA->SetLineColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->SetMarkerColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPerfectPFA, "PerfectPFA", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsTotalConfusion = new TGraphErrors(8,xAxisVairable,Pandora_Settings_TotalConfusion_JER,xAxisVairableError,Pandora_Settings_TotalConfusion_JERError);

    pTGraphErrors_Pandora_SettingsTotalConfusion->SetLineColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->SetMarkerColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsTotalConfusion, "TotalConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPhotonConfusion = new TGraphErrors(8,xAxisVairable,Pandora_Settings_PhotonConfusion_JER,xAxisVairableError,Pandora_Settings_PhotonConfusion_JERError);

    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetMarkerColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPhotonConfusion, "PhotonConfusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_NumberOfLayersInTheHCal_500GeV_DiJet_Breakdown.pdf");
}
