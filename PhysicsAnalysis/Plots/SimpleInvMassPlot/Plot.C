void Plot()
{
    TString name1 = "/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_kt_0p70_AnalysisTag18.root";
    TString name2 = "/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_ee_kt_0p70_AnalysisTag18.root";
    TString name3 = "/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_cam_0p70_AnalysisTag18.root";

    TH1F *pTH1F1 = new TH1F("InvarinatMassesBosonsKt", "InvariantMassesBosons", 250, 0, 500);
    TH1F *pTH1F2 = new TH1F("InvarinatMassesBosonsEEKt", "InvariantMassesBosons", 250, 0, 500);
    TH1F *pTH1F3 = new TH1F("InvarinatMassesBosonsCam", "InvariantMassesBosons", 250, 0, 500);

    pTH1F1->GetXaxis()->SetTitle("Invariant Masses of Reconstructed Bosons [GeV]");
    pTH1F1->GetYaxis()->SetTitle("Entries");

    GetPlot(name1, pTH1F1);  
    GetPlot(name2, pTH1F2);  
    GetPlot(name3, pTH1F3);  

    TLegend *pTLegend = new TLegend(0.45, 0.65, 0.95, 0.85);
    pTH1F1->SetFillStyle(3004);
    pTH1F1->SetFillColor(2);
    pTH1F1->SetLineColor(2);
    pTH1F2->SetFillStyle(3005);
    pTH1F2->SetFillColor(418);
    pTH1F2->SetLineColor(418);
    pTH1F3->SetFillStyle(3006);
    pTH1F3->SetFillColor(4);
    pTH1F3->SetLineColor(4);

    pTLegend->AddEntry(pTH1F1,"Kt Algorithm","l");
    pTLegend->AddEntry(pTH1F2,"EE-Kt Algorithm","l");
    pTLegend->AddEntry(pTH1F3,"Cambridge-AAchen Algorithm","l");

    TCanvas *pTCanvas = new TCanvas("Canvas", "", 600, 600);
    pTH1F1->Draw("");
    pTH1F2->Draw("same");
    pTH1F3->Draw("same");
    pTLegend->Draw();
    pTCanvas->SaveAs("InvariantMassesAlgorithmVeto.png");
    pTCanvas->SaveAs("InvariantMassesAlgorithmVeto.pdf");
    pTCanvas->SaveAs("InvariantMassesAlgorithmVeto.C");
}

void GetPlot(TString name, TH1F &*pTH1F)
{
    TFile *pTFile = new TFile(name);
    TTree *pTTree = (TTree*)pTFile->Get("MVATree");

    Double_t invariantMassSynBoson1, invariantMassSynBoson2;

    pTTree->SetBranchAddress("InvariantMassSynBoson1", &invariantMassSynBoson1);
    pTTree->SetBranchAddress("InvariantMassSynBoson2", &invariantMassSynBoson2);

    unsigned int nEntries = 100000; //pTTree->GetEntries();
    for (unsigned int i = 0; i < nEntries; i++)
    {
        pTTree->GetEntry(i);
        pTH1F->Fill(invariantMassSynBoson1);
        pTH1F->Fill(invariantMassSynBoson2);
    }

//    TCanvas *pTCanvas = new TCanvas("Canvas", "", 600, 600);
//    pTCanvas->Divide(3,2);
//    pTH1F->Draw();
//    pTCanvas->SaveAs("TestPlot1.png");

/*
    pTCanvas->cd(1);

    pTCanvas->cd(2);
    pTGraph2D_CTSZJets->GetHistogram()->SetMaximum(100);
    pTGraph2D_CTSZJets->Draw("CONT1");

    pTCanvas->cd(3);
    pTGraph2D_CTSWBosons->GetHistogram()->SetMaximum(100);
    pTGraph2D_CTSWBosons->Draw("CONT1");

    pTCanvas->cd(4);
    pTGraph2D_CTSZBosons->GetHistogram()->SetMaximum(100);
    pTGraph2D_CTSZBosons->Draw("CONT1");

    pTCanvas->cd(5);
    pTGraph2D_CTSWJets_vs_CTSWBosons->GetHistogram()->SetMaximum(100);
    pTGraph2D_CTSWJets_vs_CTSWBosons->Draw("CONT1");

    pTCanvas->cd(6);
    pTGraph2D_CTSZJets_vs_CTSZBosons->GetHistogram()->SetMaximum(100);
    pTGraph2D_CTSZJets_vs_CTSZBosons->Draw("CONT1");
*/

/*
    pTCanvas->cd(2);
    pTGraph2D->Draw("PCOL");
    pTGraph2D->GetHistogram()->SetMinimum(0);
    pTGraph2D->GetHistogram()->SetMaximum(100);
//    pTGraph2D->GetHistogram()->SetMaximum(100);
//    pTGraph2D->GetZaxis()->SetRangeUser(0, 15);


    Int_t colors[] = {0, 2, 418, 4, 1}; 
    gStyle->SetPalette((sizeof(colors)/sizeof(Int_t)), colors);
    Double_t levels[] = {0.0, 2.28, 4.61, 9.21, 1.79e308};
    pTGraph2D->GetHistogram()->SetContour((sizeof(levels)/sizeof(Double_t)), levels);
    pTGraph2D->GetZaxis()->SetRangeUser(0, 15);

    TLegend *pTLegend = new TLegend(0.15, 0.15, 0.55, 0.35);
    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(2);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(418);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(4);

    pTLegend->AddEntry(pTH1FDummy1,"68\% Confidence Contour","l");
    pTLegend->AddEntry(pTH1FDummy2,"90\% Confidence Contour","l");
    pTLegend->AddEntry(pTH1FDummy3,"99\% Confidence Contour","l");
    pTLegend->Draw();

    pTCanvas->cd(1);
    pTGraph2D->Draw("CONT1");

    pTCanvas->cd(3);
    pTGraph2D->Draw("SURF1");
    pTCanvas->cd(4);
    pTGraph2D->Draw("SURF4");

    pTGraph2D->GetXaxis()->SetTitle("#alpha_{4}");
    pTGraph2D->GetYaxis()->SetTitle("#alpha_{5}");
    TString plotName = name + ".png";
    pTCanvas->SaveAs(plotName);
*/
}
