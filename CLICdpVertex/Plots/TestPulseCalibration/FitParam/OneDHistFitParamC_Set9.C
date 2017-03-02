{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:26 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamC_Set9 = new TH1F("OneDHistFitParamC_Set9","",25,0,100);
   OneDHistFitParamC_Set9->SetBinContent(1,1071);
   OneDHistFitParamC_Set9->SetBinContent(2,863);
   OneDHistFitParamC_Set9->SetBinContent(3,66);
   OneDHistFitParamC_Set9->SetBinContent(4,19);
   OneDHistFitParamC_Set9->SetBinContent(5,14);
   OneDHistFitParamC_Set9->SetBinContent(6,8);
   OneDHistFitParamC_Set9->SetBinContent(7,11);
   OneDHistFitParamC_Set9->SetBinContent(8,8);
   OneDHistFitParamC_Set9->SetBinContent(9,14);
   OneDHistFitParamC_Set9->SetBinContent(10,24);
   OneDHistFitParamC_Set9->SetBinContent(11,45);
   OneDHistFitParamC_Set9->SetBinContent(12,85);
   OneDHistFitParamC_Set9->SetBinContent(13,156);
   OneDHistFitParamC_Set9->SetBinContent(14,249);
   OneDHistFitParamC_Set9->SetBinContent(15,300);
   OneDHistFitParamC_Set9->SetBinContent(16,309);
   OneDHistFitParamC_Set9->SetBinContent(17,264);
   OneDHistFitParamC_Set9->SetBinContent(18,253);
   OneDHistFitParamC_Set9->SetBinContent(19,171);
   OneDHistFitParamC_Set9->SetBinContent(20,85);
   OneDHistFitParamC_Set9->SetBinContent(21,43);
   OneDHistFitParamC_Set9->SetBinContent(22,22);
   OneDHistFitParamC_Set9->SetBinContent(23,9);
   OneDHistFitParamC_Set9->SetBinContent(24,3);
   OneDHistFitParamC_Set9->SetBinContent(25,1);
   OneDHistFitParamC_Set9->SetBinContent(26,3);
   OneDHistFitParamC_Set9->SetEntries(4096);
   OneDHistFitParamC_Set9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set9->SetFillColor(ci);
   OneDHistFitParamC_Set9->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set9->SetLineColor(ci);
   OneDHistFitParamC_Set9->SetLineWidth(2);
   OneDHistFitParamC_Set9->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set9->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set9->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set9->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set9->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set9->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set9->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set9->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set9->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set9->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set9->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set9->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set9->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set9->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set9->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set9->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set9->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set9->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
