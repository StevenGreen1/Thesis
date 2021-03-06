{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Oct 19 14:47:01 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   gStyle->SetOptStat(0);
   c1->Range(-21,2.8,119,24.13333);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,105,1000,6,22);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->GetXaxis()->SetTitle("E_{K^{0}_{L}} [GeV]");
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
   
   TGraph *graph = new TGraph(200);
   graph->SetName("");
   graph->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3001);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.525,78.95420312);
   graph->SetPoint(1,1.575,45.59658683);
   graph->SetPoint(2,2.625,35.32853292);
   graph->SetPoint(3,3.675,29.86614469);
   graph->SetPoint(4,4.725,26.346592);
   graph->SetPoint(5,5.775,23.83783507);
   graph->SetPoint(6,6.825,21.93354682);
   graph->SetPoint(7,7.875,20.42453784);
   graph->SetPoint(8,8.925,19.1906935);
   graph->SetPoint(9,9.975,18.15747807);
   graph->SetPoint(10,11.025,17.27586562);
   graph->SetPoint(11,12.075,16.51211175);
   graph->SetPoint(12,13.125,15.84212889);
   graph->SetPoint(13,14.175,15.2482011);
   graph->SetPoint(14,15.225,14.71696908);
   graph->SetPoint(15,16.275,14.23814299);
   graph->SetPoint(16,17.325,13.80365146);
   graph->SetPoint(17,18.375,13.40706231);
   graph->SetPoint(18,19.425,13.04317797);
   graph->SetPoint(19,20.475,12.70774667);
   graph->SetPoint(20,21.525,12.39725205);
   graph->SetPoint(21,22.575,12.10875734);
   graph->SetPoint(22,23.625,11.83978809);
   graph->SetPoint(23,24.675,11.58824257);
   graph->SetPoint(24,25.725,11.3523226);
   graph->SetPoint(25,26.775,11.13047943);
   graph->SetPoint(26,27.825,10.92137094);
   graph->SetPoint(27,28.875,10.7238275);
   graph->SetPoint(28,29.925,10.53682447);
   graph->SetPoint(29,30.975,10.35945993);
   graph->SetPoint(30,32.025,10.19093634);
   graph->SetPoint(31,33.075,10.03054556);
   graph->SetPoint(32,34.125,9.877656364);
   graph->SetPoint(33,35.175,9.73170399);
   graph->SetPoint(34,36.225,9.592181441);
   graph->SetPoint(35,37.275,9.458632089);
   graph->SetPoint(36,38.325,9.330643425);
   graph->SetPoint(37,39.375,9.207841724);
   graph->SetPoint(38,40.425,9.089887481);
   graph->SetPoint(39,41.475,8.976471489);
   graph->SetPoint(40,42.525,8.867311443);
   graph->SetPoint(41,43.575,8.762149012);
   graph->SetPoint(42,44.625,8.660747278);
   graph->SetPoint(43,45.675,8.562888512);
   graph->SetPoint(44,46.725,8.468372216);
   graph->SetPoint(45,47.775,8.377013414);
   graph->SetPoint(46,48.825,8.28864114);
   graph->SetPoint(47,49.875,8.203097098);
   graph->SetPoint(48,50.925,8.120234489);
   graph->SetPoint(49,51.975,8.039916949);
   graph->SetPoint(50,53.025,7.962017625);
   graph->SetPoint(51,54.075,7.88641833);
   graph->SetPoint(52,55.125,7.813008804);
   graph->SetPoint(53,56.175,7.741686038);
   graph->SetPoint(54,57.225,7.672353675);
   graph->SetPoint(55,58.275,7.604921469);
   graph->SetPoint(56,59.325,7.539304791);
   graph->SetPoint(57,60.375,7.475424194);
   graph->SetPoint(58,61.425,7.413205006);
   graph->SetPoint(59,62.475,7.352576974);
   graph->SetPoint(60,63.525,7.293473926);
   graph->SetPoint(61,64.575,7.235833477);
   graph->SetPoint(62,65.625,7.179596752);
   graph->SetPoint(63,66.675,7.124708139);
   graph->SetPoint(64,67.725,7.071115057);
   graph->SetPoint(65,68.775,7.018767747);
   graph->SetPoint(66,69.825,6.967619085);
   graph->SetPoint(67,70.875,6.9176244);
   graph->SetPoint(68,71.925,6.868741313);
   graph->SetPoint(69,72.975,6.820929593);
   graph->SetPoint(70,74.025,6.774151011);
   graph->SetPoint(71,75.075,6.728369222);
   graph->SetPoint(72,76.125,6.68354964);
   graph->SetPoint(73,77.175,6.639659338);
   graph->SetPoint(74,78.225,6.596666939);
   graph->SetPoint(75,79.275,6.554542528);
   graph->SetPoint(76,80.325,6.513257566);
   graph->SetPoint(77,81.375,6.472784808);
   graph->SetPoint(78,82.425,6.433098228);
   graph->SetPoint(79,83.475,6.394172952);
   graph->SetPoint(80,84.525,6.355985192);
   graph->SetPoint(81,85.575,6.318512187);
   graph->SetPoint(82,86.625,6.281732144);
   graph->SetPoint(83,87.675,6.245624188);
   graph->SetPoint(84,88.725,6.210168313);
   graph->SetPoint(85,89.775,6.175345335);
   graph->SetPoint(86,90.825,6.141136849);
   graph->SetPoint(87,91.875,6.10752519);
   graph->SetPoint(88,92.925,6.074493395);
   graph->SetPoint(89,93.975,6.042025166);
   graph->SetPoint(90,95.025,6.010104838);
   graph->SetPoint(91,96.075,5.97871735);
   graph->SetPoint(92,97.125,5.94784821);
   graph->SetPoint(93,98.175,5.917483472);
   graph->SetPoint(94,99.225,5.88760971);
   graph->SetPoint(95,100.275,5.85821399);
   graph->SetPoint(96,101.325,5.829283851);
   graph->SetPoint(97,102.375,5.800807278);
   graph->SetPoint(98,103.425,5.772772689);
   graph->SetPoint(99,104.475,5.745168908);
   graph->SetPoint(100,104.475,5.984069743);
   graph->SetPoint(101,103.425,6.011321403);
   graph->SetPoint(102,102.375,6.039005287);
   graph->SetPoint(103,101.325,6.067132658);
   graph->SetPoint(104,100.275,6.095715192);
   graph->SetPoint(105,99.225,6.124764998);
   graph->SetPoint(106,98.175,6.154294639);
   graph->SetPoint(107,97.125,6.184317152);
   graph->SetPoint(108,96.075,6.214846075);
   graph->SetPoint(109,95.025,6.245895469);
   graph->SetPoint(110,93.975,6.277479945);
   graph->SetPoint(111,92.925,6.309614692);
   graph->SetPoint(112,91.875,6.342315507);
   graph->SetPoint(113,90.825,6.375598826);
   graph->SetPoint(114,89.775,6.409481759);
   graph->SetPoint(115,88.725,6.443982123);
   graph->SetPoint(116,87.675,6.479118484);
   graph->SetPoint(117,86.625,6.514910194);
   graph->SetPoint(118,85.575,6.551377436);
   graph->SetPoint(119,84.525,6.58854127);
   graph->SetPoint(120,83.475,6.626423686);
   graph->SetPoint(121,82.425,6.66504765);
   graph->SetPoint(122,81.375,6.704437167);
   graph->SetPoint(123,80.325,6.74461734);
   graph->SetPoint(124,79.275,6.785614433);
   graph->SetPoint(125,78.225,6.827455945);
   graph->SetPoint(126,77.175,6.870170684);
   graph->SetPoint(127,76.125,6.913788845);
   graph->SetPoint(128,75.075,6.958342102);
   graph->SetPoint(129,74.025,7.003863699);
   graph->SetPoint(130,72.975,7.050388554);
   graph->SetPoint(131,71.925,7.097953364);
   graph->SetPoint(132,70.875,7.146596728);
   graph->SetPoint(133,69.825,7.196359276);
   graph->SetPoint(134,68.775,7.247283802);
   graph->SetPoint(135,67.725,7.299415421);
   graph->SetPoint(136,66.675,7.352801731);
   graph->SetPoint(137,65.625,7.407492989);
   graph->SetPoint(138,64.575,7.463542309);
   graph->SetPoint(139,63.525,7.521005872);
   graph->SetPoint(140,62.475,7.579943154);
   graph->SetPoint(141,61.425,7.640417185);
   graph->SetPoint(142,60.375,7.702494823);
   graph->SetPoint(143,59.325,7.766247056);
   graph->SetPoint(144,58.275,7.83174934);
   graph->SetPoint(145,57.225,7.899081962);
   graph->SetPoint(146,56.175,7.96833045);
   graph->SetPoint(147,55.125,8.039586016);
   graph->SetPoint(148,54.075,8.112946053);
   graph->SetPoint(149,53.025,8.188514685);
   graph->SetPoint(150,51.975,8.266403373);
   graph->SetPoint(151,50.925,8.346731595);
   graph->SetPoint(152,49.875,8.429627605);
   graph->SetPoint(153,48.825,8.515229271);
   graph->SetPoint(154,47.775,8.603685032);
   graph->SetPoint(155,46.725,8.695154952);
   graph->SetPoint(156,45.675,8.789811924);
   graph->SetPoint(157,44.625,8.887843017);
   graph->SetPoint(158,43.575,8.989451012);
   graph->SetPoint(159,42.525,9.094856128);
   graph->SetPoint(160,41.475,9.204298011);
   graph->SetPoint(161,40.425,9.318037979);
   graph->SetPoint(162,39.375,9.436361621);
   graph->SetPoint(163,38.325,9.559581758);
   graph->SetPoint(164,37.275,9.688041887);
   graph->SetPoint(165,36.225,9.822120146);
   graph->SetPoint(166,35.175,9.962233946);
   graph->SetPoint(167,34.125,10.10884536);
   graph->SetPoint(168,33.075,10.26246748);
   graph->SetPoint(169,32.025,10.42367187);
   graph->SetPoint(170,30.975,10.59309741);
   graph->SetPoint(171,29.925,10.77146087);
   graph->SetPoint(172,28.875,10.95956954);
   graph->SetPoint(173,27.825,11.15833646);
   graph->SetPoint(174,26.775,11.36879893);
   graph->SetPoint(175,25.725,11.59214112);
   graph->SetPoint(176,24.675,11.8297219);
   graph->SetPoint(177,23.625,12.08310947);
   graph->SetPoint(178,22.575,12.35412467);
   graph->SetPoint(179,21.525,12.64489586);
   graph->SetPoint(180,20.475,12.95792901);
   graph->SetPoint(181,19.425,13.29619845);
   graph->SetPoint(182,18.375,13.66326571);
   graph->SetPoint(183,17.325,14.06343749);
   graph->SetPoint(184,16.275,14.50197878);
   graph->SetPoint(185,15.225,14.9854056);
   graph->SetPoint(186,14.175,15.52189499);
   graph->SetPoint(187,13.125,16.12187216);
   graph->SetPoint(188,12.075,16.79887295);
   graph->SetPoint(189,11.025,17.57084849);
   graph->SetPoint(190,9.975,18.46220755);
   graph->SetPoint(191,8.925,19.50714658);
   graph->SetPoint(192,7.875,20.75535119);
   graph->SetPoint(193,6.825,22.28236462);
   graph->SetPoint(194,5.775,24.20993231);
   graph->SetPoint(195,4.725,26.75009667);
   graph->SetPoint(196,3.675,30.31475135);
   graph->SetPoint(197,2.625,35.84876301);
   graph->SetPoint(198,1.575,46.25454589);
   graph->SetPoint(199,0.525,80.07015079);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",200,0,114.87);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(87.50265);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->GetXaxis()->SetNdivisions(505);
   Graph_Graph1->GetXaxis()->SetLabelFont(132);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(132);
   Graph_Graph1->GetYaxis()->SetLabelFont(132);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleFont(132);
   Graph_Graph1->GetZaxis()->SetLabelFont(132);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");
   
   TF1 *Reported = new TF1("Reported","TMath::Sqrt(([0]*[0]/x)+[1]*[1])",0,100);
   Reported->SetFillColor(1);
   Reported->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   Reported->SetLineColor(ci);
   Reported->SetLineWidth(2);
   Reported->GetXaxis()->SetNdivisions(505);
   Reported->GetXaxis()->SetLabelFont(132);
   Reported->GetXaxis()->SetLabelSize(0.05);
   Reported->GetXaxis()->SetTitleSize(0.05);
   Reported->GetXaxis()->SetTitleFont(132);
   Reported->GetYaxis()->SetLabelFont(132);
   Reported->GetYaxis()->SetLabelSize(0.05);
   Reported->GetYaxis()->SetTitleSize(0.05);
   Reported->GetYaxis()->SetTitleFont(132);
   Reported->SetParameter(0,57.6);
   Reported->SetParError(0,0);
   Reported->SetParLimits(0,0,0);
   Reported->SetParameter(1,1.6);
   Reported->SetParError(1,0);
   Reported->SetParLimits(1,0,0);
   Reported->Draw("l same");
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,10,19.87064);
   gre->SetPointError(0,0,0.2018349);
   gre->SetPoint(1,20,14.3206);
   gre->SetPointError(1,0,0.1383574);
   gre->SetPoint(2,30,11.26574);
   gre->SetPointError(2,0,0.1079791);
   gre->SetPoint(3,40,10.07265);
   gre->SetPointError(3,0,0.1015817);
   gre->SetPoint(4,50,9.754968);
   gre->SetPointError(4,0,0.1008997);
   gre->SetPoint(5,60,9.77132);
   gre->SetPointError(5,0,0.1012738);
   gre->SetPoint(6,70,9.944364);
   gre->SetPointError(6,0,0.1004147);
   gre->SetPoint(7,80,10.51875);
   gre->SetPointError(7,0,0.1170022);
   gre->SetPoint(8,90,10.49866);
   gre->SetPointError(8,0,0.1157765);
   gre->SetPoint(9,100,11.0044);
   gre->SetPointError(9,0,0.1305194);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,1,109);
   Graph_Graph1->SetMinimum(8.612229);
   Graph_Graph1->SetMaximum(21.11431);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(2);
   Graph_Graph1->GetXaxis()->SetNdivisions(505);
   Graph_Graph1->GetXaxis()->SetLabelFont(132);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(132);
   Graph_Graph1->GetYaxis()->SetLabelFont(132);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetYaxis()->SetTitleFont(132);
   Graph_Graph1->GetZaxis()->SetLabelFont(132);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw(" pl");
   
   TLegend *leg = new TLegend(0.35,0.45,0.85,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Parameterisation : #frac{#it{a}}{#sqrt{E_{K^{0}_{L}}}} #oplus #it{b}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Reported_Mean","#splitline{#it{a} = 57.6 #pm 0.4%,}{#it{b} = 1.6 #pm 0.3%}","lf");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Graph0","#splitline{Full ILD}{Simulation}","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   TLine *line = new TLine(80,6,80,22);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
