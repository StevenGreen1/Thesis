//================================================================

void CLICSampleComparison()
{
    TString name1 = "/r06/lc/sg568/PhysicsAnalysis/MarlinJobs/Detector_Model_clic_ild_cdr/Reconstruction_Variant_clic_ild_cdr_ggHadBkg/ee_nunuqqqq/1400GeV/AnalysisTag18/SPFOs_kt_0p90/DetModel_clic_ild_cdr_RecoVar_clic_ild_cdr_ggHadBkg_ee_nunuqqqq_1400GeV_GenN_*_Tag18SPFOs_kt_0p90.root";
    TString name2 = "/r06/lc/sg568/PhysicsAnalysis/MarlinJobs/Detector_Model_clic_ild_cdr/Reconstruction_Variant_clic_ild_cdr_ggHadBkg/ee_nunuqqqq/1400GeV/AnalysisTag18/SPFOs_kt_0p90/CLICSamples/ProdID_5527_ee_nunuqqqq_1400GeV_Tag18_*SPFOs_kt_0p90.root";
//    TString variable = "InvariantMassSystem";
    TString variable = "CosThetaMissing";

    TH1F *pTH1F_My = GetPlot(name1, variable);
    pTH1F_My->SetName(variable + "_My");
    pTH1F_My->SetTitle("");
    pTH1F_My->GetXaxis()->SetTitle("Cos(#theta_{Missing})");
    pTH1F_My->GetXaxis()->SetTitleSize(0.05);
    pTH1F_My->GetXaxis()->SetLabelSize(0.05);
    pTH1F_My->GetYaxis()->SetTitle("Entries");
    pTH1F_My->GetYaxis()->SetTitleSize(0.05);
    pTH1F_My->GetYaxis()->SetLabelSize(0.05);
    pTH1F_My->SetFillStyle(3004);
    pTH1F_My->SetFillColor(kRed);
    pTH1F_My->SetLineColor(kRed);

    TH1F *pTH1F_CLIC = GetPlot(name2, variable);
    pTH1F_CLIC->SetName(variable + "_CLIC");
    pTH1F_CLIC->SetTitle("");
    pTH1F_CLIC->SetFillStyle(3005);
    pTH1F_CLIC->SetFillColor(kBlue);
    pTH1F_CLIC->SetLineColor(kBlue);

    TLegend *pTLegend = new TLegend(0.7, 0.6, 0.9, 0.9);
    pTLegend->AddEntry(pTH1F_My, "Analysis Sample", "f");
    pTLegend->AddEntry(pTH1F_CLIC, "CLIC Offical Sample", "f");

    // Draw
    TCanvas *pTCanvas = new TCanvas("Canvas","Canvas", 600, 500);
    pTCanvas->SetTopMargin(0.05);
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->cd();
    pTH1F_My->Draw("");
    pTH1F_CLIC->Draw("same");
    pTLegend->Draw();
    pTCanvas->SaveAs(variable + ".C");
    pTCanvas->SaveAs(variable + ".pdf");
    pTCanvas->SaveAs(variable + ".png");
}

//================================================================

TH1F *GetPlot(TString name, TString variable)
{
    TChain *pTChain = new TChain("AnalysisProcessorTree");
    pTChain->Add(name);

    Double_t value(0.0);

    pTChain->SetBranchAddress(variable, &value);

    int maxEventNumber(10000000);
    int nEventsToProcess(pTChain->GetEntries() > maxEventNumber ? maxEventNumber : pTChain->GetEntries());

    double weight(24.7 * 1500 / nEventsToProcess);

//    TH1F *pTH1F = new TH1F(variable, variable, 140, 0, 1400); Visible Mass
    TH1F *pTH1F = new TH1F(variable, variable, 100, -1.0, 1.0);

    for (unsigned int event = 0; event < nEventsToProcess; event++)
    {
        pTChain->GetEntry(event);
        pTH1F->Fill(value, weight);
    }

    return pTH1F;
}

//================================================================
