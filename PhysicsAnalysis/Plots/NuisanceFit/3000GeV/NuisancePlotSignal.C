Traph2D *SinglePlot(TString name);
TH2F *Plot(TString name, TString quantity);

//================================================================

void NuisancePlotSignal()
{
    TString name0 = "TPFOs_kt_1p10_3000GeV_FitDataOptimal.root";
//    TString name1 = "TPFOs_kt_1p10_Sigma_egamma_qqqqnu_BS_0p001_Sigma_gammae_qqqqnu_BS_0p001_3000GeV_NuisanceFitData.root";
    TString name2 = "TPFOs_kt_1p10_Sigma_ee_nunuqqqq_0p01_3000GeV_NuisanceFitData.root";
    TString name3 = "TPFOs_kt_1p10_Sigma_ee_nunuqqqq_0p02_3000GeV_NuisanceFitData.root";

    TGraph2D *pTGraph2D = SinglePlot(name0,"Chi2MVV");
//    TGraph2D *pTGraph2D_a = SinglePlot(name1,"Chi2MVV");
    TGraph2D *pTGraph2D_b = SinglePlot(name2,"Chi2MVV");
    TGraph2D *pTGraph2D_c = SinglePlot(name3,"Chi2MVV");

    TH1F *pTH1FDummy1 = new TH1F();
    pTH1FDummy1->SetLineColor(2);
    TH1F *pTH1FDummy2 = new TH1F();
    pTH1FDummy2->SetLineColor(2);
    TH1F *pTH1FDummy3 = new TH1F();
    pTH1FDummy3->SetLineColor(418);
    TH1F *pTH1FDummy4 = new TH1F();
    pTH1FDummy4->SetLineColor(kBlue);

    gStyle->SetLegendBorderSize(1); 

    TLegend *pTLegend_all = new TLegend(0.5, 0.775, 0.8, 0.925);
    pTLegend_all->SetTextSize(0.05);
//    pTLegend_all->SetNColumns(2);
//    pTLegend_all->SetHeader("Error assumed on #sigma_{e^{+}e^{-} #rightarrow qqqq#nu#nu}");
    pTLegend_all->AddEntry(pTH1FDummy1,"#sigma_{e^{+}e^{-} #rightarrow #nu#nuqqqq} = 0\%", "l");
//    pTLegend_all->AddEntry(pTH1FDummy2,"0.1\%", "l");
    pTLegend_all->AddEntry(pTH1FDummy3,"#sigma_{e^{+}e^{-} #rightarrow #nu#nuqqqq} = 1\%", "l");
    pTLegend_all->AddEntry(pTH1FDummy4,"#sigma_{e^{+}e^{-} #rightarrow #nu#nuqqqq} = 2\%", "l");
    pTLegend_all->SetLineColorAlpha(0,0);
    pTLegend_all->SetFillColor(0);

    TLegend *pTLegend_all2 = new TLegend(0.2, 0.225, 0.4, 0.275);
    pTLegend_all2->SetHeader("68\% Confidence Region.");
    pTLegend_all2->SetTextSize(0.05);
    pTLegend_all2->SetLineColorAlpha(0,0);
    pTLegend_all2->SetFillColor(0);

    TExec *ex1 = new TExec("ex1","Int_t colors1[] = {0, 1, 1}; gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);"); // Black
    TExec *ex2 = new TExec("ex2","Int_t colors2[] = {0, 2, 1}; gStyle->SetPalette((sizeof(colors2)/sizeof(Int_t)), colors2);"); // Red
    TExec *ex3 = new TExec("ex3","Int_t colors3[] = {0, 418, 1}; gStyle->SetPalette((sizeof(colors3)/sizeof(Int_t)), colors3);"); // Green
    TExec *ex4 = new TExec("ex4","Int_t colors4[] = {0, kBlue, 1}; gStyle->SetPalette((sizeof(colors4)/sizeof(Int_t)), colors4);"); // Blue

    TCanvas *pTCanvas = new TCanvas("Canvas_Nuisance", "", 600, 600);
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetTopMargin(0.05);
    pTCanvas->SetBottomMargin(0.15);

    pTGraph2D->SetTitle("");
    ex1->Draw();
    pTGraph2D->Draw("CONT1");
//    ex2->Draw();
//    pTGraph2D_a->Draw("CONT1 same");
    ex3->Draw();
    pTGraph2D_b->Draw("CONT1 same");
    ex4->Draw();
    pTGraph2D_c->Draw("CONT1 same");
    pTLegend_all->Draw();
    pTLegend_all2->Draw();

    pTCanvas->SaveAs("NuisanceSignal.pdf");
    pTCanvas->SaveAs("NuisanceSignal.C");
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

    Int_t colors1[] = {0, 2, 1}; 
    gStyle->SetPalette((sizeof(colors1)/sizeof(Int_t)), colors1);
//    Double_t levels[] = {0.0, 2.28, 4.61, 9.21, 1.79e308};
    Double_t levels[] = {0.0, 2.28, 1.79e308};
    pTGraph2D->GetHistogram()->SetContour((sizeof(levels)/sizeof(Double_t)), levels);

    pTGraph2D->GetXaxis()->SetTitleSize(0.05);
    pTGraph2D->GetXaxis()->SetLabelSize(0.05);
    pTGraph2D->GetXaxis()->SetTitle("#alpha_{4}");
    pTGraph2D->GetXaxis()->SetNdivisions(5);
//    pTGraph2D->GetXaxis()->SetRangeUser(-0.003,0.003);
    pTGraph2D->GetYaxis()->SetTitleOffset(1.6);
    pTGraph2D->GetYaxis()->SetTitleSize(0.05);
    pTGraph2D->GetYaxis()->SetLabelSize(0.05);
    pTGraph2D->GetYaxis()->SetNdivisions(5);
//    pTGraph2D->GetYaxis()->SetRangeUser(-0.003,0.003);
    pTGraph2D->GetYaxis()->SetTitle("#alpha_{5}");
    pTGraph2D->SetTitle("");
    pTGraph2D->SetLineWidth(3);

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

