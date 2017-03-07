{
//=========Macro generated from canvas: c1_n5/c1_n5
//=========  (Tue Mar  7 15:02:57 2017) by ROOT version5.34/30
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
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,25,1000,0,2.8);
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
   gre->SetPoint(0,3,2.419547);
   gre->SetPointError(0,0,0.06549358);
   gre->SetPoint(1,5,2.226226);
   gre->SetPointError(1,0,0.05815087);
   gre->SetPoint(2,7,2.303183);
   gre->SetPointError(2,0,0.06427277);
   gre->SetPoint(3,10,2.307724);
   gre->SetPointError(3,0,0.06435507);
   gre->SetPoint(4,15,2.216353);
   gre->SetPointError(4,0,0.0517687);
   gre->SetPoint(5,20,2.198376);
   gre->SetPointError(5,0,0.05838237);
   gre->Draw(" pl");
   c1_n5->Modified();
   c1_n5->cd();
   c1_n5->SetSelected(c1_n5);
}
