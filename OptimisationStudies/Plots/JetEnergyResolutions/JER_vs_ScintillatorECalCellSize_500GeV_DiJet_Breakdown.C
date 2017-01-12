{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,1,25,12000,0,5.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("ECal Cell Size [mm^{2}]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.9);
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->Draw();

    float xAxisVairable[6] = {3,5,7,10,15,20};

    float xAxisVairableError[6] = {0,0,0,0,0,0};

    float Pandora_Settings_Default_JER[6] = {3.15527,3.15274,3.14077,3.42198,3.73829,4.18223};

    float Pandora_Settings_PerfectPFA_JER[6] = {1.72316,1.70613,1.72419,1.74647,1.79752,1.84533};

    float Pandora_Settings_TotalConfusion_JER[6] = {2.64318905629,2.65120537317,2.62518666704,2.94275205539,3.27776356281,3.7531060422};

    float Pandora_Settings_PhotonConfusion_JER[6] = {1.31477802263,1.33296895669,1.48167416013,1.84543679437,2.17742398444,2.60065225988};

    float Pandora_Settings_NeutralHadronConfusion_JER[6] = {1.78817327139,1.79873600845,1.67750355579,1.78107486937,1.91960406847,2.03834284005};

    float Pandora_Settings_OtherConfusion_JER[6] = {1.4353548307,1.42008185085,1.37194334442,1.44288773202,1.52239252034,1.77976719084};

    float Pandora_Settings_Default_JERError[6] = {0.0402936,0.0402612,0.0448088,0.0461293,0.0477389,0.0534081};

    float Pandora_Settings_PerfectPFA_JERError[6] = {0.0220051,0.0217877,0.0232089,0.023543,0.0229547,0.0235653};

    float Pandora_Settings_TotalConfusion_JERError[6] = {0.0459108304142,0.0457784436704,0.0513963684739,0.0517897747225,0.0529709887633,0.0583759317959};

    float Pandora_Settings_PhotonConfusion_JERError[6] = {0.054454337467,0.0543338158949,0.064556624851,0.0603070952021,0.0615209115427,0.0678372805531};

    float Pandora_Settings_NeutralHadronConfusion_JERError[6] = {0.0464958725149,0.0462037250434,0.0476370852395,0.0494129725145,0.0490988834066,0.0531161333718};

    float Pandora_Settings_OtherConfusion_JERError[6] = {0.0361170399045,0.0357528423137,0.0376610016413,0.0385600076142,0.0378392364453,0.0403387134851};

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
    pCanvasEj->SaveAs("JER_vs_ScintillatorECalCellSize_500GeV_DiJet_Breakdown.pdf");
}
