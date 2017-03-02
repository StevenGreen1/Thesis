{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:28 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamT_Set10 = new TH1F("OneDHistFitParamT_Set10","",25,0,20);
   OneDHistFitParamT_Set10->SetBinContent(0,1);
   OneDHistFitParamT_Set10->SetBinContent(1,2665);
   OneDHistFitParamT_Set10->SetBinContent(2,31);
   OneDHistFitParamT_Set10->SetBinContent(3,7);
   OneDHistFitParamT_Set10->SetBinContent(4,4);
   OneDHistFitParamT_Set10->SetBinContent(5,10);
   OneDHistFitParamT_Set10->SetBinContent(6,9);
   OneDHistFitParamT_Set10->SetBinContent(7,11);
   OneDHistFitParamT_Set10->SetBinContent(8,21);
   OneDHistFitParamT_Set10->SetBinContent(9,23);
   OneDHistFitParamT_Set10->SetBinContent(10,24);
   OneDHistFitParamT_Set10->SetBinContent(11,57);
   OneDHistFitParamT_Set10->SetBinContent(12,96);
   OneDHistFitParamT_Set10->SetBinContent(13,103);
   OneDHistFitParamT_Set10->SetBinContent(14,206);
   OneDHistFitParamT_Set10->SetBinContent(15,93);
   OneDHistFitParamT_Set10->SetBinContent(16,201);
   OneDHistFitParamT_Set10->SetBinContent(17,162);
   OneDHistFitParamT_Set10->SetBinContent(18,107);
   OneDHistFitParamT_Set10->SetBinContent(19,144);
   OneDHistFitParamT_Set10->SetBinContent(20,22);
   OneDHistFitParamT_Set10->SetBinContent(21,55);
   OneDHistFitParamT_Set10->SetBinContent(22,15);
   OneDHistFitParamT_Set10->SetBinContent(23,11);
   OneDHistFitParamT_Set10->SetBinContent(24,11);
   OneDHistFitParamT_Set10->SetBinContent(26,7);
   OneDHistFitParamT_Set10->SetEntries(4096);
   OneDHistFitParamT_Set10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set10->SetFillColor(ci);
   OneDHistFitParamT_Set10->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set10->SetLineColor(ci);
   OneDHistFitParamT_Set10->SetLineWidth(2);
   OneDHistFitParamT_Set10->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set10->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set10->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set10->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set10->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set10->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set10->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set10->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set10->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set10->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set10->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set10->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set10->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set10->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set10->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set10->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set10->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set10->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
