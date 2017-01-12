{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,14,32,12000,0,6.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("Number of Layers");
    pAxesEj->Draw();

    float xAxisVairable[4] = {16,20,26,30};

    float xAxisVairableError[4] = {0,0,0,0};

    // Silicon

    float Jet_Energy_91GeV_JER[4] = {4.31608,3.98219,3.76152,3.70895};

    float Jet_Energy_200GeV_JER[4] = {3.39826,3.1375,2.92602,2.92036};

    float Jet_Energy_360GeV_JER[4] = {3.06449,3.00139,2.85047,2.88585};

    float Jet_Energy_500GeV_JER[4] = {3.25736,3.13994,3.12352,2.97279};

    float Jet_Energy_91GeV_JERError[4] = {0.0549252,0.0506762,0.047868,0.047199};

    float Jet_Energy_200GeV_JERError[4] = {0.0435174,0.0401781,0.03747,0.0373974};

    float Jet_Energy_360GeV_JERError[4] = {0.0391502,0.0404781,0.03838,0.0368681};

    float Jet_Energy_500GeV_JERError[4] = {0.0415973,0.0400978,0.039888,0.0379632};


    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    TGraphErrors *pTGraphErrors_Jet_Energy_91 = new TGraphErrors(4,xAxisVairable,Jet_Energy_91GeV_JER,xAxisVairableError,Jet_Energy_91GeV_JERError);

    pTGraphErrors_Jet_Energy_91->SetLineColor(4);
    pTGraphErrors_Jet_Energy_91->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_91->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_91, "Si, 45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_200 = new TGraphErrors(4,xAxisVairable,Jet_Energy_200GeV_JER,xAxisVairableError,Jet_Energy_200GeV_JERError);

    pTGraphErrors_Jet_Energy_200->SetLineColor(2);
    pTGraphErrors_Jet_Energy_200->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_200->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_200, "Si, 100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_360 = new TGraphErrors(4,xAxisVairable,Jet_Energy_360GeV_JER,xAxisVairableError,Jet_Energy_360GeV_JERError);

    pTGraphErrors_Jet_Energy_360->SetLineColor(6);
    pTGraphErrors_Jet_Energy_360->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_360->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_360, "Si, 180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_500 = new TGraphErrors(4,xAxisVairable,Jet_Energy_500GeV_JER,xAxisVairableError,Jet_Energy_500GeV_JERError);

    pTGraphErrors_Jet_Energy_500->SetLineColor(1);
    pTGraphErrors_Jet_Energy_500->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_500->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_500, "Si, 250 GeV Jets", "lp");

    // Scintillator

    float Jet_Energy_91GeV_JER2[4] = {4.05896,3.92149,3.71533,3.62486};

    float Jet_Energy_200GeV_JER2[4] = {3.22033,3.07651,2.93539,2.91273};

    float Jet_Energy_360GeV_JER2[4] = {3.05599,2.96383,2.89854,2.86016};

    float Jet_Energy_500GeV_JER2[4] = {3.23834,3.14833,3.16672,3.12067};
 
    float Jet_Energy_91GeV_JERError2[4] = {0.051653,0.0499037,0.0472801,0.0485825};

    float Jet_Energy_200GeV_JERError2[4] = {0.0412388,0.0393971,0.03759,0.0372998};

    float Jet_Energy_360GeV_JERError2[4] = {0.0390416,0.0378643,0.0370302,0.0365398};

    float Jet_Energy_500GeV_JERError2[4] = {0.0413544,0.0402049,0.0404398,0.0398517};

    TGraphErrors *pTGraphErrors_Jet_Energy_912 = new TGraphErrors(4,xAxisVairable,Jet_Energy_91GeV_JER2,xAxisVairableError,Jet_Energy_91GeV_JERError2);

    pTGraphErrors_Jet_Energy_912->SetLineColor(4);
    pTGraphErrors_Jet_Energy_912->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_912->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_912->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_912, "Sc, 45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_2002 = new TGraphErrors(4,xAxisVairable,Jet_Energy_200GeV_JER2,xAxisVairableError,Jet_Energy_200GeV_JERError2);

    pTGraphErrors_Jet_Energy_2002->SetLineColor(2);
    pTGraphErrors_Jet_Energy_2002->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_2002->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_2002->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_2002, "Sc, 100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_3602 = new TGraphErrors(4,xAxisVairable,Jet_Energy_360GeV_JER2,xAxisVairableError,Jet_Energy_360GeV_JERError2);

    pTGraphErrors_Jet_Energy_3602->SetLineColor(6);
    pTGraphErrors_Jet_Energy_3602->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_3602->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_3602->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_3602, "Sc, 180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_5002 = new TGraphErrors(4,xAxisVairable,Jet_Energy_500GeV_JER2,xAxisVairableError,Jet_Energy_500GeV_JERError2);

    pTGraphErrors_Jet_Energy_5002->SetLineColor(1);
    pTGraphErrors_Jet_Energy_5002->SetLineStyle(2);
    pTGraphErrors_Jet_Energy_5002->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_5002->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_5002, "Sc, 250 GeV Jets", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_SiliconECalCellSize.pdf");
}
