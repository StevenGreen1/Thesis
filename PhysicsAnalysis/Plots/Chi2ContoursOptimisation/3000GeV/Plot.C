#include <iostream>
#include <fstream>
#include <iomanip>

//================================================================

void Plot()
{
    TString name1 = "SPFOs_kt_0p50_3000GeV_FitData.root";
    TString name2 = "SPFOs_kt_0p70_3000GeV_FitData.root";
    TString name3 = "SPFOs_kt_0p90_3000GeV_FitData.root";
    TString name4 = "SPFOs_kt_1p00_3000GeV_FitData.root";
    TString name5 = "SPFOs_kt_1p10_3000GeV_FitData.root";
    TString name6 = "TPFOs_kt_0p70_3000GeV_FitData.root";
    TString name7 = "LPFOs_kt_0p70_3000GeV_FitData.root";
    TString name8 = "LPFOs_kt_0p90_3000GeV_FitData.root";
    TString name9 = "LPFOs_kt_1p10_3000GeV_FitData.root";
    TString name10 = "TPFOs_kt_0p90_3000GeV_FitData.root";
    TString name11 = "TPFOs_kt_1p10_3000GeV_FitData.root";

    MakePlots(name1, "Longitudinally Invariant Kt, Selected PFOs, R = 0.5", "KtSPFOsR0p50");
    MakePlots(name2, "Longitudinally Invariant Kt, Selected PFOs, R = 0.7", "KtSPFOsR0p70");
    MakePlots(name3, "Longitudinally Invariant Kt, Selected PFOs, R = 0.9", "KtSPFOsR0p90");
    MakePlots(name4, "Longitudinally Invariant Kt, Selected PFOs, R = 1.0", "KtSPFOsR1p00");
    MakePlots(name5, "Longitudinally Invariant Kt, Selected PFOs, R = 1.1", "KtSPFOsR1p10");
    MakePlots(name6, "Longitudinally Invariant Kt, Tight Selected PFOs, R = 0.7", "KtTPFOsR0p70");
    MakePlots(name7, "Longitudinally Invariant Kt, Loose Selected PFOs, R = 0.7", "KtLPFOsR0p70");
    MakePlots(name8, "Longitudinally Invariant Kt, Loose Selected PFOs, R = 0.9", "KtLPFOsR0p90");
    MakePlots(name9, "Longitudinally Invariant Kt, Loose Selected PFOs, R = 1.1", "KtLPFOsR1p10");
    MakePlots(name10, "Longitudinally Invariant Kt, Tight Selected PFOs, R = 0.9", "KtTPFOsR0p90");
    MakePlots(name11, "Longitudinally Invariant Kt, Tight Selected PFOs, R = 1.1", "KtTPFOsR1p10");
}

//================================================================

