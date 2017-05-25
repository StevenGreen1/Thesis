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

    float Variable_1_JER[4] = {3.56664,2.84553,2.96683,3.28368};

    float Variable_2_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_3_JER[4] = {3.74834,2.94927,2.83825,2.96877};

    float Variable_4_JER[4] = {3.77309,3.02386,2.98467,3.07305};

    float Variable_5_JER[4] = {3.77308,3.02768,3.03721,3.16584};

    float Variable_1_JERError[4] = {0.045388,0.0364392,0.0379025,0.0419333};

    float Variable_2_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_3_JERError[4] = {0.0477003,0.0377677,0.0362599,0.0379118};

    float Variable_4_JERError[4] = {0.0480152,0.0387229,0.0381304,0.0392436};

    float Variable_5_JERError[4] = {0.0480151,0.0387718,0.0388017,0.0404285};

    TLegend *pLegend = new TLegend(0.5, 0.55, 0.85, 0.85);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_1 = new TGraphErrors(4,jetEnergy,Variable_1_JER,jetEnergyError,Variable_1_JERError);

    pTGraphErrors_Variable_1->SetLineColor(kBlue);
    pTGraphErrors_Variable_1->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_1->SetMarkerStyle(1);
    pTGraphErrors_Variable_1->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1, "0.5 GeV", "lp");

    TGraphErrors *pTGraphErrors_Variable_2 = new TGraphErrors(4,jetEnergy,Variable_2_JER,jetEnergyError,Variable_2_JERError);

    pTGraphErrors_Variable_2->SetLineColor(kBlack);
    pTGraphErrors_Variable_2->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_2->SetMarkerStyle(1);
    pTGraphErrors_Variable_2->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_2, "1 GeV", "lp");

    TGraphErrors *pTGraphErrors_Variable_3 = new TGraphErrors(4,jetEnergy,Variable_3_JER,jetEnergyError,Variable_3_JERError);

    pTGraphErrors_Variable_3->SetLineColor(kMagenta);
    pTGraphErrors_Variable_3->SetMarkerColor(kMagenta);
    pTGraphErrors_Variable_3->SetMarkerStyle(1);
//    pTGraphErrors_Variable_3->Draw("lp,same");

//    pLegend->AddEntry(pTGraphErrors_Variable_3, "2 GeV", "lp");

    TGraphErrors *pTGraphErrors_Variable_4 = new TGraphErrors(4,jetEnergy,Variable_4_JER,jetEnergyError,Variable_4_JERError);

    pTGraphErrors_Variable_4->SetLineColor(kMagenta);
    pTGraphErrors_Variable_4->SetMarkerColor(kMagenta);
    pTGraphErrors_Variable_4->SetMarkerStyle(1);
    pTGraphErrors_Variable_4->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_4, "5 GeV", "lp");

    TGraphErrors *pTGraphErrors_Variable_5 = new TGraphErrors(4,jetEnergy,Variable_5_JER,jetEnergyError,Variable_5_JERError);

    pTGraphErrors_Variable_5->SetLineColor(kRed);
    pTGraphErrors_Variable_5->SetMarkerColor(kRed);
    pTGraphErrors_Variable_5->SetMarkerStyle(1);
    pTGraphErrors_Variable_5->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_5, "10GeV", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_HCalCellTruncation.pdf");
}
