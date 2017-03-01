{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:28 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamA_Set10 = new TH1F("OneDHistFitParamA_Set10","",25,0,0.2);
   OneDHistFitParamA_Set10->SetBinContent(1,162);
   OneDHistFitParamA_Set10->SetBinContent(2,3);
   OneDHistFitParamA_Set10->SetBinContent(3,2);
   OneDHistFitParamA_Set10->SetBinContent(4,2);
   OneDHistFitParamA_Set10->SetBinContent(5,7);
   OneDHistFitParamA_Set10->SetBinContent(6,5);
   OneDHistFitParamA_Set10->SetBinContent(7,11);
   OneDHistFitParamA_Set10->SetBinContent(8,11);
   OneDHistFitParamA_Set10->SetBinContent(9,212);
   OneDHistFitParamA_Set10->SetBinContent(10,1911);
   OneDHistFitParamA_Set10->SetBinContent(11,1510);
   OneDHistFitParamA_Set10->SetBinContent(12,241);
   OneDHistFitParamA_Set10->SetBinContent(13,17);
   OneDHistFitParamA_Set10->SetBinContent(18,1);
   OneDHistFitParamA_Set10->SetBinContent(25,1);
   OneDHistFitParamA_Set10->SetEntries(4096);
   OneDHistFitParamA_Set10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set10->SetFillColor(ci);
   OneDHistFitParamA_Set10->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set10->SetLineColor(ci);
   OneDHistFitParamA_Set10->SetLineWidth(2);
   OneDHistFitParamA_Set10->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set10->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set10->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set10->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set10->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set10->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set10->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set10->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set10->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set10->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set10->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set10->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set10->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set10->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set10->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set10->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set10->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set10->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
