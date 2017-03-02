{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:25 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamB_Set9 = new TH1F("OneDHistFitParamB_Set9","",25,0,10);
   OneDHistFitParamB_Set9->SetBinContent(1,134);
   OneDHistFitParamB_Set9->SetBinContent(2,2);
   OneDHistFitParamB_Set9->SetBinContent(3,55);
   OneDHistFitParamB_Set9->SetBinContent(4,610);
   OneDHistFitParamB_Set9->SetBinContent(5,1237);
   OneDHistFitParamB_Set9->SetBinContent(6,1048);
   OneDHistFitParamB_Set9->SetBinContent(7,704);
   OneDHistFitParamB_Set9->SetBinContent(8,218);
   OneDHistFitParamB_Set9->SetBinContent(9,29);
   OneDHistFitParamB_Set9->SetBinContent(10,10);
   OneDHistFitParamB_Set9->SetBinContent(11,5);
   OneDHistFitParamB_Set9->SetBinContent(12,3);
   OneDHistFitParamB_Set9->SetBinContent(13,7);
   OneDHistFitParamB_Set9->SetBinContent(14,6);
   OneDHistFitParamB_Set9->SetBinContent(15,3);
   OneDHistFitParamB_Set9->SetBinContent(16,2);
   OneDHistFitParamB_Set9->SetBinContent(17,3);
   OneDHistFitParamB_Set9->SetBinContent(18,1);
   OneDHistFitParamB_Set9->SetBinContent(20,1);
   OneDHistFitParamB_Set9->SetBinContent(22,1);
   OneDHistFitParamB_Set9->SetBinContent(23,1);
   OneDHistFitParamB_Set9->SetBinContent(24,1);
   OneDHistFitParamB_Set9->SetBinContent(25,1);
   OneDHistFitParamB_Set9->SetBinContent(26,14);
   OneDHistFitParamB_Set9->SetEntries(4096);
   OneDHistFitParamB_Set9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set9->SetFillColor(ci);
   OneDHistFitParamB_Set9->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set9->SetLineColor(ci);
   OneDHistFitParamB_Set9->SetLineWidth(2);
   OneDHistFitParamB_Set9->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set9->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set9->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set9->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set9->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set9->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set9->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set9->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set9->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set9->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set9->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set9->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set9->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set9->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set9->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set9->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set9->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set9->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
