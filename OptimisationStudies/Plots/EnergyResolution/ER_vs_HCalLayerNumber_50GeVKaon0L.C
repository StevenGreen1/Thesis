{
//=========Macro generated from canvas: c1/c1
//=========  (Fri May 27 07:21:22 2016) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",10,32,700,500);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,16,62,1000,9,16);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(1);
   axesEj->GetXaxis()->SetTitle("N_{Layers HCal}");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitle("Energy Resolution [%]");
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.05);
   axesEj->GetYaxis()->SetTitleSize(0.05);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.05);
   axesEj->GetZaxis()->SetTitleSize(0.05);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->GetXaxis()->SetTitleOffset(0.95);
   axesEj->GetYaxis()->SetTitleOffset(0.8);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(1);
   gre->SetPoint(0,18,15.72776);
   gre->SetPointError(0,0,0.1577225);
   gre->SetPoint(1,24,13.25647);
   gre->SetPointError(1,0,0.1292687);
   gre->SetPoint(2,30,13.10888);
   gre->SetPointError(2,0,0.1298364);
   gre->SetPoint(3,36,12.18953);
   gre->SetPointError(3,0,0.1219301);
   gre->SetPoint(4,42,11.65233);
   gre->SetPointError(4,0,0.1192124);
   gre->SetPoint(5,48,11.05114);
   gre->SetPointError(5,0,0.1130209);
   gre->SetPoint(6,54,10.56515);
   gre->SetPointError(6,0,0.1134044);
   gre->SetPoint(7,60,10.32744);
   gre->SetPointError(7,0,0.1138275);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);

   c1->SaveAs("ER_vs_HCalLayerNumber_50GeVKaon0L.pdf");
}
