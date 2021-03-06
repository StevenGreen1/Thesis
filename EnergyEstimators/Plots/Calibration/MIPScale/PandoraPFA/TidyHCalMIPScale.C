void TidyHCalMIPScale()
{
    gROOT->ProcessLine(".x GeVToMIP_Calibration_10_GeV_Muons_HCal.C");
    TH1F *pTH1F = HCalDirectionCorrectedCaloHitEnergy;

    TCanvas *pTCanvas = new TCanvas("c1","",800,600);
    pTCanvas->cd();
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetLogy();

    pTH1F->SetTitle("");
    pTH1F->SetStats(kFALSE);
    pTH1F->GetXaxis()->SetTitle("HCal Calorimeter Hit Energy [GeV]");
    pTH1F->GetXaxis()->SetTitleSize(0.05);
    pTH1F->GetXaxis()->SetTitleFont(132);
    pTH1F->GetXaxis()->SetLabelFont(132);
    pTH1F->GetXaxis()->SetLabelSize(0.05);
    pTH1F->GetXaxis()->SetRangeUser(0.0,0.06);
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->GetYaxis()->SetTitleSize(0.05);
    pTH1F->GetYaxis()->SetTitleFont(132);
    pTH1F->GetYaxis()->SetLabelFont(132);
    pTH1F->GetYaxis()->SetTitleOffset(1.3);
    pTH1F->GetYaxis()->SetLabelSize(0.05);
    pTH1F->GetYaxis()->SetRangeUser(100,4e4);
    pTH1F->SetLineColor(kBlue);
    pTH1F->SetFillColor(kBlue);
    pTH1F->SetFillStyle(3004);
    pTH1F->Draw("HIST");

    pTCanvas->Update();
    DrawVerticalLine(0.0275);

    pTCanvas->SaveAs("MIPScalePandoraPFAHCal.pdf");
    pTCanvas->SaveAs("MIPScalePandoraPFAHCal.C");
     
}

void DrawVerticalLine(Double_t x)
{
   TLine line;
   Double_t lm = gPad->GetLeftMargin();
   Double_t rm = 1.-gPad->GetRightMargin();
   Double_t tm = 1.-gPad->GetTopMargin();
   Double_t bm = gPad->GetBottomMargin();
   Double_t xndc = (rm-lm)*((x-gPad->GetUxmin())/(gPad->GetUxmax()-gPad->GetUxmin()))+lm;
   line.SetLineStyle(2);
   line.DrawLineNDC(xndc,bm,xndc,tm);
}
