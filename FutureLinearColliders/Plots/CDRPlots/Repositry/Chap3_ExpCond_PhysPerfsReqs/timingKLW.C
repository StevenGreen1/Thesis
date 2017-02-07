{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Aug 16 11:24:01 2006) by ROOT version5.08/00
   TCanvas *c1 = new TCanvas("c1", "c1",32,386,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-0.153846,0.14,1.12821,0.54);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.16);
   c1->SetBottomMargin(0.18);
   c1->SetTopMargin(0.08);
   c1->SetRightMargin(0.09);
   c1->SetFrameFillColor(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameLineWidth(2);
   c1->SetLogx();
   
   Double_t xAxis[24] = {0.001,0.01, 0.5, 0.99, 1.01, 1.9, 2.1, 4.9, 5.1, 9.9, 10.1, 19.1, 20.1, 29.1, 30.1, 39.9, 40.1, 49.9, 50.1, 99.9, 100.1, 999.9, 1000.1, 2000};

   TH1 *EvsC1 = new TH1F("EvsC1","SigmaE/E vs Cost 1",23, xAxis);
   EvsC1->SetMarkerColor(4);
   EvsC1->SetMarkerStyle(21);
   EvsC1->SetMarkerSize(1.2);
   EvsC1->SetLineColor(4);
   EvsC1->SetLineWidth(2);
   g1 = new TGraphErrors(10);
   g1->SetLineColor(4);
   g1->SetLineWidth(2);
   g1->SetLineStyle(1);
   g1->SetMarkerColor(4);
   g1->SetMarkerStyle(25);
   g1->SetMarkerSize(1.3);
   g1->SetPoint(0,   1, 94.0);
   g1->SetPoint(1,   2, 89.2);
   g1->SetPoint(2,   5, 79.4);
   g1->SetPoint(3,  10, 69.3);
   g1->SetPoint(4,  20, 62.1);
   g1->SetPoint(5,  30, 57.2);
   g1->SetPoint(6,  40, 54.3);
   g1->SetPoint(7,  50, 53.1);
   g1->SetPoint(8, 100, 48.1);
   g1->SetPoint(9,1000, 47.0);
   g1->SetPointError(0, 0, 0.15);
   g1->SetPointError(1, 0, 0.11);
   g1->SetPointError(2, 0, 0.10);
   g1->SetPointError(3, 0, 0.09);
   g1->SetPointError(4, 0, 0.08);
   g1->SetPointError(5, 0, 0.07);
   g1->SetPointError(6, 0, 0.06);
   g1->SetPointError(7, 0, 0.05);
   g1->SetPointError(8, 0, 0.05);
   g1->SetPointError(9, 0, 0.04);

   EvsC1->SetMinimum(40.0);
   EvsC1->SetMaximum(100.0);
   EvsC1->SetStats(0);
   EvsC1->GetXaxis()->SetTitle("ECAL/HCAL Timing Cut [ns]");
   EvsC1->GetXaxis()->SetLabelSize(0.05);
   EvsC1->GetXaxis()->SetTitleSize(0.065);
   EvsC1->GetXaxis()->SetTitleOffset(1.1);
   EvsC1->GetYaxis()->SetNdivisions(505);
   EvsC1->GetYaxis()->SetTitle("Energy Resolution [%]");
   EvsC1->GetYaxis()->SetLabelSize(0.05);
   EvsC1->GetYaxis()->SetTitleSize(0.065);
   EvsC1->GetYaxis()->SetTitleOffset(1.2);
   EvsC1->GetXaxis()->SetRange(4,22);
   EvsC1->Draw("p");
   g1->Draw("ple same");


   
   TLegend *leg = new TLegend(0.5,0.65,0.9,0.89,NULL,"brNDC");
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(1);
   leg->SetFillStyle(0);
   leg->SetBorderSize(0);
   TLegendEntry *entry=leg->AddEntry("NULL","25 GeV K_{L}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.3);
   entry->SetTextAlign(12);
   entry->SetTextColor(1);
   leg->Draw();

   TLatex *   tex = new TLatex(2,93,"b) Tungsten Absorber");
   tex->SetTextSize(0.05);
   tex->SetLineWidth(2);
   tex->Draw();


   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->SaveAs("timingKLW.gif");
   c1->SaveAs("timingKLW.eps");
   c1->SaveAs("timingKLW.png");
   c1->SaveAs("timingKLW.pdf");
 }
