{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->SetTopMargin(0.05);
    pCanvasEj->SetRightMargin(0.05);
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",1200,0.0,0.3,12000,2.5,5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->GetYaxis()->SetDecimals();
    pAxesEj->GetYaxis()->SetTitleSize(0.05);
    pAxesEj->GetYaxis()->SetLabelSize(0.05);
    pAxesEj->GetXaxis()->SetTitle("#frac{HCal Active Layer Thickness}{HCal Absorber Layer Thickness}");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetXaxis()->SetDecimals();
    pAxesEj->GetXaxis()->SetTitleSize(0.05);
    pAxesEj->GetXaxis()->SetLabelSize(0.05);
    pAxesEj->Draw();

    float xAxisVairable[5] = {0.05,0.1,0.15,0.2,0.25};

    float xAxisVairableError[5] = {0,0,0,0,0};

    float Jet_Energy_91GeV_JER[5] = {3.66339,3.60704,3.6469,3.68806,3.63278};

    float Jet_Energy_200GeV_JER[5] = {2.84998,2.9255,2.88127,2.88499,2.89879};

    float Jet_Energy_360GeV_JER[5] = {2.92141,2.90439,2.84624,2.85322,2.84894};

    float Jet_Energy_500GeV_JER[5] = {3.12931,3.02298,2.97436,2.94966,2.99758};

    float Jet_Energy_91GeV_JERError[5] = {0.0470788,0.0463548,0.0464093,0.0473959,0.0466856};

    float Jet_Energy_200GeV_JERError[5] = {0.0365292,0.0374972,0.0368969,0.036978,0.0371548};

    float Jet_Energy_360GeV_JERError[5] = {0.0372101,0.0369933,0.0363619,0.0363416,0.036287};

    float Jet_Energy_500GeV_JERError[5] = {0.0399849,0.0386262,0.0453691,0.0396687,0.0383017};

    TLegend *pLegend = new TLegend(0.2, 0.75, 0.85, 0.9);
    pLegend->SetNColumns(2);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Jet_Energy_91 = new TGraphErrors(5,xAxisVairable,Jet_Energy_91GeV_JER,xAxisVairableError,Jet_Energy_91GeV_JERError);

    pTGraphErrors_Jet_Energy_91->SetLineColor(4);
    pTGraphErrors_Jet_Energy_91->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_91->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_91, "45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_200 = new TGraphErrors(5,xAxisVairable,Jet_Energy_200GeV_JER,xAxisVairableError,Jet_Energy_200GeV_JERError);

    pTGraphErrors_Jet_Energy_200->SetLineColor(2);
    pTGraphErrors_Jet_Energy_200->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_200->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_200, "100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_360 = new TGraphErrors(5,xAxisVairable,Jet_Energy_360GeV_JER,xAxisVairableError,Jet_Energy_360GeV_JERError);

    pTGraphErrors_Jet_Energy_360->SetLineColor(6);
    pTGraphErrors_Jet_Energy_360->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_360->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_360, "180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_500 = new TGraphErrors(5,xAxisVairable,Jet_Energy_500GeV_JER,xAxisVairableError,Jet_Energy_500GeV_JERError);

    pTGraphErrors_Jet_Energy_500->SetLineColor(1);
    pTGraphErrors_Jet_Energy_500->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_500->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_500, "250 GeV Jets", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_SamplingFractionInTheHCal.pdf");
}
