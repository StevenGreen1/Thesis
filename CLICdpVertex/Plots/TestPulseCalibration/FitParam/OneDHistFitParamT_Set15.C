{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:34 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamT_Set15 = new TH1F("OneDHistFitParamT_Set15","",25,0,20);
   OneDHistFitParamT_Set15->SetBinContent(1,2240);
   OneDHistFitParamT_Set15->SetBinContent(2,30);
   OneDHistFitParamT_Set15->SetBinContent(3,11);
   OneDHistFitParamT_Set15->SetBinContent(4,12);
   OneDHistFitParamT_Set15->SetBinContent(5,11);
   OneDHistFitParamT_Set15->SetBinContent(6,4);
   OneDHistFitParamT_Set15->SetBinContent(7,7);
   OneDHistFitParamT_Set15->SetBinContent(8,7);
   OneDHistFitParamT_Set15->SetBinContent(9,8);
   OneDHistFitParamT_Set15->SetBinContent(10,17);
   OneDHistFitParamT_Set15->SetBinContent(11,20);
   OneDHistFitParamT_Set15->SetBinContent(12,19);
   OneDHistFitParamT_Set15->SetBinContent(13,51);
   OneDHistFitParamT_Set15->SetBinContent(14,91);
   OneDHistFitParamT_Set15->SetBinContent(15,32);
   OneDHistFitParamT_Set15->SetBinContent(16,221);
   OneDHistFitParamT_Set15->SetBinContent(17,81);
   OneDHistFitParamT_Set15->SetBinContent(18,187);
   OneDHistFitParamT_Set15->SetBinContent(19,323);
   OneDHistFitParamT_Set15->SetBinContent(20,104);
   OneDHistFitParamT_Set15->SetBinContent(21,272);
   OneDHistFitParamT_Set15->SetBinContent(22,107);
   OneDHistFitParamT_Set15->SetBinContent(23,114);
   OneDHistFitParamT_Set15->SetBinContent(24,65);
   OneDHistFitParamT_Set15->SetBinContent(25,18);
   OneDHistFitParamT_Set15->SetBinContent(26,44);
   OneDHistFitParamT_Set15->SetEntries(4096);
   OneDHistFitParamT_Set15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set15->SetFillColor(ci);
   OneDHistFitParamT_Set15->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set15->SetLineColor(ci);
   OneDHistFitParamT_Set15->SetLineWidth(2);
   OneDHistFitParamT_Set15->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set15->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set15->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set15->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set15->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set15->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set15->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set15->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set15->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set15->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set15->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set15->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set15->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set15->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set15->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set15->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set15->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set15->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
