{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar 14 13:39:28 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
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
   
   TH2F *axesEj = new TH2F("axesEj","",1,0,12,1000,0,3);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("HCal Cell Truncation [GeV]");
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
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,0.5,2.104517);
   gre->SetPointError(0,0,0.06772795);
   gre->SetPoint(1,1,2.151083);
   gre->SetPointError(1,0,0.06995714);
   gre->SetPoint(2,2,2.104469);
   gre->SetPointError(2,0,0.06669798);
   gre->SetPoint(3,5,2.114122);
   gre->SetPointError(3,0,0.06766383);
   gre->SetPoint(4,10,2.114122);
   gre->SetPointError(4,0,0.06766383);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
