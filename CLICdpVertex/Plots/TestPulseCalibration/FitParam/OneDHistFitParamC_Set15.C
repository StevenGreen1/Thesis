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
   
   TH1F *OneDHistFitParamC_Set15 = new TH1F("OneDHistFitParamC_Set15","",25,0,100);
   OneDHistFitParamC_Set15->SetBinContent(1,1567);
   OneDHistFitParamC_Set15->SetBinContent(2,388);
   OneDHistFitParamC_Set15->SetBinContent(3,25);
   OneDHistFitParamC_Set15->SetBinContent(4,18);
   OneDHistFitParamC_Set15->SetBinContent(5,7);
   OneDHistFitParamC_Set15->SetBinContent(6,11);
   OneDHistFitParamC_Set15->SetBinContent(7,24);
   OneDHistFitParamC_Set15->SetBinContent(8,18);
   OneDHistFitParamC_Set15->SetBinContent(9,37);
   OneDHistFitParamC_Set15->SetBinContent(10,56);
   OneDHistFitParamC_Set15->SetBinContent(11,129);
   OneDHistFitParamC_Set15->SetBinContent(12,230);
   OneDHistFitParamC_Set15->SetBinContent(13,381);
   OneDHistFitParamC_Set15->SetBinContent(14,381);
   OneDHistFitParamC_Set15->SetBinContent(15,349);
   OneDHistFitParamC_Set15->SetBinContent(16,235);
   OneDHistFitParamC_Set15->SetBinContent(17,134);
   OneDHistFitParamC_Set15->SetBinContent(18,58);
   OneDHistFitParamC_Set15->SetBinContent(19,17);
   OneDHistFitParamC_Set15->SetBinContent(20,12);
   OneDHistFitParamC_Set15->SetBinContent(21,5);
   OneDHistFitParamC_Set15->SetBinContent(22,6);
   OneDHistFitParamC_Set15->SetBinContent(23,1);
   OneDHistFitParamC_Set15->SetBinContent(24,2);
   OneDHistFitParamC_Set15->SetBinContent(25,3);
   OneDHistFitParamC_Set15->SetBinContent(26,2);
   OneDHistFitParamC_Set15->SetEntries(4096);
   OneDHistFitParamC_Set15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set15->SetFillColor(ci);
   OneDHistFitParamC_Set15->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set15->SetLineColor(ci);
   OneDHistFitParamC_Set15->SetLineWidth(2);
   OneDHistFitParamC_Set15->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set15->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set15->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set15->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set15->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set15->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set15->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set15->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set15->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set15->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set15->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set15->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set15->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set15->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set15->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set15->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set15->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set15->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
