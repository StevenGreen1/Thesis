{
//=========Macro generated from canvas: c/the canvas
//=========  (Fri Feb 10 16:52:36 2017) by ROOT version5.34/30
   TCanvas *c = new TCanvas("c", "the canvas",200,22,650,500);
   gStyle->SetOptStat(0);
   c->Range(-0.128266,0.07692306,1.059382,1.102564);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f0f0f0");
   c->SetFillColor(ci);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetRightMargin(0.05);
   c->SetBottomMargin(0.12);

   ci = TColor::GetColor("#fffffd");
   c->SetFrameFillColor(ci);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);

   ci = TColor::GetColor("#fffffd");
   c->SetFrameFillColor(ci);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   
   TH2F *frame = new TH2F("frame","Background rejection versus Signal efficiency",500,0,1,500,0.2,1);
   frame->SetStats(0);
   frame->SetLineWidth(2);
   frame->SetMarkerStyle(21);
   frame->SetMarkerSize(0.3);
   frame->GetXaxis()->SetTitle("Signal efficiency");
   frame->GetXaxis()->SetNdivisions(505);
   frame->GetXaxis()->SetLabelFont(132);
   frame->GetXaxis()->SetLabelOffset(0.012);
   frame->GetXaxis()->SetTitleSize(0.045);
   frame->GetXaxis()->SetTitleOffset(1.25);
   frame->GetXaxis()->SetTitleFont(132);
   frame->GetYaxis()->SetTitle("Background rejection");
   frame->GetYaxis()->SetLabelFont(132);
   frame->GetYaxis()->SetLabelOffset(0.012);
   frame->GetYaxis()->SetTitleSize(0.045);
   frame->GetYaxis()->SetTitleOffset(1.22);
   frame->GetYaxis()->SetTitleFont(132);
   frame->GetZaxis()->SetLabelFont(132);
   frame->GetZaxis()->SetLabelSize(0.03);
   frame->GetZaxis()->SetTitleSize(0.036);
   frame->GetZaxis()->SetTitleFont(132);
   frame->Draw("");
   
   TH1D *MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS = new TH1D("MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS","MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV",100,0,1);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(1,0.999982);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(2,0.9999277);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(3,0.9998521);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(4,0.9997632);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(5,0.9996858);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(6,0.9995675);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(7,0.9993376);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(8,0.9990918);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(9,0.9988605);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(10,0.9986097);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(11,0.9982896);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(12,0.997997);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(13,0.9975727);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(14,0.997186);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(15,0.9967383);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(16,0.9962136);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(17,0.9956681);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(18,0.9951492);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(19,0.9946291);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(20,0.9941137);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(21,0.9934982);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(22,0.9927229);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(23,0.9918244);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(24,0.9910416);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(25,0.9902149);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(26,0.989392);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(27,0.9885758);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(28,0.9874746);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(29,0.9864588);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(30,0.9855314);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(31,0.9843726);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(32,0.983401);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(33,0.9823684);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(34,0.9812664);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(35,0.9800782);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(36,0.9787873);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(37,0.9776255);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(38,0.9765543);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(39,0.9752188);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(40,0.9741012);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(41,0.972967);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(42,0.9717539);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(43,0.9703663);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(44,0.9689479);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(45,0.9674737);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(46,0.9659741);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(47,0.9645127);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(48,0.9630321);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(49,0.9615193);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(50,0.9599096);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(51,0.958205);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(52,0.9565197);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(53,0.9551492);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(54,0.9534132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(55,0.9516829);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(56,0.9499226);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(57,0.94831);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(58,0.9466463);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(59,0.9447852);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(60,0.9427846);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(61,0.940791);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(62,0.9388588);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(63,0.9368826);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(64,0.9349138);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(65,0.932794);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(66,0.9303954);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(67,0.9282716);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(68,0.9259709);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(69,0.9235613);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(70,0.9211444);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(71,0.9187086);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(72,0.9161883);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(73,0.9136052);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(74,0.9109239);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(75,0.9080375);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(76,0.9050434);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(77,0.9021928);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(78,0.8989841);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(79,0.8957475);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(80,0.8923756);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(81,0.8888219);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(82,0.8852498);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(83,0.881548);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(84,0.8777205);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(85,0.8742527);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(86,0.8696651);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(87,0.8644405);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(88,0.8593332);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(89,0.8538137);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(90,0.8476429);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(91,0.8407904);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(92,0.8334152);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(93,0.8251985);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(94,0.8150245);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(95,0.8028248);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(96,0.7873743);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(97,0.768319);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(98,0.7426315);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(99,0.7030164);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetBinContent(100,0.6097868);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetStats(0);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS->Draw("csame");
   
   TH2F *frame = new TH2F("frame","Background rejection versus Signal efficiency",500,0,1,500,0.2,1);
   frame->SetStats(0);
   frame->SetLineWidth(2);
   frame->SetMarkerStyle(21);
   frame->SetMarkerSize(0.3);
   frame->GetXaxis()->SetTitle("Signal efficiency");
   frame->GetXaxis()->SetNdivisions(505);
   frame->GetXaxis()->SetLabelFont(132);
   frame->GetXaxis()->SetLabelOffset(0.012);
   frame->GetXaxis()->SetTitleSize(0.045);
   frame->GetXaxis()->SetTitleOffset(1.25);
   frame->GetXaxis()->SetTitleFont(132);
   frame->GetYaxis()->SetTitle("Background rejection");
   frame->GetYaxis()->SetLabelFont(132);
   frame->GetYaxis()->SetLabelOffset(0.012);
   frame->GetYaxis()->SetTitleSize(0.045);
   frame->GetYaxis()->SetTitleOffset(1.22);
   frame->GetYaxis()->SetTitleFont(132);
   frame->GetZaxis()->SetLabelFont(132);
   frame->GetZaxis()->SetLabelSize(0.03);
   frame->GetZaxis()->SetTitleSize(0.036);
   frame->GetZaxis()->SetTitleFont(132);
   frame->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.1486068,0.1716102,0.6640867,0.2817797,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);

   ci = TColor::GetColor("#7d8b9d");
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","MVA Method:","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV_rejBvsS","BDT_NTrees3000_MaxDepth3_NCuts25_ReducedVariables_1400GeV","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.9390678,0.6878947,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);

   ci = TColor::GetColor("#5d6b7d");
   pt->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   pt->SetLineColor(ci);
   pt->SetLineWidth(2);
   pt->SetTextColor(0);
   pt->SetTextFont(132);
   TText *text = pt->AddText("Background rejection versus Signal efficiency");
   pt->Draw();
  
