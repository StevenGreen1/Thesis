{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,0.5,5.5,12000,0,5);
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

    float Pandora_Settings_Default_JER[9] = {3.81173,3.75338,3.76262,3.70532,3.67285,3.6469,3.64717,3.75486,3.76242};

    float Pandora_Settings_PerfectPFA_JER[9] = {2.67003,2.64298,2.76567,2.84979,2.89018,2.93851,3.09487,3.11045,3.165};

    float Pandora_Settings_TotalConfusion_JER[9] = {2.72033552931,2.66505499831,2.5511524289,2.36814130877,2.26642597278,2.15987004005,1.92967061749,2.10334838225,2.03434983629};

    float Pandora_Settings_PhotonConfusion_JER[9] = {0.609096076494,0.798084219804,0.539715758803,0.668592590746,0.514679347167,0.642371540154,0.640099910405,0.377752913291,0.506951757369};

    float Pandora_Settings_Default_JERError[9] = {0.0489853,0.0482354,0.0509861,0.0476177,0.0472005,0.0464093,0.0468704,0.0482544,0.0483515};

    float Pandora_Settings_PerfectPFA_JERError[9] = {0.0343131,0.0339654,0.0374767,0.0366231,0.0371422,0.0373946,0.0397728,0.039973,0.0406739};

    float Pandora_Settings_TotalConfusion_JERError[9] = {0.0598075798367,0.0589941301784,0.0632778932383,0.0600724862233,0.0600619802532,0.0596000757346,0.0614709796111,0.0626603517838,0.0631842439311};

    float Pandora_Settings_PhotonConfusion_JERError[9] = {0.0688360004471,0.0674409313054,0.0717348029012,0.0667910324136,0.0664221295563,0.0651211866296,0.0657722396808,0.0680749948635,0.068067380688};

    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Pandora_SettingsDefault = new TGraphErrors(9,xAxisVairable,Pandora_Settings_Default_JER,xAxisVairableError,Pandora_Settings_Default_JERError);

    pTGraphErrors_Pandora_SettingsDefault->SetLineColor(1);
    pTGraphErrors_Pandora_SettingsDefault->SetMarkerColor(1);
    pTGraphErrors_Pandora_SettingsDefault->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsDefault, "Default", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPerfectPFA = new TGraphErrors(9,xAxisVairable,Pandora_Settings_PerfectPFA_JER,xAxisVairableError,Pandora_Settings_PerfectPFA_JERError);

    pTGraphErrors_Pandora_SettingsPerfectPFA->SetLineColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->SetMarkerColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPerfectPFA, "PerfectPFA", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsTotalConfusion = new TGraphErrors(9,xAxisVairable,Pandora_Settings_TotalConfusion_JER,xAxisVairableError,Pandora_Settings_TotalConfusion_JERError);

    pTGraphErrors_Pandora_SettingsTotalConfusion->SetLineColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->SetMarkerColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsTotalConfusion, "TotalConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPhotonConfusion = new TGraphErrors(9,xAxisVairable,Pandora_Settings_PhotonConfusion_JER,xAxisVairableError,Pandora_Settings_PhotonConfusion_JERError);

    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetMarkerColor(kMagenta);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPhotonConfusion, "PhotonConfusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_MagneticFieldStrength_91GeV_DiJet_Breakdown.pdf");
}
