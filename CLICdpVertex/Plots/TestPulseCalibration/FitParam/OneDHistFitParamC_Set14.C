{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:32 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamC_Set14 = new TH1F("OneDHistFitParamC_Set14","",25,0,100);
   OneDHistFitParamC_Set14->SetBinContent(1,436);
   OneDHistFitParamC_Set14->SetBinContent(2,894);
   OneDHistFitParamC_Set14->SetBinContent(3,319);
   OneDHistFitParamC_Set14->SetBinContent(4,47);
   OneDHistFitParamC_Set14->SetBinContent(5,19);
   OneDHistFitParamC_Set14->SetBinContent(6,15);
   OneDHistFitParamC_Set14->SetBinContent(7,22);
   OneDHistFitParamC_Set14->SetBinContent(8,64);
   OneDHistFitParamC_Set14->SetBinContent(9,73);
   OneDHistFitParamC_Set14->SetBinContent(10,99);
   OneDHistFitParamC_Set14->SetBinContent(11,111);
   OneDHistFitParamC_Set14->SetBinContent(12,129);
   OneDHistFitParamC_Set14->SetBinContent(13,216);
   OneDHistFitParamC_Set14->SetBinContent(14,330);
   OneDHistFitParamC_Set14->SetBinContent(15,380);
   OneDHistFitParamC_Set14->SetBinContent(16,373);
   OneDHistFitParamC_Set14->SetBinContent(17,267);
   OneDHistFitParamC_Set14->SetBinContent(18,179);
   OneDHistFitParamC_Set14->SetBinContent(19,72);
   OneDHistFitParamC_Set14->SetBinContent(20,24);
   OneDHistFitParamC_Set14->SetBinContent(21,12);
   OneDHistFitParamC_Set14->SetBinContent(22,3);
   OneDHistFitParamC_Set14->SetBinContent(26,12);
   OneDHistFitParamC_Set14->SetEntries(4096);
   OneDHistFitParamC_Set14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set14->SetFillColor(ci);
   OneDHistFitParamC_Set14->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set14->SetLineColor(ci);
   OneDHistFitParamC_Set14->SetLineWidth(2);
   OneDHistFitParamC_Set14->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set14->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set14->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set14->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set14->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set14->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set14->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set14->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set14->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set14->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set14->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set14->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set14->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set14->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set14->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set14->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set14->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set14->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
