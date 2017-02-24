{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",300,0,300,650,2.5,4.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("E_{j} [GeV]");
    pAxesEj->Draw();

    float jetEnergy[4] = {45.5,100.0,180.0,250.0};

    float jetEnergyError[4] = {0,0,0,0};

    float Variable_1_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_2_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_3_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_1_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_2_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_3_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    TGraphErrors *pTGraphErrors_Variable_1 = new TGraphErrors(4,jetEnergy,Variable_1_JER,jetEnergyError,Variable_1_JERError);

    pTGraphErrors_Variable_1->SetLineColor(4);
    pTGraphErrors_Variable_1->SetMarkerColor(4);
    pTGraphErrors_Variable_1->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1, "Steel HCal Absorber Material, QGSP_BERT", "lp");

    TGraphErrors *pTGraphErrors_Variable_2 = new TGraphErrors(4,jetEnergy,Variable_2_JER,jetEnergyError,Variable_2_JERError);

    pTGraphErrors_Variable_2->SetLineColor(2);
    pTGraphErrors_Variable_2->SetMarkerColor(2);
//    pTGraphErrors_Variable_2->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_2, "Steel HCal Absorber Material, QGSP_BERT", "lp");

    TGraphErrors *pTGraphErrors_Variable_3 = new TGraphErrors(4,jetEnergy,Variable_3_JER,jetEnergyError,Variable_3_JERError);

    pTGraphErrors_Variable_3->SetLineColor(6);
    pTGraphErrors_Variable_3->SetMarkerColor(6);
//    pTGraphErrors_Variable_3->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_3, "Steel HCal Absorber Material, QGSP_BERT", "lp");

    pLegend->SetFillStyle(0);
//    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_NominalDetectorPerformance.pdf");
}
