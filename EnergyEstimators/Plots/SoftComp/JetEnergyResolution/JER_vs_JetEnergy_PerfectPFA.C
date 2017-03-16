{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->SetLeftMargin(0.15);

    pCanvasEj->SetBottomMargin(0.15);

    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",300,0,300,650,1.5,3.5);
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

    float Variable_PerfectPFA_NoECorr_JER[4] = {3.14413,2.22257,1.90753,1.90178};

    float Variable_PerfectPFA_SoftComp_JER[4] = {2.87574,1.93037,1.6178,1.58271};

    float Variable_PerfectPFA_CellTruncation_JER[4] = {2.93851,2.13528,1.79003,1.69254};

    float Variable_PerfectPFA_JER[4] = {3.03415,2.22278,1.91325,1.84266};

    float Variable_PerfectPFA_NoECorr_JERError[4] = {0.0400112,0.0284618,0.0243695,0.0242862};

    float Variable_PerfectPFA_SoftComp_JERError[4] = {0.0365958,0.0247199,0.0206681,0.0202116};

    float Variable_PerfectPFA_CellTruncation_JERError[4] = {0.0373946,0.0273439,0.0228684,0.0241841};

    float Variable_PerfectPFA_JERError[4] = {0.0386117,0.0284644,0.0244426,0.0235312};

    TLegend *pLegend = new TLegend(0.4, 0.6, 0.9, 0.9);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_PerfectPFA_NoECorr = new TGraphErrors(4,jetEnergy,Variable_PerfectPFA_NoECorr_JER,jetEnergyError,Variable_PerfectPFA_NoECorr_JERError);

    pTGraphErrors_Variable_PerfectPFA_NoECorr->SetLineColor(kBlack);
    pTGraphErrors_Variable_PerfectPFA_NoECorr->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_PerfectPFA_NoECorr->SetMarkerStyle(1);
    pTGraphErrors_Variable_PerfectPFA_NoECorr->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_PerfectPFA_NoECorr, "No Energy Corrections", "lp");

    TGraphErrors *pTGraphErrors_Variable_PerfectPFA_SoftComp = new TGraphErrors(4,jetEnergy,Variable_PerfectPFA_SoftComp_JER,jetEnergyError,Variable_PerfectPFA_SoftComp_JERError);

    pTGraphErrors_Variable_PerfectPFA_SoftComp->SetLineColor(kBlue);
    pTGraphErrors_Variable_PerfectPFA_SoftComp->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_PerfectPFA_SoftComp->SetMarkerStyle(1);
    pTGraphErrors_Variable_PerfectPFA_SoftComp->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_PerfectPFA_SoftComp, "Software Compensation", "lp");

    TGraphErrors *pTGraphErrors_Variable_PerfectPFA_CellTruncation = new TGraphErrors(4,jetEnergy,Variable_PerfectPFA_CellTruncation_JER,jetEnergyError,Variable_PerfectPFA_CellTruncation_JERError);

    pTGraphErrors_Variable_PerfectPFA_CellTruncation->SetLineColor(kMagenta);
    pTGraphErrors_Variable_PerfectPFA_CellTruncation->SetMarkerColor(kMagenta);
    pTGraphErrors_Variable_PerfectPFA_CellTruncation->SetMarkerStyle(1);
    pTGraphErrors_Variable_PerfectPFA_CellTruncation->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_PerfectPFA_CellTruncation, "Legacy Corrections", "lp");

    TGraphErrors *pTGraphErrors_Variable_PerfectPFA = new TGraphErrors(4,jetEnergy,Variable_PerfectPFA_JER,jetEnergyError,Variable_PerfectPFA_JERError);

    pTGraphErrors_Variable_PerfectPFA->SetLineColor(kRed);
    pTGraphErrors_Variable_PerfectPFA->SetMarkerColor(kRed);
    pTGraphErrors_Variable_PerfectPFA->SetMarkerStyle(1);
    pTGraphErrors_Variable_PerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_PerfectPFA, "#splitline{Legacy Corrections,}{w/o Cell Truncation}", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_PerfectPFA.pdf");
}
