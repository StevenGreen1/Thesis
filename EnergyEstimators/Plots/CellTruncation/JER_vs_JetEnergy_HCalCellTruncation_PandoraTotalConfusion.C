{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();
    pCanvasEj->SetBottomMargin(0.15);
    pCanvasEj->SetLeftMargin(0.15);
    TH2F *pAxesEj = new TH2F("axesEj","",300,0,300,650,0,4.5);
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

    float Variable_1_JER[4] = {2.1350176741,1.96311277638,2.39729654236,2.80578427793};

    float Variable_2_JER[4] = {2.15987004005,1.93450152094,2.2128883245,2.44583845705};

    float Variable_3_JER[4] = {2.22549581217,1.98464479767,2.19071364375,2.41948092956};

    float Variable_4_JER[4] = {2.23843508532,2.05034433564,2.30271790598,2.48380954632};

    float Variable_5_JER[4] = {2.24974493361,2.05819861099,2.36243284942,2.57595503866};

    float Variable_1_JERError[4] = {0.058154585092,0.0449850489206,0.0439910821099,0.0472544156464};

    float Variable_2_JERError[4] = {0.0596000757346,0.0459246378909,0.0429552070939,0.0525734765383};

    float Variable_3_JERError[4] = {0.0612255607124,0.0469774327586,0.0429682597336,0.0438174163271};

    float Variable_4_JERError[4] = {0.0616399198157,0.0480576517302,0.0451931960293,0.0455415649364};

    float Variable_5_JERError[4] = {0.061573132245,0.0480814527505,0.0458283772132,0.0467633446273};

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
    pTGraphErrors_Variable_3->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_3, "2 GeV", "lp");

    TGraphErrors *pTGraphErrors_Variable_4 = new TGraphErrors(4,jetEnergy,Variable_4_JER,jetEnergyError,Variable_4_JERError);

    pTGraphErrors_Variable_4->SetLineColor(kGreen+2);
    pTGraphErrors_Variable_4->SetMarkerColor(kGreen+2);
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
    pCanvasEj->SaveAs("JER_vs_JetEnergy_HCalCellTruncation_PandoraTotalConfusion.pdf");
}
