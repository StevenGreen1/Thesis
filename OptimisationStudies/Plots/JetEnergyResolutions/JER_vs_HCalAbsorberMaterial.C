{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->cd();
    pCanvasEj->SetBottomMargin(0.15);
    pCanvasEj->SetLeftMargin(0.125);

    TH2F *pAxesEj = new TH2F("axesEj","",4,0.5,4.5,12000,2.5,4.5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetXaxis()->SetTitle("HCal Absorber Material");
    pAxesEj->GetXaxis()->SetTitleOffset(1.5);
//    pAxesEj->Draw();

    const Int_t n = 4;
    Int_t i;
    char *ABC[n] = {"#splitline{Steel}{QGSP_BERT}","#splitline{Steel}{QGSP_BERT_HP}","#splitline{Tungsten}{QGSP_BERT}","#splitline{Tungsten}{QGSP_BERT_HP}"};
    for (i=1;i<=n;i++) pAxesEj->GetXaxis()->SetBinLabel(i,ABC[i-1]);
    pAxesEj->Draw();

    float xAxisVairable[4] = {1,2,3,4};

    float xAxisVairableError[4] = {0,0,0,0};

    float Jet_Energy_91GeV_JER[4] = {3.67,3.67166,3.66999,3.68914};

    float Jet_Energy_200GeV_JER[4] = {2.85823,2.91541,3.12068,3.00416};

    float Jet_Energy_360GeV_JER[4] = {2.87901,2.86234,3.35563,3.38325};

    float Jet_Energy_500GeV_JER[4] = {3.05794,3.02512,3.75508,3.79916};

    float Jet_Energy_91GeV_JERError[4] = {0.0471638,0.0497581,0.0471637,0.0474098};

    float Jet_Energy_200GeV_JERError[4] = {0.0366349,0.0373679,0.0421138,0.0406004};

    float Jet_Energy_360GeV_JERError[4] = {0.0366701,0.0364577,0.0427408,0.0430926};

    float Jet_Energy_500GeV_JERError[4] = {0.039073,0.0386536,0.0479807,0.0485439};

    TLegend *pLegend = new TLegend(0.3, 0.75, 0.9, 0.9);
    pLegend->SetNColumns(2);
    TGraphErrors *pTGraphErrors_Jet_Energy_91 = new TGraphErrors(4,xAxisVairable,Jet_Energy_91GeV_JER,xAxisVairableError,Jet_Energy_91GeV_JERError);

    pTGraphErrors_Jet_Energy_91->SetLineColor(4);
    pTGraphErrors_Jet_Energy_91->SetMarkerColor(4);
    pTGraphErrors_Jet_Energy_91->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_91, "45 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_200 = new TGraphErrors(4,xAxisVairable,Jet_Energy_200GeV_JER,xAxisVairableError,Jet_Energy_200GeV_JERError);

    pTGraphErrors_Jet_Energy_200->SetLineColor(2);
    pTGraphErrors_Jet_Energy_200->SetMarkerColor(2);
    pTGraphErrors_Jet_Energy_200->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_200, "100 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_360 = new TGraphErrors(4,xAxisVairable,Jet_Energy_360GeV_JER,xAxisVairableError,Jet_Energy_360GeV_JERError);

    pTGraphErrors_Jet_Energy_360->SetLineColor(6);
    pTGraphErrors_Jet_Energy_360->SetMarkerColor(6);
    pTGraphErrors_Jet_Energy_360->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_360, "180 GeV Jets", "lp");

    TGraphErrors *pTGraphErrors_Jet_Energy_500 = new TGraphErrors(4,xAxisVairable,Jet_Energy_500GeV_JER,xAxisVairableError,Jet_Energy_500GeV_JERError);

    pTGraphErrors_Jet_Energy_500->SetLineColor(1);
    pTGraphErrors_Jet_Energy_500->SetMarkerColor(1);
    pTGraphErrors_Jet_Energy_500->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Jet_Energy_500, "250 GeV Jets", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_HCalAbsorberMaterial.pdf");
}
