{
//=========Macro generated from canvas: KtLPFOsR1p10_Alpha5/
//=========  (Wed May  3 11:47:55 2017) by ROOT version5.34/37
   TCanvas *KtLPFOsR1p10_Alpha5 = new TCanvas("KtLPFOsR1p10_Alpha5", "",0,45,600,600);
   gStyle->SetOptStat(0);
   KtLPFOsR1p10_Alpha5->Range(-0.0231472,-3,0.0171088,17);
   KtLPFOsR1p10_Alpha5->SetFillColor(0);
   KtLPFOsR1p10_Alpha5->SetBorderMode(0);
   KtLPFOsR1p10_Alpha5->SetBorderSize(2);
   KtLPFOsR1p10_Alpha5->SetTickx(1);
   KtLPFOsR1p10_Alpha5->SetTicky(1);
   KtLPFOsR1p10_Alpha5->SetLeftMargin(0.2);
   KtLPFOsR1p10_Alpha5->SetRightMargin(0.05);
   KtLPFOsR1p10_Alpha5->SetBottomMargin(0.15);
   KtLPFOsR1p10_Alpha5->SetFrameLineWidth(2);
   KtLPFOsR1p10_Alpha5->SetFrameBorderMode(0);
   KtLPFOsR1p10_Alpha5->SetFrameLineWidth(2);
   KtLPFOsR1p10_Alpha5->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(35);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(2);
   graph->SetPoint(0,-0.017,563.813748);
   graph->SetPoint(1,-0.016,472.0171474);
   graph->SetPoint(2,-0.015,389.6070675);
   graph->SetPoint(3,-0.014,316.4383938);
   graph->SetPoint(4,-0.013,252.2985341);
   graph->SetPoint(5,-0.012,196.8987961);
   graph->SetPoint(6,-0.011,149.8680363);
   graph->SetPoint(7,-0.01,110.7446242);
   graph->SetPoint(8,-0.009,78.97627829);
   graph->SetPoint(9,-0.008,53.91793461);
   graph->SetPoint(10,-0.007,34.84110081);
   graph->SetPoint(11,-0.006,20.94967134);
   graph->SetPoint(12,-0.005,11.40675135);
   graph->SetPoint(13,-0.004,5.365525863);
   graph->SetPoint(14,-0.003,1.99534341);
   graph->SetPoint(15,-0.002,0.4845962213);
   graph->SetPoint(16,-0.001,0.04440874858);
   graph->SetPoint(17,6.938893904e-18,0);
   graph->SetPoint(18,0.001,0.01041474019);
   graph->SetPoint(19,0.002,0.230467127);
   graph->SetPoint(20,0.003,1.21227484);
   graph->SetPoint(21,0.004,3.675200471);
   graph->SetPoint(22,0.005,8.373606122);
   graph->SetPoint(23,0.006,16.0785356);
   graph->SetPoint(24,0.007,27.58300565);
   graph->SetPoint(25,0.008,43.68919962);
   graph->SetPoint(26,0.009,65.18087398);
   graph->SetPoint(27,0.01,92.79610001);
   graph->SetPoint(28,0.011,127.2062009);
   graph->SetPoint(29,0.012,169.0040952);
   graph->SetPoint(30,0.013,218.6977959);
   graph->SetPoint(31,0.014,276.7093451);
   graph->SetPoint(32,0.015,343.3808389);
   graph->SetPoint(33,0.016,418.9754292);
   graph->SetPoint(34,0.017,503.6870024);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,-0.0204,0.0204);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(15);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineWidth(2);
   Graph_Graph14->GetXaxis()->SetTitle("#alpha_{5}");
   Graph_Graph14->GetXaxis()->SetRange(14,87);
   Graph_Graph14->GetXaxis()->SetNdivisions(5);
   Graph_Graph14->GetXaxis()->SetLabelFont(132);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.025);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph14->GetXaxis()->SetTitleFont(132);
   Graph_Graph14->GetYaxis()->SetTitle("#chi^{2}");
   Graph_Graph14->GetYaxis()->SetLabelFont(132);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleFont(132);
   Graph_Graph14->GetZaxis()->SetLabelFont(132);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph14);
   
   
   TF1 *Alpha5Fit = new TF1("Alpha5Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.005,0.005);
   Alpha5Fit->SetFillColor(1);
   Alpha5Fit->SetFillStyle(0);
   Alpha5Fit->SetLineWidth(2);
   Alpha5Fit->SetChisquare(0.04857916);
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
   Alpha5Fit->SetParameter(0,-42.18004);
   Alpha5Fit->SetParError(0,28.3199);
   Alpha5Fit->SetParLimits(0,0,0);
   Alpha5Fit->SetParameter(1,56353.45);
   Alpha5Fit->SetParError(1,9570.081);
   Alpha5Fit->SetParLimits(1,0,0);
   Alpha5Fit->SetParameter(2,-9661339);
   Alpha5Fit->SetParError(2,2103185);
   Alpha5Fit->SetParLimits(2,0,0);
   Alpha5Fit->SetParameter(3,1.381692e+10);
   Alpha5Fit->SetParError(3,5.787423e+08);
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
   Alpha5Fit->SetChisquare(0.04857916);
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
   Alpha5Fit->SetParameter(0,-42.18004);
   Alpha5Fit->SetParError(0,28.3199);
   Alpha5Fit->SetParLimits(0,0,0);
   Alpha5Fit->SetParameter(1,56353.45);
   Alpha5Fit->SetParError(1,9570.081);
   Alpha5Fit->SetParLimits(1,0,0);
   Alpha5Fit->SetParameter(2,-9661339);
   Alpha5Fit->SetParError(2,2103185);
   Alpha5Fit->SetParLimits(2,0,0);
   Alpha5Fit->SetParameter(3,1.381692e+10);
   Alpha5Fit->SetParError(3,5.787423e+08);
   Alpha5Fit->SetParLimits(3,0,0);
   Alpha5Fit->Draw("same");
   
   TLegend *leg = new TLegend(0.15,0.95,0.9,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);

   ci = 10025;
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
   KtLPFOsR1p10_Alpha5->Modified();
   KtLPFOsR1p10_Alpha5->cd();
   KtLPFOsR1p10_Alpha5->SetSelected(KtLPFOsR1p10_Alpha5);
}
