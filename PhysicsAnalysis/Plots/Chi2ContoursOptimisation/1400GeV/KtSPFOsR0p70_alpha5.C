{
//=========Macro generated from canvas: KtSPFOsR0p70_Alpha5/
//=========  (Mon Jul 17 12:12:16 2017) by ROOT version5.34/37
   TCanvas *KtSPFOsR0p70_Alpha5 = new TCanvas("KtSPFOsR0p70_Alpha5", "",0,45,600,600);
   gStyle->SetOptStat(0);
   KtSPFOsR0p70_Alpha5->Range(-0.0231472,-3,0.0171088,17);
   KtSPFOsR0p70_Alpha5->SetFillColor(0);
   KtSPFOsR0p70_Alpha5->SetBorderMode(0);
   KtSPFOsR0p70_Alpha5->SetBorderSize(2);
   KtSPFOsR0p70_Alpha5->SetTickx(1);
   KtSPFOsR0p70_Alpha5->SetTicky(1);
   KtSPFOsR0p70_Alpha5->SetLeftMargin(0.2);
   KtSPFOsR0p70_Alpha5->SetRightMargin(0.05);
   KtSPFOsR0p70_Alpha5->SetBottomMargin(0.15);
   KtSPFOsR0p70_Alpha5->SetFrameLineWidth(2);
   KtSPFOsR0p70_Alpha5->SetFrameBorderMode(0);
   KtSPFOsR0p70_Alpha5->SetFrameLineWidth(2);
   KtSPFOsR0p70_Alpha5->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(35);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(2);
   graph->SetPoint(0,-0.017,626.3714149);
   graph->SetPoint(1,-0.016,524.3288727);
   graph->SetPoint(2,-0.015,432.4012331);
   graph->SetPoint(3,-0.014,350.5310446);
   graph->SetPoint(4,-0.013,278.5861276);
   graph->SetPoint(5,-0.012,216.3478868);
   graph->SetPoint(6,-0.011,163.4972036);
   graph->SetPoint(7,-0.01,119.6041231);
   graph->SetPoint(8,-0.009,84.11657196);
   graph->SetPoint(9,-0.008,56.35605722);
   graph->SetPoint(10,-0.007,35.51627583);
   graph->SetPoint(11,-0.006,20.67494328);
   graph->SetPoint(12,-0.005,10.81463801);
   graph->SetPoint(13,-0.004,4.859816346);
   graph->SetPoint(14,-0.003,1.729943567);
   graph->SetPoint(15,-0.002,0.4105405104);
   graph->SetPoint(16,-0.001,0.0393261667);
   graph->SetPoint(17,6.938893904e-18,0);
   graph->SetPoint(18,0.001,0.003268323425);
   graph->SetPoint(19,0.002,0.1268642143);
   graph->SetPoint(20,0.003,0.7976810875);
   graph->SetPoint(21,0.004,2.725907515);
   graph->SetPoint(22,0.005,6.817050567);
   graph->SetPoint(23,0.006,14.08412064);
   graph->SetPoint(24,0.007,25.57239133);
   graph->SetPoint(25,0.008,42.29965217);
   graph->SetPoint(26,0.009,65.21453616);
   graph->SetPoint(27,0.01,95.1679136);
   graph->SetPoint(28,0.011,132.897563);
   graph->SetPoint(29,0.012,179.0239849);
   graph->SetPoint(30,0.013,234.0495458);
   graph->SetPoint(31,0.014,298.3682627);
   graph->SetPoint(32,0.015,372.2716476);
   graph->SetPoint(33,0.016,455.9621685);
   graph->SetPoint(34,0.017,549.5639483);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,-0.0204,0.0204);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(15);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(2);
   Graph_Graph2->GetXaxis()->SetTitle("#alpha_{5}");
   Graph_Graph2->GetXaxis()->SetRange(14,87);
   Graph_Graph2->GetXaxis()->SetNdivisions(5);
   Graph_Graph2->GetXaxis()->SetLabelFont(132);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.025);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetXaxis()->SetTitleFont(132);
   Graph_Graph2->GetYaxis()->SetTitle("#chi^{2}");
   Graph_Graph2->GetYaxis()->SetLabelFont(132);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleFont(132);
   Graph_Graph2->GetZaxis()->SetLabelFont(132);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph2);
   
   
   TF1 *Alpha5Fit = new TF1("Alpha5Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.005,0.005);
   Alpha5Fit->SetFillColor(1);
   Alpha5Fit->SetFillStyle(0);
   Alpha5Fit->SetLineWidth(2);
   Alpha5Fit->SetChisquare(0.008475621);
   Alpha5Fit->SetNDF(6);
   Alpha5Fit->GetXaxis()->SetNdivisions(505);
   Alpha5Fit->GetXaxis()->SetLabelFont(132);
   Alpha5Fit->GetXaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleFont(132);
   Alpha5Fit->GetYaxis()->SetLabelFont(132);
   Alpha5Fit->GetYaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleFont(132);
   Alpha5Fit->SetParameter(0,-18.06332);
   Alpha5Fit->SetParError(0,11.82273);
   Alpha5Fit->SetParLimits(0,0,0);
   Alpha5Fit->SetParameter(1,22607.86);
   Alpha5Fit->SetParError(1,4006.32);
   Alpha5Fit->SetParLimits(1,0,0);
   Alpha5Fit->SetParameter(2,-1.515694e+07);
   Alpha5Fit->SetParError(2,878790.7);
   Alpha5Fit->SetParLimits(2,0,0);
   Alpha5Fit->SetParameter(3,1.326191e+10);
   Alpha5Fit->SetParError(3,2.424149e+08);
   Alpha5Fit->SetParLimits(3,0,0);
   graph->GetListOfFunctions()->Add(Alpha5Fit);
   graph->Draw("apl");
   
   TF1 *Alpha5Fit = new TF1("Alpha5Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.005,0.005);
   Alpha5Fit->SetFillColor(1);
   Alpha5Fit->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   Alpha5Fit->SetLineColor(ci);
   Alpha5Fit->SetLineWidth(3);
   Alpha5Fit->SetChisquare(0.008475621);
   Alpha5Fit->SetNDF(6);
   Alpha5Fit->GetXaxis()->SetNdivisions(505);
   Alpha5Fit->GetXaxis()->SetLabelFont(132);
   Alpha5Fit->GetXaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleFont(132);
   Alpha5Fit->GetYaxis()->SetLabelFont(132);
   Alpha5Fit->GetYaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleFont(132);
   Alpha5Fit->SetParameter(0,-18.06332);
   Alpha5Fit->SetParError(0,11.82273);
   Alpha5Fit->SetParLimits(0,0,0);
   Alpha5Fit->SetParameter(1,22607.86);
   Alpha5Fit->SetParError(1,4006.32);
   Alpha5Fit->SetParLimits(1,0,0);
   Alpha5Fit->SetParameter(2,-1.515694e+07);
   Alpha5Fit->SetParError(2,878790.7);
   Alpha5Fit->SetParLimits(2,0,0);
   Alpha5Fit->SetParameter(3,1.326191e+10);
   Alpha5Fit->SetParError(3,2.424149e+08);
   Alpha5Fit->SetParLimits(3,0,0);
   Alpha5Fit->Draw("same");
   
   TLegend *leg = new TLegend(0.15,0.95,0.9,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);

   ci = 10007;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Alpha5Fit","4th Order Polynomial Fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   KtSPFOsR0p70_Alpha5->Modified();
   KtSPFOsR0p70_Alpha5->cd();
   KtSPFOsR0p70_Alpha5->SetSelected(KtSPFOsR0p70_Alpha5);
}
