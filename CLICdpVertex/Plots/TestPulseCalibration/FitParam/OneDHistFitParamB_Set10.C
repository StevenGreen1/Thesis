{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 14:44:31 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamB_Set10 = new TH1F("OneDHistFitParamB_Set10","",25,0,10);
   OneDHistFitParamB_Set10->SetBinContent(1,150);
   OneDHistFitParamB_Set10->SetBinContent(2,8);
   OneDHistFitParamB_Set10->SetBinContent(3,106);
   OneDHistFitParamB_Set10->SetBinContent(4,773);
   OneDHistFitParamB_Set10->SetBinContent(5,972);
   OneDHistFitParamB_Set10->SetBinContent(6,708);
   OneDHistFitParamB_Set10->SetBinContent(7,931);
   OneDHistFitParamB_Set10->SetBinContent(8,348);
   OneDHistFitParamB_Set10->SetBinContent(9,23);
   OneDHistFitParamB_Set10->SetBinContent(10,8);
   OneDHistFitParamB_Set10->SetBinContent(11,14);
   OneDHistFitParamB_Set10->SetBinContent(12,5);
   OneDHistFitParamB_Set10->SetBinContent(13,10);
   OneDHistFitParamB_Set10->SetBinContent(14,9);
   OneDHistFitParamB_Set10->SetBinContent(15,1);
   OneDHistFitParamB_Set10->SetBinContent(16,1);
   OneDHistFitParamB_Set10->SetBinContent(17,4);
   OneDHistFitParamB_Set10->SetBinContent(22,2);
   OneDHistFitParamB_Set10->SetBinContent(24,2);
   OneDHistFitParamB_Set10->SetBinContent(26,21);
   OneDHistFitParamB_Set10->SetEntries(4096);
   OneDHistFitParamB_Set10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set10->SetFillColor(ci);
   OneDHistFitParamB_Set10->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set10->SetLineColor(ci);
   OneDHistFitParamB_Set10->SetLineWidth(2);
   OneDHistFitParamB_Set10->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set10->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set10->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set10->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set10->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set10->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set10->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set10->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set10->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set10->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set10->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set10->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set10->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set10->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set10->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set10->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set10->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set10->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
