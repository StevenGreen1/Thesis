{
//=========Macro generated from canvas: c1_n6/c1_n6
//=========  (Tue Mar  7 15:02:58 2017) by ROOT version5.34/30
   TCanvas *c1_n6 = new TCanvas("c1_n6", "c1_n6",12,51,700,500);
   gStyle->SetOptStat(0);
   c1_n6->Range(0,0,1,1);
   c1_n6->SetFillColor(0);
   c1_n6->SetBorderMode(0);
   c1_n6->SetBorderSize(2);
   c1_n6->SetTickx(1);
   c1_n6->SetTicky(1);
   c1_n6->SetLeftMargin(0.15);
   c1_n6->SetBottomMargin(0.15);
   c1_n6->SetFrameLineWidth(2);
   c1_n6->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,14,32,1000,0,3.2);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("N_{Layers ECal}");
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
   
   TGraphErrors *gre = new TGraphErrors(4);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,30,2.226226);
   gre->SetPointError(0,0,0.05815087);
   gre->SetPoint(1,26,2.408005);
   gre->SetPointError(1,0,0.07144042);
   gre->SetPoint(2,20,2.442849);
   gre->SetPointError(2,0,0.06440053);
   gre->SetPoint(3,16,2.958885);
   gre->SetPointError(3,0,0.0878128);
   gre->Draw(" pl");
   c1_n6->Modified();
   c1_n6->cd();
   c1_n6->SetSelected(c1_n6);
}
