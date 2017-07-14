void Plot2()
{
//    TH1F *pTH1FSteel = GetHistogram("CaloHitTransverseDistances", "Steel", "50");
    TH1F *pTH1FSteel = GetHistogram("EnergyWeightedCaloHitTransverseDistances", "Steel", "50");

//    TH1F *pTH1FTungsten = GetHistogram("CaloHitTransverseDistances", "Tungsten", "50");
    TH1F *pTH1FTungsten = GetHistogram("EnergyWeightedCaloHitTransverseDistances", "Tungsten", "50");

// AverageTransverseDistance, AverageEnergyWeightedLongitudinalDistance, AverageEnergyWeightedTransverseDistance, AverageLongitudinalDistance, 

    TCanvas *pTCanvas = new TCanvas();
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLogy();

    TLegend *pTLegend = new TLegend(0.4,0.74,0.7,0.89);
    pTLegend->SetTextSize(0.05);
    pTLegend->AddEntry(pTH1FSteel,"Steel, QGSP_BERT_HP","l");
    pTLegend->AddEntry(pTH1FTungsten,"Tungsten, QGSP_BERT_HP","l");
    pTH1FSteel->SetTitle("");
    pTH1FSteel->GetXaxis()->SetRangeUser(0,1000);
    pTH1FSteel->GetXaxis()->SetTitle("Transverse Distance [mm]");
    pTH1FSteel->GetXaxis()->SetTitleSize(0.05);
    pTH1FSteel->GetXaxis()->SetLabelSize(0.05);
//    pTH1FSteel->GetYaxis()->SetRangeUser(0,2200);
    pTH1FSteel->GetYaxis()->SetTitle("Entries");
    pTH1FSteel->GetYaxis()->SetTitleSize(0.05);
    pTH1FSteel->GetYaxis()->SetLabelSize(0.05);
    pTH1FSteel->SetLineColor(kBlue);
    pTH1FSteel->Draw();
    pTH1FTungsten->SetLineColor(kRed);
    pTH1FTungsten->Draw("same");
    pTLegend->Draw();
    pTCanvas->SaveAs("Profile2.C");
    pTCanvas->SaveAs("Profile2.pdf");
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TH1F *GetHistogram(TString name, TString detNumber, TString energy)
{
    TFile *pTFile = new TFile("PfoProfileAnalysis" + detNumber + "_" + energy + "GeV.root");
    TH1F *pTH1F = (TH1F*)pTFile->Get(name);
    pTH1F->Rebin(20);
    Double_t norm = 1;
    Double_t scale = norm/(pTH1F->Integral());
    pTH1F->Scale(scale);
    return pTH1F;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

