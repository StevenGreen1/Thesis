{
//=========Macro generated from canvas: c1_n6/c1_n6
//=========  (Wed Feb 22 11:56:19 2017) by ROOT version5.34/30
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
   
   TH2F *axesEj = new TH2F("axesEj","",100,14,32,1000,2.2,3.2);
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
   axesEj->GetYaxis()->SetTitle("#sigma_{Reco} / E_{Reco}");
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
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,30,2.502239);
   gre->SetPointError(0,0,0.02773612);
   gre->SetPoint(1,26,2.662456);
   gre->SetPointError(1,0,0.0301179);
   gre->SetPoint(2,20,2.833299);
   gre->SetPointError(2,0,0.03171393);
   gre->SetPoint(3,16,3.090027);
   gre->SetPointError(3,0,0.0293049);
   gre->Draw(" pl");
   c1_n6->Modified();
   c1_n6->cd();
   c1_n6->SetSelected(c1_n6);
}
