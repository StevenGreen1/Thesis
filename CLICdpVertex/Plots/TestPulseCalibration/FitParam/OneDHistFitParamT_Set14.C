{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:33 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamT_Set14 = new TH1F("OneDHistFitParamT_Set14","",25,0,20);
   OneDHistFitParamT_Set14->SetBinContent(1,2638);
   OneDHistFitParamT_Set14->SetBinContent(2,49);
   OneDHistFitParamT_Set14->SetBinContent(3,9);
   OneDHistFitParamT_Set14->SetBinContent(4,7);
   OneDHistFitParamT_Set14->SetBinContent(5,9);
   OneDHistFitParamT_Set14->SetBinContent(6,13);
   OneDHistFitParamT_Set14->SetBinContent(7,12);
   OneDHistFitParamT_Set14->SetBinContent(8,14);
   OneDHistFitParamT_Set14->SetBinContent(9,10);
   OneDHistFitParamT_Set14->SetBinContent(10,16);
   OneDHistFitParamT_Set14->SetBinContent(11,20);
   OneDHistFitParamT_Set14->SetBinContent(12,40);
   OneDHistFitParamT_Set14->SetBinContent(13,66);
   OneDHistFitParamT_Set14->SetBinContent(14,92);
   OneDHistFitParamT_Set14->SetBinContent(15,124);
   OneDHistFitParamT_Set14->SetBinContent(16,147);
   OneDHistFitParamT_Set14->SetBinContent(17,155);
   OneDHistFitParamT_Set14->SetBinContent(18,153);
   OneDHistFitParamT_Set14->SetBinContent(19,137);
   OneDHistFitParamT_Set14->SetBinContent(20,116);
   OneDHistFitParamT_Set14->SetBinContent(21,65);
   OneDHistFitParamT_Set14->SetBinContent(22,76);
   OneDHistFitParamT_Set14->SetBinContent(23,37);
   OneDHistFitParamT_Set14->SetBinContent(24,27);
   OneDHistFitParamT_Set14->SetBinContent(25,15);
   OneDHistFitParamT_Set14->SetBinContent(26,49);
   OneDHistFitParamT_Set14->SetEntries(4096);
   OneDHistFitParamT_Set14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set14->SetFillColor(ci);
   OneDHistFitParamT_Set14->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set14->SetLineColor(ci);
   OneDHistFitParamT_Set14->SetLineWidth(2);
   OneDHistFitParamT_Set14->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set14->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set14->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set14->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set14->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set14->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set14->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set14->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set14->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set14->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set14->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set14->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set14->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set14->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set14->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set14->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set14->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set14->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
