{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jan 12 15:36:15 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,25,1000,5,7);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(1);
   axesEj->GetXaxis()->SetTitle("ECal Cell Size [mm^{2}]");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetXaxis()->SetTitleOffset(0.9);
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
   gre->SetMarkerStyle(1);
   gre->SetPoint(0,3,6.637455);
   gre->SetPointError(0,0,0.212788);
   gre->SetPoint(1,5,5.545818);
   gre->SetPointError(1,0,0.06351579);
   gre->SetPoint(2,7,5.470133);
   gre->SetPointError(2,0,0.05599567);
   gre->SetPoint(3,10,5.583024);
   gre->SetPointError(3,0,0.05252796);
   gre->SetPoint(4,15,5.920602);
   gre->SetPointError(4,0,0.05312887);
   gre->SetPoint(5,20,5.886816);
   gre->SetPointError(5,0,0.05205978);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);

   c1->SaveAs("ScECal10GeVPhotonResVsCellSize.pdf");
}
