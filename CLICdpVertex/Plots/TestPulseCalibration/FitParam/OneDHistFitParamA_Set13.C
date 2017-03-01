{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:31 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamA_Set13 = new TH1F("OneDHistFitParamA_Set13","",25,0,0.2);
   OneDHistFitParamA_Set13->SetBinContent(1,165);
   OneDHistFitParamA_Set13->SetBinContent(2,4);
   OneDHistFitParamA_Set13->SetBinContent(3,5);
   OneDHistFitParamA_Set13->SetBinContent(4,5);
   OneDHistFitParamA_Set13->SetBinContent(5,7);
   OneDHistFitParamA_Set13->SetBinContent(6,12);
   OneDHistFitParamA_Set13->SetBinContent(7,13);
   OneDHistFitParamA_Set13->SetBinContent(8,33);
   OneDHistFitParamA_Set13->SetBinContent(9,1249);
   OneDHistFitParamA_Set13->SetBinContent(10,2146);
   OneDHistFitParamA_Set13->SetBinContent(11,439);
   OneDHistFitParamA_Set13->SetBinContent(12,1);
   OneDHistFitParamA_Set13->SetBinContent(13,13);
   OneDHistFitParamA_Set13->SetBinContent(25,1);
   OneDHistFitParamA_Set13->SetBinContent(26,3);
   OneDHistFitParamA_Set13->SetEntries(4096);
   OneDHistFitParamA_Set13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set13->SetFillColor(ci);
   OneDHistFitParamA_Set13->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set13->SetLineColor(ci);
   OneDHistFitParamA_Set13->SetLineWidth(2);
   OneDHistFitParamA_Set13->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set13->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set13->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set13->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set13->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set13->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set13->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set13->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set13->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set13->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set13->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set13->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set13->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set13->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set13->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set13->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set13->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set13->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
