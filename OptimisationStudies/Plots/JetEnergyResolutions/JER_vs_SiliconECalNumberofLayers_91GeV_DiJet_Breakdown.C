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

    float Pandora_Settings_Default_JER[4] = {4.31608,3.98219,3.76152,3.70895};

    float Pandora_Settings_PerfectPFA_JER[4] = {3.38088,3.23042,3.06241,3.03215};

    float Pandora_Settings_TotalConfusion_JER[4] = {2.68294558126,2.32856690256,2.18418811056,2.13597202229};

    float Pandora_Settings_PhotonConfusion_JER[4] = {0.774780824169,0.529723471351,0.550560887005,0.539041851436};

    float Pandora_Settings_NeutralHadronConfusion_JER[4] = {1.46814422861,1.4272742357,1.33833158078,1.40131196527};

    float Pandora_Settings_OtherConfusion_JER[4] = {2.10771539599,1.76196058971,1.63597952062,1.51925479706};

    float Pandora_Settings_Default_JERError[4] = {0.0549252,0.0506762,0.047868,0.047199};

    float Pandora_Settings_PerfectPFA_JERError[4] = {0.043024,0.0411094,0.0389713,0.0385863};

    float Pandora_Settings_TotalConfusion_JERError[4] = {0.0697701021656,0.0652537976503,0.0617261279275,0.0609642108382};

    float Pandora_Settings_PhotonConfusion_JERError[4] = {0.0770497752179,0.0713545818972,0.0673314447184,0.066398066782};

    float Pandora_Settings_NeutralHadronConfusion_JERError[4] = {0.0740950714828,0.0686676739806,0.0647649439639,0.063587408228};

    float Pandora_Settings_OtherConfusion_JERError[4] = {0.066494764265,0.06231154356,0.0589147448352,0.0578925546934};

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

    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetMarkerColor(kMagenta);
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
    pCanvasEj->SaveAs("JER_vs_SiliconECalNumberofLayers_91GeV_DiJet_Breakdown.pdf");
}
