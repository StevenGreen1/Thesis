{
//=========Macro generated from canvas: c/
//=========  (Tue May 16 14:30:10 2017) by ROOT version5.34/37
   TCanvas *c = new TCanvas("c", "",10,45,700,500);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.15);
   c->SetBottomMargin(0.15);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   
   TH2F *pTH2FAxes = new TH2F("pTH2FAxes","",200,0,100,200,0,2.5);
   pTH2FAxes->SetStats(0);
   pTH2FAxes->SetLineWidth(2);
   pTH2FAxes->GetXaxis()->SetTitle("#rho [GeV/dm^{3}]");
   pTH2FAxes->GetXaxis()->SetNdivisions(505);
   pTH2FAxes->GetXaxis()->SetLabelFont(132);
   pTH2FAxes->GetXaxis()->SetLabelSize(0.05);
   pTH2FAxes->GetXaxis()->SetTitleSize(0.05);
   pTH2FAxes->GetXaxis()->SetTitleFont(132);
   pTH2FAxes->GetYaxis()->SetTitle("#omega");
   pTH2FAxes->GetYaxis()->SetRange(1,200);
   pTH2FAxes->GetYaxis()->SetLabelFont(132);
   pTH2FAxes->GetYaxis()->SetLabelSize(0.05);
   pTH2FAxes->GetYaxis()->SetTitleSize(0.05);
   pTH2FAxes->GetYaxis()->SetTitleFont(132);
   pTH2FAxes->GetZaxis()->SetLabelFont(132);
   pTH2FAxes->GetZaxis()->SetLabelSize(0.05);
   pTH2FAxes->GetZaxis()->SetTitleSize(0.05);
   pTH2FAxes->GetZaxis()->SetTitleFont(132);
   pTH2FAxes->Draw("");
   
   TF1 *pTF1 = new TF1("pTF1","1",0,41.92872);
   pTF1->SetFillColor(1);
   pTF1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   pTF1->SetLineColor(ci);
   pTF1->SetLineWidth(2);
   pTF1->GetXaxis()->SetNdivisions(505);
   pTF1->GetXaxis()->SetLabelFont(132);
   pTF1->GetXaxis()->SetLabelSize(0.05);
   pTF1->GetXaxis()->SetTitleSize(0.05);
   pTF1->GetXaxis()->SetTitleFont(132);
   pTF1->GetYaxis()->SetLabelFont(132);
   pTF1->GetYaxis()->SetLabelSize(0.05);
   pTF1->GetYaxis()->SetTitleSize(0.05);
   pTF1->GetYaxis()->SetTitleFont(132);
   pTF1->Draw("same");
   
   TF1 *pTF1 = new TF1("pTF1","41.92872/x",41.92872,1000);
   pTF1->SetFillColor(1);
   pTF1->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   pTF1->SetLineColor(ci);
   pTF1->SetLineWidth(2);
   pTF1->GetXaxis()->SetNdivisions(505);
   pTF1->GetXaxis()->SetLabelFont(132);
   pTF1->GetXaxis()->SetLabelSize(0.05);
   pTF1->GetXaxis()->SetTitleSize(0.05);
   pTF1->GetXaxis()->SetTitleFont(132);
   pTF1->GetYaxis()->SetLabelFont(132);
   pTF1->GetYaxis()->SetLabelSize(0.05);
   pTF1->GetYaxis()->SetTitleSize(0.05);
   pTF1->GetYaxis()->SetTitleFont(132);
   pTF1->Draw("same");
   
   TLegend *leg = new TLegend(-2.353437e-185,-2.353437e-185,-2.353437e-185,-2.353437e-185,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("pTF1","HCal Hit Energy Truncation","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.1718338,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *text = pt->AddText("41.92872/x");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
