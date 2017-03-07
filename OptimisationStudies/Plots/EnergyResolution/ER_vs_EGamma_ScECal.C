{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar  7 14:58:07 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
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
   gre->SetPoint(0,10,4.914656);
   gre->SetPointError(0,0,0.1478568);
   gre->SetPoint(1,20,3.680626);
   gre->SetPointError(1,0,0.116599);
   gre->SetPoint(2,50,2.941952);
   gre->SetPointError(2,0,0.09755539);
   gre->SetPoint(3,100,2.226226);
   gre->SetPointError(3,0,0.05814728);
   gre->SetPoint(4,200,2.089389);
   gre->SetPointError(4,0,0.05652142);
   gre->SetPoint(5,500,2.04355);
   gre->SetPointError(5,0,0.05434568);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
