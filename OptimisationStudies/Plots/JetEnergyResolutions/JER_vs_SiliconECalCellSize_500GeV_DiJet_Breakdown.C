{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,1,25,12000,0,6.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("ECal Cell Size [mm^{2}]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.9);
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->Draw();

    float xAxisVairable[6] = {3,5,7,10,15,20};

    float xAxisVairableError[6] = {0,0,0,0,0,0};

    float Pandora_Settings_Default_JER[6] = {2.95465,3.01247,3.12725,3.35,3.71702,4.30269};

    float Pandora_Settings_PerfectPFA_JER[6] = {1.66767,1.68993,1.66266,1.66839,1.75017,1.78802};

    float Pandora_Settings_TotalConfusion_JER[6] = {2.43902304081,2.49381476778,2.6486325315,2.90499136107,3.27919847699,3.91358221016};

    float Pandora_Settings_PhotonConfusion_JER[6] = {1.13262663703,1.24485527994,1.41300988323,1.77435084465,2.21205166257,2.78975522281};

    float Pandora_Settings_NeutralHadronConfusion_JER[6] = {1.68404320049,1.66254501052,1.73479857906,1.78243531061,1.87290250576,2.02229676143};

    float Pandora_Settings_OtherConfusion_JER[6] = {1.35277078384,1.38035919818,1.41743826917,1.45381506785,1.53369041775,1.85572285679};

    float Pandora_Settings_Default_JERError[6] = {0.0377315,0.0384699,0.0399357,0.0427803,0.0474673,0.0549464};

    float Pandora_Settings_PerfectPFA_JERError[6] = {0.0212966,0.0215808,0.0212325,0.0213057,0.0223501,0.0228334};

    float Pandora_Settings_TotalConfusion_JERError[6] = {0.0433267208047,0.044109665355,0.0452292176725,0.0477921449068,0.0524659195057,0.0595018811006};

    float Pandora_Settings_PhotonConfusion_JERError[6] = {0.0513624616381,0.0520300990934,0.0535173006031,0.0560970222288,0.0608960040753,0.0690580108256};

    float Pandora_Settings_NeutralHadronConfusion_JERError[6] = {0.0443446385304,0.0447625364345,0.045251953893,0.0459930126282,0.0483558576489,0.0532247678645};

    float Pandora_Settings_OtherConfusion_JERError[6] = {0.0347203790259,0.0352446663423,0.0350611911041,0.0353912692715,0.0371838477237,0.0400541010312};

    TLegend *pLegend = new TLegend(0.15, 0.7, 0.55, 0.9);
    TGraphErrors *pTGraphErrors_Pandora_SettingsDefault = new TGraphErrors(6,xAxisVairable,Pandora_Settings_Default_JER,xAxisVairableError,Pandora_Settings_Default_JERError);

    pTGraphErrors_Pandora_SettingsDefault->SetLineColor(1);
    pTGraphErrors_Pandora_SettingsDefault->SetMarkerColor(1);
    pTGraphErrors_Pandora_SettingsDefault->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsDefault, "Standard Reconstruction", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPerfectPFA = new TGraphErrors(6,xAxisVairable,Pandora_Settings_PerfectPFA_JER,xAxisVairableError,Pandora_Settings_PerfectPFA_JERError);

    pTGraphErrors_Pandora_SettingsPerfectPFA->SetLineColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->SetMarkerColor(4);
    pTGraphErrors_Pandora_SettingsPerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPerfectPFA, "Intrinsic Energy Resolution", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsTotalConfusion = new TGraphErrors(6,xAxisVairable,Pandora_Settings_TotalConfusion_JER,xAxisVairableError,Pandora_Settings_TotalConfusion_JERError);

    pTGraphErrors_Pandora_SettingsTotalConfusion->SetLineColor(2);
    pTGraphErrors_Pandora_SettingsTotalConfusion->SetMarkerColor(2);
//    pTGraphErrors_Pandora_SettingsTotalConfusion->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsTotalConfusion, "TotalConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsPhotonConfusion = new TGraphErrors(6,xAxisVairable,Pandora_Settings_PhotonConfusion_JER,xAxisVairableError,Pandora_Settings_PhotonConfusion_JERError);

    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetLineColor(kRed);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Pandora_SettingsPhotonConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsPhotonConfusion, "PhotonConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsNeutralHadronConfusion = new TGraphErrors(6,xAxisVairable,Pandora_Settings_NeutralHadronConfusion_JER,xAxisVairableError,Pandora_Settings_NeutralHadronConfusion_JERError);

    pTGraphErrors_Pandora_SettingsNeutralHadronConfusion->SetLineColor(kGreen-2);
    pTGraphErrors_Pandora_SettingsNeutralHadronConfusion->SetMarkerColor(kGreen-2);
//    pTGraphErrors_Pandora_SettingsNeutralHadronConfusion->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsNeutralHadronConfusion, "NeutralHadronConfusion", "lp");

    TGraphErrors *pTGraphErrors_Pandora_SettingsOtherConfusion = new TGraphErrors(6,xAxisVairable,Pandora_Settings_OtherConfusion_JER,xAxisVairableError,Pandora_Settings_OtherConfusion_JERError);

    pTGraphErrors_Pandora_SettingsOtherConfusion->SetLineColor(kMagenta);
    pTGraphErrors_Pandora_SettingsOtherConfusion->SetMarkerColor(kMagenta);
//    pTGraphErrors_Pandora_SettingsOtherConfusion->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Pandora_SettingsOtherConfusion, "OtherConfusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_SiliconECalCellSize_500GeV_DiJet_Breakdown.pdf");
}
