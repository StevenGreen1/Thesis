{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 14:44:33 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamT_Set12 = new TH1F("OneDHistFitParamT_Set12","",25,0,20);
   OneDHistFitParamT_Set12->SetBinContent(1,2764);
   OneDHistFitParamT_Set12->SetBinContent(2,18);
   OneDHistFitParamT_Set12->SetBinContent(3,11);
   OneDHistFitParamT_Set12->SetBinContent(4,6);
   OneDHistFitParamT_Set12->SetBinContent(5,9);
   OneDHistFitParamT_Set12->SetBinContent(6,9);
   OneDHistFitParamT_Set12->SetBinContent(7,15);
   OneDHistFitParamT_Set12->SetBinContent(8,17);
   OneDHistFitParamT_Set12->SetBinContent(9,16);
   OneDHistFitParamT_Set12->SetBinContent(10,41);
   OneDHistFitParamT_Set12->SetBinContent(11,77);
   OneDHistFitParamT_Set12->SetBinContent(12,70);
   OneDHistFitParamT_Set12->SetBinContent(13,181);
   OneDHistFitParamT_Set12->SetBinContent(14,112);
   OneDHistFitParamT_Set12->SetBinContent(15,174);
   OneDHistFitParamT_Set12->SetBinContent(16,176);
   OneDHistFitParamT_Set12->SetBinContent(17,117);
   OneDHistFitParamT_Set12->SetBinContent(18,131);
   OneDHistFitParamT_Set12->SetBinContent(19,47);
   OneDHistFitParamT_Set12->SetBinContent(20,41);
   OneDHistFitParamT_Set12->SetBinContent(21,16);
   OneDHistFitParamT_Set12->SetBinContent(22,6);
   OneDHistFitParamT_Set12->SetBinContent(23,7);
   OneDHistFitParamT_Set12->SetBinContent(24,2);
   OneDHistFitParamT_Set12->SetBinContent(25,5);
   OneDHistFitParamT_Set12->SetBinContent(26,28);
   OneDHistFitParamT_Set12->SetEntries(4096);
   OneDHistFitParamT_Set12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set12->SetFillColor(ci);
   OneDHistFitParamT_Set12->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamT_Set12->SetLineColor(ci);
   OneDHistFitParamT_Set12->SetLineWidth(2);
   OneDHistFitParamT_Set12->GetXaxis()->SetTitle("Fit Parameter T");
   OneDHistFitParamT_Set12->GetXaxis()->SetRange(1,26);
   OneDHistFitParamT_Set12->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamT_Set12->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set12->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set12->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set12->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set12->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamT_Set12->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set12->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set12->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set12->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamT_Set12->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set12->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamT_Set12->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamT_Set12->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamT_Set12->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamT_Set12->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
