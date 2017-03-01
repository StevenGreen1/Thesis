{
//=========Macro generated from canvas: Canvas/
//=========  (Wed Mar  1 16:25:35 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamA_Set16 = new TH1F("OneDHistFitParamA_Set16","",25,0,0.2);
   OneDHistFitParamA_Set16->SetBinContent(1,131);
   OneDHistFitParamA_Set16->SetBinContent(2,2);
   OneDHistFitParamA_Set16->SetBinContent(4,1);
   OneDHistFitParamA_Set16->SetBinContent(5,1);
   OneDHistFitParamA_Set16->SetBinContent(6,2);
   OneDHistFitParamA_Set16->SetBinContent(7,4);
   OneDHistFitParamA_Set16->SetBinContent(8,4);
   OneDHistFitParamA_Set16->SetBinContent(9,762);
   OneDHistFitParamA_Set16->SetBinContent(10,2382);
   OneDHistFitParamA_Set16->SetBinContent(11,763);
   OneDHistFitParamA_Set16->SetBinContent(12,28);
   OneDHistFitParamA_Set16->SetBinContent(13,16);
   OneDHistFitParamA_Set16->SetEntries(4096);
   OneDHistFitParamA_Set16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set16->SetFillColor(ci);
   OneDHistFitParamA_Set16->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamA_Set16->SetLineColor(ci);
   OneDHistFitParamA_Set16->SetLineWidth(2);
   OneDHistFitParamA_Set16->GetXaxis()->SetTitle("Fit Parameter A");
   OneDHistFitParamA_Set16->GetXaxis()->SetRange(1,26);
   OneDHistFitParamA_Set16->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamA_Set16->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set16->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set16->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set16->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set16->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamA_Set16->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set16->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set16->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set16->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamA_Set16->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set16->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamA_Set16->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamA_Set16->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamA_Set16->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamA_Set16->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
