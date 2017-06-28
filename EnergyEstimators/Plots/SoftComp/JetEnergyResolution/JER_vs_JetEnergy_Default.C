{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->SetLeftMargin(0.15);
    pCanvasEj->SetBottomMargin(0.15);

    pCanvasEj->cd();

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

    float Variable_Default_NoECorr_JER[4] = {4.14286,3.22965,3.10841,3.25181};

    float Variable_Default_SoftComp_JER[4] = {3.61852,2.73988,2.73632,2.8909};

    float Variable_Default_CellTruncation_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_Default_JER[4] = {3.77195,3.03212,3.03374,3.18196};

    float Variable_Default_NoECorr_JERError[4] = {0.0527208,0.0413582,0.0397113,0.0415264};

    float Variable_Default_SoftComp_JERError[4] = {0.0460482,0.0350863,0.0349577,0.0369175};

    float Variable_Default_CellTruncation_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_Default_JERError[4] = {0.0480007,0.0388286,0.0387574,0.0406344};

    TLegend *pLegend = new TLegend(0.4, 0.5, 0.9, 0.9);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_Default_NoECorr = new TGraphErrors(4,jetEnergy,Variable_Default_NoECorr_JER,jetEnergyError,Variable_Default_NoECorr_JERError);

    pTGraphErrors_Variable_Default_NoECorr->SetLineColor(kBlack);
    pTGraphErrors_Variable_Default_NoECorr->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_Default_NoECorr->SetMarkerStyle(1);
    pTGraphErrors_Variable_Default_NoECorr->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_Default_NoECorr, "No Energy Corrections", "lp");

    TGraphErrors *pTGraphErrors_Variable_Default_SoftComp = new TGraphErrors(4,jetEnergy,Variable_Default_SoftComp_JER,jetEnergyError,Variable_Default_SoftComp_JERError);

    pTGraphErrors_Variable_Default_SoftComp->SetLineColor(kBlue);
    pTGraphErrors_Variable_Default_SoftComp->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_Default_SoftComp->SetMarkerStyle(1);
    pTGraphErrors_Variable_Default_SoftComp->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_Default_SoftComp, "Software Compensation", "lp");

    TGraphErrors *pTGraphErrors_Variable_Default_CellTruncation = new TGraphErrors(4,jetEnergy,Variable_Default_CellTruncation_JER,jetEnergyError,Variable_Default_CellTruncation_JERError);

    pTGraphErrors_Variable_Default_CellTruncation->SetLineColor(kMagenta);
    pTGraphErrors_Variable_Default_CellTruncation->SetMarkerColor(kMagenta);
    pTGraphErrors_Variable_Default_CellTruncation->SetMarkerStyle(1);
    pTGraphErrors_Variable_Default_CellTruncation->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_Default_CellTruncation, "Legacy Corrections", "lp");

    TGraphErrors *pTGraphErrors_Variable_Default = new TGraphErrors(4,jetEnergy,Variable_Default_JER,jetEnergyError,Variable_Default_JERError);

    pTGraphErrors_Variable_Default->SetLineColor(kRed);
    pTGraphErrors_Variable_Default->SetMarkerColor(kRed);
    pTGraphErrors_Variable_Default->SetMarkerStyle(1);
    pTGraphErrors_Variable_Default->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_Default, "#splitline{Legacy Corrections, w/o}{HCal Hit Energy Truncation}", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_Default.pdf");
}
