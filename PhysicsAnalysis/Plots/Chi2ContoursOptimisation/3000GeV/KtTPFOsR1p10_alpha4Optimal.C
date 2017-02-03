{
//=========Macro generated from canvas: KtTPFOsR1p10_Alpha4/
//=========  (Fri Feb  3 14:58:53 2017) by ROOT version5.34/37
   TCanvas *KtTPFOsR1p10_Alpha4 = new TCanvas("KtTPFOsR1p10_Alpha4", "",0,45,600,600);
   gStyle->SetOptStat(0);
   KtTPFOsR1p10_Alpha4->Range(-0.003024,-1.875,0.002736,16.875);
   KtTPFOsR1p10_Alpha4->SetFillColor(0);
   KtTPFOsR1p10_Alpha4->SetBorderMode(0);
   KtTPFOsR1p10_Alpha4->SetBorderSize(2);
   KtTPFOsR1p10_Alpha4->SetTickx(1);
   KtTPFOsR1p10_Alpha4->SetTicky(1);
   KtTPFOsR1p10_Alpha4->SetRightMargin(0.05);
   KtTPFOsR1p10_Alpha4->SetFrameLineWidth(2);
   KtTPFOsR1p10_Alpha4->SetFrameBorderMode(0);
   KtTPFOsR1p10_Alpha4->SetFrameLineWidth(2);
   KtTPFOsR1p10_Alpha4->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(41);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(2);
   graph->SetPoint(0,-0.00200299668,130.516308);
   graph->SetPoint(1,-0.001906675609,112.0923944);
   graph->SetPoint(2,-0.00180072243,95.29891566);
   graph->SetPoint(3,-0.001704401359,80.10326303);
   graph->SetPoint(4,-0.001608080288,66.44021915);
   graph->SetPoint(5,-0.00150212711,54.309784);
   graph->SetPoint(6,-0.001405806039,43.61413151);
   graph->SetPoint(7,-0.001309484968,34.32065297);
   graph->SetPoint(8,-0.00120353179,26.42934839);
   graph->SetPoint(9,-0.001107210719,19.74456558);
   graph->SetPoint(10,-0.001001257541,14.33152194);
   graph->SetPoint(11,-0.0009049364696,9.961956595);
   graph->SetPoint(12,-0.0008086153985,6.570652146);
   graph->SetPoint(13,-0.0007026622203,4.092391203);
   graph->SetPoint(14,-0.0006063411493,2.331521585);
   graph->SetPoint(15,-0.0005003879711,1.190217203);
   graph->SetPoint(16,-0.0004040669001,0.5380432708);
   graph->SetPoint(17,-0.000307745829,0.1793476079);
   graph->SetPoint(18,-0.0002017926508,0.04891282142);
   graph->SetPoint(19,-0.0001054715798,0.01630412479);
   graph->SetPoint(20,-9.150508724e-06,0.01630412479);
   graph->SetPoint(21,9.680266944e-05,0.01630412479);
   graph->SetPoint(22,0.0001931237405,0.04891282142);
   graph->SetPoint(23,0.0002990769187,0.1793476079);
   graph->SetPoint(24,0.0003953979897,0.5380432708);
   graph->SetPoint(25,0.0004917190608,1.190217203);
   graph->SetPoint(26,0.0005976722389,2.298912888);
   graph->SetPoint(27,0.00069399331,4.02717381);
   graph->SetPoint(28,0.0007999464882,6.44021736);
   graph->SetPoint(29,0.0008962675592,9.701087022);
   graph->SetPoint(30,0.0009925886303,13.90760889);
   graph->SetPoint(31,0.001098541808,19.09239165);
   graph->SetPoint(32,0.001194862879,25.45108749);
   graph->SetPoint(33,0.001291183951,32.95108772);
   graph->SetPoint(34,0.001397137129,41.7554358);
   graph->SetPoint(35,0.0014934582,51.83152306);
   graph->SetPoint(36,0.001599411378,63.27717558);
   graph->SetPoint(37,0.001695732449,76.12500205);
   graph->SetPoint(38,0.00179205352,90.40761117);
   graph->SetPoint(39,0.001898006698,106.1576116);
   graph->SetPoint(40,0.001994327769,123.3750035);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","",100,-0.0024,0.0024);
   Graph_Graph_Graph13->SetMinimum(0);
   Graph_Graph_Graph13->SetMaximum(15);
   Graph_Graph_Graph13->SetDirectory(0);
   Graph_Graph_Graph13->SetStats(0);
   Graph_Graph_Graph13->SetLineWidth(2);
   Graph_Graph_Graph13->GetXaxis()->SetTitle("#alpha_{4}");
   Graph_Graph_Graph13->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph13->GetXaxis()->SetNdivisions(505);
   Graph_Graph_Graph13->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph13->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph13->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph13->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph13->GetYaxis()->SetTitle("#chi^{2}");
   Graph_Graph_Graph13->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph13->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph13->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph13->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph13->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph13->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph13->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph13->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph_Graph13);
   
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","pol4",-0.000816,0.000768);
   PrevFitTMP->SetFillColor(1);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(4);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(0.01341487);
   PrevFitTMP->SetNDF(11);
   PrevFitTMP->GetXaxis()->SetNdivisions(505);
   PrevFitTMP->GetXaxis()->SetLabelFont(132);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.05);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.05);
   PrevFitTMP->GetXaxis()->SetTitleFont(132);
   PrevFitTMP->GetYaxis()->SetLabelFont(132);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.05);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.05);
   PrevFitTMP->GetYaxis()->SetTitleFont(132);
   PrevFitTMP->SetParameter(0,-0.03496034);
   PrevFitTMP->SetParError(0,0.01639226);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-22.74214);
   PrevFitTMP->SetParError(1,50.02659);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,1343329);
   PrevFitTMP->SetParError(2,163378.3);
   PrevFitTMP->SetParLimits(2,0,0);
   PrevFitTMP->SetParameter(3,4.678538e+07);
   PrevFitTMP->SetParError(3,1.302905e+08);
   PrevFitTMP->SetParLimits(3,0,0);
   PrevFitTMP->SetParameter(4,1.411027e+13);
   PrevFitTMP->SetParError(4,2.970515e+11);
   PrevFitTMP->SetParLimits(4,0,0);

   std::cout << "Lower best limit on alpha 4 = " << PrevFitTMP->GetX(0.989,-0.005,0) << std::endl;
   std::cout << "Upper best limit on alpha 4 = " << PrevFitTMP->GetX(0.989,0,0.005) << std::endl;

   graph->GetListOfFunctions()->Add(PrevFitTMP);
   graph->Draw("apl");
   
   TLegend *leg = new TLegend(0.15,0.15,0.35,0.35,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","#splitline{4th Order}{Polynomial Fit}","l");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   KtTPFOsR1p10_Alpha4->Modified();
   KtTPFOsR1p10_Alpha4->cd();
   KtTPFOsR1p10_Alpha4->SetSelected(KtTPFOsR1p10_Alpha4);

   KtTPFOsR1p10_Alpha4->SaveAs("KtTPFOsR1p10_alpha4Optimal.pdf");
}
