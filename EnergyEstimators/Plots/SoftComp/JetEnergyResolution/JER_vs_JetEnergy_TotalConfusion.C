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

    float Variable_TotalConfusion_NoECorr_JER[4] = {2.69772784445,2.34325024647,2.45429053439,2.6377075478};

    float Variable_TotalConfusion_SoftComp_JER[4] = {2.19631656252,1.9443801268,2.20684623443,2.41915933041};

    float Variable_TotalConfusion_CellTruncation_JER[4] = {2.15987004005,1.93450152094,2.2128883245,2.44583845705};

    float Variable_TotalConfusion_JER[4] = {2.24087942112,2.06228047704,2.35436888042,2.59412288953};

    float Variable_TotalConfusion_NoECorr_JERError[4] = {0.0661845164288,0.0502052734598,0.0465925139666,0.0481067635885};

    float Variable_TotalConfusion_SoftComp_JERError[4] = {0.0588191312768,0.0429199398224,0.0406104898073,0.0420881244662};

    float Variable_TotalConfusion_CellTruncation_JERError[4] = {0.0596000757346,0.0459246378909,0.0429552070939,0.0525734765383};

    float Variable_TotalConfusion_JERError[4] = {0.061602971179,0.0481443722615,0.0458211685206,0.0469560738166};

    TLegend *pLegend = new TLegend(0.2, 0.6, 1.0, 0.9);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_TotalConfusion_NoECorr = new TGraphErrors(4,jetEnergy,Variable_TotalConfusion_NoECorr_JER,jetEnergyError,Variable_TotalConfusion_NoECorr_JERError);

    pTGraphErrors_Variable_TotalConfusion_NoECorr->SetLineColor(kBlack);
    pTGraphErrors_Variable_TotalConfusion_NoECorr->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_TotalConfusion_NoECorr->SetMarkerStyle(1);
    pTGraphErrors_Variable_TotalConfusion_NoECorr->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_TotalConfusion_NoECorr, "#splitline{No Energy}{Corrections}", "lp");

    TGraphErrors *pTGraphErrors_Variable_TotalConfusion_SoftComp = new TGraphErrors(4,jetEnergy,Variable_TotalConfusion_SoftComp_JER,jetEnergyError,Variable_TotalConfusion_SoftComp_JERError);

    pTGraphErrors_Variable_TotalConfusion_SoftComp->SetLineColor(kBlue);
    pTGraphErrors_Variable_TotalConfusion_SoftComp->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_TotalConfusion_SoftComp->SetMarkerStyle(1);
    pTGraphErrors_Variable_TotalConfusion_SoftComp->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_TotalConfusion_SoftComp, "#splitline{Software}{Compensation}", "lp");

    TGraphErrors *pTGraphErrors_Variable_TotalConfusion_CellTruncation = new TGraphErrors(4,jetEnergy,Variable_TotalConfusion_CellTruncation_JER,jetEnergyError,Variable_TotalConfusion_CellTruncation_JERError);

    pTGraphErrors_Variable_TotalConfusion_CellTruncation->SetLineColor(kMagenta);
    pTGraphErrors_Variable_TotalConfusion_CellTruncation->SetMarkerColor(kMagenta);
    pTGraphErrors_Variable_TotalConfusion_CellTruncation->SetMarkerStyle(1);
    pTGraphErrors_Variable_TotalConfusion_CellTruncation->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_TotalConfusion_CellTruncation, "#splitline{Legacy}{Corrections}", "lp");

    TGraphErrors *pTGraphErrors_Variable_TotalConfusion = new TGraphErrors(4,jetEnergy,Variable_TotalConfusion_JER,jetEnergyError,Variable_TotalConfusion_JERError);

    pTGraphErrors_Variable_TotalConfusion->SetLineColor(kRed);
    pTGraphErrors_Variable_TotalConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Variable_TotalConfusion->SetMarkerStyle(1);
    pTGraphErrors_Variable_TotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_TotalConfusion, "#splitline{Legacy Corrections,}{w/o Truncation}", "lp");

    pLegend->SetFillStyle(0);
    pLegend->SetNColumns(2);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_TotalConfusion.pdf");
}
