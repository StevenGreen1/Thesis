{
//=========Macro generated from canvas: c/
//=========  (Thu May 11 15:32:49 2017) by ROOT version5.34/37
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
   
   TGraph *graph = new TGraph(10);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(4);
   graph->SetPoint(0,1,2.157144672);
   graph->SetPoint(1,3.5,1.720430708);
   graph->SetPoint(2,6.25,1.351356717);
   graph->SetPoint(3,8.5,1.116797861);
   graph->SetPoint(4,11.25,0.893643304);
   graph->SetPoint(5,14.5,0.6983889752);
   graph->SetPoint(6,18,0.5485581134);
   graph->SetPoint(7,21.25,0.449562648);
   graph->SetPoint(8,25.75,0.3563721893);
   graph->SetPoint(9,30,0.2997542423);
   graph->Draw("ps");
   
   graph = new TGraph(10);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(4);
   graph->SetPoint(0,1,1.986847461);
   graph->SetPoint(1,3.5,1.626576487);
   graph->SetPoint(2,6.25,1.316586518);
   graph->SetPoint(3,8.5,1.116136099);
   graph->SetPoint(4,11.25,0.9221541966);
   graph->SetPoint(5,14.5,0.7489188242);
   graph->SetPoint(6,18,0.6128782719);
   graph->SetPoint(7,21.25,0.5208767741);
   graph->SetPoint(8,25.75,0.4319808187);
   graph->SetPoint(9,30,0.3763169583);
   graph->Draw("ps");
   
   graph = new TGraph(10);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#ff00ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(4);
   graph->SetPoint(0,1,1.769836682);
   graph->SetPoint(1,3.5,1.486519558);
   graph->SetPoint(2,6.25,1.243186693);
   graph->SetPoint(3,8.5,1.086114814);
   graph->SetPoint(4,11.25,0.9343738423);
   graph->SetPoint(5,14.5,0.7991421681);
   graph->SetPoint(6,18,0.6931938727);
   graph->SetPoint(7,21.25,0.6217119463);
   graph->SetPoint(8,25.75,0.5528253361);
   graph->SetPoint(9,30,0.5098223679);
   graph->Draw("ps");
   
   graph = new TGraph(10);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(4);
   graph->SetPoint(0,1,1.825434976);
   graph->SetPoint(1,3.5,1.367011418);
   graph->SetPoint(2,6.25,1.077291402);
   graph->SetPoint(3,8.5,0.938433152);
   graph->SetPoint(4,11.25,0.8380838104);
   graph->SetPoint(5,14.5,0.774957349);
   graph->SetPoint(6,18,0.7416189729);
   graph->SetPoint(7,21.25,0.7265325915);
   graph->SetPoint(8,25.75,0.7171818139);
   graph->SetPoint(9,30,0.713703544);
   graph->Draw("ps");
   
   TF1 *pTF1 = new TF1("pTF1","1",0,41.92872);
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
   TLegendEntry *entry=leg->AddEntry("","#it{E}_{Raw} 5 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","#it{E}_{Raw} 10 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","#it{E}_{Raw} 20 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("","#it{E}_{Raw} 50 GeV","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pTF1","HCal Cell Truncation","l");
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
