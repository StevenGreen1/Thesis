{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 14:44:35 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamT_Set13 = new TH1F("OneDHistFitParamT_Set13","",25,0,20);
   OneDHistFitParamT_Set13->SetBinContent(0,1);
   OneDHistFitParamT_Set13->SetBinContent(1,2994);
   OneDHistFitParamT_Set13->SetBinContent(2,27);
   OneDHistFitParamT_Set13->SetBinContent(3,5);
   OneDHistFitParamT_Set13->SetBinContent(4,6);
   OneDHistFitParamT_Set13->SetBinContent(5,4);
   OneDHistFitParamT_Set13->SetBinContent(6,4);
   OneDHistFitParamT_Set13->SetBinContent(7,12);
   OneDHistFitParamT_Set13->SetBinContent(8,15);
   OneDHistFitParamT_Set13->SetBinContent(9,14);
   OneDHistFitParamT_Set13->SetBinContent(10,15);
   OneDHistFitParamT_Set13->SetBinContent(11,38);
   OneDHistFitParamT_Set13->SetBinContent(12,47);
   OneDHistFitParamT_Set13->SetBinContent(13,73);
   OneDHistFitParamT_Set13->SetBinContent(14,62);
   OneDHistFitParamT_Set13->SetBinContent(15,155);
   OneDHistFitParamT_Set13->SetBinContent(16,108);
   OneDHistFitParamT_Set13->SetBinContent(17,110);
   OneDHistFitParamT_Set13->SetBinContent(18,129);
   OneDHistFitParamT_Set13->SetBinContent(19,69);
   OneDHistFitParamT_Set13->SetBinContent(20,73);
   OneDHistFitParamT_Set13->SetBinContent(21,38);
   OneDHistFitParamT_Set13->SetBinContent(22,33);
   OneDHistFitParamT_Set13->SetBinContent(23,22);
   OneDHistFitParamT_Set13->SetBinContent(24,17);
   OneDHistFitParamT_Set13->SetBinContent(25,9);
   OneDHistFitParamT_Set13->SetBinContent(26,16);
   OneDHistFitParamT_Set13->SetEntries(4096);
   OneDHistFitParamT_Set13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set13->SetFillColor(ci);
   OneDHistFitParamT_Set13->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set13->SetLineColor(ci);
   OneDHistFitParamT_Set13->SetLineWidth(2);
   OneDHistFitParamT_Set13->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set13->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set13->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set13->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set13->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set13->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set13->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set13->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set13->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set13->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set13->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set13->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set13->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set13->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set13->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set13->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set13->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set13->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