void MakePlots(TString name, TString description, TString briefDescription)
{
    TGraph2D *pTGraph2D = SinglePlot(name,"Chi2CosThetaStarSynJets");
    TGraph *pTGraph_a4 = OneDSinglePlot(name,"Chi2CosThetaStarSynJets", "Alpha4");
    TGraph *pTGraph_a5 = OneDSinglePlot(name,"Chi2CosThetaStarSynJets", "Alpha5");

    // 2D Plot
    TCanvas *pTCanvas = new TCanvas(briefDescription, "", 600, 600);
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetTopMargin(0.10);
    pTCanvas->SetBottomMargin(0.10);
    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(2);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(418);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(4);
    gStyle->SetLegendBorderSize(1); 

    TLegend *pTLegend_all = new TLegend(0.2, 0.15, 0.6, 0.35);
    pTLegend_all->AddEntry(pTH1FDummy1,"68\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy2,"90\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"99\% Confidence Contour", "l");
    pTLegend_all->SetLineWidth(2);
    pTLegend_all->SetLineColor(kBlack);
    pTLegend_all->SetFillColor(10);
    pTGraph2D->SetTitle(description);
    pTGraph2D->SetLineWidth(3);
    pTGraph2D->Draw("CONT1");
    pTLegend_all->Draw();

    TString plotPDF = briefDescription + ".pdf";
    TString plotDotC = briefDescription + ".C";

    pTCanvas->SaveAs(plotPDF);
    pTCanvas->SaveAs(plotDotC);

    // 1D Plots
    double alphaLow_a4(0.0);
    double alphaHigh_a4(0.0);
    FindAlpha(pTGraph_a4, alphaLow_a4, alphaHigh_a4);
    TCanvas *pTCanvas_a4 = new TCanvas(briefDescription + "_Alpha4", "", 600, 600);
    pTCanvas_a4->SetRightMargin(0.05);
    pTCanvas_a4->SetLeftMargin(0.10);
    pTCanvas_a4->SetTopMargin(0.10);
    pTCanvas_a4->SetBottomMargin(0.10);
    pTGraph_a4->Draw("APL");
    TString plotPDF_a4 = briefDescription + "_alpha4.pdf";
    TString plotDotC_a4 = briefDescription + "_alpha4.C";
    pTCanvas_a4->SaveAs(plotPDF_a4);
    pTCanvas_a4->SaveAs(plotDotC_a4);

    double alphaLow_a5(0.0);
    double alphaHigh_a5(0.0);
    FindAlpha(pTGraph_a5, alphaLow_a5, alphaHigh_a5);
    TCanvas *pTCanvas_a5 = new TCanvas(briefDescription + "_Alpha5", "", 600, 600);
    pTCanvas_a5->SetRightMargin(0.05);
    pTCanvas_a5->SetLeftMargin(0.10);
    pTCanvas_a5->SetTopMargin(0.10);
    pTCanvas_a5->SetBottomMargin(0.10);
    pTGraph_a5->Draw("APL");
    TString plotPDF_a5 = briefDescription + "_alpha5.pdf";
    TString plotDotC_a5 = briefDescription + "_alpha5.C";
    pTCanvas_a5->SaveAs(plotPDF_a5);
    pTCanvas_a5->SaveAs(plotDotC_a5);

    std::ofstream resultsFile;
    std::string resultFileName = briefDescription + ".txt";
    resultsFile.open(resultFileName.c_str());
    resultsFile << description << std::endl;
    resultsFile << briefDescription << std::endl;
    resultsFile << "The 1D confidence limits for alpha 4 are (" << alphaLow_a4 << ", " << alphaHigh_a4 << ")" << std::endl;
    resultsFile << "The 1D confidence limits for alpha 5 are (" << alphaLow_a5 << ", " << alphaHigh_a5 << ")" << std::endl;
    resultsFile << std::setprecision(3) << alphaLow_a4 << " & " << alphaHigh_a4 << std::endl;
    resultsFile << std::setprecision(3) << alphaLow_a5 << " & " << alphaHigh_a5 << std::endl;
    resultsFile.close();
}

