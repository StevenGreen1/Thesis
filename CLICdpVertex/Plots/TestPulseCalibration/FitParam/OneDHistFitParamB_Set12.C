{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:29 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamB_Set12 = new TH1F("OneDHistFitParamB_Set12","",25,0,10);
   OneDHistFitParamB_Set12->SetBinContent(1,146);
   OneDHistFitParamB_Set12->SetBinContent(2,3);
   OneDHistFitParamB_Set12->SetBinContent(3,12);
   OneDHistFitParamB_Set12->SetBinContent(4,262);
   OneDHistFitParamB_Set12->SetBinContent(5,1089);
   OneDHistFitParamB_Set12->SetBinContent(6,810);
   OneDHistFitParamB_Set12->SetBinContent(7,807);
   OneDHistFitParamB_Set12->SetBinContent(8,653);
   OneDHistFitParamB_Set12->SetBinContent(9,152);
   OneDHistFitParamB_Set12->SetBinContent(10,31);
   OneDHistFitParamB_Set12->SetBinContent(11,24);
   OneDHistFitParamB_Set12->SetBinContent(12,24);
   OneDHistFitParamB_Set12->SetBinContent(13,16);
   OneDHistFitParamB_Set12->SetBinContent(14,6);
   OneDHistFitParamB_Set12->SetBinContent(15,4);
   OneDHistFitParamB_Set12->SetBinContent(16,2);
   OneDHistFitParamB_Set12->SetBinContent(17,2);
   OneDHistFitParamB_Set12->SetBinContent(19,4);
   OneDHistFitParamB_Set12->SetBinContent(20,5);
   OneDHistFitParamB_Set12->SetBinContent(23,2);
   OneDHistFitParamB_Set12->SetBinContent(24,4);
   OneDHistFitParamB_Set12->SetBinContent(25,1);
   OneDHistFitParamB_Set12->SetBinContent(26,37);
   OneDHistFitParamB_Set12->SetEntries(4096);
   OneDHistFitParamB_Set12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set12->SetFillColor(ci);
   OneDHistFitParamB_Set12->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set12->SetLineColor(ci);
   OneDHistFitParamB_Set12->SetLineWidth(2);
   OneDHistFitParamB_Set12->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set12->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set12->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set12->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set12->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set12->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set12->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set12->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set12->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set12->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set12->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set12->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set12->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set12->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set12->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set12->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set12->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set12->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
