{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jan 13 11:02:05 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,14,32,1000,2,3.8);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(1);
   axesEj->GetXaxis()->SetTitle("N_{Layers ECal}");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetXaxis()->SetTitleOffset(0.95);
   axesEj->GetYaxis()->SetTitle("Energy Resolution [%]");
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.05);
   axesEj->GetYaxis()->SetTitleSize(0.05);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitleOffset(0.9);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.03);
   axesEj->GetZaxis()->SetTitleSize(0.036);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(4);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(1);
   gre->SetPoint(0,30,2.589786);
   gre->SetPointError(0,0,0.05956549);
   gre->SetPoint(1,26,2.735755);
   gre->SetPointError(1,0,0.06401784);
   gre->SetPoint(2,20,2.990485);
   gre->SetPointError(2,0,0.08775328);
   gre->SetPoint(3,16,3.19947);
   gre->SetPointError(3,0,0.08651526);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);

   c1->SaveAs("SiECal100GeVPhotonResVsLayerNumber.pdf");
}
