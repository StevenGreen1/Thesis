{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:36 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamT_Set16 = new TH1F("OneDHistFitParamT_Set16","",25,0,20);
   OneDHistFitParamT_Set16->SetBinContent(1,3042);
   OneDHistFitParamT_Set16->SetBinContent(2,21);
   OneDHistFitParamT_Set16->SetBinContent(3,5);
   OneDHistFitParamT_Set16->SetBinContent(4,2);
   OneDHistFitParamT_Set16->SetBinContent(5,3);
   OneDHistFitParamT_Set16->SetBinContent(6,7);
   OneDHistFitParamT_Set16->SetBinContent(7,5);
   OneDHistFitParamT_Set16->SetBinContent(8,7);
   OneDHistFitParamT_Set16->SetBinContent(9,13);
   OneDHistFitParamT_Set16->SetBinContent(10,10);
   OneDHistFitParamT_Set16->SetBinContent(11,26);
   OneDHistFitParamT_Set16->SetBinContent(12,50);
   OneDHistFitParamT_Set16->SetBinContent(13,46);
   OneDHistFitParamT_Set16->SetBinContent(14,81);
   OneDHistFitParamT_Set16->SetBinContent(15,60);
   OneDHistFitParamT_Set16->SetBinContent(16,144);
   OneDHistFitParamT_Set16->SetBinContent(17,66);
   OneDHistFitParamT_Set16->SetBinContent(18,117);
   OneDHistFitParamT_Set16->SetBinContent(19,116);
   OneDHistFitParamT_Set16->SetBinContent(20,62);
   OneDHistFitParamT_Set16->SetBinContent(21,105);
   OneDHistFitParamT_Set16->SetBinContent(22,13);
   OneDHistFitParamT_Set16->SetBinContent(23,28);
   OneDHistFitParamT_Set16->SetBinContent(24,21);
   OneDHistFitParamT_Set16->SetBinContent(25,17);
   OneDHistFitParamT_Set16->SetBinContent(26,29);
   OneDHistFitParamT_Set16->SetEntries(4096);
   OneDHistFitParamT_Set16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set16->SetFillColor(ci);
   OneDHistFitParamT_Set16->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set16->SetLineColor(ci);
   OneDHistFitParamT_Set16->SetLineWidth(2);
   OneDHistFitParamT_Set16->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set16->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set16->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set16->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set16->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set16->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set16->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set16->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set16->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set16->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set16->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set16->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set16->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set16->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set16->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set16->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set16->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set16->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
