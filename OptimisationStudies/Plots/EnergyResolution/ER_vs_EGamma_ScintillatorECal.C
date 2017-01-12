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

    float er_Gamma[6] = {5.5458,4.2280,3.4980,2.6532,2.0171,2.4221};

    float er_GammaError[6] = {0.0635,0.0568,0.0885,0.0721,0.1319,0.2706};

    TGraphErrors *pTGraphErrors = new TGraphErrors(6,xAxisVairable,er_Gamma,xAxisVairableError,er_GammaError);

    pTGraphErrors->SetLineColor(1);
    pTGraphErrors->SetMarkerColor(1);
    pTGraphErrors->Draw("lp,same");
    pCanvasEj->SaveAs("ER_vs_EGamma_ScintillatorECal.pdf");
}
