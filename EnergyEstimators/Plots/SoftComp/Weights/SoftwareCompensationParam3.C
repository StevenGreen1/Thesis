{
//=========Macro generated from canvas: c3/
//=========  (Wed Jul 26 09:01:34 2017) by ROOT version5.34/37
   TCanvas *c3 = new TCanvas("c3", "",10,45,700,500);
   gStyle->SetOptStat(0);
   c3->Range(0,0,1,1);
   c3->SetFillColor(0);
   c3->SetBorderMode(0);
   c3->SetBorderSize(2);
   c3->SetTickx(1);
   c3->SetTicky(1);
   c3->SetLeftMargin(0.25);
   c3->SetBottomMargin(0.25);
   c3->SetFrameLineWidth(2);
   c3->SetFrameBorderMode(0);
   
   TF1 *p3 = new TF1("p3","",0,100);
   p3->SetFillColor(1);
   p3->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   p3->SetLineColor(ci);
   p3->SetLineWidth(2);
   p3->GetXaxis()->SetTitle("#it{E}_{Raw} [GeV]");
   p3->GetXaxis()->SetNdivisions(505);
   p3->GetXaxis()->SetLabelFont(132);
   p3->GetXaxis()->SetLabelSize(0.114);
   p3->GetXaxis()->SetTitleSize(0.114);
   p3->GetXaxis()->SetTitleFont(132);
   p3->GetYaxis()->SetTitle("#it{p}_{3}");
   p3->GetYaxis()->SetNdivisions(5);
   p3->GetYaxis()->SetLabelFont(132);
   p3->GetYaxis()->SetLabelSize(0.114);
   p3->GetYaxis()->SetTitleSize(0.114);
   p3->GetYaxis()->SetTitleFont(132);
   p3->SetParameter(0,0.168614);
   p3->SetParError(0,0);
   p3->SetParLimits(0,0.168614,0.168614);
   p3->SetParameter(1,0.224318);
   p3->SetParError(1,0);
   p3->SetParLimits(1,0.224318,0.224318);
   p3->SetParameter(2,-0.0872853);
   p3->SetParError(2,0);
   p3->SetParLimits(2,-0.0872853,-0.0872853);
   p3->Draw("");
   c3->Modified();
   c3->cd();
   c3->SetSelected(c3);
}
