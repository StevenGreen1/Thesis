{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",300,0,300,650,1.5,4.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->GetYaxis()->SetDecimals();
    pAxesEj->GetYaxis()->SetTitleSize(0.05);
    pAxesEj->GetYaxis()->SetLabelSize(0.05);
    pAxesEj->GetXaxis()->SetTitle("E_{j} [GeV]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetXaxis()->SetDecimals();
    pAxesEj->GetXaxis()->SetTitleSize(0.05);
    pAxesEj->GetXaxis()->SetLabelSize(0.05);
    pAxesEj->Draw();

    float jetEnergy[4] = {45.5,100.0,180.0,250.0};

    float jetEnergyError[4] = {0,0,0,0};

    float Variable_1_Default_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_1_PerfectPFA_JER[4] = {2.93851,2.13528,1.79003,1.69254};

    float Variable_1_TotalConfusion_JER[4] = {2.15987004005,1.93450152094,2.2128883245,2.44583845705};

    float Variable_1_Default_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_1_PerfectPFA_JERError[4] = {0.0373946,0.0273439,0.0228684,0.0241841};

    float Variable_1_TotalConfusion_JERError[4] = {0.0596000757346,0.0459246378909,0.0429552070939,0.0525734765383};

    TLegend *pLegend = new TLegend(0.4, 0.6, 0.9, 0.9);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_1_Default = new TGraphErrors(4,jetEnergy,Variable_1_Default_JER,jetEnergyError,Variable_1_Default_JERError);

    pTGraphErrors_Variable_1_Default->SetLineColor(kBlack);
    pTGraphErrors_Variable_1_Default->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_1_Default->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1_Default, "Standard Reconstruction", "lp");

    TGraphErrors *pTGraphErrors_Variable_1_PerfectPFA = new TGraphErrors(4,jetEnergy,Variable_1_PerfectPFA_JER,jetEnergyError,Variable_1_PerfectPFA_JERError);

    pTGraphErrors_Variable_1_PerfectPFA->SetLineColor(kBlue);
    pTGraphErrors_Variable_1_PerfectPFA->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_1_PerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1_PerfectPFA, "Intrinsic Energy Resolution", "lp");

    TGraphErrors *pTGraphErrors_Variable_1_TotalConfusion = new TGraphErrors(4,jetEnergy,Variable_1_TotalConfusion_JER,jetEnergyError,Variable_1_TotalConfusion_JERError);

    pTGraphErrors_Variable_1_TotalConfusion->SetLineColor(kRed);
    pTGraphErrors_Variable_1_TotalConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Variable_1_TotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1_TotalConfusion, "Total Confusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_NominalDetectorPerformance.pdf");
}
