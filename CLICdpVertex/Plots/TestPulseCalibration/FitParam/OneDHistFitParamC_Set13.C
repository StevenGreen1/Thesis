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
   
   TH1F *OneDHistFitParamC_Set13 = new TH1F("OneDHistFitParamC_Set13","",25,0,100);
   OneDHistFitParamC_Set13->SetBinContent(1,397);
   OneDHistFitParamC_Set13->SetBinContent(2,707);
   OneDHistFitParamC_Set13->SetBinContent(3,131);
   OneDHistFitParamC_Set13->SetBinContent(4,41);
   OneDHistFitParamC_Set13->SetBinContent(5,30);
   OneDHistFitParamC_Set13->SetBinContent(6,63);
   OneDHistFitParamC_Set13->SetBinContent(7,142);
   OneDHistFitParamC_Set13->SetBinContent(8,167);
   OneDHistFitParamC_Set13->SetBinContent(9,213);
   OneDHistFitParamC_Set13->SetBinContent(10,194);
   OneDHistFitParamC_Set13->SetBinContent(11,230);
   OneDHistFitParamC_Set13->SetBinContent(12,298);
   OneDHistFitParamC_Set13->SetBinContent(13,345);
   OneDHistFitParamC_Set13->SetBinContent(14,358);
   OneDHistFitParamC_Set13->SetBinContent(15,300);
   OneDHistFitParamC_Set13->SetBinContent(16,209);
   OneDHistFitParamC_Set13->SetBinContent(17,138);
   OneDHistFitParamC_Set13->SetBinContent(18,70);
   OneDHistFitParamC_Set13->SetBinContent(19,34);
   OneDHistFitParamC_Set13->SetBinContent(20,13);
   OneDHistFitParamC_Set13->SetBinContent(21,12);
   OneDHistFitParamC_Set13->SetBinContent(22,3);
   OneDHistFitParamC_Set13->SetBinContent(23,1);
   OneDHistFitParamC_Set13->SetEntries(4096);
   OneDHistFitParamC_Set13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set13->SetFillColor(ci);
   OneDHistFitParamC_Set13->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set13->SetLineColor(ci);
   OneDHistFitParamC_Set13->SetLineWidth(2);
   OneDHistFitParamC_Set13->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set13->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set13->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set13->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set13->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set13->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set13->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set13->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set13->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set13->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set13->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set13->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set13->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set13->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set13->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set13->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set13->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set13->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
