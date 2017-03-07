{
//=========Macro generated from canvas: c1_n7/c1_n7
//=========  (Tue Mar  7 15:02:58 2017) by ROOT version5.34/30
   TCanvas *c1_n7 = new TCanvas("c1_n7", "c1_n7",12,51,700,500);
   gStyle->SetOptStat(0);
   c1_n7->Range(0,0,1,1);
   c1_n7->SetFillColor(0);
   c1_n7->SetBorderMode(0);
   c1_n7->SetBorderSize(2);
   c1_n7->SetTickx(1);
   c1_n7->SetTicky(1);
   c1_n7->SetLeftMargin(0.15);
   c1_n7->SetBottomMargin(0.15);
   c1_n7->SetFrameLineWidth(2);
   c1_n7->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,25,1000,0,2.4);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("ECal Cell Size [mm]");
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
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,3,2.097452);
   gre->SetPointError(0,0,0.05693472);
   gre->SetPoint(1,5,2.011966);
   gre->SetPointError(1,0,0.05741129);
   gre->SetPoint(2,7,2.117181);
   gre->SetPointError(2,0,0.0661522);
   gre->SetPoint(3,10,2.148172);
   gre->SetPointError(3,0,0.05985275);
   gre->SetPoint(4,15,2.181331);
   gre->SetPointError(4,0,0.0555648);
   gre->SetPoint(5,20,2.189718);
   gre->SetPointError(5,0,0.05574016);
   gre->Draw(" pl");
   c1_n7->Modified();
   c1_n7->cd();
   c1_n7->SetSelected(c1_n7);
}
