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
   
   Double_t xAxis[16] = {0.001,0.01, 0.5, 0.99, 1.01, 1.9, 2.1, 4.9, 5.1, 9.9, 10.1, 99.9, 100.1, 999.9, 1000.1, 2000};

   TH1 *EvsC1 = new TH1F("EvsC1","SigmaE/E vs Cost 1",15, xAxis);
   EvsC1->SetMarkerColor(4);
   EvsC1->SetMarkerStyle(21);
   EvsC1->SetMarkerSize(1.2);
   EvsC1->SetLineColor(4);
   EvsC1->SetLineWidth(2);
   g1 = new TGraphErrors(6);
   g1->SetLineColor(4);
   g1->SetLineWidth(2);
   g1->SetLineStyle(1);
   g1->SetMarkerColor(4);
   g1->SetMarkerStyle(25);
   g1->SetMarkerSize(1.3);
   g1->SetPoint(0,   1, 72.3);
   g1->SetPoint(1,   2, 67.3);
   g1->SetPoint(2,   5, 61.6);
   g1->SetPoint(3,  10, 58.1);
   g1->SetPoint(4, 100, 56.1);
   g1->SetPoint(5,1000, 56.0);
   g1->SetPointError(0, 0, 0.10);
   g1->SetPointError(1, 0, 0.09);
   g1->SetPointError(2, 0, 0.08);
   g1->SetPointError(3, 0, 0.07);
   g1->SetPointError(4, 0, 0.06);
   g1->SetPointError(5, 0, 0.06);

   EvsC1->SetMinimum(50.0);
   EvsC1->SetMaximum(75.0);
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
   EvsC1->GetXaxis()->SetRange(4,14);
   EvsC1->Draw("p");
   g1->Draw("ple same");


   TLatex *   tex = new TLatex(1.5,4.8,"Z #rightarrow uds (|cos#theta|<0.7)");
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();

    TLegend *leg = new TLegend(0.5,0.65,0.9,0.89,NULL,"brNDC");
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(1);
   leg->SetFillStyle(0);
   leg->SetBorderSize(0);
   TLegendEntry *entry=leg->AddEntry("NULL"," 20 GeV K_{L}","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.3);
   entry->SetTextAlign(12);
   entry->SetTextColor(1);
   leg->Draw();

   TLatex *   tex = new TLatex(2,72,"a) Steel Absorber");
   tex->SetTextSize(0.05);
   tex->SetLineWidth(2);
   tex->Draw();

   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->SaveAs("timingKL.gif");
   c1->SaveAs("timingKL.eps");
   c1->SaveAs("timingKL.pdf");
   c1->SaveAs("timingKL.png");
 }
