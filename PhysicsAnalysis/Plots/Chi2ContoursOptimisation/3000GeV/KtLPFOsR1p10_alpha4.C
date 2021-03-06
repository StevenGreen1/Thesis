{
//=========Macro generated from canvas: KtLPFOsR1p10_Alpha4/
//=========  (Tue May  2 12:07:13 2017) by ROOT version5.34/37
   TCanvas *KtLPFOsR1p10_Alpha4 = new TCanvas("KtLPFOsR1p10_Alpha4", "",0,45,600,600);
   gStyle->SetOptStat(0);
   KtLPFOsR1p10_Alpha4->Range(-0.0030912,-3,0.0022848,17);
   KtLPFOsR1p10_Alpha4->SetFillColor(0);
   KtLPFOsR1p10_Alpha4->SetBorderMode(0);
   KtLPFOsR1p10_Alpha4->SetBorderSize(2);
   KtLPFOsR1p10_Alpha4->SetTickx(1);
   KtLPFOsR1p10_Alpha4->SetTicky(1);
   KtLPFOsR1p10_Alpha4->SetLeftMargin(0.2);
   KtLPFOsR1p10_Alpha4->SetRightMargin(0.05);
   KtLPFOsR1p10_Alpha4->SetBottomMargin(0.15);
   KtLPFOsR1p10_Alpha4->SetFrameLineWidth(2);
   KtLPFOsR1p10_Alpha4->SetFrameBorderMode(0);
   KtLPFOsR1p10_Alpha4->SetFrameLineWidth(2);
   KtLPFOsR1p10_Alpha4->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(41);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(2);
   graph->SetPoint(0,-0.002,377.0415477);
   graph->SetPoint(1,-0.0019,330.8095155);
   graph->SetPoint(2,-0.0018,287.6287817);
   graph->SetPoint(3,-0.0017,247.6270963);
   graph->SetPoint(4,-0.0016,210.6948553);
   graph->SetPoint(5,-0.0015,176.9796705);
   graph->SetPoint(6,-0.0014,146.4101712);
   graph->SetPoint(7,-0.0013,118.968539);
   graph->SetPoint(8,-0.0012,94.73658701);
   graph->SetPoint(9,-0.0011,73.49181226);
   graph->SetPoint(10,-0.001,55.35476381);
   graph->SetPoint(11,-0.0009,40.1166073);
   graph->SetPoint(12,-0.0008,27.67349583);
   graph->SetPoint(13,-0.0007,18.01329325);
   graph->SetPoint(14,-0.0006,10.70809158);
   graph->SetPoint(15,-0.0005,5.713131321);
   graph->SetPoint(16,-0.0004,2.580178887);
   graph->SetPoint(17,-0.0003,0.8781070338);
   graph->SetPoint(18,-0.0002,0.1999869814);
   graph->SetPoint(19,-0.0001,0.01609213736);
   graph->SetPoint(20,6.234162492e-19,0);
   graph->SetPoint(21,0.0001,0.01321445559);
   graph->SetPoint(22,0.0002,0.1791499771);
   graph->SetPoint(23,0.0003,0.8109488419);
   graph->SetPoint(24,0.0004,2.422079584);
   graph->SetPoint(25,0.0005,5.412830549);
   graph->SetPoint(26,0.0006,10.20511581);
   graph->SetPoint(27,0.0007,17.23889587);
   graph->SetPoint(28,0.0008,26.56123113);
   graph->SetPoint(29,0.0009,38.59087223);
   graph->SetPoint(30,0.001,53.34091163);
   graph->SetPoint(31,0.0011,70.91288927);
   graph->SetPoint(32,0.0012,91.50974972);
   graph->SetPoint(33,0.0013,115.0113621);
   graph->SetPoint(34,0.0014,141.6336254);
   graph->SetPoint(35,0.0015,171.2931389);
   graph->SetPoint(36,0.0016,204.0032982);
   graph->SetPoint(37,0.0017,239.8322108);
   graph->SetPoint(38,0.0018,278.6287605);
   graph->SetPoint(39,0.0019,320.4984641);
   graph->SetPoint(40,0.002,365.3128405);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,-0.0024,0.0024);
   Graph_Graph13->SetMinimum(0);
   Graph_Graph13->SetMaximum(15);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineWidth(2);
   Graph_Graph13->GetXaxis()->SetTitle("#alpha_{4}");
   Graph_Graph13->GetXaxis()->SetRange(9,92);
   Graph_Graph13->GetXaxis()->SetNdivisions(5);
   Graph_Graph13->GetXaxis()->SetLabelFont(132);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.025);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph13->GetXaxis()->SetTitleFont(132);
   Graph_Graph13->GetYaxis()->SetTitle("#chi^{2}");
   Graph_Graph13->GetYaxis()->SetLabelFont(132);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph13->GetYaxis()->SetTitleFont(132);
   Graph_Graph13->GetZaxis()->SetLabelFont(132);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph13->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph13);
   
   
   TF1 *Alpha4Fit = new TF1("Alpha4Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.0005,0.0005);
   Alpha4Fit->SetFillColor(1);
   Alpha4Fit->SetFillStyle(0);
   Alpha4Fit->SetLineWidth(2);
   Alpha4Fit->SetChisquare(1.636622);
   Alpha4Fit->SetNDF(6);
   Alpha4Fit->GetXaxis()->SetNdivisions(505);
   Alpha4Fit->GetXaxis()->SetLabelFont(132);
   Alpha4Fit->GetXaxis()->SetLabelSize(0.05);
   Alpha4Fit->GetXaxis()->SetTitleSize(0.05);
   Alpha4Fit->GetXaxis()->SetTitleFont(132);
   Alpha4Fit->GetYaxis()->SetLabelFont(132);
   Alpha4Fit->GetYaxis()->SetLabelSize(0.05);
   Alpha4Fit->GetYaxis()->SetTitleSize(0.05);
   Alpha4Fit->GetYaxis()->SetTitleFont(132);
   Alpha4Fit->SetParameter(0,1848.55);
   Alpha4Fit->SetParError(0,1647.266);
   Alpha4Fit->SetParLimits(0,0,0);
   Alpha4Fit->SetParameter(1,1.508292e+07);
   Alpha4Fit->SetParError(1,5559794);
   Alpha4Fit->SetParLimits(1,0,0);
   Alpha4Fit->SetParameter(2,-1.973226e+10);
   Alpha4Fit->SetParError(2,1.223531e+10);
   Alpha4Fit->SetParLimits(2,0,0);
   Alpha4Fit->SetParameter(3,1.073984e+07);
   Alpha4Fit->SetParError(3,3.361727e+13);
   Alpha4Fit->SetParLimits(3,0,0);
   graph->GetListOfFunctions()->Add(Alpha4Fit);
   graph->Draw("apl");
   
   TF1 *Alpha4Fit = new TF1("Alpha4Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.0005,0.0005);
   Alpha4Fit->SetFillColor(1);
   Alpha4Fit->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   Alpha4Fit->SetLineColor(ci);
   Alpha4Fit->SetLineWidth(3);
   Alpha4Fit->SetChisquare(1.636622);
   Alpha4Fit->SetNDF(6);
   Alpha4Fit->GetXaxis()->SetNdivisions(505);
   Alpha4Fit->GetXaxis()->SetLabelFont(132);
   Alpha4Fit->GetXaxis()->SetLabelSize(0.05);
   Alpha4Fit->GetXaxis()->SetTitleSize(0.05);
   Alpha4Fit->GetXaxis()->SetTitleFont(132);
   Alpha4Fit->GetYaxis()->SetLabelFont(132);
   Alpha4Fit->GetYaxis()->SetLabelSize(0.05);
   Alpha4Fit->GetYaxis()->SetTitleSize(0.05);
   Alpha4Fit->GetYaxis()->SetTitleFont(132);
   Alpha4Fit->SetParameter(0,1848.55);
   Alpha4Fit->SetParError(0,1647.266);
   Alpha4Fit->SetParLimits(0,0,0);
   Alpha4Fit->SetParameter(1,1.508292e+07);
   Alpha4Fit->SetParError(1,5559794);
   Alpha4Fit->SetParLimits(1,0,0);
   Alpha4Fit->SetParameter(2,-1.973226e+10);
   Alpha4Fit->SetParError(2,1.223531e+10);
   Alpha4Fit->SetParLimits(2,0,0);
   Alpha4Fit->SetParameter(3,1.073984e+07);
   Alpha4Fit->SetParError(3,3.361727e+13);
   Alpha4Fit->SetParLimits(3,0,0);
   Alpha4Fit->Draw("same");
   
   TLegend *leg = new TLegend(0.15,0.95,0.9,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);

   ci = 10024;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Alpha4Fit","4th Order Polynomial Fit","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   KtLPFOsR1p10_Alpha4->Modified();
   KtLPFOsR1p10_Alpha4->cd();
   KtLPFOsR1p10_Alpha4->SetSelected(KtLPFOsR1p10_Alpha4);
}
