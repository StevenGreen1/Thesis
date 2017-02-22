{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Wed Feb 22 12:37:37 2017) by ROOT version5.34/37
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",10,45,700,500);
   gStyle->SetOptStat(0);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetTickx(1);
   c1_n2->SetTicky(1);
   c1_n2->SetLeftMargin(0.15);
   c1_n2->SetBottomMargin(0.15);
   c1_n2->SetFrameLineWidth(2);
   c1_n2->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,525,1000,1,6);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->GetXaxis()->SetTitle("E_{#gamma} [GeV]");
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
   axesEj->GetZaxis()->SetLabelSize(0.05);
   axesEj->GetZaxis()->SetTitleSize(0.05);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,10,5.579655);
   gre->SetPointError(0,0,0.05243236);
   gre->SetPoint(1,20,4.179826);
   gre->SetPointError(1,0,0.04071962);
   gre->SetPoint(2,50,2.968024);
   gre->SetPointError(2,0,0.03109827);
   gre->SetPoint(3,100,2.279353);
   gre->SetPointError(3,0,0.02540447);
   gre->SetPoint(4,200,1.975455);
   gre->SetPointError(4,0,0.02515208);
   gre->SetPoint(5,500,1.864846);
   gre->SetPointError(5,0,0.0248858);
   gre->Draw(" pl");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
