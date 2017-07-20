#include <iostream>
#include <fstream>
#include <iomanip>

//================================================================

void PlotDecomposition2()
{
    TString name = "SPFOs_kt_0p90_1400GeV_FitDataOptimal.root";

    MakePlots(name, "Longitudinally Invariant Kt, Selected PFOs, R = 0.9", "CosThetaStarBosons", "Chi2CosThetaStarSynBosons");
    MakePlots(name, "Longitudinally Invariant Kt, Selected PFOs, R = 0.9", "CosThetaStarJets", "Chi2CosThetaStarSynJets");
    MakePlots(name, "Longitudinally Invariant Kt, Selected PFOs, R = 0.9", "MVV", "Chi2MVV");
}

//================================================================

void MakePlots(TString name, TString description, TString briefDescription, TString variable)
{
    TString plotdescription = briefDescription + "_" + variable;

    TGraph2D *pTGraph2D = SinglePlot(name, variable);
    TGraph *pTGraph_a4 = OneDSinglePlot(name, variable, "Alpha4");
    TGraph *pTGraph_a5 = OneDSinglePlot(name, variable, "Alpha5");

    // 2D Plot
    TCanvas *pTCanvas = new TCanvas(plotdescription, "", 600, 600);
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.2);
    pTCanvas->SetTopMargin(0.10);
    pTCanvas->SetBottomMargin(0.15);
    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(2);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(418);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(4);
    gStyle->SetLegendBorderSize(1); 

    TLegend *pTLegend_all = new TLegend(0.25, 0.2, 0.6, 0.35);
    pTLegend_all->AddEntry(pTH1FDummy1,"68\% Confidence Region", "l");
    pTLegend_all->AddEntry(pTH1FDummy2,"90\% Confidence Region", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"99\% Confidence Region", "l");
    pTLegend_all->SetLineColorAlpha(kWhite,0);
    pTLegend_all->SetFillStyle(0);
    pTLegend_all->SetTextSize(0.05);
    pTGraph2D->SetTitle("");
    pTGraph2D->SetLineWidth(3);
    pTGraph2D->Draw("CONT1");
    pTLegend_all->Draw();
    TString plotPDF = plotdescription + ".pdf";
    TString plotDotC = plotdescription + ".C";
    pTCanvas->SaveAs(plotPDF);
    pTCanvas->SaveAs(plotDotC);

    // Alpha 4 Plot
    TCanvas *pTCanvas_a4 = new TCanvas(plotdescription + "_Alpha4", "", 600, 600);
    pTCanvas_a4->SetRightMargin(0.05);
    pTCanvas_a4->SetLeftMargin(0.2);
    pTCanvas_a4->SetTopMargin(0.10);
    pTCanvas_a4->SetBottomMargin(0.15);
    pTGraph_a4->Draw("APL");
    TString plotPDF_a4 = plotdescription + "_alpha4.pdf";
    TString plotDotC_a4 = plotdescription + "_alpha4.C";
    TF1 *pTF1a4 = new TF1("Alpha4Fit","[0]*x +[1]*x*x + [2]*x*x*x + [3]*x*x*x*x",-0.015,0.015);
    pTGraph_a4->Fit("Alpha4Fit","MR","",-0.015,0.015);
    pTF1a4->SetLineColor(kBlue);
    pTF1a4->SetLineWidth(3);
    pTF1a4->Draw("same");
    TLegend *pTLegend_a4 = new TLegend(0.15, 0.95, 0.9, 0.95);
    pTLegend_a4->AddEntry(pTF1a4, "4th Order Polynomial Fit", "l");
    pTLegend_a4->SetLineColorAlpha(kWhite,0);
    pTLegend_a4->SetFillStyle(0);
    pTLegend_a4->SetTextSize(0.05);
    pTLegend_a4->Draw();
    pTCanvas_a4->SaveAs(plotPDF_a4);
    pTCanvas_a4->SaveAs(plotDotC_a4);

    // Alpha 5 Plot
    TCanvas *pTCanvas_a5 = new TCanvas(plotdescription + "_Alpha5", "", 600, 600);
    pTCanvas_a5->SetRightMargin(0.05);
    pTCanvas_a5->SetLeftMargin(0.2);
    pTCanvas_a5->SetTopMargin(0.10);
    pTCanvas_a5->SetBottomMargin(0.15);
    pTGraph_a5->Draw("APL");
    TString plotPDF_a5 = plotdescription + "_alpha5.pdf";
    TString plotDotC_a5 = plotdescription + "_alpha5.C";
    TF1 *pTF1a5 = new TF1("Alpha5Fit","[0]*x +[1]*x*x + [2]*x*x*x + [3]*x*x*x*x",-0.015,0.015);
    pTGraph_a5->Fit("Alpha5Fit","MR","",-0.015,0.015);
    pTF1a5->SetLineColor(kBlue);
    pTF1a5->SetLineWidth(3);
    pTF1a5->Draw("same");
    TLegend *pTLegend_a5 = new TLegend(0.15, 0.95, 0.9, 0.95);
    pTLegend_a5->AddEntry(pTF1a5, "4th Order Polynomial Fit", "l");
    pTLegend_a5->SetLineColorAlpha(kWhite,0);
    pTLegend_a5->SetFillStyle(0);
    pTLegend_a5->SetTextSize(0.05);
    pTLegend_a5->Draw();
    pTCanvas_a5->SaveAs(plotPDF_a5);
    pTCanvas_a5->SaveAs(plotDotC_a5);

    // Interpolate
    double alphaLow_a4(0.0);
    double alphaHigh_a4(0.0);
    double alphaLow_a5(0.0);
    double alphaHigh_a5(0.0);
    alphaLow_a4 = pTF1a4->GetX(0.989, -0.02, 0.0);
    alphaHigh_a4 = pTF1a4->GetX(0.989, 0.0, 0.02);
    alphaLow_a5 = pTF1a5->GetX(0.989, -0.02, 0.0);
    alphaHigh_a5 = pTF1a5->GetX(0.989, 0.0, 0.02);

    std::ofstream resultsFile;
    std::string resultFileName = plotdescription + ".txt";
    resultsFile.open(resultFileName.c_str());
    resultsFile << description << std::endl;
    resultsFile << briefDescription << std::endl;
    resultsFile << "The 1D confidence limits for alpha 4 are (" << alphaLow_a4 << ", " << alphaHigh_a4 << ")" << std::endl;
    resultsFile << "The 1D confidence limits for alpha 5 are (" << alphaLow_a5 << ", " << alphaHigh_a5 << ")" << std::endl;
    resultsFile << std::setprecision(3) << alphaLow_a4 << " & " << alphaHigh_a4 << std::endl;
    resultsFile << std::setprecision(3) << alphaLow_a5 << " & " << alphaHigh_a5 << std::endl;
    resultsFile.close();
}

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

    pTGraph2D->GetXaxis()->SetTitle("#alpha_{4}");
    pTGraph2D->GetXaxis()->SetTitleSize(0.05);
    pTGraph2D->GetXaxis()->SetTitleOffset(1.2);
    pTGraph2D->GetXaxis()->SetLabelSize(0.05);
    pTGraph2D->GetXaxis()->SetLabelOffset(0.025);
    pTGraph2D->GetXaxis()->SetNdivisions(5);
    pTGraph2D->GetXaxis()->SetDecimals();
    pTGraph2D->GetYaxis()->SetTitle("#alpha_{5}");
    pTGraph2D->GetYaxis()->SetTitleSize(0.05);
    pTGraph2D->GetYaxis()->SetTitleOffset(2);
    pTGraph2D->GetYaxis()->SetLabelSize(0.05);
    pTGraph2D->GetYaxis()->SetLabelOffset(0.025);
    pTGraph2D->GetYaxis()->SetNdivisions(5);
    pTGraph2D->GetYaxis()->SetDecimals();
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
    pTGraph->SetLineStyle(2);
    pTGraph->SetMarkerStyle(2);
    pTGraph->GetXaxis()->SetTitleSize(0.05);
    pTGraph->GetXaxis()->SetLabelSize(0.05);
    pTGraph->GetXaxis()->SetDecimals();
    pTGraph->GetXaxis()->SetTitleOffset(1.2);
    pTGraph->GetXaxis()->SetLabelOffset(0.025);

    if (variable == "Alpha4")
        pTGraph->GetXaxis()->SetTitle("#alpha_{4}");
    else if (variable == "Alpha5")
        pTGraph->GetXaxis()->SetTitle("#alpha_{5}");

    pTGraph->GetXaxis()->SetRangeUser(-0.05,0.05);
    pTGraph->GetXaxis()->SetNdivisions(7);

    pTGraph->GetYaxis()->SetTitleOffset(1);
    pTGraph->GetYaxis()->SetTitleSize(0.05);
    pTGraph->GetYaxis()->SetLabelSize(0.05);
    pTGraph->GetYaxis()->SetTitle("#chi^{2}");
    pTGraph->GetYaxis()->SetRangeUser(0,15);
    pTGraph->SetTitle("");

    return pTGraph;
}


//================================================================


