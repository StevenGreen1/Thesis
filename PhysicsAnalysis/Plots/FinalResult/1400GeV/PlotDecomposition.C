#include <iostream>
#include <fstream>
#include <iomanip>

//================================================================

void PlotDecomposition()
{
    TString name1 = "SPFOs_kt_0p90_1400GeV_FitDataOptimal.root";

    MakePlots(name1, "Longitudinally Invariant Kt, Selected PFOs, R = 0.9", "Final");
}

//================================================================

void MakePlots(TString name, TString description, TString briefDescription)
{
    TGraph2D *pTGraph2D = SinglePlot(name,"Chi2MVV");
    TGraph *pTGraph_a4 = OneDSinglePlot(name,"Chi2MVV", "Alpha4");
    TGraph *pTGraph_a5 = OneDSinglePlot(name,"Chi2MVV", "Alpha5");

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
    TF1 *pTF1a4 = new TF1("Alpha4Fit","[0]*x +[1]*x*x + [2]*x*x*x + [3]*x*x*x*x",-0.015,0.015);
    pTGraph_a4->Fit("Alpha4Fit","MR","",-0.015,0.015);
    pTF1a4->SetLineColor(kBlue);
    pTF1a4->Draw("same");
    TLegend *pTLegend_a4 = new TLegend(0.35, 0.65, 0.65, 0.85);
    pTLegend_a4->AddEntry(pTF1a4, "#splitline{4th Order}{Polynomial Fit}", "l");
    pTLegend_a4->SetLineColor(0);
    pTLegend_a4->Draw();
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
    TF1 *pTF1a5 = new TF1("Alpha5Fit","[0]*x +[1]*x*x + [2]*x*x*x + [3]*x*x*x*x",-0.015,0.015);
    pTGraph_a5->Fit("Alpha5Fit","MR","",-0.015,0.015);
    pTF1a5->SetLineColor(kBlue);
    pTF1a5->Draw("same");
    TLegend *pTLegend_a5 = new TLegend(0.35, 0.65, 0.65, 0.85);
    pTLegend_a5->AddEntry(pTF1a5, "#splitline{4th Order}{Polynomial Fit}", "l");
    pTLegend_a5->SetLineColor(0);
    pTLegend_a5->Draw();
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
    pTGraph2D->GetXaxis()->SetLabelSize(0.05);
    pTGraph2D->GetXaxis()->SetTitle("#alpha_{4}");
    pTGraph2D->GetYaxis()->SetTitleOffset(1.6);
    pTGraph2D->GetYaxis()->SetTitleSize(0.05);
    pTGraph2D->GetYaxis()->SetLabelSize(0.05);
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
    pTGraph->GetXaxis()->SetLabelSize(0.05);

    if (variable == "Alpha4")
        pTGraph->GetXaxis()->SetTitle("#alpha_{4}");
    else if (variable == "Alpha5")
        pTGraph->GetXaxis()->SetTitle("#alpha_{5}");

    pTGraph->GetXaxis()->SetRangeUser(-0.025,0.025);
    pTGraph->GetYaxis()->SetTitleOffset(1);
    pTGraph->GetYaxis()->SetTitleSize(0.05);
    pTGraph->GetYaxis()->SetLabelSize(0.05);
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
