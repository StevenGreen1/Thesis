{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,0.5,5.5,12000,0,5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("Magnetic Field Strength [T]");
    pAxesEj->Draw();

    float xAxisVairable[9] = {1,1.5,2,2.5,3,3.5,4,4.5,5};

    float xAxisVairableError[9] = {0,0,0,0,0,0,0,0,0};

    float Pandora_Settings_Default_JER[9] = {3.90015,3.60143,3.47668,3.27105,3.17437,2.97436,2.93853,2.87302,2.85326};

    float Pandora_Settings_PerfectPFA_JER[9] = {2.14422,1.89604,1.79761,1.69165,1.66819,1.69254,1.68859,1.65516,1.72823};

    float Pandora_Settings_TotalConfusion_JER[9] = {3.25783526503,3.0619161261,2.97588677713,2.79965861847,2.70069750635,2.44583845705,2.40491629226,2.34833755981,2.27031136514};

    float Pandora_Settings_PhotonConfusion_JER[9] = {1.72287811005,1.49465510671,1.52640986632,1.3068765255,1.18912659713,1.17751627891,1.12365173288,1.04827783431,0.951282727426};

    float Pandora_Settings_Default_JERError[9] = {0.0525323,0.0460174,0.0444234,0.0417959,0.0405606,0.0453691,0.0375471,0.0367101,0.0364576};

    float Pandora_Settings_PerfectPFA_JERError[9] = {0.0288812,0.0242268,0.0229691,0.0216152,0.0213153,0.0241841,0.021576,0.0211488,0.0220825};

    float Pandora_Settings_TotalConfusion_JERError[9] = {0.0599479935386,0.052005129393,0.050010131854,0.0470543040511,0.0458203759833,0.0525734765383,0.0433048156002,0.0423663403144,0.0426238607378};

    float Pandora_Settings_PhotonConfusion_JERError[9] = {0.0705743372842,0.0622129466865,0.0597198218686,0.0567004448896,0.0553124307224,0.0615962308486,0.0511214486851,0.0501580768057,0.0501054013949};

    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
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
    pCanvasEj->SaveAs("JER_vs_MagneticFieldStrength_500GeV_DiJet_Breakdown.pdf");
}
