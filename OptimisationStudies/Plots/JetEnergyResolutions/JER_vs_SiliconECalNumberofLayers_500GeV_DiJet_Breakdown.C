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

    float Pandora_Settings_Default_JER[4] = {3.25736,3.13994,3.12352,2.97279};

    float Pandora_Settings_PerfectPFA_JER[4] = {1.86552,1.77586,1.77756,1.70055};

    float Pandora_Settings_TotalConfusion_JER[4] = {2.67024892083,2.58950660629,2.5683959268,2.43836217195};

    float Pandora_Settings_PhotonConfusion_JER[4] = {1.10994500458,1.1589716283,1.21662188243,1.1125690188};

    float Pandora_Settings_NeutralHadronConfusion_JER[4] = {1.81563224082,1.74402543009,1.77680348716,1.73170931767};

    float Pandora_Settings_OtherConfusion_JER[4] = {1.61298820582,1.52338587626,1.39980648663,1.30728080346};

    float Pandora_Settings_Default_JERError[4] = {0.0415973,0.0400978,0.039888,0.0379632};

    float Pandora_Settings_PerfectPFA_JERError[4] = {0.0238232,0.0226781,0.0226999,0.0217164};

    float Pandora_Settings_TotalConfusion_JERError[4] = {0.0479361773467,0.0460666273479,0.0458947929508,0.043735650021};

    float Pandora_Settings_PhotonConfusion_JERError[4] = {0.0570941446661,0.0547417141209,0.0542278357266,0.0517736835885};

    float Pandora_Settings_NeutralHadronConfusion_JERError[4] = {0.0502121296509,0.0477653568316,0.0467388689194,0.0446055269732};

    float Pandora_Settings_OtherConfusion_JERError[4] = {0.0394889646479,0.0375107151723,0.0367438024411,0.0349559039606};

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
    pCanvasEj->SaveAs("JER_vs_SiliconECalNumberofLayers_500GeV_DiJet_Breakdown.pdf");
}
