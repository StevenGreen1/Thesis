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

    float Pandora_Settings_Default_JER[9] = {3.47664,3.22453,3.16111,3.04102,2.95643,2.88127,2.8029,2.82693,2.7952};

    float Pandora_Settings_PerfectPFA_JER[9] = {2.04964,2.01372,2.03741,2.03908,2.03741,2.13528,2.1598,2.16883,2.20092};

    float Pandora_Settings_TotalConfusion_JER[9] = {2.80820254967,2.51843711109,2.41693544059,2.25609294888,2.14229756028,1.93450152094,1.7864804421,1.81320425104,1.72310597283};

    float Pandora_Settings_PhotonConfusion_JER[9] = {1.1702933936,1.0848208866,1.04761115458,0.931257662519,0.799907244185,0.582085005218,0.607875557906,0.705193924605,0.469956138272};

    float Pandora_Settings_Default_JERError[9] = {0.0469174,0.0413299,0.040517,0.0389778,0.0378936,0.0368969,0.0359258,0.0362338,0.035827};

    float Pandora_Settings_PerfectPFA_JERError[9] = {0.0276599,0.0258106,0.0261141,0.0261356,0.0261141,0.0273439,0.0276829,0.0277987,0.0282099};

    float Pandora_Settings_TotalConfusion_JERError[9] = {0.0544639234146,0.048727222916,0.0482035176399,0.0469290693154,0.0460204403215,0.0459246378909,0.0453543050173,0.0456689688467,0.0456001639873};

    float Pandora_Settings_PhotonConfusion_JERError[9] = {0.0644447360535,0.0567710905359,0.0557036791143,0.0538143287611,0.0526000052587,0.0516450825859,0.0502065407812,0.0504389776539,0.0503052455917};

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
    pCanvasEj->SaveAs("JER_vs_MagneticFieldStrength_200GeV_DiJet_Breakdown.pdf");
}
