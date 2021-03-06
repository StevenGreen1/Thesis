{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 22 10:15:21 2011) by ROOT version5.27/04
   TCanvas *c1 = new TCanvas("c1", "c1",-800,0,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTicky(1);
   c1->SetTickx(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameFillColor(10);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   // TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.01,0.99,0.99);
   // c1_1->Draw();
   // c1_1->cd();
   // c1_1->Range(-2.710145,-1.42446,13.23188,12.08365);
   // c1_1->SetFillColor(0);
   // c1_1->SetBorderMode(0);
   // c1_1->SetBorderSize(2);
   // c1_1->SetTicky(1);
   // c1_1->SetTickx(1);
   // c1_1->SetLeftMargin(0.17);
   // c1_1->SetRightMargin(0.14);
   // c1_1->SetTopMargin(0.08);
   // c1_1->SetBottomMargin(0.18);
   // c1_1->SetFrameFillColor(10);
   // c1_1->SetFrameLineWidth(2);
   // c1_1->SetFrameBorderMode(0);
   // c1_1->SetFrameFillColor(10);
   // c1_1->SetFrameLineWidth(2);
   // c1_1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetLineColor(4);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   graph->SetPoint(0,0,1.84);
   graph->SetPoint(1,2,5.4);
   graph->SetPoint(2,4,7.4);
   graph->SetPoint(3,6,8.91);
   graph->SetPoint(4,8,9.75);
   graph->SetPoint(5,10,10.17);
   
   TH1F *Graph1 = new TH1F("Graph1","Graph",100,0,10);
   Graph1->SetMinimum(1.007);
   Graph1->SetMaximum(11.003);
   Graph1->SetDirectory(0);
   Graph1->SetStats(0);
   Graph1->SetLineWidth(2);
   Graph1->SetMarkerStyle(20);
   Graph1->SetMarkerSize(1.5);
   Graph1->GetXaxis()->SetTitle("#sigma_{p_{T}}/p_{T}^{2} #times 10^{-5} [1/GeV]");
   Graph1->GetXaxis()->SetNdivisions(506);
   Graph1->GetXaxis()->SetLabelFont(42);
   Graph1->GetXaxis()->SetLabelOffset(0.015);
   Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph1->GetXaxis()->SetLabelSize(0.06);
   Graph1->GetXaxis()->SetTitleSize(0.07);
   Graph1->GetXaxis()->SetTitleFont(42);
   Graph1->GetYaxis()->SetTitle("#sigma_{M} [GeV]");
   Graph1->GetYaxis()->SetNdivisions(506);
   Graph1->GetYaxis()->SetLabelFont(42);
   Graph1->GetYaxis()->SetLabelOffset(0.015);
   Graph1->GetYaxis()->SetLabelSize(0.06);
   Graph1->GetYaxis()->SetTitleSize(0.07);
   Graph1->GetYaxis()->SetTitleOffset(1.1);
   Graph1->GetYaxis()->SetTitleFont(42);
   Graph1->GetZaxis()->SetLabelFont(42);
   Graph1->GetZaxis()->SetLabelOffset(0.015);
   Graph1->GetZaxis()->SetLabelSize(0.06);
   Graph1->GetZaxis()->SetTitleSize(0.07);
   Graph1->GetZaxis()->SetTitleOffset(1.1);
   Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph1);
   
   graph->Draw("apl");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetLineColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.5);
   graph->SetPoint(0,0,4.95);
   graph->SetPoint(1,2,4.52);
   graph->SetPoint(2,4,4.88);
   graph->SetPoint(3,6,5.07);
   graph->SetPoint(4,8,5.15);
   graph->SetPoint(5,10,5.07);
   
   TH1F *Graph2 = new TH1F("Graph2","Graph",100,0,10);
   Graph2->SetMinimum(4.457);
   Graph2->SetMaximum(5.213);
   Graph2->SetDirectory(0);
   Graph2->SetStats(0);
   Graph2->SetLineWidth(2);
   Graph2->SetMarkerStyle(20);
   Graph2->SetMarkerSize(1.5);
   Graph2->GetXaxis()->SetNdivisions(506);
   Graph2->GetXaxis()->SetLabelFont(42);
   Graph2->GetXaxis()->SetLabelOffset(0.015);
   Graph2->GetXaxis()->SetLabelSize(0.06);
   Graph2->GetXaxis()->SetTitleSize(0.07);
   Graph2->GetXaxis()->SetTitleFont(42);
   Graph2->GetYaxis()->SetNdivisions(506);
   Graph2->GetYaxis()->SetLabelFont(42);
   Graph2->GetYaxis()->SetLabelOffset(0.015);
   Graph2->GetYaxis()->SetLabelSize(0.06);
   Graph2->GetYaxis()->SetTitleSize(0.07);
   Graph2->GetYaxis()->SetTitleOffset(1.1);
   Graph2->GetYaxis()->SetTitleFont(42);
   Graph2->GetZaxis()->SetLabelFont(42);
   Graph2->GetZaxis()->SetLabelOffset(0.015);
   Graph2->GetZaxis()->SetLabelSize(0.06);
   Graph2->GetZaxis()->SetTitleSize(0.07);
   Graph2->GetZaxis()->SetTitleOffset(1.1);
   Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph2);
   
   graph->Draw("pl");
   
   TLegend *leg = new TLegend(0.25,0.65,0.4,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.06);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GraphX","#tilde #mu^{#pm} ","P");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   //   entry->SetTextColor(2);
   entry=leg->AddEntry("GraphY","#tilde #chi_{1}^{0} ","P");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   //   entry->SetTextColor(4);
   leg->Draw();
   //   c1_1->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->SaveAs("SleptonMassResolution.pdf");
}
