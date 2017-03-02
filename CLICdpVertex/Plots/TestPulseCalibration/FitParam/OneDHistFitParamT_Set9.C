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
   
   TH1F *OneDHistFitParamT_Set9 = new TH1F("OneDHistFitParamT_Set9","",25,0,20);
   OneDHistFitParamT_Set9->SetBinContent(0,1);
   OneDHistFitParamT_Set9->SetBinContent(1,2227);
   OneDHistFitParamT_Set9->SetBinContent(2,24);
   OneDHistFitParamT_Set9->SetBinContent(3,9);
   OneDHistFitParamT_Set9->SetBinContent(4,18);
   OneDHistFitParamT_Set9->SetBinContent(5,16);
   OneDHistFitParamT_Set9->SetBinContent(6,7);
   OneDHistFitParamT_Set9->SetBinContent(7,8);
   OneDHistFitParamT_Set9->SetBinContent(8,10);
   OneDHistFitParamT_Set9->SetBinContent(9,5);
   OneDHistFitParamT_Set9->SetBinContent(10,9);
   OneDHistFitParamT_Set9->SetBinContent(11,27);
   OneDHistFitParamT_Set9->SetBinContent(12,18);
   OneDHistFitParamT_Set9->SetBinContent(13,48);
   OneDHistFitParamT_Set9->SetBinContent(14,90);
   OneDHistFitParamT_Set9->SetBinContent(15,80);
   OneDHistFitParamT_Set9->SetBinContent(16,203);
   OneDHistFitParamT_Set9->SetBinContent(17,101);
   OneDHistFitParamT_Set9->SetBinContent(18,232);
   OneDHistFitParamT_Set9->SetBinContent(19,222);
   OneDHistFitParamT_Set9->SetBinContent(20,162);
   OneDHistFitParamT_Set9->SetBinContent(21,253);
   OneDHistFitParamT_Set9->SetBinContent(22,66);
   OneDHistFitParamT_Set9->SetBinContent(23,127);
   OneDHistFitParamT_Set9->SetBinContent(24,42);
   OneDHistFitParamT_Set9->SetBinContent(25,37);
   OneDHistFitParamT_Set9->SetBinContent(26,54);
   OneDHistFitParamT_Set9->SetEntries(4096);
   OneDHistFitParamT_Set9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set9->SetFillColor(ci);
   OneDHistFitParamT_Set9->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set9->SetLineColor(ci);
   OneDHistFitParamT_Set9->SetLineWidth(2);
   OneDHistFitParamT_Set9->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set9->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set9->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set9->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set9->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set9->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set9->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set9->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set9->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set9->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set9->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set9->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set9->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set9->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set9->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set9->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set9->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set9->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
