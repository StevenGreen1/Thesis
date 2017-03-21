{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar 21 10:37:22 2017) by ROOT version5.34/37
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
   
   TF1 *Reported = new TF1("Reported","TMath::Sqrt(([0]*[0]/x)+[1]*[1])",10,500);
   Reported->SetFillColor(1);
   Reported->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   Reported->SetLineColor(ci);
   Reported->SetLineWidth(2);
   Reported->SetLineStyle(2);
   Reported->GetXaxis()->SetNdivisions(505);
   Reported->GetXaxis()->SetLabelFont(132);
   Reported->GetXaxis()->SetLabelSize(0.05);
   Reported->GetXaxis()->SetTitleSize(0.05);
   Reported->GetXaxis()->SetTitleFont(132);
   Reported->GetYaxis()->SetLabelFont(132);
   Reported->GetYaxis()->SetLabelSize(0.05);
   Reported->GetYaxis()->SetTitleSize(0.05);
   Reported->GetYaxis()->SetTitleFont(132);
   Reported->SetParameter(0,16.6);
   Reported->SetParError(0,0);
   Reported->SetParLimits(0,0,0);
   Reported->SetParameter(1,1.1);
   Reported->SetParError(1,0);
   Reported->SetParLimits(1,0,0);
   Reported->Draw("same");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,10,4.884138);
   gre->SetPointError(0,0,0.1420668);
   gre->SetPoint(1,20,3.651899);
   gre->SetPointError(1,0,0.101578);
   gre->SetPoint(2,50,2.650569);
   gre->SetPointError(2,0,0.07961886);
   gre->SetPoint(3,100,2.011966);
   gre->SetPointError(3,0,0.0574113);
   gre->SetPoint(4,200,1.634178);
   gre->SetPointError(4,0,0.03880178);
   gre->SetPoint(5,500,1.56621);
   gre->SetPointError(5,0,0.03443829);
   gre->Draw(" pl");
   
   TLegend *leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Parameterisation : #frac{#it{a}}{#sqrt{E_{#gamma}}} #oplus #it{b}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Reported","#it{a} = 16.6%, #it{b} = 1.1%","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph0","Full ILD Simulation","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.9444737,0.4483381,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *text = pt->AddText("TMath::Sqrt(([0]*[0]/x)+[1]*[1])");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
