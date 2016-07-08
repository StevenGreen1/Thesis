{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,1,25,12000,0,6.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("ECal Cell Size [mm]");
    pAxesEj->Draw();

    float xAxisVairable[6] = {3,5,7,10,15,20};

    float xAxisVairableError[6] = {0,0,0,0,0,0};

    // Silicon

    float Jet_Energy_91GeV_JER[6] = {3.76035,3.6469,3.70352,3.66154,3.82945,4.2754};

    float Jet_Energy_200GeV_JER[6] = {2.92045,2.88127,2.91137,3.07918,3.27352,3.63381};

    float Jet_Energy_360GeV_JER[6] = {2.84185,2.84624,2.95032,3.12574,3.47943,4.03145};

    float Jet_Energy_500GeV_JER[6] = {2.95465,3.01247,3.12725,3.35,3.71702,4.30269};

    float Jet_Energy_91GeV_JERError[6] = {0.0478531,0.0464093,0.0471298,0.0465957,0.0487324,0.0544075};

    float Jet_Energy_200GeV_JERError[6] = {0.0373987,0.0368969,0.0372824,0.0394314,0.04192,0.0465338};

    float Jet_Energy_360GeV_JERError[6] = {0.036306,0.0363619,0.0376916,0.0399327,0.0444513,0.0542517};

    float Jet_Energy_500GeV_JERError[6] = {0.0377315,0.0384699,0.0399357,0.0427803,0.0474673,0.0549464};

    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    TGraphErrors *pTGraphErrors_Jet_Energy_91 = new TGraphErrors(6,xAxisVairable,Jet_Energy_91GeV_JER,xAxisVairableError,Jet_Energy_91GeV_JERError);

    pTGraphErrors_Jet_Energy_91->SetLineColor(4);
    pTGraphErrors_Jet_Energy_91->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_91->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_91, "Si, 45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_200 = new TGraphErrors(6,xAxisVairable,Jet_Energy_200GeV_JER,xAxisVairableError,Jet_Energy_200GeV_JERError);

    pTGraphErrors_Jet_Energy_200->SetLineColor(2);
    pTGraphErrors_Jet_Energy_200->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_200->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_200, "Si, 100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_360 = new TGraphErrors(6,xAxisVairable,Jet_Energy_360GeV_JER,xAxisVairableError,Jet_Energy_360GeV_JERError);

    pTGraphErrors_Jet_Energy_360->SetLineColor(6);
    pTGraphErrors_Jet_Energy_360->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_360->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_360, "Si, 180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_500 = new TGraphErrors(6,xAxisVairable,Jet_Energy_500GeV_JER,xAxisVairableError,Jet_Energy_500GeV_JERError);

    pTGraphErrors_Jet_Energy_500->SetLineColor(1);
    pTGraphErrors_Jet_Energy_500->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_500->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_500, "Si, 250 GeV Jets", "lp");

    // Scintillator

    float Jet_Energy_91GeV_JER2[6] = {3.69099,3.64186,3.54482,3.60995,3.82549,4.01729};

    float Jet_Energy_200GeV_JER2[6] = {3.02508,2.83502,2.85229,2.97549,3.23232,3.5291};

    float Jet_Energy_360GeV_JER2[6] = {2.94836,2.95693,2.94031,3.03519,3.50091,3.85991};

    float Jet_Energy_500GeV_JER2[6] = {3.15527,3.15274,3.14077,3.42198,3.73829,4.18223};

    float Jet_Energy_91GeV_JERError2[6] = {0.0469704,0.0463452,0.0451102,0.0459391,0.0486821,0.0511228};

    float Jet_Energy_200GeV_JERError2[6] = {0.0387385,0.0363046,0.0365259,0.0381035,0.0413923,0.0451928};

    float Jet_Energy_360GeV_JERError2[6] = {0.0376666,0.037776,0.0375637,0.038776,0.0447257,0.0550854};

    float Jet_Energy_500GeV_JERError2[6] = {0.0402936,0.0402612,0.0448088,0.0461293,0.0477389,0.0534081};

    TGraphErrors *pTGraphErrors_Jet_Energy_912 = new TGraphErrors(6,xAxisVairable,Jet_Energy_91GeV_JER2,xAxisVairableError,Jet_Energy_91GeV_JERError2);

    pTGraphErrors_Jet_Energy_912->SetLineColor(4);
    pTGraphErrors_Jet_Energy_912->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_912->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_912->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_912, "Sc, 45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_2002 = new TGraphErrors(6,xAxisVairable,Jet_Energy_200GeV_JER2,xAxisVairableError,Jet_Energy_200GeV_JERError2);

    pTGraphErrors_Jet_Energy_2002->SetLineColor(2);
    pTGraphErrors_Jet_Energy_2002->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_2002->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_2002->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_2002, "Sc, 100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_3602 = new TGraphErrors(6,xAxisVairable,Jet_Energy_360GeV_JER2,xAxisVairableError,Jet_Energy_360GeV_JERError2);

    pTGraphErrors_Jet_Energy_3602->SetLineColor(6);
    pTGraphErrors_Jet_Energy_3602->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_3602->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_3602->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_3602, "Sc, 180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_5002 = new TGraphErrors(6,xAxisVairable,Jet_Energy_500GeV_JER2,xAxisVairableError,Jet_Energy_500GeV_JERError2);

    pTGraphErrors_Jet_Energy_5002->SetLineColor(1);
    pTGraphErrors_Jet_Energy_5002->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_5002->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_5002->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_5002, "Sc, 250 GeV Jets", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_SiliconECalCellSize.pdf");
}
