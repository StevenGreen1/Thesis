{
//=========Macro generated from canvas: Canvas/
//=========  (Thu Mar  2 09:15:35 2017) by ROOT version5.34/37
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
   
   TH1F *OneDHistFitParamB_Set16 = new TH1F("OneDHistFitParamB_Set16","",25,0,10);
   OneDHistFitParamB_Set16->SetBinContent(1,152);
   OneDHistFitParamB_Set16->SetBinContent(2,27);
   OneDHistFitParamB_Set16->SetBinContent(3,226);
   OneDHistFitParamB_Set16->SetBinContent(4,1022);
   OneDHistFitParamB_Set16->SetBinContent(5,868);
   OneDHistFitParamB_Set16->SetBinContent(6,680);
   OneDHistFitParamB_Set16->SetBinContent(7,878);
   OneDHistFitParamB_Set16->SetBinContent(8,225);
   OneDHistFitParamB_Set16->SetBinContent(9,3);
   OneDHistFitParamB_Set16->SetBinContent(10,5);
   OneDHistFitParamB_Set16->SetBinContent(11,2);
   OneDHistFitParamB_Set16->SetBinContent(12,1);
   OneDHistFitParamB_Set16->SetBinContent(13,1);
   OneDHistFitParamB_Set16->SetBinContent(14,2);
   OneDHistFitParamB_Set16->SetBinContent(15,1);
   OneDHistFitParamB_Set16->SetBinContent(24,1);
   OneDHistFitParamB_Set16->SetBinContent(26,2);
   OneDHistFitParamB_Set16->SetEntries(4096);
   OneDHistFitParamB_Set16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set16->SetFillColor(ci);
   OneDHistFitParamB_Set16->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set16->SetLineColor(ci);
   OneDHistFitParamB_Set16->SetLineWidth(2);
   OneDHistFitParamB_Set16->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set16->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set16->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set16->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set16->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set16->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set16->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set16->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set16->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set16->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set16->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set16->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set16->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set16->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set16->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set16->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set16->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set16->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
