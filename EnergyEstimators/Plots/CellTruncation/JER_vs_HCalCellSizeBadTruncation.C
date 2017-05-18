{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->SetTopMargin(0.05);
    pCanvasEj->SetRightMargin(0.05);
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,0,110,12000,2.5,5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->GetYaxis()->SetDecimals();
    pAxesEj->GetYaxis()->SetTitleSize(0.05);
    pAxesEj->GetYaxis()->SetLabelSize(0.05);
    pAxesEj->GetXaxis()->SetTitle("HCal Cell Size [mm]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetXaxis()->SetDecimals();
    pAxesEj->GetXaxis()->SetTitleSize(0.05);
    pAxesEj->GetXaxis()->SetLabelSize(0.05);
    pAxesEj->Draw();

    float xAxisVairable[6] = {10,20,30,40,50,100};

    float xAxisVairableError[6] = {0,0,0,0,0,0};

    float Jet_Energy_91GeV_JER[6] = {3.84864,3.62919,3.6469,3.61683,3.67146,3.78601};

    float Jet_Energy_200GeV_JER[6] = {2.87299,2.88299,2.88127,2.94498,2.97239,3.25349};

    float Jet_Energy_360GeV_JER[6] = {2.78074,2.84217,2.84624,2.98444,3.13609,3.75762};

    float Jet_Energy_500GeV_JER[6] = {2.81143,2.85225,2.97436,3.18899,3.33364,4.39516};

    float Jet_Energy_91GeV_JERError[6] = {0.0497022,0.0466394,0.0464093,0.0464805,0.0471826,0.0486546};

    float Jet_Energy_200GeV_JERError[6] = {0.0368242,0.0369523,0.0368969,0.0377469,0.0382779,0.0417011};

    float Jet_Energy_360GeV_JERError[6] = {0.0354184,0.0362008,0.0363619,0.038013,0.0403491,0.047861};

    float Jet_Energy_500GeV_JERError[6] = {0.0359231,0.0364447,0.0453691,0.0407474,0.0425957,0.0561593};

    TLegend *pLegend = new TLegend(0.15, 0.7, 0.6, 0.9);
    pLegend->SetNColumns(2);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Jet_Energy_91 = new TGraphErrors(6,xAxisVairable,Jet_Energy_91GeV_JER,xAxisVairableError,Jet_Energy_91GeV_JERError);

    pTGraphErrors_Jet_Energy_91->SetLineColor(4);
    pTGraphErrors_Jet_Energy_91->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_91->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_91, "45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_200 = new TGraphErrors(6,xAxisVairable,Jet_Energy_200GeV_JER,xAxisVairableError,Jet_Energy_200GeV_JERError);

    pTGraphErrors_Jet_Energy_200->SetLineColor(2);
    pTGraphErrors_Jet_Energy_200->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_200->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_200, "100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_360 = new TGraphErrors(6,xAxisVairable,Jet_Energy_360GeV_JER,xAxisVairableError,Jet_Energy_360GeV_JERError);

    pTGraphErrors_Jet_Energy_360->SetLineColor(6);
    pTGraphErrors_Jet_Energy_360->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_360->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_360, "180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_500 = new TGraphErrors(6,xAxisVairable,Jet_Energy_500GeV_JER,xAxisVairableError,Jet_Energy_500GeV_JERError);

    pTGraphErrors_Jet_Energy_500->SetLineColor(1);
    pTGraphErrors_Jet_Energy_500->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_500->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_500, "250 GeV Jets", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_HCalCellSizeBadTruncation.pdf");
}
