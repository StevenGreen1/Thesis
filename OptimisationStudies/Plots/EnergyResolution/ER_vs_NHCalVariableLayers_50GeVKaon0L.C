{
//=========Macro generated from canvas: c1_n4/c1_n4
//=========  (Wed Feb 22 13:30:44 2017) by ROOT version5.34/30
   TCanvas *c1_n4 = new TCanvas("c1_n4", "c1_n4",12,51,700,500);
   gStyle->SetOptStat(0);
   c1_n4->Range(0,0,1,1);
   c1_n4->SetFillColor(0);
   c1_n4->SetBorderMode(0);
   c1_n4->SetBorderSize(2);
   c1_n4->SetTickx(1);
   c1_n4->SetTicky(1);
   c1_n4->SetLeftMargin(0.15);
   c1_n4->SetBottomMargin(0.15);
   c1_n4->SetFrameLineWidth(2);
   c1_n4->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,14,64,1000,9,14);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("N_{Readout Layers HCal}");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleOffset(0.95);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitle("#sigma_{Reco} / E_{Reco} [%]");
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.05);
   axesEj->GetYaxis()->SetTitleSize(0.05);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.03);
   axesEj->GetZaxis()->SetTitleSize(0.036);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(8);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,18,13.39227);
   gre->SetPointError(0,0,0.1534801);
   gre->SetPoint(1,24,11.75601);
   gre->SetPointError(1,0,0.1299895);
   gre->SetPoint(2,30,11.49765);
   gre->SetPointError(2,0,0.1240369);
   gre->SetPoint(3,36,10.78663);
   gre->SetPointError(3,0,0.1080176);
   gre->SetPoint(4,42,10.05757);
   gre->SetPointError(4,0,0.1005478);
   gre->SetPoint(5,48,10.16821);
   gre->SetPointError(5,0,0.120704);
   gre->SetPoint(6,54,9.318174);
   gre->SetPointError(6,0,0.09508042);
   gre->SetPoint(7,60,9.361949);
   gre->SetPointError(7,0,0.09878682);
   gre->Draw(" pl");
   c1_n4->Modified();
   c1_n4->cd();
   c1_n4->SetSelected(c1_n4);
}
