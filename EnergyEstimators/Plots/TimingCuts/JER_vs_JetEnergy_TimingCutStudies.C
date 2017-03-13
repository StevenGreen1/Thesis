{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();
    pCanvasEj->SetBottomMargin(0.15);
    pCanvasEj->SetLeftMargin(0.15);
    TH2F *pAxesEj = new TH2F("axesEj","",300,0,300,650,2.5,4.5);
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

    float Variable_1_JER[4] = {3.76337,2.97019,2.96102,3.1025};

    float Variable_2_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_3_JER[4] = {3.64191,2.88548,2.86419,3.07741};

    float Variable_4_JER[4] = {3.55304,2.79378,2.84009,3.02023};

    float Variable_1_JERError[4] = {0.0478915,0.0380357,0.0378284,0.0396196};

    float Variable_2_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_3_JERError[4] = {0.0463459,0.0369508,0.0365913,0.0392992};

    float Variable_4_JERError[4] = {0.0452149,0.0357765,0.0362834,0.0385691};

    TLegend *pLegend = new TLegend(0.65, 0.55, 0.85, 0.85);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_1 = new TGraphErrors(4,jetEnergy,Variable_1_JER,jetEnergyError,Variable_1_JERError);

    pTGraphErrors_Variable_1->SetLineColor(kBlue);
    pTGraphErrors_Variable_1->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_1->SetMarkerStyle(1);
    pTGraphErrors_Variable_1->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1, "10 ns", "lp");

    TGraphErrors *pTGraphErrors_Variable_2 = new TGraphErrors(4,jetEnergy,Variable_2_JER,jetEnergyError,Variable_2_JERError);

    pTGraphErrors_Variable_2->SetLineColor(kBlack);
    pTGraphErrors_Variable_2->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_2->SetMarkerStyle(1);
    pTGraphErrors_Variable_2->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_2, "100 ns", "lp");

    TGraphErrors *pTGraphErrors_Variable_3 = new TGraphErrors(4,jetEnergy,Variable_3_JER,jetEnergyError,Variable_3_JERError);

    pTGraphErrors_Variable_3->SetLineColor(kMagenta);
    pTGraphErrors_Variable_3->SetMarkerColor(kMagenta);
    pTGraphErrors_Variable_3->SetMarkerStyle(1);
    pTGraphErrors_Variable_3->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_3, "300 ns", "lp");

    TGraphErrors *pTGraphErrors_Variable_4 = new TGraphErrors(4,jetEnergy,Variable_4_JER,jetEnergyError,Variable_4_JERError);

    pTGraphErrors_Variable_4->SetLineColor(kRed);
    pTGraphErrors_Variable_4->SetMarkerColor(kRed);
    pTGraphErrors_Variable_4->SetMarkerStyle(1);
    pTGraphErrors_Variable_4->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_4, "Semi-Infinite, 10^{6} ns", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_TimingCutStudies.pdf");
}
