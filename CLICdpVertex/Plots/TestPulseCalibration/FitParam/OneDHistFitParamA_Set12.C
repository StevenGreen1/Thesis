{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 14:44:32 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamA_Set12 = new TH1F("OneDHistFitParamA_Set12","",25,0,0.2);
   OneDHistFitParamA_Set12->SetBinContent(1,191);
   OneDHistFitParamA_Set12->SetBinContent(2,7);
   OneDHistFitParamA_Set12->SetBinContent(3,11);
   OneDHistFitParamA_Set12->SetBinContent(4,14);
   OneDHistFitParamA_Set12->SetBinContent(5,7);
   OneDHistFitParamA_Set12->SetBinContent(6,20);
   OneDHistFitParamA_Set12->SetBinContent(7,29);
   OneDHistFitParamA_Set12->SetBinContent(8,40);
   OneDHistFitParamA_Set12->SetBinContent(9,511);
   OneDHistFitParamA_Set12->SetBinContent(10,2107);
   OneDHistFitParamA_Set12->SetBinContent(11,1095);
   OneDHistFitParamA_Set12->SetBinContent(12,48);
   OneDHistFitParamA_Set12->SetBinContent(13,14);
   OneDHistFitParamA_Set12->SetBinContent(21,1);
   OneDHistFitParamA_Set12->SetBinContent(26,1);
   OneDHistFitParamA_Set12->SetEntries(4096);
   OneDHistFitParamA_Set12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set12->SetFillColor(ci);
   OneDHistFitParamA_Set12->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set12->SetLineColor(ci);
   OneDHistFitParamA_Set12->SetLineWidth(2);
   OneDHistFitParamA_Set12->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set12->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set12->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set12->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set12->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set12->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set12->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set12->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set12->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set12->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set12->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set12->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set12->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set12->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set12->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set12->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set12->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set12->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
