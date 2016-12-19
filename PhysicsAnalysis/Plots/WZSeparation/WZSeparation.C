void WZSeparation()
{
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_kt_0p50_AnalysisTag18.root","1400GeV_SPFOs_kt_0p50");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_kt_0p70_AnalysisTag18.root","1400GeV_SPFOs_kt_0p70");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_kt_0p90_AnalysisTag18.root","1400GeV_SPFOs_kt_0p90");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_kt_1p00_AnalysisTag18.root","1400GeV_SPFOs_kt_1p00");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_SPFOs_kt_1p10_AnalysisTag18.root","1400GeV_SPFOs_kt_1p10");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_TPFOs_kt_0p70_AnalysisTag18.root","1400GeV_TPFOs_kt_0p70");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_1400GeV_LPFOs_kt_0p70_AnalysisTag18.root","1400GeV_LPFOs_kt_0p70");

    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_SPFOs_kt_0p50_AnalysisTag18.root","3000GeV_SPFOs_kt_0p50");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_SPFOs_kt_0p70_AnalysisTag18.root","3000GeV_SPFOs_kt_0p70");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_SPFOs_kt_0p90_AnalysisTag18.root","3000GeV_SPFOs_kt_0p90");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_SPFOs_kt_1p00_AnalysisTag18.root","3000GeV_SPFOs_kt_1p00");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_SPFOs_kt_1p10_AnalysisTag18.root","3000GeV_SPFOs_kt_1p10");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_TPFOs_kt_0p70_AnalysisTag18.root","3000GeV_TPFOs_kt_0p70");
    Call("/r06/lc/sg568/PhysicsAnalysis/Analysis/RootFilesPostMVA/RootFiles_Multivariant_ee_nunuqqqq_3000GeV_LPFOs_kt_0p70_AnalysisTag18.root","3000GeV_LPFOs_kt_0p70");
}

