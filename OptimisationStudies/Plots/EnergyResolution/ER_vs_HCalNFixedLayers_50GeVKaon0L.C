{
//=========Macro generated from canvas: c1_n3/c1_n3
//=========  (Tue Mar  7 15:19:27 2017) by ROOT version5.34/30
   TCanvas *c1_n3 = new TCanvas("c1_n3", "c1_n3",12,51,700,500);
   gStyle->SetOptStat(0);
   c1_n3->Range(28.4,-2.4,65.73333,13.6);
   c1_n3->SetFillColor(0);
   c1_n3->SetBorderMode(0);
   c1_n3->SetBorderSize(2);
   c1_n3->SetTickx(1);
   c1_n3->SetTicky(1);
   c1_n3->SetLeftMargin(0.15);
   c1_n3->SetBottomMargin(0.15);
   c1_n3->SetFrameLineWidth(2);
   c1_n3->SetFrameBorderMode(0);
   c1_n3->SetFrameLineWidth(2);
   c1_n3->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,34,62,1000,0,12);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("N_{Layers HCal}");
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
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,36,9.877684);
   gre->SetPointError(0,0,0.3055204);
   gre->SetPoint(1,42,9.622116);
   gre->SetPointError(1,0,0.2928975);
   gre->SetPoint(2,48,8.807201);
   gre->SetPointError(2,0,0.2497936);
   gre->SetPoint(3,54,8.990123);
   gre->SetPointError(3,0,0.2795199);
   gre->SetPoint(4,60,9.036567);
   gre->SetPointError(4,0,0.2823997);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,33.6,62.4);
   Graph_Graph1->SetMinimum(8.394828);
   Graph_Graph1->SetMaximum(10.34578);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetNdivisions(505);
   Graph_Graph1->GetXaxis()->SetLabelFont(132);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.036);
   Graph_Graph1->GetXaxis()->SetTitleFont(132);
   Graph_Graph1->GetYaxis()->SetLabelFont(132);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.036);
   Graph_Graph1->GetYaxis()->SetTitleFont(132);
   Graph_Graph1->GetZaxis()->SetLabelFont(132);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.036);
   Graph_Graph1->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw(" pl");
   c1_n3->Modified();
   c1_n3->cd();
   c1_n3->SetSelected(c1_n3);
}