/*
    TCanvas *pTCanvas = new TCanvas("Canvas", "", 600, 600);
    pTCanvas->Divide(3,1);
//    TGraph2D *pTGraph2D_1a = SinglePlot(name1,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_1b = SinglePlot(name1,"Chi2CosThetaStarSynJets");
    TGraph *pTGraph_1b_a4 = OneDSinglePlot(name1,"Chi2CosThetaStarSynJets", "Alpha4");
    TGraph *pTGraph_1b_a5 = OneDSinglePlot(name1,"Chi2CosThetaStarSynJets", "Alpha5");

    double alphaLow_1b_a4(0.0);
    double alphaHigh_1b_a4(0.0);
    FindAlpha(pTGraph_1b_a4, alphaLow_1b_a4, alphaHigh_1b_a4);

    double alphaLow_1b_a5(0.0);
    double alphaHigh_1b_a5(0.0);
    FindAlpha(pTGraph_1b_a5, alphaLow_1b_a5, alphaHigh_1b_a5);

    std::cout << "Alpha 4 is between " << alphaLow_1b_a4 << " and " << alphaHigh_1b_a4 << std::endl;
    std::cout << "Alpha 5 is between " << alphaLow_1b_a5 << " and " << alphaHigh_1b_a5 << std::endl;

    TGraph *pTGraph_1b_a5 = OneDSinglePlot(name1,"Chi2CosThetaStarSynJets", "Alpha5");
    pTCanvas->cd(1);
    pTGraph2D_1b->Draw("CONT1");
    pTCanvas->cd(2);
    pTGraph_1b_a4->GetYaxis()->SetRangeUser(0, 15);
    pTGraph_1b_a4->Draw("");
    pTCanvas->cd(3);
    pTGraph_1b_a5->GetYaxis()->SetRangeUser(0, 15);
    pTGraph_1b_a5->Draw("");
}
*/
/*

//    TGraph2D *pTGraph2D_1c = SinglePlot(name1,"Chi2CosThetaStarSynBosons");
    TGraph2D *pTGraph2D_2a = SinglePlot(name2,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_2b = SinglePlot(name2,"Chi2CosThetaStarSynJets");
    TGraph2D *pTGraph2D_2c = SinglePlot(name2,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_3a = SinglePlot(name3,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_3b = SinglePlot(name3,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_3c = SinglePlot(name3,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_4a = SinglePlot(name4,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_4b = SinglePlot(name4,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_4c = SinglePlot(name4,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_5a = SinglePlot(name5,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_5b = SinglePlot(name5,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_5c = SinglePlot(name5,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_6a = SinglePlot(name6,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_6b = SinglePlot(name6,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_6c = SinglePlot(name6,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_7a = SinglePlot(name7,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_7b = SinglePlot(name7,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_7c = SinglePlot(name7,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_8a = SinglePlot(name8,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_8b = SinglePlot(name8,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_8c = SinglePlot(name8,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_9a = SinglePlot(name9,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_9b = SinglePlot(name9,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_9c = SinglePlot(name9,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_10a = SinglePlot(name10,"Chi2CosThetaStarSynJets_vs_Bosons");
    TGraph2D *pTGraph2D_10b = SinglePlot(name10,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_10c = SinglePlot(name10,"Chi2CosThetaStarSynBosons");
//    TGraph2D *pTGraph2D_11a = SinglePlot(name11,"Chi2CosThetaStarSynJets_vs_Bosons");
        TGraph2D *pTGraph2D_11b = SinglePlot(name11,"Chi2CosThetaStarSynJets");
//    TGraph2D *pTGraph2D_11c = SinglePlot(name11,"Chi2CosThetaStarSynBosons");

    TCanvas *pTCanvas_1b = new TCanvas("R0p50", "", 600, 600);
    pTCanvas_1b->SetRightMargin(0.05);
    pTCanvas_1b->SetLeftMargin(0.15);
    pTCanvas_1b->SetTopMargin(0.10);
    pTCanvas_1b->SetBottomMargin(0.10);
    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(2);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(418);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(4);

    TLine *pLineAlpha4High = new TLine(0.0093,-0.02,0.0093,0.02);
    pLineAlpha4High->SetLineColor(kBlack);
    pLineAlpha4High->SetLineStyle(2);
    pLineAlpha4High->SetLineWidth(2);

    TLine *pLineAlpha4Low = new TLine(-0.0071,-0.02,-0.0071,0.02);
    pLineAlpha4Low->SetLineColor(kBlack);
    pLineAlpha4Low->SetLineStyle(2);
    pLineAlpha4Low->SetLineWidth(2);

    TLine *pLineAlpha5High = new TLine(-0.02,0.0051,0.02,0.0051);
    pLineAlpha5High->SetLineColor(kBlack);
    pLineAlpha5High->SetLineStyle(2);
    pLineAlpha5High->SetLineWidth(2);

    TLine *pLineAlpha5Low = new TLine(-0.02,-0.006,0.02,-0.006);
    pLineAlpha5Low->SetLineColor(kBlack);
    pLineAlpha5Low->SetLineStyle(2);
    pLineAlpha5Low->SetLineWidth(2);

    gStyle->SetLegendBorderSize(1); 

    TLegend *pTLegend_all = new TLegend(0.2, 0.15, 0.6, 0.35);
    pTLegend_all->AddEntry(pTH1FDummy1,"68\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy2,"90\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"99\% Confidence Contour", "l");
    pTLegend_all->SetLineWidth(2);
    pTLegend_all->SetLineColor(kBlack);
    pTLegend_all->SetFillColor(10);
    pTGraph2D_1b->SetTitle("Longitudinally Invariant Kt, Selected PFOs, R = 0.5");
    pTGraph2D_1b->SetLineWidth(3);
    pTGraph2D_1b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_1b->SaveAs("R0p50.pdf");
    pTCanvas_1b->SaveAs("R0p50.C");

    TCanvas *pTCanvas_2b = new TCanvas("R0p70", "", 600, 600);
    pTCanvas_2b->SetRightMargin(0.05);
    pTCanvas_2b->SetLeftMargin(0.15);
    pTCanvas_2b->SetTopMargin(0.10);
    pTCanvas_2b->SetBottomMargin(0.10);
    pTGraph2D_2b->SetTitle("Longitudinally Invariant Kt, Selected PFOs, R = 0.7");
    pTGraph2D_2b->SetLineWidth(3);
    pTGraph2D_2b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_2b->Update();
    pTCanvas_2b->SaveAs("R0p70.pdf");
    pTCanvas_2b->SaveAs("R0p70.C");

    TCanvas *pTCanvas_3b = new TCanvas("R0p90", "", 600, 600);
    pTCanvas_3b->SetRightMargin(0.05);
    pTCanvas_3b->SetLeftMargin(0.15);
    pTCanvas_3b->SetTopMargin(0.10);
    pTCanvas_3b->SetBottomMargin(0.10);
    pTGraph2D_3b->SetTitle("Longitudinally Invariant Kt, Selected PFOs, R = 0.9");
    pTGraph2D_3b->SetLineWidth(3);
    pTGraph2D_3b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_3b->SaveAs("R0p90.pdf");
    pTCanvas_3b->SaveAs("R0p90.C");

    TCanvas *pTCanvas_5b = new TCanvas("R1p10", "", 600, 600);
    pTCanvas_5b->SetRightMargin(0.05);
    pTCanvas_5b->SetLeftMargin(0.15);
    pTCanvas_5b->SetTopMargin(0.10);
    pTCanvas_5b->SetBottomMargin(0.10);
    pTGraph2D_5b->SetTitle("Longitudinally Invariant Kt, Selected PFOs, R = 1.1");
    pTGraph2D_5b->SetLineWidth(3);
    pTGraph2D_5b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_5b->SaveAs("R1p10.pdf");
    pTCanvas_5b->SaveAs("R1p10.C");

    TCanvas *pTCanvas_6b = new TCanvas("TPFOsR0p70", "", 600, 600);
    pTCanvas_6b->SetRightMargin(0.05);
    pTCanvas_6b->SetLeftMargin(0.15);
    pTCanvas_6b->SetTopMargin(0.10);
    pTCanvas_6b->SetBottomMargin(0.10);
    pTGraph2D_6b->SetTitle("Longitudinally Invariant Kt, Tight Selected PFOs, R = 0.7");
    pTGraph2D_6b->SetLineWidth(3);
    pTGraph2D_6b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_6b->SaveAs("TPFOsR0p70.pdf");
    pTCanvas_6b->SaveAs("TPFOsR0p70.C");

    TCanvas *pTCanvas_7b = new TCanvas("LPFOsR0p70", "", 600, 600);
    pTCanvas_7b->SetRightMargin(0.05);
    pTCanvas_7b->SetLeftMargin(0.15);
    pTCanvas_7b->SetTopMargin(0.10);
    pTCanvas_7b->SetBottomMargin(0.10);
    pTGraph2D_7b->SetTitle("Longitudinally Invariant Kt, Loose Selected PFOs, R = 0.7");
    pTGraph2D_7b->SetLineWidth(3);
    pTGraph2D_7b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_7b->SaveAs("LPFOsR0p70.pdf");
    pTCanvas_7b->SaveAs("LPFOsR0p70.C");

    TCanvas *pTCanvas_8b = new TCanvas("LPFOsR0p90", "", 600, 600);
    pTCanvas_8b->SetRightMargin(0.05);
    pTCanvas_8b->SetLeftMargin(0.15);
    pTCanvas_8b->SetTopMargin(0.10);
    pTCanvas_8b->SetBottomMargin(0.10);
    pTGraph2D_8b->SetTitle("Longitudinally Invariant Kt, Loose Selected PFOs, R = 0.9");
    pTGraph2D_8b->SetLineWidth(3);
    pTGraph2D_8b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_8b->SaveAs("LPFOsR0p90.pdf");
    pTCanvas_8b->SaveAs("LPFOsR0p90.C");

    TCanvas *pTCanvas_9b = new TCanvas("LPFOsR1p10", "", 600, 600);
    pTCanvas_9b->SetRightMargin(0.05);
    pTCanvas_9b->SetLeftMargin(0.15);
    pTCanvas_9b->SetTopMargin(0.10);
    pTCanvas_9b->SetBottomMargin(0.10);
    pTGraph2D_9b->SetTitle("Longitudinally Invariant Kt, Loose Selected PFOs, R = 1.1");
    pTGraph2D_9b->SetLineWidth(3);
    pTGraph2D_9b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_9b->SaveAs("LPFOsR1p10.pdf");
    pTCanvas_9b->SaveAs("LPFOsR1p10.C");

    TCanvas *pTCanvas_10b = new TCanvas("TPFOsR0p90", "", 600, 600);
    pTCanvas_10b->SetRightMargin(0.05);
    pTCanvas_10b->SetLeftMargin(0.15);
    pTCanvas_10b->SetTopMargin(0.10);
    pTCanvas_10b->SetBottomMargin(0.10);
    pTGraph2D_10b->SetTitle("Longitudinally Invariant Kt, Tight Selected PFOs, R = 0.9");
    pTGraph2D_10b->SetLineWidth(3);
    pTGraph2D_10b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_10b->SaveAs("TPFOsR0p90.pdf");
    pTCanvas_10b->SaveAs("TPFOsR0p90.C");

    TCanvas *pTCanvas_11b = new TCanvas("TPFOsR1p10", "", 600, 600);
    pTCanvas_11b->SetRightMargin(0.05);
    pTCanvas_11b->SetLeftMargin(0.15);
    pTCanvas_11b->SetTopMargin(0.10);
    pTCanvas_11b->SetBottomMargin(0.10);
    pTGraph2D_11b->SetTitle("Longitudinally Invariant Kt, Tight Selected PFOs, R = 1.1");
    pTGraph2D_11b->SetLineWidth(3);
    pTGraph2D_11b->Draw("CONT1");
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
    pTLegend_all->Draw();
    pTCanvas_11b->SaveAs("TPFOsR1p10.pdf");
    pTCanvas_11b->SaveAs("TPFOsR1p10.C");
*/

