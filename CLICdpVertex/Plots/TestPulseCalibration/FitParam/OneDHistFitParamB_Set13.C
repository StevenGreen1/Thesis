{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:31 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamB_Set13 = new TH1F("OneDHistFitParamB_Set13","",25,0,10);
   OneDHistFitParamB_Set13->SetBinContent(1,150);
   OneDHistFitParamB_Set13->SetBinContent(2,6);
   OneDHistFitParamB_Set13->SetBinContent(3,45);
   OneDHistFitParamB_Set13->SetBinContent(4,544);
   OneDHistFitParamB_Set13->SetBinContent(5,1182);
   OneDHistFitParamB_Set13->SetBinContent(6,698);
   OneDHistFitParamB_Set13->SetBinContent(7,804);
   OneDHistFitParamB_Set13->SetBinContent(8,470);
   OneDHistFitParamB_Set13->SetBinContent(9,99);
   OneDHistFitParamB_Set13->SetBinContent(10,15);
   OneDHistFitParamB_Set13->SetBinContent(11,11);
   OneDHistFitParamB_Set13->SetBinContent(12,12);
   OneDHistFitParamB_Set13->SetBinContent(13,13);
   OneDHistFitParamB_Set13->SetBinContent(14,8);
   OneDHistFitParamB_Set13->SetBinContent(15,2);
   OneDHistFitParamB_Set13->SetBinContent(16,2);
   OneDHistFitParamB_Set13->SetBinContent(17,1);
   OneDHistFitParamB_Set13->SetBinContent(18,1);
   OneDHistFitParamB_Set13->SetBinContent(20,2);
   OneDHistFitParamB_Set13->SetBinContent(21,1);
   OneDHistFitParamB_Set13->SetBinContent(24,3);
   OneDHistFitParamB_Set13->SetBinContent(25,1);
   OneDHistFitParamB_Set13->SetBinContent(26,26);
   OneDHistFitParamB_Set13->SetEntries(4096);
   OneDHistFitParamB_Set13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set13->SetFillColor(ci);
   OneDHistFitParamB_Set13->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set13->SetLineColor(ci);
   OneDHistFitParamB_Set13->SetLineWidth(2);
   OneDHistFitParamB_Set13->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set13->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set13->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set13->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set13->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set13->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set13->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set13->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set13->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set13->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set13->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set13->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set13->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set13->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set13->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set13->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set13->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set13->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
