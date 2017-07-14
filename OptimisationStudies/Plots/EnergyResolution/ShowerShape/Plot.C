void Plot()
{
//    TChain *pTChainSteel = GetChain("Steel", "50");
    TH1F *pTH1FSteel = FillHistogram("AverageTransverseDistance", "Steel", "50");
    TH1F *pTH1FSteel_Long = FillHistogram("AverageLongitudinalDistance", "Steel", "50");
    TH1F *pTH1FSteel_EWTransverse = FillHistogram("AverageEnergyWeightedTransverseDistance", "Steel", "50");
    TH1F *pTH1FSteel_EWLong = FillHistogram("AverageEnergyWeightedLongitudinalDistance", "Steel", "50");

//    TChain *pTChainTungsten = GetChain("Tungsten", "50");
    TH1F *pTH1FTungsten = FillHistogram("AverageTransverseDistance", "Tungsten", "50");
    TH1F *pTH1FTungsten_Long = FillHistogram("AverageLongitudinalDistance", "Tungsten", "50");
    TH1F *pTH1FTungsten_EWTransverse = FillHistogram("AverageEnergyWeightedTransverseDistance", "Tungsten", "50");
    TH1F *pTH1FTungsten_EWLong = FillHistogram("AverageEnergyWeightedLongitudinalDistance", "Tungsten", "50");

// AverageTransverseDistance, AverageEnergyWeightedLongitudinalDistance, AverageEnergyWeightedTransverseDistance, AverageLongitudinalDistance, 

    TCanvas *pTCanvas = new TCanvas();
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetBottomMargin(0.15);

    TLegend *pTLegend = new TLegend(0.4,0.74,0.7,0.89);
    pTLegend->SetTextSize(0.05);
    pTLegend->AddEntry(pTH1FSteel,"Steel, QGSP_BERT_HP","l");
    pTLegend->AddEntry(pTH1FTungsten,"Tungsten, QGSP_BERT_HP","l");
    pTH1FSteel->SetTitle("");
    pTH1FSteel->GetXaxis()->SetTitle("Average Transverse Width of Hadronic Shower [mm]");
    pTH1FSteel->GetXaxis()->SetTitleSize(0.05);
    pTH1FSteel->GetXaxis()->SetLabelSize(0.05);
    pTH1FSteel->GetYaxis()->SetRangeUser(0,2200);
    pTH1FSteel->GetYaxis()->SetTitle("Entries");
    pTH1FSteel->GetYaxis()->SetTitleSize(0.05);
    pTH1FSteel->GetYaxis()->SetLabelSize(0.05);
    pTH1FSteel->SetLineColor(kBlue);
    pTH1FSteel->Draw();
    pTH1FTungsten->SetLineColor(kRed);
    pTH1FTungsten->Draw("same");
    pTLegend->Draw();
    pTCanvas->SaveAs("Profile.C");
    pTCanvas->SaveAs("Profile.pdf");

/*
    TCanvas *pTCanvas = new TCanvas();
    pTCanvas->Divide(2,2);
    TLegend *pTLegend = new TLegend(0.2,0.6,0.5,0.8);
    pTLegend->AddEntry(pTH1FSteel,"Steel HCal","l");
    pTLegend->AddEntry(pTH1FTungsten,"Tungsten HCal","l");

    pTCanvas->cd(1);
//    gPad-> SetLogy();
    pTH1FSteel->SetLineColor(kBlack);
    pTH1FSteel->Draw();
    pTH1FTungsten->SetLineColor(kBlack);
    pTH1FTungsten->SetLineStyle(2);
    pTH1FTungsten->Draw("same");
    pTLegend->Draw();

    pTCanvas->cd(2);
//    gPad-> SetLogy();
    pTH1FSteel_Long->SetLineColor(kBlue);
    pTH1FSteel_Long->Draw();
    pTH1FTungsten_Long->SetLineColor(kBlue);
    pTH1FTungsten_Long->SetLineStyle(2);
    pTH1FTungsten_Long->Draw("same");

    pTCanvas->cd(3);
//    gPad-> SetLogy();
    pTH1FSteel_EWTransverse->SetLineColor(kOrange);
    pTH1FSteel_EWTransverse->Draw();
    pTH1FTungsten_EWTransverse->SetLineColor(kOrange);
    pTH1FTungsten_EWTransverse->SetLineStyle(2);
    pTH1FTungsten_EWTransverse->Draw("same");

    pTCanvas->cd(4);
//    gPad-> SetLogy();
    pTH1FSteel_EWLong->SetLineColor(kGreen+2);
    pTH1FSteel_EWLong->Draw();
    pTH1FTungsten_EWLong->SetLineColor(kGreen+2);
    pTH1FTungsten_EWLong->SetLineStyle(2);
    pTH1FTungsten_EWLong->Draw("same");

    pTCanvas->SaveAs("Decomposition.C");
    pTCanvas->SaveAs("Decomposition.pdf");
*/
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TChain *GetChain(TString detNumber, TString energy)
{
    TChain *pTChain = new TChain("ProfileProcessorTree");
    pTChain->Add("PfoProfileAnalysis" + detNumber + "_" + energy + "GeV.root");
    return pTChain;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TH1F *FillHistogram(TString variable, TString detNumber, TString energy)
{
    TChain *pTChain = GetChain(detNumber, energy);
    TString description = variable + "_Detector_Model_" + detNumber + "_Kaon_Energy" + energy;
//    TH1F *pTH1F = new TH1F(description, description, 100, 0, energy.Atof()*2);
    TH1F *pTH1F = new TH1F(description, variable, 20, 0, 250);

    Double_t variableValue(0.f);
    pTChain->SetBranchAddress(variable, &variableValue);

    for (unsigned int entry = 0; entry < pTChain->GetEntries(); entry++)
    {
        pTChain->GetEntry(entry);
        pTH1F->Fill(variableValue);
    }
    delete pTChain;
    return pTH1F;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