//================================================================

TGraph2D *SinglePlot(TString name, TString quantity)
{
    TFile *pTFile = new TFile(name);
    TTree *pTTree = (TTree*)pTFile->Get("AnalysisProcessorTree");

    Double_t alpha4, alpha5, chi2;

    pTTree->SetBranchAddress("Alpha4",&alpha4);
    pTTree->SetBranchAddress("Alpha5",&alpha5);
    pTTree->SetBranchAddress(quantity,&chi2);

    TGraph2D *pTGraph2D = new TGraph2D(); 
    pTGraph2D->SetTitle(name + "_" + quantity);

    unsigned int nEntries = pTTree->GetEntries();
    for (unsigned int i = 0; i < nEntries; i++)
    {
        pTTree->GetEntry(i);
        pTGraph2D->SetPoint(pTGraph2D->GetN(), alpha4, alpha5, chi2);
    }

    Int_t colors[] = {0, 2, 418, 4, 1};
    gStyle->SetPalette((sizeof(colors)/sizeof(Int_t)), colors);
    Double_t levels[] = {0.0, 2.28, 4.61, 9.21, 1.79e308};
    pTGraph2D->GetHistogram()->SetContour((sizeof(levels)/sizeof(Double_t)), levels);

    pTGraph2D->GetXaxis()->SetTitleSize(0.05);
    pTGraph2D->GetXaxis()->SetLabelSize(0.035);
    pTGraph2D->GetXaxis()->SetTitle("#alpha_{4}");
    pTGraph2D->GetYaxis()->SetTitleOffset(1.6);
    pTGraph2D->GetYaxis()->SetTitleSize(0.05);
    pTGraph2D->GetYaxis()->SetLabelSize(0.035);
    pTGraph2D->GetYaxis()->SetTitle("#alpha_{5}");
    pTGraph2D->SetTitle("");

    return pTGraph2D;
}

