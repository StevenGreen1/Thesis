Traph2D *SinglePlot(TString name);

//================================================================

void FinalPlot()
{
    gStyle->SetLegendBorderSize(1); 

    TString name1 = "SPFOs_kt_0p90_Final_1400GeV_FitData.root";

    TGraph2D *pTGraph2D = SinglePlot(name1,"Chi2CosThetaStarSynJets");

    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(2);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(418);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(4);
/*
    TH1F *pTH1FDummy4 = new TH1F();
    pTH1FDummy4->SetLineColor(4);
    TH1F *pTH1FDummy5 = new TH1F();
    pTH1FDummy5->SetLineColor(880);
*/
    TLegend *pTLegend_all = new TLegend(0.2, 0.15, 0.6, 0.35);
    pTLegend_all->AddEntry(pTH1FDummy1,"68\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy2,"90\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"99\% Confidence Contour", "l");
    pTLegend_all->SetLineWidth(2);
    pTLegend_all->SetLineColor(kBlack);
    pTLegend_all->SetFillColor(10);

//    TExec *ex1 = new TExec("ex1","Int_t colors1[] = {0, 1, 2}; gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);"); // Black
//    TExec *ex2 = new TExec("ex2","Int_t colors2[] = {0, 2, 1}; gStyle->SetPalette((sizeof(colors2)/sizeof(Int_t)), colors2);"); // Red
//    TExec *ex3 = new TExec("ex3","Int_t colors3[] = {0, 418, 1}; gStyle->SetPalette((sizeof(colors3)/sizeof(Int_t)), colors3);"); // Green
//    TExec *ex4 = new TExec("ex4","Int_t colors4[] = {0, 4, 1}; gStyle->SetPalette((sizeof(colors4)/sizeof(Int_t)), colors4);"); // Blue
//    TExec *ex5 = new TExec("ex5","Int_t colors5[] = {0, 880, 1}; gStyle->SetPalette((sizeof(colors5)/sizeof(Int_t)), colors5);"); // Violet

/*
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
*/
    TLegend *pTLegend_all = new TLegend(0.2, 0.15, 0.6, 0.35);
    pTLegend_all->AddEntry(pTH1FDummy1,"68\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy2,"90\% Confidence Contour", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"99\% Confidence Contour", "l");
    pTLegend_all->SetLineWidth(2);
    pTLegend_all->SetLineColor(kBlack);
    pTLegend_all->SetFillColor(10);

    TCanvas *pTCanvas = new TCanvas("Canvas_Final", "", 600, 600);
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetTopMargin(0.10);
    pTCanvas->SetBottomMargin(0.10);

    pTGraph2D->SetTitle("Longitudinally Invariant Kt, Selected PFOs, R = 0.9");
    pTGraph2D->Draw("CONT1");
/*
    pLineAlpha4High->Draw();
    pLineAlpha4Low->Draw();
    pLineAlpha5High->Draw();
    pLineAlpha5Low->Draw();
*/
    pTLegend_all->Draw();
    pTCanvas->SaveAs("Final.pdf");
    pTCanvas->SaveAs("Final.C");
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

    Double_t levels[] = {0.0, 2.28, 4.61, 9.21, 1.79e308};
    Int_t colors1[] = {0, 2, 418, 4, 1};
    gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);
  
//    Double_t levels[] = {0.0, 2.28, 1.79e308}; 
//    Int_t colors1[] = {0, 1, 2}; 
//    gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);
    pTGraph2D->GetHistogram()->SetContour((sizeof(levels)/sizeof(Double_t)), levels);
    pTGraph2D->GetXaxis()->SetTitleSize(0.05);
    pTGraph2D->GetXaxis()->SetLabelSize(0.035);
    pTGraph2D->GetXaxis()->SetTitle("#alpha_{4}");
    pTGraph2D->GetYaxis()->SetTitleOffset(1.6);
    pTGraph2D->GetYaxis()->SetTitleSize(0.05);
    pTGraph2D->GetYaxis()->SetLabelSize(0.035);
    pTGraph2D->GetYaxis()->SetTitle("#alpha_{5}");
    pTGraph2D->SetName(name + "_" + quantity);
    delete pTFile;
    return pTGraph2D;
}

