#include <vector>

void AddBackground(THStack *pTHStack, TFile *pTFile);

//================================================================

void SignalBackgroundPlot()
{
    TCanvas *pTCanvas = new TCanvas();
    pTCanvas->cd();
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.175);
    pTCanvas->SetTopMargin(0.05);
    pTCanvas->SetBottomMargin(0.15);

    TString name0 = "SPFOs_kt_0p90_10Bins_All_1400GeV_Final_BuildIndividualDistributionData.root";
    TFile *pTFile = new TFile(name0);

    THStack *pTHStack = new THStack("stack","");
    TH1F *pTH1FFile = (TH1F*)pTFile->Get("MVV_Alpha4_0.0_Alpha5_0.0_ee_nunuqqqq");

    const Int_t NBINS = 13;
    Double_t edges[NBINS + 1] = {0.0, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400};

    TH1F *pTH1FToAdd = new TH1F("signal", "", NBINS, edges);
    for (unsigned int i = 0; i < pTH1FFile->GetNbinsX() + 1; i++)
    {
        float bincentre = pTH1FFile->GetXaxis()->GetBinCenter(i);
        float bincontents = pTH1FFile->GetBinContent(i);
        pTH1FToAdd->Fill(bincentre,bincontents);
    }

    pTH1FToAdd->SetFillColor(kBlack);  
    pTH1FToAdd->SetFillStyle(3001);  
    pTHStack->Add(pTH1FToAdd);  
    AddBackground(pTHStack, pTFile);
    pTHStack->Draw();

    pTHStack->GetXaxis()->SetTitle("Invariant Mass Of System [GeV]");
    pTHStack->GetXaxis()->SetTitleSize(0.065);
    pTHStack->GetXaxis()->SetLabelSize(0.065);
    pTHStack->GetYaxis()->SetTitleOffset(1.5);
    pTHStack->GetYaxis()->SetTitle("Entries");
    pTHStack->GetYaxis()->SetTitleSize(0.065);
    pTHStack->GetYaxis()->SetLabelSize(0.065);
    pTCanvas->Modified();

    pTCanvas->SaveAs("FitPlotMVV.C");
    pTCanvas->SaveAs("FitPlotMVV.pdf");
}

//================================================================

void AddBackground(THStack *pTHStack, TFile *pTFile)
{
    std::vector<std::string> backgrounds;
    backgrounds.push_back("ee_lnuqqqq");
    backgrounds.push_back("ee_llqqqq");
    backgrounds.push_back("ee_qqqq");
    backgrounds.push_back("ee_nunuqq");
    backgrounds.push_back("ee_lnuqq");
    backgrounds.push_back("ee_qqll");
    backgrounds.push_back("ee_qq");
    backgrounds.push_back("egamma_qqqqe_EPA");
    backgrounds.push_back("egamma_qqqqe_BS");
    backgrounds.push_back("gammae_qqqqe_EPA");
    backgrounds.push_back("gammae_qqqqe_BS");
    backgrounds.push_back("egamma_qqqqnu_EPA");
    backgrounds.push_back("egamma_qqqqnu_BS");
    backgrounds.push_back("gammae_qqqqnu_EPA");
    backgrounds.push_back("gammae_qqqqnu_BS");
    backgrounds.push_back("gammagamma_qqqq_EPA_EPA");
    backgrounds.push_back("gammagamma_qqqq_EPA_BS");
    backgrounds.push_back("gammagamma_qqqq_BS_EPA");
    backgrounds.push_back("gammagamma_qqqq_BS_BS");

    std::vector<int> colour;
    colour.push_back(TColor::GetColor(203,94,221));
    colour.push_back(TColor::GetColor(100,218,92));
    colour.push_back(TColor::GetColor(232,80,125));
    colour.push_back(TColor::GetColor(189,226,61));
    colour.push_back(TColor::GetColor(127,141,224));
    colour.push_back(TColor::GetColor(225,188,51));
    colour.push_back(TColor::GetColor(209,128,193));
    colour.push_back(TColor::GetColor(113,161,55));
    colour.push_back(TColor::GetColor(208,214,112));
    colour.push_back(TColor::GetColor(105,174,204));
    colour.push_back(TColor::GetColor(233,104,50));
    colour.push_back(TColor::GetColor(99,224,195));
    colour.push_back(TColor::GetColor(212,127,110));
    colour.push_back(TColor::GetColor(98,14,0));
    colour.push_back(TColor::GetColor(192,160,184));
    colour.push_back(TColor::GetColor(113,161,55));
    colour.push_back(TColor::GetColor(189,146,63));
    colour.push_back(TColor::GetColor(184,212,203));
    colour.push_back(TColor::GetColor(92,161,114));

    const Int_t NBINS = 13;
    Double_t edges[NBINS + 1] = {0.0, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400};

    for (std::vector<std::string>::iterator it = backgrounds.begin(); it != backgrounds.end(); it++)
    {
        int position(it-backgrounds.begin());
        std::string bkg = "MVV_Alpha4_0.0_Alpha5_0.0_" + *it;
        std::string name = *it;

        TH1F *pTH1FFile = (TH1F*)pTFile->Get(bkg.c_str());
        TH1F *pTH1FToAdd = new TH1F(name.c_str(), "", NBINS, edges);

        for (unsigned int i = 0; i < pTH1FFile->GetNbinsX() + 1; i++)
        {
            float bincentre = pTH1FFile->GetXaxis()->GetBinCenter(i);
            float bincontents = pTH1FFile->GetBinContent(i);
            pTH1FToAdd->Fill(bincentre,bincontents);
        }

//        pTH1FToAdd->Add(pTH1FFile);
        pTH1FToAdd->SetFillColor(colour.at(position));
        pTH1FToAdd->SetLineColor(colour.at(position));
        pTH1FToAdd->SetFillStyle(3001);
        pTH1FToAdd->SetMarkerColor(1);
        pTH1FToAdd->SetMarkerStyle(21);
        pTH1FToAdd->SetMarkerSize(1);
//        std::cout << "For " << *it << " events " << pTH1FToAdd->Integral() << std::endl;
        pTHStack->Add(pTH1FToAdd);
    }
}
