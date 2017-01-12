{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,0,525,12000,0,6);
    pAxesEj->GetYaxis()->SetTitle("Energy Resolution [%]");
    pAxesEj->GetXaxis()->SetTitle("E_{#gamma} [GeV]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->Draw();

    float xAxisVairable[6] = {10,20,50,100,200,500};

    float xAxisVairableError[6] = {0,0,0,0,0,0};

    float er_Gamma[6] = {5.7507, 4.3180, 3.2172, 2.2428, 1.9337, 1.7838};

    float er_GammaError[6] = {0.0560, 0.0481, 0.0493, 0.0586, 0.1197, 0.1377};

    TGraphErrors *pTGraphErrors = new TGraphErrors(6,xAxisVairable,er_Gamma,xAxisVairableError,er_GammaError);

    pTGraphErrors->SetLineColor(1);
    pTGraphErrors->SetMarkerColor(1);
    pTGraphErrors->Draw("lp,same");
    pCanvasEj->SaveAs("ER_vs_EGamma_SiliconECal.pdf");
}
