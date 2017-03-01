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
   
   TH1F *OneDHistFitParamC_Set12 = new TH1F("OneDHistFitParamC_Set12","",25,0,100);
   OneDHistFitParamC_Set12->SetBinContent(1,518);
   OneDHistFitParamC_Set12->SetBinContent(2,903);
   OneDHistFitParamC_Set12->SetBinContent(3,117);
   OneDHistFitParamC_Set12->SetBinContent(4,43);
   OneDHistFitParamC_Set12->SetBinContent(5,36);
   OneDHistFitParamC_Set12->SetBinContent(6,49);
   OneDHistFitParamC_Set12->SetBinContent(7,70);
   OneDHistFitParamC_Set12->SetBinContent(8,120);
   OneDHistFitParamC_Set12->SetBinContent(9,143);
   OneDHistFitParamC_Set12->SetBinContent(10,169);
   OneDHistFitParamC_Set12->SetBinContent(11,224);
   OneDHistFitParamC_Set12->SetBinContent(12,272);
   OneDHistFitParamC_Set12->SetBinContent(13,364);
   OneDHistFitParamC_Set12->SetBinContent(14,351);
   OneDHistFitParamC_Set12->SetBinContent(15,277);
   OneDHistFitParamC_Set12->SetBinContent(16,195);
   OneDHistFitParamC_Set12->SetBinContent(17,128);
   OneDHistFitParamC_Set12->SetBinContent(18,57);
   OneDHistFitParamC_Set12->SetBinContent(19,37);
   OneDHistFitParamC_Set12->SetBinContent(20,16);
   OneDHistFitParamC_Set12->SetBinContent(21,6);
   OneDHistFitParamC_Set12->SetBinContent(26,1);
   OneDHistFitParamC_Set12->SetEntries(4096);
   OneDHistFitParamC_Set12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set12->SetFillColor(ci);
   OneDHistFitParamC_Set12->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set12->SetLineColor(ci);
   OneDHistFitParamC_Set12->SetLineWidth(2);
   OneDHistFitParamC_Set12->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set12->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set12->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set12->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set12->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set12->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set12->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set12->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set12->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set12->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set12->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set12->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set12->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set12->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set12->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set12->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set12->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set12->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
