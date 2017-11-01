{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Mar 31 14:34:54 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",10,32,700,500);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0.5,5.5,1000,34,42);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("Magnetic Field Strength [T]");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleOffset(0.95);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitle("Mean Number of Charged Particles");
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.05);
   axesEj->GetYaxis()->SetTitleSize(0.05);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.03);
   axesEj->GetZaxis()->SetTitleSize(0.036);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,1,81.35145);
   gre->SetPointError(0,0,0.2787889);
   gre->SetPoint(1,1.5,80.9531);
   gre->SetPointError(1,0,0.2648714);
   gre->SetPoint(2,2,80.6365);
   gre->SetPointError(2,0,0.2626557);
   gre->SetPoint(3,2.5,80.2511);
   gre->SetPointError(3,0,0.2625383);
   gre->SetPoint(4,3,79.9938);
   gre->SetPointError(4,0,0.2610035);
   gre->SetPoint(5,3.5,79.9754);
   gre->SetPointError(5,0,0.2603272);
   gre->SetPoint(6,4,79.3022);
   gre->SetPointError(6,0,0.2577765);
   gre->SetPoint(7,4.5,79.108);
   gre->SetPointError(7,0,0.2587345);
   gre->SetPoint(8,5,78.7166);
   gre->SetPointError(8,0,0.2558953);
   gre->Draw(" pl");
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetPoint(0,1,40.52678);
   gre->SetPointError(0,0,0.1428695);
   gre->SetPoint(1,1.5,39.9141);
   gre->SetPointError(1,0,0.1340295);
   gre->SetPoint(2,2,39.3035);
   gre->SetPointError(2,0,0.1315457);
   gre->SetPoint(3,2.5,38.6937);
   gre->SetPointError(3,0,0.129343);
   gre->SetPoint(4,3,38.0623);
   gre->SetPointError(4,0,0.1270188);
   gre->SetPoint(5,3.5,37.6088);
   gre->SetPointError(5,0,0.1261231);
   gre->SetPoint(6,4,36.7645);
   gre->SetPointError(6,0,0.1226507);
   gre->SetPoint(7,4.5,36.1709);
   gre->SetPointError(7,0,0.1215835);
   gre->SetPoint(8,5,35.5721);
   gre->SetPointError(8,0,0.1186786);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->SaveAs("BFieldNumbers_500GeV_Z_uds.pdf");
}
