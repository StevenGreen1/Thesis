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
   
   TH1F *OneDHistFitParamB_Set15 = new TH1F("OneDHistFitParamB_Set15","",25,0,10);
   OneDHistFitParamB_Set15->SetBinContent(1,133);
   OneDHistFitParamB_Set15->SetBinContent(2,24);
   OneDHistFitParamB_Set15->SetBinContent(3,276);
   OneDHistFitParamB_Set15->SetBinContent(4,1034);
   OneDHistFitParamB_Set15->SetBinContent(5,1080);
   OneDHistFitParamB_Set15->SetBinContent(6,914);
   OneDHistFitParamB_Set15->SetBinContent(7,401);
   OneDHistFitParamB_Set15->SetBinContent(8,94);
   OneDHistFitParamB_Set15->SetBinContent(9,25);
   OneDHistFitParamB_Set15->SetBinContent(10,15);
   OneDHistFitParamB_Set15->SetBinContent(11,10);
   OneDHistFitParamB_Set15->SetBinContent(12,9);
   OneDHistFitParamB_Set15->SetBinContent(13,9);
   OneDHistFitParamB_Set15->SetBinContent(14,12);
   OneDHistFitParamB_Set15->SetBinContent(15,9);
   OneDHistFitParamB_Set15->SetBinContent(16,5);
   OneDHistFitParamB_Set15->SetBinContent(17,3);
   OneDHistFitParamB_Set15->SetBinContent(18,5);
   OneDHistFitParamB_Set15->SetBinContent(19,7);
   OneDHistFitParamB_Set15->SetBinContent(20,4);
   OneDHistFitParamB_Set15->SetBinContent(21,3);
   OneDHistFitParamB_Set15->SetBinContent(22,1);
   OneDHistFitParamB_Set15->SetBinContent(23,2);
   OneDHistFitParamB_Set15->SetBinContent(25,1);
   OneDHistFitParamB_Set15->SetBinContent(26,20);
   OneDHistFitParamB_Set15->SetEntries(4096);
   OneDHistFitParamB_Set15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set15->SetFillColor(ci);
   OneDHistFitParamB_Set15->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamB_Set15->SetLineColor(ci);
   OneDHistFitParamB_Set15->SetLineWidth(2);
   OneDHistFitParamB_Set15->GetXaxis()->SetTitle("Fit Parameter B");
   OneDHistFitParamB_Set15->GetXaxis()->SetRange(1,26);
   OneDHistFitParamB_Set15->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamB_Set15->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set15->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set15->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set15->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set15->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamB_Set15->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set15->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set15->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set15->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamB_Set15->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set15->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamB_Set15->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamB_Set15->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamB_Set15->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamB_Set15->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
