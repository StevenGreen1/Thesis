{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:26 2017) by ROOT version5.34/37
   TCanvas *Canvas = new TCanvas("Canvas", "",0,45,600,500);
   gStyle->SetOptStat(0);
   Canvas->Range(0,0,1,1);
   Canvas->SetFillColor(0);
   Canvas->SetBorderMode(0);
   Canvas->SetBorderSize(2);
   Canvas->SetTickx(1);
   Canvas->SetTicky(1);
   Canvas->SetLeftMargin(0.15);
   Canvas->SetBottomMargin(0.15);
   Canvas->SetFrameLineWidth(2);
   Canvas->SetFrameBorderMode(0);
   
   TH1F *OneDHistFitParamA_Set9 = new TH1F("OneDHistFitParamA_Set9","",25,0,0.2);
   OneDHistFitParamA_Set9->SetBinContent(1,150);
   OneDHistFitParamA_Set9->SetBinContent(2,5);
   OneDHistFitParamA_Set9->SetBinContent(3,1);
   OneDHistFitParamA_Set9->SetBinContent(4,5);
   OneDHistFitParamA_Set9->SetBinContent(5,10);
   OneDHistFitParamA_Set9->SetBinContent(6,11);
   OneDHistFitParamA_Set9->SetBinContent(7,11);
   OneDHistFitParamA_Set9->SetBinContent(8,8);
   OneDHistFitParamA_Set9->SetBinContent(9,4);
   OneDHistFitParamA_Set9->SetBinContent(10,216);
   OneDHistFitParamA_Set9->SetBinContent(11,1482);
   OneDHistFitParamA_Set9->SetBinContent(12,1613);
   OneDHistFitParamA_Set9->SetBinContent(13,561);
   OneDHistFitParamA_Set9->SetBinContent(14,19);
   OneDHistFitParamA_Set9->SetEntries(4096);
   OneDHistFitParamA_Set9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set9->SetFillColor(ci);
   OneDHistFitParamA_Set9->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set9->SetLineColor(ci);
   OneDHistFitParamA_Set9->SetLineWidth(2);
   OneDHistFitParamA_Set9->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set9->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set9->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set9->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set9->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set9->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set9->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set9->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set9->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set9->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set9->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set9->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set9->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set9->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set9->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set9->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set9->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set9->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
