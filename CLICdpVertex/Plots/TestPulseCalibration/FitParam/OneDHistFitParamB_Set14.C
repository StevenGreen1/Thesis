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
   
   TH1F *OneDHistFitParamB_Set14 = new TH1F("OneDHistFitParamB_Set14","",25,0,10);
   OneDHistFitParamB_Set14->SetBinContent(1,199);
   OneDHistFitParamB_Set14->SetBinContent(2,21);
   OneDHistFitParamB_Set14->SetBinContent(3,130);
   OneDHistFitParamB_Set14->SetBinContent(4,626);
   OneDHistFitParamB_Set14->SetBinContent(5,1101);
   OneDHistFitParamB_Set14->SetBinContent(6,837);
   OneDHistFitParamB_Set14->SetBinContent(7,705);
   OneDHistFitParamB_Set14->SetBinContent(8,297);
   OneDHistFitParamB_Set14->SetBinContent(9,71);
   OneDHistFitParamB_Set14->SetBinContent(10,15);
   OneDHistFitParamB_Set14->SetBinContent(11,18);
   OneDHistFitParamB_Set14->SetBinContent(12,7);
   OneDHistFitParamB_Set14->SetBinContent(13,9);
   OneDHistFitParamB_Set14->SetBinContent(14,2);
   OneDHistFitParamB_Set14->SetBinContent(15,6);
   OneDHistFitParamB_Set14->SetBinContent(16,2);
   OneDHistFitParamB_Set14->SetBinContent(17,2);
   OneDHistFitParamB_Set14->SetBinContent(18,2);
   OneDHistFitParamB_Set14->SetBinContent(19,2);
   OneDHistFitParamB_Set14->SetBinContent(20,1);
   OneDHistFitParamB_Set14->SetBinContent(21,5);
   OneDHistFitParamB_Set14->SetBinContent(23,1);
   OneDHistFitParamB_Set14->SetBinContent(25,1);
   OneDHistFitParamB_Set14->SetBinContent(26,36);
   OneDHistFitParamB_Set14->SetEntries(4096);
   OneDHistFitParamB_Set14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set14->SetFillColor(ci);
   OneDHistFitParamB_Set14->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set14->SetLineColor(ci);
   OneDHistFitParamB_Set14->SetLineWidth(2);
   OneDHistFitParamB_Set14->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set14->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set14->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set14->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set14->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set14->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set14->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set14->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set14->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set14->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set14->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set14->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set14->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set14->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set14->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set14->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set14->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set14->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
