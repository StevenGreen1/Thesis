Traph2D *SinglePlot(TString name);
TH2F *Plot(TString name, TString quantity);

//================================================================

void NuisancePlot()
{
    TString name0 = "SPFOs_kt_0p90_1400GeV_FitDataOptimal.root";
    TString name1 = "SPFOs_kt_0p90_Sigma_egamma_qqqqnu_BS_0p01_Sigma_gammae_qqqqnu_BS_0p01_1400GeV_NuisanceFitData.root";
    TString name2 = "SPFOs_kt_0p90_Sigma_egamma_qqqqnu_BS_0p02_Sigma_gammae_qqqqnu_BS_0p02_1400GeV_NuisanceFitData.root";
    TString name3 = "SPFOs_kt_0p90_Sigma_egamma_qqqqnu_BS_0p05_Sigma_gammae_qqqqnu_BS_0p05_1400GeV_NuisanceFitData.root";
    TString name4 = "SPFOs_kt_0p90_Sigma_egamma_qqqqnu_BS_0p1_Sigma_gammae_qqqqnu_BS_0p1_1400GeV_NuisanceFitData.root";

    TGraph2D *pTGraph2D = SinglePlot(name0,"Chi2CosThetaStarSynJets");
    TGraph2D *pTGraph2D_a = SinglePlot(name1,"Chi2CosThetaStarSynJets");
    TGraph2D *pTGraph2D_b = SinglePlot(name2,"Chi2CosThetaStarSynJets");
    TGraph2D *pTGraph2D_c = SinglePlot(name3,"Chi2CosThetaStarSynJets");
    TGraph2D *pTGraph2D_d = SinglePlot(name4,"Chi2CosThetaStarSynJets");
//TH2F *pTH2F_c = Plot(name1,"Chi2CosThetaStarSynJets");
//TH2F *pTH2F_d = Plot(name4,"Chi2CosThetaStarSynJets");

    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(1);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(2);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(418);
    TH1F *pTH1FDummy4 = new TH1F();
    pTH1FDummy4->SetLineColor(4);
    TH1F *pTH1FDummy5 = new TH1F();
    pTH1FDummy5->SetLineColor(880);

    gStyle->SetLegendBorderSize(1); 

    TLegend *pTLegend_all = new TLegend(0.2, 0.15, 0.6, 0.35);
    pTLegend_all->AddEntry(pTH1FDummy1,"68\% Confidence Contour, No Errors Assumed", "l");
    pTLegend_all->AddEntry(pTH1FDummy2,"68\% Confidence Contour, 1\% Error Assumed", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"68\% Confidence Contour, 2\% Error Assumed", "l");
    pTLegend_all->AddEntry(pTH1FDummy4,"68\% Confidence Contour, 5\% Error Assumed", "l");
    pTLegend_all->AddEntry(pTH1FDummy5,"68\% Confidence Contour, 10\% Error Assumed", "l");
    pTLegend_all->SetLineWidth(2);
    pTLegend_all->SetLineColor(kBlack);
    pTLegend_all->SetFillColor(10);

    TExec *ex1 = new TExec("ex1","Int_t colors1[] = {0, 1, 1}; gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);"); // Black
    TExec *ex2 = new TExec("ex2","Int_t colors2[] = {0, 2, 1}; gStyle->SetPalette((sizeof(colors2)/sizeof(Int_t)), colors2);"); // Red
    TExec *ex3 = new TExec("ex3","Int_t colors3[] = {0, 418, 1}; gStyle->SetPalette((sizeof(colors3)/sizeof(Int_t)), colors3);"); // Green
    TExec *ex4 = new TExec("ex4","Int_t colors4[] = {0, 4, 1}; gStyle->SetPalette((sizeof(colors4)/sizeof(Int_t)), colors4);"); // Blue
    TExec *ex5 = new TExec("ex5","Int_t colors5[] = {0, 880, 1}; gStyle->SetPalette((sizeof(colors5)/sizeof(Int_t)), colors5);"); // Violet

    TCanvas *pTCanvas = new TCanvas("Canvas_Nuisance", "", 600, 600);
//    pTCanvas->Divide(1,3);
//    pTCanvas->cd(1);
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetTopMargin(0.10);
    pTCanvas->SetBottomMargin(0.10);
    pTGraph2D->SetTitle("Longitudinally Invariant Kt, Selected PFOs, R = 0.9");
    ex1->Draw();
    pTGraph2D->Draw("CONT1");
    ex2->Draw();
    pTGraph2D_a->Draw("CONT1 same");
    ex3->Draw();
    pTGraph2D_b->Draw("CONT1 same");
    ex4->Draw();
    pTGraph2D_c->Draw("CONT1 same");
    ex5->Draw();
    pTGraph2D_d->Draw("CONT1 same");
    pTLegend_all->Draw();
//    pTCanvas->Update();

    pTCanvas->SaveAs("Nuisance.pdf");
    pTCanvas->SaveAs("Nuisance.C");
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

    Int_t colors1[] = {0, 1, 1}; 
    gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);
    //Double_t levels[] = {0.0, 2.28, 4.61, 9.21, 1.79e308};
    Double_t levels[] = {0.0, 2.28, 1.79e308};
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

TH2F *Plot(TString name, TString quantity)
{
    TFile *pTFile = new TFile(name);
    TTree *pTTree = (TTree*)pTFile->Get("AnalysisProcessorTree");

    Double_t alpha4, alpha5, chi2;

    pTTree->SetBranchAddress("Alpha4",&alpha4);
    pTTree->SetBranchAddress("Alpha5",&alpha5);
    pTTree->SetBranchAddress(quantity,&chi2);

    TH2F *pTH2F = new TH2F(name + "_" + quantity,name + "_" + quantity,37,-0.045125,0.045125,37,-0.045125,0.045125);

    unsigned int nEntries = pTTree->GetEntries();
    for (unsigned int i = 0; i < nEntries; i++)
    {
        pTTree->GetEntry(i);
        pTH2F->Fill(alpha4, alpha5, chi2);
    }

    return pTH2F;
}

