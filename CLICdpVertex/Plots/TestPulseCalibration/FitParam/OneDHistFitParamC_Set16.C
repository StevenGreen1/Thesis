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
   
   TH1F *OneDHistFitParamC_Set16 = new TH1F("OneDHistFitParamC_Set16","",25,0,100);
   OneDHistFitParamC_Set16->SetBinContent(1,860);
   OneDHistFitParamC_Set16->SetBinContent(2,289);
   OneDHistFitParamC_Set16->SetBinContent(3,51);
   OneDHistFitParamC_Set16->SetBinContent(4,38);
   OneDHistFitParamC_Set16->SetBinContent(5,71);
   OneDHistFitParamC_Set16->SetBinContent(6,176);
   OneDHistFitParamC_Set16->SetBinContent(7,237);
   OneDHistFitParamC_Set16->SetBinContent(8,195);
   OneDHistFitParamC_Set16->SetBinContent(9,138);
   OneDHistFitParamC_Set16->SetBinContent(10,127);
   OneDHistFitParamC_Set16->SetBinContent(11,222);
   OneDHistFitParamC_Set16->SetBinContent(12,282);
   OneDHistFitParamC_Set16->SetBinContent(13,436);
   OneDHistFitParamC_Set16->SetBinContent(14,397);
   OneDHistFitParamC_Set16->SetBinContent(15,300);
   OneDHistFitParamC_Set16->SetBinContent(16,168);
   OneDHistFitParamC_Set16->SetBinContent(17,74);
   OneDHistFitParamC_Set16->SetBinContent(18,27);
   OneDHistFitParamC_Set16->SetBinContent(19,7);
   OneDHistFitParamC_Set16->SetBinContent(20,1);
   OneDHistFitParamC_Set16->SetEntries(4096);
   OneDHistFitParamC_Set16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set16->SetFillColor(ci);
   OneDHistFitParamC_Set16->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   OneDHistFitParamC_Set16->SetLineColor(ci);
   OneDHistFitParamC_Set16->SetLineWidth(2);
   OneDHistFitParamC_Set16->GetXaxis()->SetTitle("Fit Parameter C");
   OneDHistFitParamC_Set16->GetXaxis()->SetRange(1,26);
   OneDHistFitParamC_Set16->GetXaxis()->SetNdivisions(505);
   OneDHistFitParamC_Set16->GetXaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set16->GetXaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set16->GetXaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set16->GetXaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set16->GetYaxis()->SetTitle("Entries");
   OneDHistFitParamC_Set16->GetYaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set16->GetYaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set16->GetYaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set16->GetYaxis()->SetTitleOffset(1.2);
   OneDHistFitParamC_Set16->GetYaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set16->GetZaxis()->SetLabelFont(132);
   OneDHistFitParamC_Set16->GetZaxis()->SetLabelSize(0.05);
   OneDHistFitParamC_Set16->GetZaxis()->SetTitleSize(0.05);
   OneDHistFitParamC_Set16->GetZaxis()->SetTitleFont(132);
   OneDHistFitParamC_Set16->Draw("");
   Canvas->Modified();
   Canvas->cd();
   Canvas->SetSelected(Canvas);
}
