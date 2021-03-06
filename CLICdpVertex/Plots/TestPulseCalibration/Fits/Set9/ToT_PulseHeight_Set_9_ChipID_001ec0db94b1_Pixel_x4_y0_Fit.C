{
//=========Macro generated from canvas: PulseHeightToTTestPulse/
//=========  (Wed Mar  1 09:56:33 2017) by ROOT version5.34/30
   TCanvas *PulseHeightToTTestPulse = new TCanvas("PulseHeightToTTestPulse", "",0,0,3000,2500);
   gStyle->SetOptStat(0);
   PulseHeightToTTestPulse->SetHighLightColor(2);
   PulseHeightToTTestPulse->Range(-37,-4,209.6667,22.66667);
   PulseHeightToTTestPulse->SetFillColor(0);
   PulseHeightToTTestPulse->SetBorderMode(0);
   PulseHeightToTTestPulse->SetBorderSize(2);
   PulseHeightToTTestPulse->SetLeftMargin(0.15);
   PulseHeightToTTestPulse->SetBottomMargin(0.15);
   PulseHeightToTTestPulse->SetFrameBorderMode(0);
   PulseHeightToTTestPulse->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(90);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetPoint(0,166,15);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,16,0.42);
   gre->SetPointError(1,0,0.06808816);
   gre->SetPoint(2,78,8.54);
   gre->SetPointError(2,0,0.05180731);
   gre->SetPoint(3,114,11.85);
   gre->SetPointError(3,0,0.04974934);
   gre->SetPoint(4,72,8.01);
   gre->SetPointError(4,0,0.05384234);
   gre->SetPoint(5,64,7.17);
   gre->SetPointError(5,0,0.04910194);
   gre->SetPoint(6,10,0);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,150,14.98);
   gre->SetPointError(7,0,0.01400001);
   gre->SetPoint(8,106,11.01);
   gre->SetPointError(8,0,0.04581483);
   gre->SetPoint(9,104,10.9);
   gre->SetPointError(9,0,0.04795833);
   gre->SetPoint(10,168,15);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,34,3.8);
   gre->SetPointError(11,0,0.05291505);
   gre->SetPoint(12,76,8.4);
   gre->SetPointError(12,0,0.05477227);
   gre->SetPoint(13,30,3.42);
   gre->SetPointError(13,0,0.04935583);
   gre->SetPoint(14,140,14.28);
   gre->SetPointError(14,0,0.05114683);
   gre->SetPoint(15,42,4.81);
   gre->SetPointError(15,0,0.05602679);
   gre->SetPoint(16,48,5.59);
   gre->SetPointError(16,0,0.05494543);
   gre->SetPoint(17,60,6.76);
   gre->SetPointError(17,0,0.05499092);
   gre->SetPoint(18,90,9.75);
   gre->SetPointError(18,0,0.04974937);
   gre->SetPoint(19,36,4.06);
   gre->SetPointError(19,0,0.05257372);
   gre->SetPoint(20,146,14.83);
   gre->SetPointError(20,0,0.03756329);
   gre->SetPoint(21,170,15);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,12,0);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,164,15);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,74,8.21);
   gre->SetPointError(24,0,0.0534696);
   gre->SetPoint(25,110,11.45);
   gre->SetPointError(25,0,0.05722759);
   gre->SetPoint(26,50,5.78);
   gre->SetPointError(26,0,0.05758468);
   gre->SetPoint(27,28,3.13);
   gre->SetPointError(27,0,0.05225893);
   gre->SetPoint(28,124,12.85);
   gre->SetPointError(28,0,0.05545265);
   gre->SetPoint(29,128,13.14);
   gre->SetPointError(29,0,0.04903059);
   gre->SetPoint(30,152,14.97);
   gre->SetPointError(30,0,0.01705873);
   gre->SetPoint(31,2,0);
   gre->SetPointError(31,0,0);
   gre->SetPoint(32,56,6.37);
   gre->SetPointError(32,0,0.05942221);
   gre->SetPoint(33,92,9.84);
   gre->SetPointError(33,0,0.04630334);
   gre->SetPoint(34,26,2.8);
   gre->SetPointError(34,0,0.05477228);
   gre->SetPoint(35,116,11.95);
   gre->SetPointError(35,0,0.05172041);
   gre->SetPoint(36,44,5.12);
   gre->SetPointError(36,0,0.05528112);
   gre->SetPoint(37,38,4.35);
   gre->SetPointError(37,0,0.05361902);
   gre->SetPoint(38,62,6.87);
   gre->SetPointError(38,0,0.04394313);
   gre->SetPoint(39,108,11.33);
   gre->SetPointError(39,0,0.04910195);
   gre->SetPoint(40,118,12.14);
   gre->SetPointError(40,0,0.04694676);
   gre->SetPoint(41,46,5.32);
   gre->SetPointError(41,0,0.05635601);
   gre->SetPoint(42,148,14.92);
   gre->SetPointError(42,0,0.02712933);
   gre->SetPoint(43,122,12.49);
   gre->SetPointError(43,0,0.05384234);
   gre->SetPoint(44,102,10.72);
   gre->SetPointError(44,0,0.04707439);
   gre->SetPoint(45,98,10.44);
   gre->SetPointError(45,0,0.0496387);
   gre->SetPoint(46,132,13.49);
   gre->SetPointError(46,0,0.05566864);
   gre->SetPoint(47,174,15);
   gre->SetPointError(47,0,0);
   gre->SetPoint(48,54,6.21);
   gre->SetPointError(48,0,0.05156548);
   gre->SetPoint(49,58,6.6);
   gre->SetPointError(49,0,0.05099019);
   gre->SetPoint(50,68,7.66);
   gre->SetPointError(50,0,0.05332918);
   gre->SetPoint(51,24,2.64);
   gre->SetPointError(51,0,0.04799999);
   gre->SetPoint(52,158,15);
   gre->SetPointError(52,0,0);
   gre->SetPoint(53,160,15);
   gre->SetPointError(53,0,0);
   gre->SetPoint(54,154,15);
   gre->SetPointError(54,0,0);
   gre->SetPoint(55,176,15);
   gre->SetPointError(55,0,0);
   gre->SetPoint(56,70,7.81);
   gre->SetPointError(56,0,0.05602679);
   gre->SetPoint(57,126,12.81);
   gre->SetPointError(57,0,0.05778409);
   gre->SetPoint(58,84,9.11);
   gre->SetPointError(58,0,0.05271624);
   gre->SetPoint(59,20,1.84);
   gre->SetPointError(59,0,0.05782736);
   gre->SetPoint(60,66,7.37);
   gre->SetPointError(60,0,0.05030904);
   gre->SetPoint(61,136,13.86);
   gre->SetPointError(61,0,0.0583438);
   gre->SetPoint(62,18,1.08);
   gre->SetPointError(62,0,0.09019978);
   gre->SetPoint(63,162,15);
   gre->SetPointError(63,0,0);
   gre->SetPoint(64,112,11.58);
   gre->SetPointError(64,0,0.05325408);
   gre->SetPoint(65,86,9.27);
   gre->SetPointError(65,0,0.04439594);
   gre->SetPoint(66,80,8.74);
   gre->SetPointError(66,0,0.05219196);
   gre->SetPoint(67,40,4.49);
   gre->SetPointError(67,0,0.05566863);
   gre->SetPoint(68,134,13.65);
   gre->SetPointError(68,0,0.053619);
   gre->SetPoint(69,52,5.97);
   gre->SetPointError(69,0,0.05376803);
   gre->SetPoint(70,138,14.18);
   gre->SetPointError(70,0,0.0589576);
   gre->SetPoint(71,144,14.6);
   gre->SetPointError(71,0,0.04898981);
   gre->SetPoint(72,32,3.53);
   gre->SetPointError(72,0,0.05187482);
   gre->SetPoint(73,120,12.39);
   gre->SetPointError(73,0,0.05638261);
   gre->SetPoint(74,172,15);
   gre->SetPointError(74,0,0);
   gre->SetPoint(75,22,2.25);
   gre->SetPointError(75,0,0.04769696);
   gre->SetPoint(76,100,10.56);
   gre->SetPointError(76,0,0.05161396);
   gre->SetPoint(77,8,0);
   gre->SetPointError(77,0,0);
   gre->SetPoint(78,88,9.55);
   gre->SetPointError(78,0,0.04974934);
   gre->SetPoint(79,130,13.27);
   gre->SetPointError(79,0,0.05070503);
   gre->SetPoint(80,4,0);
   gre->SetPointError(80,0,0);
   gre->SetPoint(81,94,9.88);
   gre->SetPointError(81,0,0.04955804);
   gre->SetPoint(82,178,15);
   gre->SetPointError(82,0,0);
   gre->SetPoint(83,156,15);
   gre->SetPointError(83,0,0);
   gre->SetPoint(84,14,0.02);
   gre->SetPointError(84,0,0.014);
   gre->SetPoint(85,82,8.99);
   gre->SetPointError(85,0,0.04998998);
   gre->SetPoint(86,6,0);
   gre->SetPointError(86,0,0);
   gre->SetPoint(87,96,10.19);
   gre->SetPointError(87,0,0.05233547);
   gre->SetPoint(88,142,14.52);
   gre->SetPointError(88,0,0.05381451);
   gre->SetPoint(89,180,15);
   gre->SetPointError(89,0,0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0,185);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(20);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Pulse Height [mV]");
   Graph_Graph2->GetXaxis()->SetRange(1,100);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("ToT");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   
   TF1 *myfit = new TF1("myfit","([0]*x)+[1]-([2]/(x-[3]))",18,146);
   myfit->SetFillColor(19);
   myfit->SetFillStyle(0);
   myfit->SetLineColor(2);
   myfit->SetLineWidth(2);
   myfit->SetChisquare(135.9402);
   myfit->SetNDF(61);
   myfit->GetXaxis()->SetLabelFont(42);
   myfit->GetXaxis()->SetLabelSize(0.035);
   myfit->GetXaxis()->SetTitleSize(0.035);
   myfit->GetXaxis()->SetTitleFont(42);
   myfit->GetYaxis()->SetLabelFont(42);
   myfit->GetYaxis()->SetLabelSize(0.035);
   myfit->GetYaxis()->SetTitleSize(0.035);
   myfit->GetYaxis()->SetTitleFont(42);
   myfit->SetParameter(0,0.08808445);
   myfit->SetParError(0,0.0003489034);
   myfit->SetParLimits(0,0,0.3);
   myfit->SetParameter(1,2.203251);
   myfit->SetParError(1,0.04788062);
   myfit->SetParLimits(1,0,50);
   myfit->SetParameter(2,43.53152);
   myfit->SetParError(2,1.240638);
   myfit->SetParLimits(2,0,1000);
   myfit->SetParameter(3,1.004451e-09);
   myfit->SetParError(3,2.585215);
   myfit->SetParLimits(3,0,18);
   gre->GetListOfFunctions()->Add(myfit);
   gre->Draw("ap");
   
   TF1 *myfit = new TF1("myfit","([0]*x)+[1]-([2]/(x-[3]))",18,146);
   myfit->SetFillColor(19);
   myfit->SetFillStyle(0);
   myfit->SetLineColor(2);
   myfit->SetLineWidth(2);
   myfit->SetChisquare(135.9402);
   myfit->SetNDF(61);
   myfit->GetXaxis()->SetLabelFont(42);
   myfit->GetXaxis()->SetLabelSize(0.035);
   myfit->GetXaxis()->SetTitleSize(0.035);
   myfit->GetXaxis()->SetTitleFont(42);
   myfit->GetYaxis()->SetLabelFont(42);
   myfit->GetYaxis()->SetLabelSize(0.035);
   myfit->GetYaxis()->SetTitleSize(0.035);
   myfit->GetYaxis()->SetTitleFont(42);
   myfit->SetParameter(0,0.08808445);
   myfit->SetParError(0,0.0003489034);
   myfit->SetParLimits(0,0,0.3);
   myfit->SetParameter(1,2.203251);
   myfit->SetParError(1,0.04788062);
   myfit->SetParLimits(1,0,50);
   myfit->SetParameter(2,43.53152);
   myfit->SetParError(2,1.240638);
   myfit->SetParLimits(2,0,1000);
   myfit->SetParameter(3,1.004451e-09);
   myfit->SetParError(3,2.585215);
   myfit->SetParLimits(3,0,18);
   myfit->Draw("same");
   TLine *line = new TLine(0,1,180,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(0,14.75,180,14.75);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(146,0,146,20);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(18,0,18,20);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   PulseHeightToTTestPulse->Modified();
   PulseHeightToTTestPulse->cd();
   PulseHeightToTTestPulse->SetSelected(PulseHeightToTTestPulse);
}
