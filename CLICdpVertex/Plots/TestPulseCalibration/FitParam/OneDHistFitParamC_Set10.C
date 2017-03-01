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
   
   TH1F *OneDHistFitParamC_Set10 = new TH1F("OneDHistFitParamC_Set10","",25,0,100);
   OneDHistFitParamC_Set10->SetBinContent(1,1406);
   OneDHistFitParamC_Set10->SetBinContent(2,189);
   OneDHistFitParamC_Set10->SetBinContent(3,50);
   OneDHistFitParamC_Set10->SetBinContent(4,52);
   OneDHistFitParamC_Set10->SetBinContent(5,90);
   OneDHistFitParamC_Set10->SetBinContent(6,98);
   OneDHistFitParamC_Set10->SetBinContent(7,108);
   OneDHistFitParamC_Set10->SetBinContent(8,130);
   OneDHistFitParamC_Set10->SetBinContent(9,211);
   OneDHistFitParamC_Set10->SetBinContent(10,328);
   OneDHistFitParamC_Set10->SetBinContent(11,402);
   OneDHistFitParamC_Set10->SetBinContent(12,437);
   OneDHistFitParamC_Set10->SetBinContent(13,328);
   OneDHistFitParamC_Set10->SetBinContent(14,153);
   OneDHistFitParamC_Set10->SetBinContent(15,77);
   OneDHistFitParamC_Set10->SetBinContent(16,24);
   OneDHistFitParamC_Set10->SetBinContent(17,10);
   OneDHistFitParamC_Set10->SetBinContent(18,2);
   OneDHistFitParamC_Set10->SetBinContent(20,1);
   OneDHistFitParamC_Set10->SetEntries(4096);
   OneDHistFitParamC_Set10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set10->SetFillColor(ci);
   OneDHistFitParamC_Set10->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set10->SetLineColor(ci);
   OneDHistFitParamC_Set10->SetLineWidth(2);
   OneDHistFitParamC_Set10->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set10->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set10->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set10->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set10->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set10->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set10->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set10->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set10->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set10->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set10->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set10->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set10->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set10->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set10->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set10->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set10->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set10->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
