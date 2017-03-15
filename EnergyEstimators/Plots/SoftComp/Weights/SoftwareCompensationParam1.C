{
//=========Macro generated from canvas: c1/
//=========  (Wed Mar 15 12:19:50 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "",10,45,700,500);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetBottomMargin(0.2);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TF1 *p1 = new TF1("p1","",0,100);
   p1->SetFillColor(1);
   p1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   p1->SetLineColor(ci);
   p1->SetLineWidth(2);
   p1->GetXaxis()->SetTitle("#it{E}_{Raw} [GeV]");
   p1->GetXaxis()->SetNdivisions(505);
   p1->GetXaxis()->SetLabelFont(132);
   p1->GetXaxis()->SetLabelSize(0.076);
   p1->GetXaxis()->SetTitleSize(0.076);
   p1->GetXaxis()->SetTitleFont(132);
   p1->GetYaxis()->SetTitle("#it{p}_{1}");
   p1->GetYaxis()->SetLabelFont(132);
   p1->GetYaxis()->SetLabelSize(0.076);
   p1->GetYaxis()->SetTitleSize(0.076);
   p1->GetYaxis()->SetTitleFont(132);
   p1->SetParameter(0,2.49632);
   p1->SetParError(0,0);
   p1->SetParLimits(0,2.49632,2.49632);
   p1->SetParameter(1,-0.0697302);
   p1->SetParError(1,0);
   p1->SetParLimits(1,-0.0697302,-0.0697302);
   p1->SetParameter(2,0.000946986);
   p1->SetParError(2,0);
   p1->SetParLimits(2,0.000946986,0.000946986);
   p1->Draw("");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
