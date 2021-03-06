{
//=========Macro generated from canvas: CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5/
//=========  (Thu Jul 20 10:43:38 2017) by ROOT version5.34/37
   TCanvas *CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5 = new TCanvas("CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5", "",0,45,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->Range(-0.07728,-3,0.05712,17);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetFillColor(0);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetBorderMode(0);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetBorderSize(2);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetTickx(1);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetTicky(1);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetLeftMargin(0.2);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetRightMargin(0.05);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetBottomMargin(0.15);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetFrameLineWidth(2);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetFrameBorderMode(0);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetFrameLineWidth(2);
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(41);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(2);
   graph->SetPoint(0,-0.05,427.0215373);
   graph->SetPoint(1,-0.0475,368.0864903);
   graph->SetPoint(2,-0.045,314.353899);
   graph->SetPoint(3,-0.0425,265.7860384);
   graph->SetPoint(4,-0.04,222.2920291);
   graph->SetPoint(5,-0.0375,183.5274742);
   graph->SetPoint(6,-0.035,149.2217796);
   graph->SetPoint(7,-0.0325,119.3028628);
   graph->SetPoint(8,-0.03,93.62674137);
   graph->SetPoint(9,-0.0275,71.76090446);
   graph->SetPoint(10,-0.025,53.3906288);
   graph->SetPoint(11,-0.0225,38.4084476);
   graph->SetPoint(12,-0.02,26.59839221);
   graph->SetPoint(13,-0.0175,17.41611354);
   graph->SetPoint(14,-0.015,10.52363428);
   graph->SetPoint(15,-0.0125,5.774380126);
   graph->SetPoint(16,-0.01,2.836689827);
   graph->SetPoint(17,-0.0075,1.153533575);
   graph->SetPoint(18,-0.005,0.3166638895);
   graph->SetPoint(19,-0.0025,0.03663591138);
   graph->SetPoint(20,7.806255642e-18,0);
   graph->SetPoint(21,0.0025,0.002504477709);
   graph->SetPoint(22,0.005,0.05959272164);
   graph->SetPoint(23,0.0075,0.3463577207);
   graph->SetPoint(24,0.01,1.075573225);
   graph->SetPoint(25,0.0125,2.561472077);
   graph->SetPoint(26,0.015,5.251257986);
   graph->SetPoint(27,0.0175,9.457276823);
   graph->SetPoint(28,0.02,15.34563598);
   graph->SetPoint(29,0.0225,23.22687452);
   graph->SetPoint(30,0.025,33.58689416);
   graph->SetPoint(31,0.0275,46.65398784);
   graph->SetPoint(32,0.03,62.55919571);
   graph->SetPoint(33,0.0325,81.60774001);
   graph->SetPoint(34,0.035,104.2128795);
   graph->SetPoint(35,0.0375,130.5375928);
   graph->SetPoint(36,0.04,160.6769587);
   graph->SetPoint(37,0.0425,194.9052075);
   graph->SetPoint(38,0.045,233.5623555);
   graph->SetPoint(39,0.0475,276.7582139);
   graph->SetPoint(40,0.05,324.5520763);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,-0.06,0.06);
   Graph_Graph4->SetMinimum(0);
   Graph_Graph4->SetMaximum(15);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   Graph_Graph4->SetLineWidth(2);
   Graph_Graph4->GetXaxis()->SetTitle("#alpha_{5}");
   Graph_Graph4->GetXaxis()->SetRange(9,92);
   Graph_Graph4->GetXaxis()->SetNdivisions(7);
   Graph_Graph4->GetXaxis()->SetLabelFont(132);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.025);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1.2);
   Graph_Graph4->GetXaxis()->SetTitleFont(132);
   Graph_Graph4->GetYaxis()->SetTitle("#chi^{2}");
   Graph_Graph4->GetYaxis()->SetLabelFont(132);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleFont(132);
   Graph_Graph4->GetZaxis()->SetLabelFont(132);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph4);
   
   
   TF1 *Alpha5Fit = new TF1("Alpha5Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.015,0.015);
   Alpha5Fit->SetFillColor(1);
   Alpha5Fit->SetFillStyle(0);
   Alpha5Fit->SetLineWidth(2);
   Alpha5Fit->SetChisquare(0.01931416);
   Alpha5Fit->SetNDF(8);
   Alpha5Fit->GetXaxis()->SetNdivisions(505);
   Alpha5Fit->GetXaxis()->SetLabelFont(132);
   Alpha5Fit->GetXaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleFont(132);
   Alpha5Fit->GetYaxis()->SetLabelFont(132);
   Alpha5Fit->GetYaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleFont(132);
   Alpha5Fit->SetParameter(0,-13.15789);
   Alpha5Fit->SetParError(0,4.494034);
   Alpha5Fit->SetParLimits(0,0,0);
   Alpha5Fit->SetParameter(1,6741.015);
   Alpha5Fit->SetParError(1,517.997);
   Alpha5Fit->SetParLimits(1,0,0);
   Alpha5Fit->SetParameter(2,-727323.3);
   Alpha5Fit->SetParError(2,35085.8);
   Alpha5Fit->SetParLimits(2,0,0);
   Alpha5Fit->SetParameter(3,1.262152e+08);
   Alpha5Fit->SetParError(3,3350531);
   Alpha5Fit->SetParLimits(3,0,0);
   graph->GetListOfFunctions()->Add(Alpha5Fit);
   graph->Draw("apl");
   
   TF1 *Alpha5Fit = new TF1("Alpha5Fit","[0]*x+[1]*x*x+[2]*x*x*x+[3]*x*x*x*x",-0.015,0.015);
   Alpha5Fit->SetFillColor(1);
   Alpha5Fit->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   Alpha5Fit->SetLineColor(ci);
   Alpha5Fit->SetLineWidth(3);
   Alpha5Fit->SetChisquare(0.01931416);
   Alpha5Fit->SetNDF(8);
   Alpha5Fit->GetXaxis()->SetNdivisions(505);
   Alpha5Fit->GetXaxis()->SetLabelFont(132);
   Alpha5Fit->GetXaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetXaxis()->SetTitleFont(132);
   Alpha5Fit->GetYaxis()->SetLabelFont(132);
   Alpha5Fit->GetYaxis()->SetLabelSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleSize(0.05);
   Alpha5Fit->GetYaxis()->SetTitleFont(132);
   Alpha5Fit->SetParameter(0,-13.15789);
   Alpha5Fit->SetParError(0,4.494034);
   Alpha5Fit->SetParLimits(0,0,0);
   Alpha5Fit->SetParameter(1,6741.015);
   Alpha5Fit->SetParError(1,517.997);
   Alpha5Fit->SetParLimits(1,0,0);
   Alpha5Fit->SetParameter(2,-727323.3);
   Alpha5Fit->SetParError(2,35085.8);
   Alpha5Fit->SetParLimits(2,0,0);
   Alpha5Fit->SetParameter(3,1.262152e+08);
   Alpha5Fit->SetParError(3,3350531);
   Alpha5Fit->SetParLimits(3,0,0);
   Alpha5Fit->Draw("same");
   
   TLegend *leg = new TLegend(0.15,0.95,0.9,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);

   ci = 10010;
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
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->Modified();
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->cd();
   CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5->SetSelected(CosThetaStarJets_Chi2CosThetaStarSynJets_Alpha5);
}
