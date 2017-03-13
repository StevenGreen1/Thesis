{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Mon Mar 13 15:58:52 2017) by ROOT version5.34/30
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",12,51,700,500);
   gStyle->SetOptStat(0);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetLogx();
   c1_n2->SetTickx(1);
   c1_n2->SetTicky(1);
   c1_n2->SetLeftMargin(0.15);
   c1_n2->SetBottomMargin(0.15);
   c1_n2->SetFrameLineWidth(2);
   c1_n2->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",1,1,5000000,1000,0,3.2);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("Calorimeter Timing Window [ns]");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleOffset(1.2);
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
   
   TGraphErrors *gre = new TGraphErrors(4);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,10,1.999438);
   gre->SetPointError(0,0,0.05546988);
   gre->SetPoint(1,100,2.011966);
   gre->SetPointError(1,0,0.05741129);
   gre->SetPoint(2,300,1.957421);
   gre->SetPointError(2,0,0.05199845);
   gre->SetPoint(3,1000000,2.003377);
   gre->SetPointError(3,0,0.0565345);
   gre->Draw(" pl");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
