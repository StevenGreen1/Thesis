{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:33 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamA_Set15 = new TH1F("OneDHistFitParamA_Set15","",25,0,0.2);
   OneDHistFitParamA_Set15->SetBinContent(1,166);
   OneDHistFitParamA_Set15->SetBinContent(2,8);
   OneDHistFitParamA_Set15->SetBinContent(3,6);
   OneDHistFitParamA_Set15->SetBinContent(4,3);
   OneDHistFitParamA_Set15->SetBinContent(5,10);
   OneDHistFitParamA_Set15->SetBinContent(6,21);
   OneDHistFitParamA_Set15->SetBinContent(7,18);
   OneDHistFitParamA_Set15->SetBinContent(8,9);
   OneDHistFitParamA_Set15->SetBinContent(9,7);
   OneDHistFitParamA_Set15->SetBinContent(10,199);
   OneDHistFitParamA_Set15->SetBinContent(11,1497);
   OneDHistFitParamA_Set15->SetBinContent(12,1698);
   OneDHistFitParamA_Set15->SetBinContent(13,448);
   OneDHistFitParamA_Set15->SetBinContent(14,6);
   OneDHistFitParamA_Set15->SetEntries(4096);
   OneDHistFitParamA_Set15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set15->SetFillColor(ci);
   OneDHistFitParamA_Set15->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set15->SetLineColor(ci);
   OneDHistFitParamA_Set15->SetLineWidth(2);
   OneDHistFitParamA_Set15->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set15->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set15->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set15->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set15->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set15->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set15->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set15->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set15->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set15->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set15->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set15->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set15->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set15->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set15->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set15->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set15->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set15->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