// ------------>Primitives in pad: imgpad
   TPad *imgpad = new TPad("imgpad", "imgpad",0.789257,0.91,0.95,0.965);
   imgpad->Draw();
   imgpad->cd();
   imgpad->Range(0,0,1,1);
   imgpad->SetFillColor(0);
   imgpad->SetBorderMode(0);
   imgpad->SetBorderSize(2);
   imgpad->SetTickx(1);
   imgpad->SetTicky(1);
   imgpad->SetLeftMargin(0);
   imgpad->SetRightMargin(0);
   imgpad->SetTopMargin(0);
   imgpad->SetBottomMargin(0);

   ci = TColor::GetColor("#fffffd");
   imgpad->SetFrameFillColor(ci);
   imgpad->SetFrameLineWidth(2);
   imgpad->SetFrameBorderMode(0);
   imgpad->SetFrameLineColor(0);
   imgpad->SetFrameLineWidth(2);
   imgpad->SetFrameBorderMode(0);

/* XPM */
 char *xpm_tmva_logo_gif_2[] = {
/* columns rows colors chars-per-pixel */
"103 25 89 1",
"  c #6A4F7B",
". c #67557B",
"X c #75597A",
"o c #FF0303",
"O c #FF1919",
"+ c #FF2A09",
"@ c #FF3D0C",
"# c #FF2020",
"$ c #FF3A3A",
"% c #FF6012",
"& c #FF7B18",
"* c #B17B58",
"= c #8B646A",
"- c #936964",
"; c #FF4444",
": c #FF5252",
"> c #FF6D6D",
", c #FF7E6A",
"< c #FF7979",
"1 c #34399B",
"2 c #3536A0",
"3 c #423C91",
"4 c #3F409E",
"5 c #49408D",
"6 c #5E4B81",
"7 c #464197",
"8 c #624E81",
"9 c #695180",
"0 c #4444A5",
"q c #5D5DAD",
"w c #5D5DB3",
"e c #6C62A3",
"r c #6D6DB9",
"t c #7474B8",
"y c #7D7DC3",
"u c #D37C95",
"i c #FF881B",
"p c #FF9E1F",
"a c #D28E3F",
"s c #FF8721",
"d c #F59F2A",
"f c #E79833",
"g c #FFA621",
"h c #FFAE30",
"j c #FFB237",
"k c #BE824C",
"l c #CD8B45",
"z c #D38D40",
"x c #D79540",
"c c #FFB845",
"v c #FFBE54",
"b c #F2BC6D",
"n c #FFC25D",
"m c #FFC360",
"M c #FFC673",
"N c #9183AB",
"B c #8B81B2",
"V c #FF8686",
"C c #FFAFAF",
"Z c #FFBFBF",
"A c #8686C6",
"S c #9C9CCC",
"D c #9B9BD1",
"F c #A0A0D3",
"G c #B9B9DB",
"H c #BEBEE2",
"J c #C6BBC9",
"K c #D3B2CC",
"L c #FFD48B",
"P c #FFDB9E",
"I c #E3CBBF",
"U c #FFDEAF",
"Y c #FFDFB7",
"T c #FFE1AC",
"R c #FFE8BD",
"E c #D3C2C1",
"W c #FFC2C2",
"Q c #F9D9DF",
"! c #CCCCEB",
"~ c #D3CCE5",
"^ c #D0D0EC",
"/ c #DDDDF1",
"( c #FFEBC3",
") c #FFEDD2",
"_ c #FFF0D3",
"` c #E7E7F6",
"' c #FFF8E4",
"] c #FFFFFF",
"[ c None",
"]]]]]]]]]]]]]]]]]](mggjM_]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]]]ngggggggT]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]]LgggggggggR]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]'ggggggggggc]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]Lggggggggggg_]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]",
"]]]]]]]]]]]]]]]ngggggggggggP]]]]]]]]]]]]]]WWZWWWZWWWZQ^!^^]]]]]]^!^^]]!^!]]]]]]]!^!]]]]]/^!^]]]]]]]]]]]",
"]]]]]]]]]]]]]]]ngggggggggggP]]]]]]]]]]]]]Wooooooooooou1124]]]]]F112q]`112S]]]]]S12t]]]]]0112F]]]]]]]]]]",
"]]]]]]]]]]]]]]]Lggggggggggg(]]]]]]]]]]]]]<oooooooooooK1211F]]]]2112q]]q210]]]]]q12G]]]]H1121q]]]]]]]]]]",
"]]]]]]]]]]]]]]](ggggggggggg]]]]]]]]]]]]]]QWWZ<oooCWWW~11210]]]G1211w]]G211!]]]!110]]]]]r11211/]]]]]]]]]",
"]]]]]]]]]]]]]]]]vgggggggggP]]]]]]]]]]]]]]]]]]>oo#]]]]^12111F]]r1121w]]]211D]]]A11y]]]]]121011D]]]]]]]]]",
"]]]]]]]]]]]]]]]]'jgggggggv]]]]]]]]]]]]]]]]]]];oo>]]]]^121q1w]!11w11w]]]t12q]]]011H]]]]F11yG11w]]]]]]]]]",
"]]]]]]]]]]]]]]]](MLggggjUL']]]]]]]]]]]]]]]]]]oooC]]]]^121S21!q10A11w]]]H112`]G210]]]]]r11!]121^]]]]]]]]",
"]]]]]]]]'((((_]]M]]'(U(]]]m]](((((]]]]]]]]]]WoooQ]]]]^121`11012GA11w]]]]121F]t21A]]]]]210]]r11A]]]]]]]]",
"]]]]]]]_']]]]](M]]]]]]]]]]'v(]]]]](']]]]]]]]VooO]]]]]^121]t2110]A11w]]]]r11w]121!]]]]F11t]]D110]]]]]]]]",
"]]]]]]_]]]]]]]](]]]]]]]]]]]_]]]]]]]'']]]]]]]$oo:]]]]]^121]/111A]A11w]]]]H112S110]]]]]q210qr0112!]]]]]]]",
")((((R]]]]]]]]]](((((((((((]]]]]]]]]((((((((ooo,(((((E111((e11I(B11q(((((711211N((((J1121112111t((((((_",
"cggggL]]]]]]]]]]Uggggggggg']]]]]]]]]]cgggggiooo&gggggz111ggggggg=126ggggg-11211lgggg=123.9 96125ggggggv",
"cgggg(]]]]]]]]]]_ggggggggc]]]]]]]]]]]Lggggg%ooopgggggz111ggggggg=126gggggf11217ggggd111*ggggf112lgggggv",
"cgggg(]]]]]]]]]]_ggggggggv]]]]]]]]]]]Pggggg@oo+ggggggz111ggggggg=126gggggg8111-ggggk123gggggg611Xgggggv",
"cgggg(]]]]]]]]]]_ggggggggj]]]]]]]]]]]Mgggggi&isgggggggzlagggggggflaxggggggflalgggggflaxggggggflalgggggn",
"cggggP]]]]]]]]]]Rggggggggg']]]]]]]]]]cggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggv",
"cggggj]]]]]]]]]]ngggggggggP]]]]]]]]](gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggn",
"cgggggv]]]]]]]]Pggggggggggg_]]]]]]]'hgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggn",
"cggggggm]]]]]]Lggggggggggggg(]]]]](cggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggv",
"bnvnvnvnmY((RMnvnvnvnvnvnvnvnP(((UnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvnvL"
};


   TImage *tmva_logo_gif_ = TImage::Create();
   tmva_logo_gif_->SetImageBuffer(xpm_tmva_logo_gif_2, TImage::kXpm);
   tmva_logo_gif_->Draw();
   imgpad->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