//================================================================

TGraph *OneDSinglePlot(TString name, TString quantity, TString variable)
{
    TFile *pTFile = new TFile(name);
    TTree *pTTree = (TTree*)pTFile->Get("AnalysisProcessorTree");

    Double_t alpha4, alpha5, chi2;

    pTTree->SetBranchAddress("Alpha4",&alpha4);
    pTTree->SetBranchAddress("Alpha5",&alpha5);
    pTTree->SetBranchAddress(quantity,&chi2);

    TGraph *pTGraph = new TGraph(); 
    pTGraph->SetTitle(name + "_" + quantity);

    unsigned int nEntries = pTTree->GetEntries();
    for (unsigned int i = 0; i < nEntries; i++)
    {
        pTTree->GetEntry(i);
        if (variable == "Alpha4")
        {
            if (std::fabs(alpha5) < 0.00001)
            {
                pTGraph->SetPoint(pTGraph->GetN(), alpha4, chi2);
            }
        }
        else if (variable == "Alpha5")
        {
            if (std::fabs(alpha4) < 0.00001)
            {
                pTGraph->SetPoint(pTGraph->GetN(), alpha5, chi2);
            }
        }
    }
    pTGraph->SetMarkerStyle(2);
    pTGraph->GetXaxis()->SetTitleSize(0.05);
    pTGraph->GetXaxis()->SetLabelSize(0.035);

    if (variable == "Alpha4")
        pTGraph->GetXaxis()->SetTitle("#alpha_{4}");
    else if (variable == "Alpha5")
        pTGraph->GetXaxis()->SetTitle("#alpha_{5}");

    pTGraph->GetXaxis()->SetRangeUser(-0.01,0.01);
    pTGraph->GetYaxis()->SetTitleOffset(1);
    pTGraph->GetYaxis()->SetTitleSize(0.05);
    pTGraph->GetYaxis()->SetLabelSize(0.035);
    pTGraph->GetYaxis()->SetTitle("#chi^{2}");
    pTGraph->GetYaxis()->SetRangeUser(0,15);
    pTGraph->SetTitle("");

    return pTGraph;
}


