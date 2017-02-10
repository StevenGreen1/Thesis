{
//=========Macro generated from canvas: c/the canvas
//=========  (Tue Jan 24 12:07:17 2017) by ROOT version5.34/30
   TCanvas *c = new TCanvas("c", "the canvas",202,51,650,500);
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
   
   TH1D *MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS = new TH1D("MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS","MVA_BDT_NTrees3000_MaxDepth3_NCuts25",100,0,1);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(1,0.9999867);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(2,0.9999439);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(3,0.9998906);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(4,0.999826);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(5,0.9997338);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(6,0.9995824);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(7,0.999446);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(8,0.9992859);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(9,0.9990588);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(10,0.9987625);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(11,0.9984401);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(12,0.9981259);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(13,0.9977463);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(14,0.9973449);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(15,0.9969704);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(16,0.9965726);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(17,0.9960963);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(18,0.9955626);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(19,0.9949914);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(20,0.9944079);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(21,0.9937453);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(22,0.9931456);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(23,0.9925645);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(24,0.9918112);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(25,0.9910667);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(26,0.9902714);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(27,0.9893855);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(28,0.9885551);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(29,0.9876795);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(30,0.9867825);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(31,0.9859491);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(32,0.9849673);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(33,0.9839251);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(34,0.9828414);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(35,0.9818225);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(36,0.9806871);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(37,0.9795389);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(38,0.9784422);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(39,0.977235);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(40,0.9759742);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(41,0.9747928);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(42,0.9735503);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(43,0.9722915);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(44,0.9709192);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(45,0.9694699);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(46,0.9681504);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(47,0.9666704);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(48,0.9652341);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(49,0.9637791);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(50,0.9623789);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(51,0.9609949);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(52,0.9594973);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(53,0.9580257);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(54,0.9563879);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(55,0.9547248);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(56,0.9531018);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(57,0.9513551);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(58,0.9494255);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(59,0.9476647);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(60,0.9458881);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(61,0.9440727);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(62,0.9423224);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(63,0.9403593);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(64,0.9384881);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(65,0.9364811);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(66,0.9346218);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(67,0.9326848);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(68,0.9304418);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(69,0.9283737);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(70,0.9260947);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(71,0.9238932);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(72,0.9212932);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(73,0.9186959);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(74,0.9160238);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(75,0.9134373);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(76,0.9107536);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(77,0.907976);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(78,0.90506);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(79,0.9022552);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(80,0.8990129);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(81,0.8955862);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(82,0.8922888);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(83,0.8887854);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(84,0.8846316);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(85,0.8804836);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(86,0.8764562);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(87,0.8721636);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(88,0.867611);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(89,0.862812);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(90,0.857611);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(91,0.8517211);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(92,0.8447919);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(93,0.8375109);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(94,0.8283044);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(95,0.8170378);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(96,0.8027597);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(97,0.7830434);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(98,0.7586385);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(99,0.7173717);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(100,0.6264027);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetStats(0);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS->Draw("csame");
   
   TH1D *MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS = new TH1D("MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS","MVA_BDT_NTrees2000_MaxDepth3_NCuts25",100,0,1);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(1,0.9999867);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(2,0.9999558);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(3,0.9998856);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(4,0.9998323);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(5,0.9997462);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(6,0.9995785);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(7,0.9994236);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(8,0.9992427);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(9,0.999012);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(10,0.9987479);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(11,0.9984018);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(12,0.9981046);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(13,0.9977117);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(14,0.9973632);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(15,0.996935);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(16,0.9965118);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(17,0.9959747);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(18,0.9954582);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(19,0.9949422);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(20,0.9944334);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(21,0.9938247);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(22,0.9932179);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(23,0.9925155);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(24,0.9915945);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(25,0.9908119);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(26,0.9900223);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(27,0.9890895);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(28,0.9882371);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(29,0.9873574);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(30,0.9865284);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(31,0.9855838);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(32,0.9844539);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(33,0.9834908);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(34,0.9822711);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(35,0.981199);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(36,0.9802371);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(37,0.9791973);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(38,0.97802);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(39,0.9769143);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(40,0.9755789);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(41,0.9741854);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(42,0.9728769);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(43,0.9716752);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(44,0.9703711);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(45,0.9690094);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(46,0.9677187);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(47,0.9663134);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(48,0.9649748);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(49,0.9635436);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(50,0.9621011);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(51,0.9606891);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(52,0.9591562);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(53,0.9575015);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(54,0.9558179);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(55,0.9541096);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(56,0.9524953);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(57,0.9507524);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(58,0.9489885);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(59,0.9471702);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(60,0.9454261);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(61,0.9436864);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(62,0.9418574);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(63,0.9397709);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(64,0.9376157);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(65,0.9354854);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(66,0.9335652);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(67,0.9315798);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(68,0.9294219);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(69,0.9274038);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(70,0.925169);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(71,0.9227898);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(72,0.9204671);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(73,0.9181228);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(74,0.9156792);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(75,0.9130013);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(76,0.9102704);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(77,0.9074315);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(78,0.9044276);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(79,0.9014597);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(80,0.8979786);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(81,0.8943871);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(82,0.8908396);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(83,0.8872511);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(84,0.8835031);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(85,0.8794843);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(86,0.8755712);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(87,0.8709709);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(88,0.8663091);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(89,0.8615233);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(90,0.8555626);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(91,0.8499988);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(92,0.8430865);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(93,0.8352996);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(94,0.8256585);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(95,0.8141928);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(96,0.7984976);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(97,0.7799508);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(98,0.7538531);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(99,0.7132163);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(100,0.6205968);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetStats(0);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetLineColor(2);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS->Draw("csame");
   
   TH1D *MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS = new TH1D("MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS","MVA_BDT_NTrees4000_MaxDepth3_NCuts25",100,0,1);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(1,0.9999867);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(2,0.9999364);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(3,0.9998885);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(4,0.999844);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(5,0.9997548);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(6,0.9996497);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(7,0.9994742);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(8,0.9992851);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(9,0.9990943);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(10,0.9987932);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(11,0.9984996);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(12,0.9981164);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(13,0.9977769);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(14,0.9974141);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(15,0.9969976);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(16,0.9965436);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(17,0.9961082);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(18,0.9956176);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(19,0.9951009);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(20,0.9945247);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(21,0.9938359);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(22,0.9932201);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(23,0.9925312);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(24,0.9918661);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(25,0.9911295);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(26,0.9903837);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(27,0.9895686);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(28,0.9887173);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(29,0.9878693);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(30,0.9870036);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(31,0.9860227);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(32,0.9851052);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(33,0.9840129);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(34,0.9830003);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(35,0.9820247);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(36,0.9808401);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(37,0.9797132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(38,0.9784997);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(39,0.9773353);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(40,0.9762675);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(41,0.9751483);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(42,0.9738993);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(43,0.972572);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(44,0.9712149);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(45,0.9700197);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(46,0.9686492);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(47,0.9671822);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(48,0.9657785);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(49,0.9643498);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(50,0.9628482);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(51,0.9612581);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(52,0.9596821);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(53,0.9581414);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(54,0.9565775);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(55,0.9549561);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(56,0.9532193);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(57,0.9514193);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(58,0.9497573);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(59,0.9480017);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(60,0.9463859);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(61,0.9443935);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(62,0.9426577);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(63,0.94092);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(64,0.9391334);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(65,0.9371551);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(66,0.9351739);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(67,0.9330287);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(68,0.9308779);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(69,0.9288364);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(70,0.9264882);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(71,0.9240901);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(72,0.9215623);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(73,0.9190514);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(74,0.9163951);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(75,0.9138566);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(76,0.9111782);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(77,0.9082135);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(78,0.9054378);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(79,0.9020037);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(80,0.8990458);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(81,0.895617);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(82,0.8921942);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(83,0.8885973);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(84,0.8850174);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(85,0.8812472);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(86,0.877208);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(87,0.8728074);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(88,0.8686356);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(89,0.8638736);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(90,0.8586116);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(91,0.8523728);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(92,0.8452537);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(93,0.8381821);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(94,0.8290012);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(95,0.8172988);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(96,0.8035903);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(97,0.7847546);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(98,0.7598098);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(99,0.7196151);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetBinContent(100,0.6282749);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetStats(0);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetLineColor(3);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS->Draw("csame");
   
   TH1D *MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS = new TH1D("MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS","MVA_BDT_NTrees3000_MaxDepth2_NCuts25",100,0,1);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(1,0.9999655);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(2,0.999943);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(3,0.9998693);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(4,0.9997698);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(5,0.9996945);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(6,0.9995024);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(7,0.9993071);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(8,0.9991423);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(9,0.998939);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(10,0.9986364);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(11,0.9983014);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(12,0.997931);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(13,0.9974597);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(14,0.9970464);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(15,0.9966145);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(16,0.9961003);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(17,0.9955606);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(18,0.9949975);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(19,0.994381);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(20,0.9937632);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(21,0.9930798);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(22,0.992421);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(23,0.9915682);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(24,0.9908711);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(25,0.9899876);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(26,0.9891048);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(27,0.9882437);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(28,0.9874107);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(29,0.9865061);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(30,0.9856105);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(31,0.984607);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(32,0.9835548);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(33,0.9824393);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(34,0.981293);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(35,0.9801635);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(36,0.9790574);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(37,0.9779231);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(38,0.9767058);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(39,0.9753927);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(40,0.9742564);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(41,0.9729216);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(42,0.9716411);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(43,0.9702622);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(44,0.968883);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(45,0.9674261);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(46,0.9659384);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(47,0.9645082);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(48,0.9630008);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(49,0.9615131);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(50,0.9600338);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(51,0.9584882);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(52,0.9570971);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(53,0.9555118);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(54,0.9539499);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(55,0.9522962);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(56,0.9505659);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(57,0.9488554);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(58,0.9470142);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(59,0.9452577);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(60,0.9434353);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(61,0.9416986);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(62,0.9397857);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(63,0.9376216);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(64,0.9356273);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(65,0.9335935);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(66,0.9312549);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(67,0.9289676);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(68,0.9268735);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(69,0.9244316);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(70,0.9219822);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(71,0.9196113);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(72,0.9173585);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(73,0.9149447);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(74,0.9124928);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(75,0.9099456);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(76,0.9071824);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(77,0.9041556);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(78,0.9012267);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(79,0.8980342);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(80,0.8943267);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(81,0.8903969);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(82,0.8866483);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(83,0.8832752);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(84,0.8795115);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(85,0.8754442);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(86,0.8711559);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(87,0.8668062);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(88,0.8617475);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(89,0.8565074);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(90,0.8506452);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(91,0.8433279);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(92,0.8355231);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(93,0.8265923);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(94,0.8168006);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(95,0.805214);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(96,0.7894417);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(97,0.7699731);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(98,0.7416617);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(99,0.6986378);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetBinContent(100,0.6018017);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetStats(0);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetLineColor(4);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS->Draw("csame");
   
   TH1D *MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS = new TH1D("MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS","MVA_BDT_NTrees3000_MaxDepth4_NCuts25",100,0,1);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(1,0.9999989);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(2,0.9999296);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(3,0.9998981);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(4,0.9998118);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(5,0.999736);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(6,0.9996398);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(7,0.9995155);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(8,0.9993763);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(9,0.999175);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(10,0.9988994);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(11,0.9985941);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(12,0.9981898);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(13,0.9978901);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(14,0.9975061);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(15,0.9971061);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(16,0.9966238);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(17,0.9960202);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(18,0.995449);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(19,0.9949435);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(20,0.9944812);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(21,0.9939114);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(22,0.9932414);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(23,0.9923465);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(24,0.9914927);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(25,0.9906993);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(26,0.989977);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(27,0.9892125);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(28,0.988321);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(29,0.9873937);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(30,0.9864903);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(31,0.9855869);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(32,0.9846394);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(33,0.9836087);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(34,0.9826236);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(35,0.9816959);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(36,0.9805893);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(37,0.9795684);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(38,0.9784888);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(39,0.9773938);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(40,0.9762698);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(41,0.975038);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(42,0.9739183);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(43,0.9727186);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(44,0.9713622);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(45,0.9698416);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(46,0.9685523);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(47,0.9671691);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(48,0.9657216);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(49,0.9642811);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(50,0.9626764);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(51,0.9612285);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(52,0.959658);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(53,0.9580506);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(54,0.9564252);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(55,0.9546817);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(56,0.953053);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(57,0.9513062);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(58,0.9494471);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(59,0.9477475);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(60,0.945949);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(61,0.944126);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(62,0.9422142);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(63,0.9403612);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(64,0.9384778);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(65,0.9364881);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(66,0.9343705);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(67,0.932125);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(68,0.9299686);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(69,0.9276939);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(70,0.9254026);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(71,0.9230205);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(72,0.9205152);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(73,0.918196);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(74,0.9156879);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(75,0.9130299);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(76,0.9104738);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(77,0.9077082);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(78,0.9049584);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(79,0.9020871);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(80,0.8989635);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(81,0.8958487);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(82,0.8923512);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(83,0.8891111);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(84,0.885029);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(85,0.8811273);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(86,0.8773727);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(87,0.8732542);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(88,0.868887);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(89,0.86397);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(90,0.8584173);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(91,0.8526011);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(92,0.845997);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(93,0.8385595);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(94,0.8300272);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(95,0.8192595);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(96,0.8059499);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(97,0.7892917);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(98,0.7639966);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(99,0.7224551);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetBinContent(100,0.6322847);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetStats(0);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetLineColor(6);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS->Draw("csame");
   
   TH1D *MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS = new TH1D("MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS","MVA_BDT_NTrees3000_MaxDepth3_NCuts20",100,0,1);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(1,0.9999934);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(2,0.9999436);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(3,0.9998994);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(4,0.9998066);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(5,0.9997197);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(6,0.9995831);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(7,0.9994025);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(8,0.9992326);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(9,0.9990166);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(10,0.9988035);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(11,0.998585);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(12,0.9981981);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(13,0.9978607);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(14,0.9974085);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(15,0.996945);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(16,0.9964662);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(17,0.9959558);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(18,0.9954294);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(19,0.9948435);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(20,0.9942416);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(21,0.9936167);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(22,0.9929504);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(23,0.9922351);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(24,0.9915787);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(25,0.9907808);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(26,0.9898668);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(27,0.9891163);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(28,0.9883286);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(29,0.9874953);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(30,0.9866623);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(31,0.9858056);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(32,0.9846853);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(33,0.983631);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(34,0.98254);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(35,0.9814147);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(36,0.9802812);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(37,0.979224);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(38,0.9779804);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(39,0.9769692);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(40,0.9757029);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(41,0.9745293);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(42,0.9731501);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(43,0.9719233);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(44,0.970578);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(45,0.9691639);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(46,0.9677442);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(47,0.9662471);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(48,0.9648114);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(49,0.9634723);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(50,0.9620244);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(51,0.9604739);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(52,0.9590333);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(53,0.957508);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(54,0.9557597);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(55,0.9539646);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(56,0.952288);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(57,0.9505987);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(58,0.9488095);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(59,0.9470835);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(60,0.9453212);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(61,0.9434731);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(62,0.9416202);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(63,0.9396943);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(64,0.937589);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(65,0.9356123);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(66,0.9334428);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(67,0.9314134);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(68,0.9293477);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(69,0.9270741);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(70,0.9249892);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(71,0.9226662);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(72,0.9203544);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(73,0.9178964);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(74,0.9150114);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(75,0.9124051);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(76,0.9096418);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(77,0.9068466);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(78,0.9039258);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(79,0.9009572);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(80,0.8977205);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(81,0.894418);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(82,0.8912211);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(83,0.8879402);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(84,0.8842531);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(85,0.8805871);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(86,0.8762845);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(87,0.8720152);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(88,0.8673521);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(89,0.8619374);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(90,0.8561106);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(91,0.8501012);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(92,0.8431786);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(93,0.8348255);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(94,0.8260199);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(95,0.815339);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(96,0.8018901);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(97,0.7846441);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(98,0.7577043);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(99,0.7171225);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetBinContent(100,0.6227657);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetStats(0);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetLineColor(7);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS->Draw("csame");
   
   TH1D *MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS = new TH1D("MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS","MVA_BDT_NTrees3000_MaxDepth3_NCuts30",100,0,1);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(1,0.9999845);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(2,0.9999592);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(3,0.9998772);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(4,0.9998253);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(5,0.9997198);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(6,0.9995968);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(7,0.9995011);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(8,0.9992491);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(9,0.9990288);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(10,0.998851);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(11,0.9985504);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(12,0.9982368);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(13,0.9978798);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(14,0.9975343);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(15,0.9970468);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(16,0.9966264);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(17,0.996078);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(18,0.9956211);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(19,0.9949867);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(20,0.9943612);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(21,0.9937867);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(22,0.9931312);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(23,0.9924774);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(24,0.9917713);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(25,0.9910056);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(26,0.9902172);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(27,0.9894752);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(28,0.9886162);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(29,0.9875296);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(30,0.9866365);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(31,0.9855998);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(32,0.9846441);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(33,0.9837662);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(34,0.9827467);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(35,0.9817643);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(36,0.9807017);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(37,0.9796764);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(38,0.9785061);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(39,0.9771937);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(40,0.9760222);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(41,0.9745717);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(42,0.9733326);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(43,0.9720067);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(44,0.9707027);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(45,0.9692991);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(46,0.9680868);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(47,0.9665789);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(48,0.965076);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(49,0.9635565);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(50,0.9621348);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(51,0.960681);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(52,0.9591053);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(53,0.9574453);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(54,0.9557771);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(55,0.9540589);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(56,0.9523369);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(57,0.9506574);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(58,0.9490774);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(59,0.9474544);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(60,0.94563);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(61,0.9437604);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(62,0.9418686);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(63,0.9400014);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(64,0.938272);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(65,0.9361633);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(66,0.9342507);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(67,0.9323033);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(68,0.9301464);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(69,0.9278452);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(70,0.925324);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(71,0.9229086);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(72,0.9204556);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(73,0.9179259);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(74,0.9152541);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(75,0.9123551);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(76,0.9096765);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(77,0.9067506);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(78,0.9040058);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(79,0.9013474);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(80,0.8980562);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(81,0.894822);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(82,0.8911465);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(83,0.8878503);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(84,0.8841345);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(85,0.8801705);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(86,0.8761761);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(87,0.8721329);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(88,0.8674734);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(89,0.8628511);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(90,0.8571908);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(91,0.8510159);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(92,0.8441266);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(93,0.8367036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(94,0.8275166);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(95,0.8157655);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(96,0.8020933);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(97,0.784286);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(98,0.7592331);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(99,0.7185522);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetBinContent(100,0.6238896);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetEntries(100);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetStats(0);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetLineColor(8);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetLineWidth(3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetMarkerStyle(21);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->SetMarkerSize(0.3);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetXaxis()->SetNdivisions(505);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetXaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetXaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetYaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetYaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetZaxis()->SetLabelFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->GetZaxis()->SetTitleFont(132);
   MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS->Draw("csame");
   
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
   
   TLegend *leg = new TLegend(0.15,0.171,0.5,0.611,NULL,"brNDC");
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
   entry=leg->AddEntry("MVA_BDT_NTrees3000_MaxDepth4_NCuts25_rejBvsS","BDT_NTrees3000_MaxDepth4_NCuts25","l");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees4000_MaxDepth3_NCuts25_rejBvsS","BDT_NTrees4000_MaxDepth3_NCuts25","l");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees3000_MaxDepth3_NCuts25_rejBvsS","BDT_NTrees3000_MaxDepth3_NCuts25","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees3000_MaxDepth3_NCuts30_rejBvsS","BDT_NTrees3000_MaxDepth3_NCuts30","l");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees3000_MaxDepth3_NCuts20_rejBvsS","BDT_NTrees3000_MaxDepth3_NCuts20","l");
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees2000_MaxDepth3_NCuts25_rejBvsS","BDT_NTrees2000_MaxDepth3_NCuts25","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MVA_BDT_NTrees3000_MaxDepth2_NCuts25_rejBvsS","BDT_NTrees3000_MaxDepth2_NCuts25","l");
   entry->SetLineColor(4);
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
 char *xpm_tmva_logo_gif_1[] = {
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
   tmva_logo_gif_->SetImageBuffer(xpm_tmva_logo_gif_1, TImage::kXpm);
   tmva_logo_gif_->Draw();
   imgpad->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