void Call(TString rootFile, TString description)
{
    TChain *pTChain = new TChain("MVATree");
    pTChain->Add(rootFile);

    Double_t cheatedInvariantMass1(0.0);
    Double_t cheatedInvariantMass2(0.0);
    Double_t cheatedMCInvariantMass1(0.0);
    Double_t cheatedMCInvariantMass2(0.0);
    Double_t invariantMassWBoson1(0.0);
    Double_t invariantMassWBoson2(0.0);
    Double_t mcInvariantMassWBoson1(0.0);
    Double_t mcInvariantMassWBoson2(0.0);
    Double_t invariantMassZBoson1(0.0);
    Double_t invariantMassZBoson2(0.0);
    Double_t mcInvariantMassZBoson1(0.0);
    Double_t mcInvariantMassZBoson2(0.0);
    Double_t invariantMassSynBoson1(0.0);
    Double_t invariantMassSynBoson2(0.0);

    pTChain->SetBranchAddress("CheatedInvariantMass1", &cheatedInvariantMass1);
    pTChain->SetBranchAddress("CheatedInvariantMass2", &cheatedInvariantMass2);
    pTChain->SetBranchAddress("CheatedMCInvariantMass1", &cheatedMCInvariantMass1);
    pTChain->SetBranchAddress("CheatedMCInvariantMass2", &cheatedMCInvariantMass2);
    pTChain->SetBranchAddress("InvariantMassWBoson1", &invariantMassWBoson1);
    pTChain->SetBranchAddress("InvariantMassWBoson2", &invariantMassWBoson2);
    pTChain->SetBranchAddress("MCInvariantMassWBoson1", &mcInvariantMassWBoson1);
    pTChain->SetBranchAddress("MCInvariantMassWBoson2", &mcInvariantMassWBoson2);
    pTChain->SetBranchAddress("InvariantMassZBoson1", &invariantMassZBoson1);
    pTChain->SetBranchAddress("InvariantMassZBoson2", &invariantMassZBoson2);
    pTChain->SetBranchAddress("MCInvariantMassZBoson1", &mcInvariantMassZBoson1);
    pTChain->SetBranchAddress("MCInvariantMassZBoson2", &mcInvariantMassZBoson2);

    pTChain->SetBranchAddress("InvariantMassSynBoson1", &invariantMassSynBoson1);
    pTChain->SetBranchAddress("InvariantMassSynBoson2", &invariantMassSynBoson2);

    int nBins(70);
    int low(50);
    int high(120);

    TH2F *pTH2F_W = new TH2F("W", "W", nBins, low, high, nBins, low, high);
    pTH2F_W->GetXaxis()->SetTitle("M_{W1}");
    pTH2F_W->GetYaxis()->SetTitle("M_{W2}");
    TH2F *pTH2F_Z = new TH2F("Z", "Z", nBins, low, high, nBins, low, high);
    pTH2F_Z->GetXaxis()->SetTitle("M_{Z1}");
    pTH2F_Z->GetYaxis()->SetTitle("M_{Z2}");
    TH2F *pTH2F = new TH2F("Frac", "Frac", nBins, low, high, nBins, low, high);
    TH1F *pTH1F_W = new TH1F("W1D", "W1D", nBins, low, high);
    pTH1F_W->GetXaxis()->SetTitle("M_{W}");
    pTH1F_W->GetYaxis()->SetTitle("Entries");
    pTH1F_W->SetLineColor(kRed);
    pTH1F_W->SetFillColor(kRed);
    pTH1F_W->SetFillStyle(3004);
    TH1F *pTH1F_Z = new TH1F("Z1D", "Z1D", nBins, low, high);
    pTH1F_Z->GetXaxis()->SetTitle("M_{Z}");
    pTH1F_Z->GetYaxis()->SetTitle("Entries");
    pTH1F_Z->SetLineColor(kBlue);
    pTH1F_Z->SetFillColor(kBlue);
    pTH1F_Z->SetFillStyle(3005);
    TH1F *pTH1F = new TH1F("All1D", "All1D", nBins, low, high);
    pTH1F->GetXaxis()->SetTitle("M_{Both}");
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->SetLineColor(kGreen+2);
    pTH1F->SetFillColor(kGreen+2);
    pTH1F->SetFillStyle(3006);

    TH2F *pTH2F_WRecoW = new TH2F("WRecoW", "WRecoW", nBins, low, high, nBins, low, high);
    pTH2F_WRecoW->GetXaxis()->SetTitle("M_{W1}");
    pTH2F_WRecoW->GetYaxis()->SetTitle("M_{W2}");
    TH2F *pTH2F_ZRecoW = new TH2F("ZRecoW", "ZRecoW", nBins, low, high, nBins, low, high);
    pTH2F_ZRecoW->GetXaxis()->SetTitle("M_{Z1}");
    pTH2F_ZRecoW->GetYaxis()->SetTitle("M_{Z2}");
    TH2F *pTH2FRecoW = new TH2F("FracRecoW", "Pair Jets So Reco Masses Closest To WW Peak", nBins, low, high, nBins, low, high);
    TH2F *pTH2F_WRecoZ = new TH2F("WRecoZ", "WRecoZ", nBins, low, high, nBins, low, high);
    pTH2F_WRecoZ->GetXaxis()->SetTitle("M_{W1}");
    pTH2F_WRecoZ->GetYaxis()->SetTitle("M_{W2}");
    TH2F *pTH2F_ZRecoZ = new TH2F("ZRecoZ", "ZRecoZ", nBins, low, high, nBins, low, high);
    pTH2F_ZRecoZ->GetXaxis()->SetTitle("M_{Z1}");
    pTH2F_ZRecoZ->GetYaxis()->SetTitle("M_{Z2}");
    TH2F *pTH2FRecoZ = new TH2F("FracRecoZ", "Pair Jets So Reco Masses Closest To ZZ Peak", nBins, low, high, nBins, low, high);
    TH2F *pTH2F_WRecoSyn = new TH2F("WRecoSyn", "WRecoSyn", nBins, low, high, nBins, low, high);
    pTH2F_WRecoSyn->GetXaxis()->SetTitle("M_{Syn1}");
    pTH2F_WRecoSyn->GetYaxis()->SetTitle("M_{Syn2}");
    TH2F *pTH2F_ZRecoSyn = new TH2F("ZRecoSyn", "ZRecoSyn", nBins, low, high, nBins, low, high);
    pTH2F_ZRecoSyn->GetXaxis()->SetTitle("M_{Syn1}");
    pTH2F_ZRecoSyn->GetYaxis()->SetTitle("M_{Syn2}");
    TH2F *pTH2FRecoSyn = new TH2F("FracRecoSyn", "Pair Jets So Reco Masses Closest To Each Other", nBins, low, high, nBins, low, high);
    pTH2FRecoSyn->GetXaxis()->SetTitle("M_{Syn1}");
    pTH2FRecoSyn->GetYaxis()->SetTitle("M_{Syn1}");

    for (unsigned int event = 0; event < pTChain->GetEntries(); event++)
    {
        pTChain->GetEntry(event);

        if (cheatedMCInvariantMass1 > 87 && cheatedMCInvariantMass2 > 87)
        {
            pTH2F_Z->Fill(cheatedInvariantMass1, cheatedInvariantMass2);
            pTH1F_Z->Fill(cheatedInvariantMass1);
            pTH1F_Z->Fill(cheatedInvariantMass2);
            pTH1F->Fill(cheatedInvariantMass1);
            pTH1F->Fill(cheatedInvariantMass2);
            pTH2F_ZRecoSyn->Fill(invariantMassSynBoson1, invariantMassSynBoson2);
        }

        else if (cheatedMCInvariantMass1 > 0.0 && cheatedMCInvariantMass2 > 0.0)
        {
            pTH2F_W->Fill(cheatedInvariantMass1, cheatedInvariantMass2);
            pTH1F_W->Fill(cheatedInvariantMass1);
            pTH1F_W->Fill(cheatedInvariantMass2);
            pTH1F->Fill(cheatedInvariantMass1);
            pTH1F->Fill(cheatedInvariantMass2);
            pTH2F_WRecoSyn->Fill(invariantMassSynBoson1, invariantMassSynBoson2);
        }

        if (mcInvariantMassWBoson1 > 88 && mcInvariantMassWBoson2 > 88)
        {
            pTH2F_ZRecoW->Fill(invariantMassWBoson1, invariantMassWBoson2);
        }
        else if (mcInvariantMassWBoson1 > 0.0 && mcInvariantMassWBoson2 > 0.0)
        {
            pTH2F_WRecoW->Fill(invariantMassWBoson1, invariantMassWBoson2);
        }

        if (mcInvariantMassZBoson1 > 88 && mcInvariantMassZBoson2 > 88)
        {
            pTH2F_ZRecoZ->Fill(invariantMassZBoson1, invariantMassZBoson2);
        }
        else if (mcInvariantMassZBoson1 > 0.0 && mcInvariantMassZBoson2 > 0.0)
        {
            pTH2F_WRecoZ->Fill(invariantMassZBoson1, invariantMassZBoson2);
        }
    }

    int nBinsX = pTH2F_W->GetXaxis()->GetNbins();
    int nBinsY = pTH2F_W->GetYaxis()->GetNbins();

    for (int xBin = 1; xBin < nBinsX; xBin++)
    {
        for (int yBin = 1; yBin < nBinsY; yBin++)
        {
            const int bin = pTH2F_W->GetBin(xBin,yBin);
            const double binContentW = pTH2F_W->GetBinContent(bin);
            const double binContentZ = pTH2F_Z->GetBinContent(bin);
            if (binContentZ > 0.0)
            {
                const double fracContent = binContentZ / (binContentW + binContentZ);
                pTH2F->SetBinContent(bin, fracContent);
            }
        }
    }

    int nBinsXRecoW = pTH2F_WRecoW->GetXaxis()->GetNbins();
    int nBinsYRecoW = pTH2F_WRecoW->GetYaxis()->GetNbins();

    for (int xBin = 1; xBin < nBinsX; xBin++)
    {
        for (int yBin = 1; yBin < nBinsY; yBin++)
        {
            const int bin = pTH2F_WRecoW->GetBin(xBin,yBin);
            const double binContentW = pTH2F_WRecoW->GetBinContent(bin);
            const double binContentZ = pTH2F_ZRecoW->GetBinContent(bin);
            if (binContentZ > 0.0)
            {
                const double fracContent = binContentZ / (binContentW + binContentZ);
                pTH2FRecoW->SetBinContent(bin, fracContent);
            }
        }
    }

    int nBinsXRecoZ = pTH2F_WRecoZ->GetXaxis()->GetNbins();
    int nBinsYRecoZ = pTH2F_WRecoZ->GetYaxis()->GetNbins();

    for (int xBin = 1; xBin < nBinsX; xBin++)
    {
        for (int yBin = 1; yBin < nBinsY; yBin++)
        {
            const int bin = pTH2F_WRecoZ->GetBin(xBin,yBin);
            const double binContentW = pTH2F_WRecoZ->GetBinContent(bin);
            const double binContentZ = pTH2F_ZRecoZ->GetBinContent(bin);
            if (binContentZ > 0.0)
            {
                const double fracContent = binContentZ / (binContentW + binContentZ);
                pTH2FRecoZ->SetBinContent(bin, fracContent);
            }
        }
    }

    int nBinsXRecoSyn = pTH2F_WRecoSyn->GetXaxis()->GetNbins();
    int nBinsYRecoSyn = pTH2F_WRecoSyn->GetYaxis()->GetNbins();

    for (int xBin = 1; xBin < nBinsX; xBin++)
    {
        for (int yBin = 1; yBin < nBinsY; yBin++)
        {
            const int bin = pTH2F_WRecoSyn->GetBin(xBin,yBin);
            const double binContentW = pTH2F_WRecoSyn->GetBinContent(bin);
            const double binContentZ = pTH2F_ZRecoSyn->GetBinContent(bin);
            if (binContentZ > 0.0)
            {
                const double fracContent = binContentZ / (binContentW + binContentZ);
                pTH2FRecoSyn->SetBinContent(bin, fracContent);
            }
        }
    }

    TLine *pTLine = new TLine(low,87,high,87);
    TLine *pTLine2 = new TLine(87,low,87,high);

    TCanvas *pTCanvas = new TCanvas("c1" + description, "c1" + description, 1500, 600);
    pTCanvas->Divide(3,1);
    pTCanvas->cd(1);
    pTH2F_WRecoSyn->Draw("COLZ");
    pTLine->Draw("same");
    pTLine2->Draw("same");
    pTCanvas->cd(2);
    pTH2F_ZRecoSyn->Draw("COLZ");
    pTLine->Draw("same");
    pTLine2->Draw("same");
    pTCanvas->cd(3);
    pTH2FRecoSyn->SetMaximum(1);
    pTH2FRecoSyn->Draw("COLZ");
    pTLine->Draw("same");
    pTLine2->Draw("same");
    pTCanvas->SaveAs("RawEventsPlotMassesRecoSyn" + description + ".C");
    pTCanvas->SaveAs("RawEventsPlotMassesRecoSyn" + description + ".pdf");

    TCanvas *pTCanvas2 = new TCanvas("c2" + description, "c2" + description, 500, 600);
    pTH2FRecoSyn->Draw("COLZ");
    TLine *pTLine = new TLine(low,87,high,87);
    TLine *pTLine2 = new TLine(87,low,87,high);
    pTLine->Draw("same");
    pTLine2->Draw("same");
    TPaveText *pTPaveText = new TPaveText(0.15,0.7,0.5,0.85,"NDC NB");
    pTPaveText->AddText("Z Axis = #frac{N_{ZZ}}{N_{WW}+N_{ZZ}}");
    pTPaveText->SetFillStyle(0);
    pTPaveText->Draw("");
    pTCanvas2->SaveAs("FractionalPlotMassesRecoSyn" + description + ".C");
    pTCanvas2->SaveAs("FractionalPlotMassesRecoSyn" + description + ".pdf");

    TCanvas *pTCanvas3 = new TCanvas("c3" + description, "c3" + description, 500, 600);
    pTH2FRecoSyn->SetMinimum(0.5);
    pTH2FRecoSyn->Draw("COLZ");
    pTLine->Draw("same");
    pTLine2->Draw("same");
    pTPaveText->Draw("");
    pTCanvas2->SaveAs("FractionalPlotMassesRecoSynCut" + description + ".C");
    pTCanvas2->SaveAs("FractionalPlotMassesRecoSynCut" + description + ".pdf");
}
