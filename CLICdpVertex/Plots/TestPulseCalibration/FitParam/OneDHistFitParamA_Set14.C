{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:31 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamA_Set14 = new TH1F("OneDHistFitParamA_Set14","",25,0,0.2);
   OneDHistFitParamA_Set14->SetBinContent(1,168);
   OneDHistFitParamA_Set14->SetBinContent(2,9);
   OneDHistFitParamA_Set14->SetBinContent(3,2);
   OneDHistFitParamA_Set14->SetBinContent(4,11);
   OneDHistFitParamA_Set14->SetBinContent(5,6);
   OneDHistFitParamA_Set14->SetBinContent(6,13);
   OneDHistFitParamA_Set14->SetBinContent(7,17);
   OneDHistFitParamA_Set14->SetBinContent(8,19);
   OneDHistFitParamA_Set14->SetBinContent(9,166);
   OneDHistFitParamA_Set14->SetBinContent(10,2198);
   OneDHistFitParamA_Set14->SetBinContent(11,1395);
   OneDHistFitParamA_Set14->SetBinContent(12,55);
   OneDHistFitParamA_Set14->SetBinContent(13,31);
   OneDHistFitParamA_Set14->SetBinContent(14,3);
   OneDHistFitParamA_Set14->SetBinContent(15,1);
   OneDHistFitParamA_Set14->SetBinContent(16,1);
   OneDHistFitParamA_Set14->SetBinContent(26,1);
   OneDHistFitParamA_Set14->SetEntries(4096);
   OneDHistFitParamA_Set14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set14->SetFillColor(ci);
   OneDHistFitParamA_Set14->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set14->SetLineColor(ci);
   OneDHistFitParamA_Set14->SetLineWidth(2);
   OneDHistFitParamA_Set14->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set14->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set14->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set14->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set14->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set14->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set14->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set14->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set14->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set14->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set14->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set14->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set14->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set14->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set14->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set14->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set14->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set14->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
