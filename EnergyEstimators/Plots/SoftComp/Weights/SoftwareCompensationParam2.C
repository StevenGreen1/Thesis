{
//=========Macro generated from canvas: c2/
//=========  (Wed Mar 15 12:19:50 2017) by ROOT version5.34/37
   TCanvas *c2 = new TCanvas("c2", "",10,45,700,500);
   gStyle->SetOptStat(0);
   c2->Range(0,0,1,1);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.15);
   c2->SetBottomMargin(0.2);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   
   TF1 *p2 = new TF1("p2","",0,100);
   p2->SetFillColor(1);
   p2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   p2->SetLineColor(ci);
   p2->SetLineWidth(2);
   p2->GetXaxis()->SetTitle("#it{E}_{Raw} [GeV]");
   p2->GetXaxis()->SetNdivisions(505);
   p2->GetXaxis()->SetLabelFont(132);
   p2->GetXaxis()->SetLabelSize(0.076);
   p2->GetXaxis()->SetTitleSize(0.076);
   p2->GetXaxis()->SetTitleFont(132);
   p2->GetYaxis()->SetTitle("#it{p}_{2}");
   p2->GetYaxis()->SetLabelFont(132);
   p2->GetYaxis()->SetLabelSize(0.076);
   p2->GetYaxis()->SetTitleSize(0.076);
   p2->GetYaxis()->SetTitleFont(132);
   p2->SetParameter(0,-0.112311);
   p2->SetParError(0,0);
   p2->SetParLimits(0,-0.112311,-0.112311);
   p2->SetParameter(1,0.0028182);
   p2->SetParError(1,0);
   p2->SetParLimits(1,0.0028182,0.0028182);
   p2->SetParameter(2,-9.62602e-05);
   p2->SetParError(2,0);
   p2->SetParLimits(2,-9.62602e-05,-9.62602e-05);
   p2->Draw("");
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
