{
//=========Macro generated from canvas: c1_n5/c1_n5
//=========  (Wed Feb 22 13:30:45 2017) by ROOT version5.34/30
   TCanvas *c1_n5 = new TCanvas("c1_n5", "c1_n5",12,51,700,500);
   gStyle->SetOptStat(0);
   c1_n5->Range(0,0,1,1);
   c1_n5->SetFillColor(0);
   c1_n5->SetBorderMode(0);
   c1_n5->SetBorderSize(2);
   c1_n5->SetTickx(1);
   c1_n5->SetTicky(1);
   c1_n5->SetLeftMargin(0.15);
   c1_n5->SetBottomMargin(0.15);
   c1_n5->SetFrameLineWidth(2);
   c1_n5->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,25,1000,2.2,2.8);
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
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,2.692066);
   gre->SetPointError(0,0,0.02854623);
   gre->SetPoint(1,5,2.502239);
   gre->SetPointError(1,0,0.02773612);
   gre->SetPoint(2,7,2.494465);
   gre->SetPointError(2,0,0.02839798);
   gre->SetPoint(3,10,2.609755);
   gre->SetPointError(3,0,0.02867343);
   gre->SetPoint(4,15,2.554849);
   gre->SetPointError(4,0,0.02785374);
   gre->SetPoint(5,20,2.544701);
   gre->SetPointError(5,0,0.03190106);
   gre->Draw(" pl");
   c1_n5->Modified();
   c1_n5->cd();
   c1_n5->SetSelected(c1_n5);
}
