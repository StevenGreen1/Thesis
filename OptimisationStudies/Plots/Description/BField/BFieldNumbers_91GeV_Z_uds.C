{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Mar 31 14:43:19 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",10,32,700,500);
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
   
   TH2F *axesEj = new TH2F("axesEj","",100,0.5,5.5,1000,16,22);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->SetMarkerStyle(20);
   axesEj->GetXaxis()->SetTitle("Magentic Field Strength [T]");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleOffset(0.95);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitle("Mean Number of Charged Particles");
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.05);
   axesEj->GetYaxis()->SetTitleSize(0.05);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.03);
   axesEj->GetZaxis()->SetTitleSize(0.036);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,1,42.1685);
   gre->SetPointError(0,0,0.1270631);
   gre->SetPoint(1,1.5,41.9051);
   gre->SetPointError(1,0,0.1260989);
   gre->SetPoint(2,2,41.75722);
   gre->SetPointError(2,0,0.1320581);
   gre->SetPoint(3,2.5,41.3681);
   gre->SetPointError(3,0,0.1240504);
   gre->SetPoint(4,3,41.1255);
   gre->SetPointError(4,0,0.1235798);
   gre->SetPoint(5,3.5,40.6392);
   gre->SetPointError(5,0,0.1224112);
   gre->SetPoint(6,4,40.6249);
   gre->SetPointError(6,0,0.1218469);
   gre->SetPoint(7,4.5,40.3582);
   gre->SetPointError(7,0,0.1209115);
   gre->SetPoint(8,5,40.152);
   gre->SetPointError(8,0,0.120428);
   gre->Draw(" pl");
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetPoint(0,1,20.8479);
   gre->SetPointError(0,0,0.06624375);
   gre->SetPoint(1,1.5,20.4135);
   gre->SetPointError(1,0,0.0647139);
   gre->SetPoint(2,2,19.98456);
   gre->SetPointError(2,0,0.06626848);
   gre->SetPoint(3,2.5,19.4564);
   gre->SetPointError(3,0,0.06120281);
   gre->SetPoint(4,3,18.9844);
   gre->SetPointError(4,0,0.05996659);
   gre->SetPoint(5,3.5,18.3587);
   gre->SetPointError(5,0,0.05791532);
   gre->SetPoint(6,4,17.9992);
   gre->SetPointError(6,0,0.05712407);
   gre->SetPoint(7,4.5,17.5246);
   gre->SetPointError(7,0,0.05544618);
   gre->SetPoint(8,5,17.0578);
   gre->SetPointError(8,0,0.05390344);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
