Traph2D *SinglePlot(TString name);
TH2F *Plot(TString name, TString quantity);

//================================================================

void NuisancePlotExplanation()
{
    TString name0 = "SPFOs_kt_0p90_10Bins_All_1400GeV_Final_BuildIndividualDistributionData.root";

    TFile *pTFile = new TFile(name0);
    TH1F *pTH1F_S_SM = (TH1F*)pTFile->Get("MVV_Alpha4_0.0_Alpha5_0.0_ee_nunuqqqq");
    pTH1F_S_SM->SetLineColor(kRed);
    pTH1F_S_SM->SetLineStyle(2);
//    pTH1F_S_SM->SetFillColor(kRed);
//    pTH1F_S_SM->SetFillStyle(3004);
    pTH1F_S_SM->Rebin(2);
//    pTH1F_S_SM->Scale(1/pTH1F_S_SM->Integral());

    TH1F *pTH1F_S_BSM = (TH1F*)pTFile->Get("MVV_Alpha4_0.05_Alpha5_0.05_ee_nunuqqqq");
    pTH1F_S_BSM->SetLineColor(kRed);
//    pTH1F_S_BSM->SetFillColor(kMagenta);
//    pTH1F_S_BSM->SetFillStyle(3004);
    pTH1F_S_BSM->Rebin(2);
//    pTH1F_S_BSM->Scale(1/pTH1F_S_BSM->Integral());

    TH1F *pTH1F_B1 = (TH1F*)pTFile->Get("MVV_Alpha4_0.0_Alpha5_0.0_gammae_qqqqnu_BS");
    TH1F *pTH1F_B2 = (TH1F*)pTFile->Get("MVV_Alpha4_0.0_Alpha5_0.0_egamma_qqqqnu_BS");

    TH1F *pTH1F_B = pTH1F_B1;
    pTH1F_B->Add(pTH1F_B2);
    pTH1F_B->SetTitle("");
    pTH1F_B->SetLineColor(kBlue);
//    pTH1F_B->SetFillColor(kBlue);
//    pTH1F_B->SetFillStyle(3005);
    pTH1F_B->Rebin(2);
    pTH1F_B->GetXaxis()->SetTitle("Invariant Mass of System [GeV]");
    pTH1F_B->GetXaxis()->SetTitleSize(0.05);
    pTH1F_B->GetXaxis()->SetLabelSize(0.05);
    pTH1F_B->GetYaxis()->SetTitleSize(0.05);
    pTH1F_B->GetYaxis()->SetLabelSize(0.05);
    pTH1F_B->GetYaxis()->SetTitleOffset(1.6);
//    pTH1F_B->Scale(1/pTH1F_B->Integral());

    TLegend *pTLegned = new TLegend(0.35,0.65,0.85,0.85);
    pTLegned->SetTextSize(0.05);
    pTLegned->AddEntry(pTH1F_S_SM,"e^{+}e^{-} #rightarrow qqqq#nu#nu, #alpha_{4} = #alpha_{5} = 0");
    pTLegned->AddEntry(pTH1F_S_BSM,"e^{+}e^{-} #rightarrow qqqq#nu#nu, #alpha_{4} = #alpha_{5} = 0.05");
    pTLegned->AddEntry(pTH1F_B,"e^{#pm} #gamma_{BS} #rightarrow qqqq#nu");

    TCanvas *pTCanvas = new TCanvas("pTCanvas","");
    pTCanvas->cd();
    pTCanvas->SetBottomMargin(0.125);
    pTCanvas->SetLeftMargin(0.15);
    pTH1F_B->Draw();
    pTH1F_S_SM->Draw("same");
    pTH1F_S_BSM->Draw("same");
    pTLegned->Draw();
    pTCanvas->SaveAs("NuisanceExplanation.C");
    pTCanvas->SaveAs("NuisanceExplanation.C");
}

//================================================================