//================================================================

void FindAlpha(TGraph *pTGraph, double &alphaLow, double &alphaHigh)
{
    double xBoundLowLow(0.0);
    double xBoundLowHigh(0.0);
    double xBoundHighHigh(0.0);
    double xBoundHighHigh(0.0);

    double yBoundLowLow(0.0);
    double yBoundLowHigh(0.0);
    double yBoundHighHigh(0.0);
    double yBoundHighHigh(0.0);

    for (unsigned int i = 1; i < pTGraph->GetN(); i++)
    {
        double x(0.0);
        double x2(0.0);
        double y(0.0);
        double y2(0.0);
        pTGraph->GetPoint(i,x,y);
        pTGraph->GetPoint(i-1,x2,y2);

        if (y2 > 0.989 && y < 0.989)
        {
            xBoundLowLow = x2;
            xBoundLowHigh = x;
            yBoundLowLow = y2;
            yBoundLowHigh = y;
        }
        else if (y2 < 0.989 && y > 0.989)
        {
            xBoundHighLow = x2;
            xBoundHighHigh = x;
            yBoundHighLow = y2;
            yBoundHighHigh = y;
        }
    }

    alphaLow = Interpolate(xBoundLowLow,yBoundLowLow,xBoundLowHigh,yBoundLowHigh,0.989);
    alphaHigh = Interpolate(xBoundHighLow,yBoundHighLow,xBoundHighHigh,yBoundHighHigh,0.989);
}

//================================================================

double Interpolate(double x1, double y1, double x2, double y2, double y)
{
    double gradient((x2-x1)/(y2-y1));
    return x1 + (y-y1)*gradient;
}

//================================================================
