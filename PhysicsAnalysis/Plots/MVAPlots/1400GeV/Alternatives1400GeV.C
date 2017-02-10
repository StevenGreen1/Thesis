{
//=========Macro generated from canvas: c/the canvas
//=========  (Fri Feb 10 16:51:49 2017) by ROOT version5.34/30
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
   
   TH1F *Cuts_rejBvsS = new TH1F("Cuts_rejBvsS","Cuts",100,0,1);
   Cuts_rejBvsS->SetBinContent(1,0.995);
   Cuts_rejBvsS->SetBinContent(2,0.985);
   Cuts_rejBvsS->SetBinContent(3,0.975);
   Cuts_rejBvsS->SetBinContent(4,0.965);
   Cuts_rejBvsS->SetBinContent(5,0.955);
   Cuts_rejBvsS->SetBinContent(6,0.945);
   Cuts_rejBvsS->SetBinContent(7,0.935);
   Cuts_rejBvsS->SetBinContent(8,0.925);
   Cuts_rejBvsS->SetBinContent(9,0.915);
   Cuts_rejBvsS->SetBinContent(10,0.905);
   Cuts_rejBvsS->SetBinContent(11,0.895);
   Cuts_rejBvsS->SetBinContent(12,0.885);
   Cuts_rejBvsS->SetBinContent(13,0.875);
   Cuts_rejBvsS->SetBinContent(14,0.865);
   Cuts_rejBvsS->SetBinContent(15,0.855);
   Cuts_rejBvsS->SetBinContent(16,0.845);
   Cuts_rejBvsS->SetBinContent(17,0.835);
   Cuts_rejBvsS->SetBinContent(18,0.825);
   Cuts_rejBvsS->SetBinContent(19,0.815);
   Cuts_rejBvsS->SetBinContent(20,0.805);
   Cuts_rejBvsS->SetBinContent(21,0.795);
   Cuts_rejBvsS->SetBinContent(22,0.785);
   Cuts_rejBvsS->SetBinContent(23,0.775);
   Cuts_rejBvsS->SetBinContent(24,0.765);
   Cuts_rejBvsS->SetBinContent(25,0.755);
   Cuts_rejBvsS->SetBinContent(26,0.745);
   Cuts_rejBvsS->SetBinContent(27,0.735);
   Cuts_rejBvsS->SetBinContent(28,0.725);
   Cuts_rejBvsS->SetBinContent(29,0.715);
   Cuts_rejBvsS->SetBinContent(30,0.705);
   Cuts_rejBvsS->SetBinContent(31,0.695);
   Cuts_rejBvsS->SetBinContent(32,0.685);
   Cuts_rejBvsS->SetBinContent(33,0.675);
   Cuts_rejBvsS->SetBinContent(34,0.665);
   Cuts_rejBvsS->SetBinContent(35,0.655);
   Cuts_rejBvsS->SetBinContent(36,0.645);
   Cuts_rejBvsS->SetBinContent(37,0.635);
   Cuts_rejBvsS->SetBinContent(38,0.625);
   Cuts_rejBvsS->SetBinContent(39,0.615);
   Cuts_rejBvsS->SetBinContent(40,0.605);
   Cuts_rejBvsS->SetBinContent(41,0.595);
   Cuts_rejBvsS->SetBinContent(42,0.585);
   Cuts_rejBvsS->SetBinContent(43,0.575);
   Cuts_rejBvsS->SetBinContent(44,0.565);
   Cuts_rejBvsS->SetBinContent(45,0.555);
   Cuts_rejBvsS->SetBinContent(46,0.545);
   Cuts_rejBvsS->SetBinContent(47,0.535);
   Cuts_rejBvsS->SetBinContent(48,0.525);
   Cuts_rejBvsS->SetBinContent(49,0.515);
   Cuts_rejBvsS->SetBinContent(50,0.505);
   Cuts_rejBvsS->SetBinContent(51,0.495);
   Cuts_rejBvsS->SetBinContent(52,0.485);
   Cuts_rejBvsS->SetBinContent(53,0.475);
   Cuts_rejBvsS->SetBinContent(54,0.465);
   Cuts_rejBvsS->SetBinContent(55,0.455);
   Cuts_rejBvsS->SetBinContent(56,0.445);
   Cuts_rejBvsS->SetBinContent(57,0.435);
   Cuts_rejBvsS->SetBinContent(58,0.425);
   Cuts_rejBvsS->SetBinContent(59,0.415);
   Cuts_rejBvsS->SetBinContent(60,0.405);
   Cuts_rejBvsS->SetBinContent(61,0.395);
   Cuts_rejBvsS->SetBinContent(62,0.385);
   Cuts_rejBvsS->SetBinContent(63,0.375);
   Cuts_rejBvsS->SetBinContent(64,0.365);
   Cuts_rejBvsS->SetBinContent(65,0.355);
   Cuts_rejBvsS->SetBinContent(66,0.345);
   Cuts_rejBvsS->SetBinContent(67,0.335);
   Cuts_rejBvsS->SetBinContent(68,0.325);
   Cuts_rejBvsS->SetBinContent(69,0.315);
   Cuts_rejBvsS->SetBinContent(70,0.305);
   Cuts_rejBvsS->SetBinContent(71,0.295);
   Cuts_rejBvsS->SetBinContent(72,0.285);
   Cuts_rejBvsS->SetBinContent(73,0.275);
   Cuts_rejBvsS->SetBinContent(74,0.265);
   Cuts_rejBvsS->SetBinContent(75,0.255);
   Cuts_rejBvsS->SetBinContent(76,0.245);
   Cuts_rejBvsS->SetBinContent(77,0.235);
   Cuts_rejBvsS->SetBinContent(78,0.225);
   Cuts_rejBvsS->SetBinContent(79,0.215);
   Cuts_rejBvsS->SetBinContent(80,0.205);
   Cuts_rejBvsS->SetBinContent(81,0.195);
   Cuts_rejBvsS->SetBinContent(82,0.185);
   Cuts_rejBvsS->SetBinContent(83,0.175);
   Cuts_rejBvsS->SetBinContent(84,0.165);
   Cuts_rejBvsS->SetBinContent(85,0.155);
   Cuts_rejBvsS->SetBinContent(86,0.145);
   Cuts_rejBvsS->SetBinContent(87,0.135);
   Cuts_rejBvsS->SetBinContent(88,0.125);
   Cuts_rejBvsS->SetBinContent(89,0.115);
   Cuts_rejBvsS->SetBinContent(90,0.105);
   Cuts_rejBvsS->SetBinContent(91,0.095);
   Cuts_rejBvsS->SetBinContent(92,0.085);
   Cuts_rejBvsS->SetBinContent(93,0.075);
   Cuts_rejBvsS->SetBinContent(94,0.065);
   Cuts_rejBvsS->SetBinContent(95,0.055);
   Cuts_rejBvsS->SetBinContent(96,0.045);
   Cuts_rejBvsS->SetBinContent(97,0.035);
   Cuts_rejBvsS->SetBinContent(98,0.025);
   Cuts_rejBvsS->SetBinContent(99,0.015);
   Cuts_rejBvsS->SetBinContent(100,0.005);
   Cuts_rejBvsS->SetEntries(200);
   Cuts_rejBvsS->SetStats(0);
   Cuts_rejBvsS->SetLineWidth(3);
   Cuts_rejBvsS->SetLineColor(kOrange);
   Cuts_rejBvsS->SetMarkerStyle(21);
   Cuts_rejBvsS->SetMarkerSize(0.3);
   Cuts_rejBvsS->GetXaxis()->SetNdivisions(505);
   Cuts_rejBvsS->GetXaxis()->SetLabelFont(132);
   Cuts_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   Cuts_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   Cuts_rejBvsS->GetXaxis()->SetTitleFont(132);
   Cuts_rejBvsS->GetYaxis()->SetLabelFont(132);
   Cuts_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   Cuts_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   Cuts_rejBvsS->GetYaxis()->SetTitleFont(132);
   Cuts_rejBvsS->GetZaxis()->SetLabelFont(132);
   Cuts_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   Cuts_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   Cuts_rejBvsS->GetZaxis()->SetTitleFont(132);
   Cuts_rejBvsS->Draw("csame");
   
   TH1D *Likelihood_rejBvsS = new TH1D("Likelihood_rejBvsS","Likelihood",100,0,1);
   Likelihood_rejBvsS->SetBinContent(1,0.8667334);
   Likelihood_rejBvsS->SetBinContent(2,0.8667334);
   Likelihood_rejBvsS->SetBinContent(3,0.8667334);
   Likelihood_rejBvsS->SetBinContent(4,0.8667334);
   Likelihood_rejBvsS->SetBinContent(5,0.8667334);
   Likelihood_rejBvsS->SetBinContent(6,0.8667334);
   Likelihood_rejBvsS->SetBinContent(7,0.8667334);
   Likelihood_rejBvsS->SetBinContent(8,0.8667334);
   Likelihood_rejBvsS->SetBinContent(9,0.8667334);
   Likelihood_rejBvsS->SetBinContent(10,0.8667334);
   Likelihood_rejBvsS->SetBinContent(11,0.8667334);
   Likelihood_rejBvsS->SetBinContent(12,0.8667334);
   Likelihood_rejBvsS->SetBinContent(13,0.8667334);
   Likelihood_rejBvsS->SetBinContent(14,0.8667334);
   Likelihood_rejBvsS->SetBinContent(15,0.8667334);
   Likelihood_rejBvsS->SetBinContent(16,0.8667334);
   Likelihood_rejBvsS->SetBinContent(17,0.8667334);
   Likelihood_rejBvsS->SetBinContent(18,0.8667334);
   Likelihood_rejBvsS->SetBinContent(19,0.8667334);
   Likelihood_rejBvsS->SetBinContent(20,0.8667334);
   Likelihood_rejBvsS->SetBinContent(21,0.8667334);
   Likelihood_rejBvsS->SetBinContent(22,0.8667334);
   Likelihood_rejBvsS->SetBinContent(23,0.8667334);
   Likelihood_rejBvsS->SetBinContent(24,0.8667334);
   Likelihood_rejBvsS->SetBinContent(25,0.8667334);
   Likelihood_rejBvsS->SetBinContent(26,0.8667334);
   Likelihood_rejBvsS->SetBinContent(27,0.8667334);
   Likelihood_rejBvsS->SetBinContent(28,0.8667334);
   Likelihood_rejBvsS->SetBinContent(29,0.8667334);
   Likelihood_rejBvsS->SetBinContent(30,0.8667334);
   Likelihood_rejBvsS->SetBinContent(31,0.8667334);
   Likelihood_rejBvsS->SetBinContent(32,0.8667334);
   Likelihood_rejBvsS->SetBinContent(33,0.8667334);
   Likelihood_rejBvsS->SetBinContent(34,0.8667334);
   Likelihood_rejBvsS->SetBinContent(35,0.8667334);
   Likelihood_rejBvsS->SetBinContent(36,0.8667334);
   Likelihood_rejBvsS->SetBinContent(37,0.8667334);
   Likelihood_rejBvsS->SetBinContent(38,0.8667334);
   Likelihood_rejBvsS->SetBinContent(39,0.8667334);
   Likelihood_rejBvsS->SetBinContent(40,0.8667334);
   Likelihood_rejBvsS->SetBinContent(41,0.8667334);
   Likelihood_rejBvsS->SetBinContent(42,0.8667334);
   Likelihood_rejBvsS->SetBinContent(43,0.8667334);
   Likelihood_rejBvsS->SetBinContent(44,0.8667334);
   Likelihood_rejBvsS->SetBinContent(45,0.8667334);
   Likelihood_rejBvsS->SetBinContent(46,0.8667334);
   Likelihood_rejBvsS->SetBinContent(47,0.8667334);
   Likelihood_rejBvsS->SetBinContent(48,0.8667334);
   Likelihood_rejBvsS->SetBinContent(49,0.8667334);
   Likelihood_rejBvsS->SetBinContent(50,0.8667334);
   Likelihood_rejBvsS->SetBinContent(51,0.8667334);
   Likelihood_rejBvsS->SetBinContent(52,0.8667334);
   Likelihood_rejBvsS->SetBinContent(53,0.8667334);
   Likelihood_rejBvsS->SetBinContent(54,0.8667334);
   Likelihood_rejBvsS->SetBinContent(55,0.8667334);
   Likelihood_rejBvsS->SetBinContent(56,0.8667334);
   Likelihood_rejBvsS->SetBinContent(57,0.8667334);
   Likelihood_rejBvsS->SetBinContent(58,0.8667334);
   Likelihood_rejBvsS->SetBinContent(59,0.8640058);
   Likelihood_rejBvsS->SetBinContent(60,0.8602824);
   Likelihood_rejBvsS->SetBinContent(61,0.856559);
   Likelihood_rejBvsS->SetBinContent(62,0.8528356);
   Likelihood_rejBvsS->SetBinContent(63,0.8491123);
   Likelihood_rejBvsS->SetBinContent(64,0.8450749);
   Likelihood_rejBvsS->SetBinContent(65,0.8408961);
   Likelihood_rejBvsS->SetBinContent(66,0.8370107);
   Likelihood_rejBvsS->SetBinContent(67,0.8331976);
   Likelihood_rejBvsS->SetBinContent(68,0.8287403);
   Likelihood_rejBvsS->SetBinContent(69,0.8243329);
   Likelihood_rejBvsS->SetBinContent(70,0.8201301);
   Likelihood_rejBvsS->SetBinContent(71,0.8156748);
   Likelihood_rejBvsS->SetBinContent(72,0.8108709);
   Likelihood_rejBvsS->SetBinContent(73,0.8063233);
   Likelihood_rejBvsS->SetBinContent(74,0.8014971);
   Likelihood_rejBvsS->SetBinContent(75,0.7966272);
   Likelihood_rejBvsS->SetBinContent(76,0.7918441);
   Likelihood_rejBvsS->SetBinContent(77,0.7869662);
   Likelihood_rejBvsS->SetBinContent(78,0.7810746);
   Likelihood_rejBvsS->SetBinContent(79,0.775619);
   Likelihood_rejBvsS->SetBinContent(80,0.7696611);
   Likelihood_rejBvsS->SetBinContent(81,0.7634774);
   Likelihood_rejBvsS->SetBinContent(82,0.7572924);
   Likelihood_rejBvsS->SetBinContent(83,0.7509072);
   Likelihood_rejBvsS->SetBinContent(84,0.7438876);
   Likelihood_rejBvsS->SetBinContent(85,0.7353711);
   Likelihood_rejBvsS->SetBinContent(86,0.7276178);
   Likelihood_rejBvsS->SetBinContent(87,0.7189371);
   Likelihood_rejBvsS->SetBinContent(88,0.7098456);
   Likelihood_rejBvsS->SetBinContent(89,0.700618);
   Likelihood_rejBvsS->SetBinContent(90,0.6901724);
   Likelihood_rejBvsS->SetBinContent(91,0.6786866);
   Likelihood_rejBvsS->SetBinContent(92,0.6666849);
   Likelihood_rejBvsS->SetBinContent(93,0.6523324);
   Likelihood_rejBvsS->SetBinContent(94,0.6379006);
   Likelihood_rejBvsS->SetBinContent(95,0.619416);
   Likelihood_rejBvsS->SetBinContent(96,0.5983856);
   Likelihood_rejBvsS->SetBinContent(97,0.5725579);
   Likelihood_rejBvsS->SetBinContent(98,0.539486);
   Likelihood_rejBvsS->SetBinContent(99,0.4890102);
   Likelihood_rejBvsS->SetBinContent(100,0.1658728);
   Likelihood_rejBvsS->SetEntries(100);
   Likelihood_rejBvsS->SetStats(0);
   Likelihood_rejBvsS->SetLineColor(2);
   Likelihood_rejBvsS->SetLineWidth(3);
   Likelihood_rejBvsS->SetMarkerStyle(21);
   Likelihood_rejBvsS->SetMarkerSize(0.3);
   Likelihood_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   Likelihood_rejBvsS->GetXaxis()->SetNdivisions(505);
   Likelihood_rejBvsS->GetXaxis()->SetLabelFont(132);
   Likelihood_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   Likelihood_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   Likelihood_rejBvsS->GetXaxis()->SetTitleFont(132);
   Likelihood_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   Likelihood_rejBvsS->GetYaxis()->SetLabelFont(132);
   Likelihood_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   Likelihood_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   Likelihood_rejBvsS->GetYaxis()->SetTitleFont(132);
   Likelihood_rejBvsS->GetZaxis()->SetLabelFont(132);
   Likelihood_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   Likelihood_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   Likelihood_rejBvsS->GetZaxis()->SetTitleFont(132);
   Likelihood_rejBvsS->Draw("csame");
   
   TH1D *HMatrix_rejBvsS = new TH1D("HMatrix_rejBvsS","HMatrix",100,0,1);
   HMatrix_rejBvsS->SetBinContent(1,0.9990546);
   HMatrix_rejBvsS->SetBinContent(2,0.9972366);
   HMatrix_rejBvsS->SetBinContent(3,0.995269);
   HMatrix_rejBvsS->SetBinContent(4,0.9932322);
   HMatrix_rejBvsS->SetBinContent(5,0.9914681);
   HMatrix_rejBvsS->SetBinContent(6,0.9899531);
   HMatrix_rejBvsS->SetBinContent(7,0.9883541);
   HMatrix_rejBvsS->SetBinContent(8,0.9868069);
   HMatrix_rejBvsS->SetBinContent(9,0.985352);
   HMatrix_rejBvsS->SetBinContent(10,0.9839499);
   HMatrix_rejBvsS->SetBinContent(11,0.982374);
   HMatrix_rejBvsS->SetBinContent(12,0.9809752);
   HMatrix_rejBvsS->SetBinContent(13,0.9794571);
   HMatrix_rejBvsS->SetBinContent(14,0.9779277);
   HMatrix_rejBvsS->SetBinContent(15,0.9767028);
   HMatrix_rejBvsS->SetBinContent(16,0.9752532);
   HMatrix_rejBvsS->SetBinContent(17,0.9737494);
   HMatrix_rejBvsS->SetBinContent(18,0.9723675);
   HMatrix_rejBvsS->SetBinContent(19,0.9709563);
   HMatrix_rejBvsS->SetBinContent(20,0.9695515);
   HMatrix_rejBvsS->SetBinContent(21,0.9680501);
   HMatrix_rejBvsS->SetBinContent(22,0.9666954);
   HMatrix_rejBvsS->SetBinContent(23,0.9651798);
   HMatrix_rejBvsS->SetBinContent(24,0.963695);
   HMatrix_rejBvsS->SetBinContent(25,0.9623368);
   HMatrix_rejBvsS->SetBinContent(26,0.9608355);
   HMatrix_rejBvsS->SetBinContent(27,0.9592321);
   HMatrix_rejBvsS->SetBinContent(28,0.9577368);
   HMatrix_rejBvsS->SetBinContent(29,0.9562998);
   HMatrix_rejBvsS->SetBinContent(30,0.9547901);
   HMatrix_rejBvsS->SetBinContent(31,0.9531993);
   HMatrix_rejBvsS->SetBinContent(32,0.9508822);
   HMatrix_rejBvsS->SetBinContent(33,0.94935);
   HMatrix_rejBvsS->SetBinContent(34,0.9476213);
   HMatrix_rejBvsS->SetBinContent(35,0.9460167);
   HMatrix_rejBvsS->SetBinContent(36,0.9445345);
   HMatrix_rejBvsS->SetBinContent(37,0.9427345);
   HMatrix_rejBvsS->SetBinContent(38,0.9410795);
   HMatrix_rejBvsS->SetBinContent(39,0.9393286);
   HMatrix_rejBvsS->SetBinContent(40,0.9375221);
   HMatrix_rejBvsS->SetBinContent(41,0.9358011);
   HMatrix_rejBvsS->SetBinContent(42,0.9339928);
   HMatrix_rejBvsS->SetBinContent(43,0.9322963);
   HMatrix_rejBvsS->SetBinContent(44,0.9301616);
   HMatrix_rejBvsS->SetBinContent(45,0.928328);
   HMatrix_rejBvsS->SetBinContent(46,0.9265764);
   HMatrix_rejBvsS->SetBinContent(47,0.9246379);
   HMatrix_rejBvsS->SetBinContent(48,0.9221586);
   HMatrix_rejBvsS->SetBinContent(49,0.9201239);
   HMatrix_rejBvsS->SetBinContent(50,0.917979);
   HMatrix_rejBvsS->SetBinContent(51,0.9159688);
   HMatrix_rejBvsS->SetBinContent(52,0.913923);
   HMatrix_rejBvsS->SetBinContent(53,0.9118587);
   HMatrix_rejBvsS->SetBinContent(54,0.909667);
   HMatrix_rejBvsS->SetBinContent(55,0.9073183);
   HMatrix_rejBvsS->SetBinContent(56,0.9049532);
   HMatrix_rejBvsS->SetBinContent(57,0.9026192);
   HMatrix_rejBvsS->SetBinContent(58,0.9001895);
   HMatrix_rejBvsS->SetBinContent(59,0.8976476);
   HMatrix_rejBvsS->SetBinContent(60,0.8949879);
   HMatrix_rejBvsS->SetBinContent(61,0.8925738);
   HMatrix_rejBvsS->SetBinContent(62,0.8895698);
   HMatrix_rejBvsS->SetBinContent(63,0.8868436);
   HMatrix_rejBvsS->SetBinContent(64,0.8839431);
   HMatrix_rejBvsS->SetBinContent(65,0.8811526);
   HMatrix_rejBvsS->SetBinContent(66,0.8782706);
   HMatrix_rejBvsS->SetBinContent(67,0.8753163);
   HMatrix_rejBvsS->SetBinContent(68,0.8722563);
   HMatrix_rejBvsS->SetBinContent(69,0.868929);
   HMatrix_rejBvsS->SetBinContent(70,0.8651294);
   HMatrix_rejBvsS->SetBinContent(71,0.8609085);
   HMatrix_rejBvsS->SetBinContent(72,0.8569943);
   HMatrix_rejBvsS->SetBinContent(73,0.8528109);
   HMatrix_rejBvsS->SetBinContent(74,0.8486824);
   HMatrix_rejBvsS->SetBinContent(75,0.8445926);
   HMatrix_rejBvsS->SetBinContent(76,0.8400585);
   HMatrix_rejBvsS->SetBinContent(77,0.835334);
   HMatrix_rejBvsS->SetBinContent(78,0.8301902);
   HMatrix_rejBvsS->SetBinContent(79,0.8250365);
   HMatrix_rejBvsS->SetBinContent(80,0.8197589);
   HMatrix_rejBvsS->SetBinContent(81,0.8143413);
   HMatrix_rejBvsS->SetBinContent(82,0.8085686);
   HMatrix_rejBvsS->SetBinContent(83,0.8012917);
   HMatrix_rejBvsS->SetBinContent(84,0.7944809);
   HMatrix_rejBvsS->SetBinContent(85,0.7869161);
   HMatrix_rejBvsS->SetBinContent(86,0.778756);
   HMatrix_rejBvsS->SetBinContent(87,0.770091);
   HMatrix_rejBvsS->SetBinContent(88,0.7599576);
   HMatrix_rejBvsS->SetBinContent(89,0.7497543);
   HMatrix_rejBvsS->SetBinContent(90,0.7374049);
   HMatrix_rejBvsS->SetBinContent(91,0.7243116);
   HMatrix_rejBvsS->SetBinContent(92,0.7094541);
   HMatrix_rejBvsS->SetBinContent(93,0.6903997);
   HMatrix_rejBvsS->SetBinContent(94,0.6681001);
   HMatrix_rejBvsS->SetBinContent(95,0.6427663);
   HMatrix_rejBvsS->SetBinContent(96,0.6136621);
   HMatrix_rejBvsS->SetBinContent(97,0.5802101);
   HMatrix_rejBvsS->SetBinContent(98,0.5419598);
   HMatrix_rejBvsS->SetBinContent(99,0.4942487);
   HMatrix_rejBvsS->SetBinContent(100,0.4148192);
   HMatrix_rejBvsS->SetEntries(100);
   HMatrix_rejBvsS->SetStats(0);
   HMatrix_rejBvsS->SetLineColor(3);
   HMatrix_rejBvsS->SetLineWidth(3);
   HMatrix_rejBvsS->SetMarkerStyle(21);
   HMatrix_rejBvsS->SetMarkerSize(0.3);
   HMatrix_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   HMatrix_rejBvsS->GetXaxis()->SetNdivisions(505);
   HMatrix_rejBvsS->GetXaxis()->SetLabelFont(132);
   HMatrix_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   HMatrix_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   HMatrix_rejBvsS->GetXaxis()->SetTitleFont(132);
   HMatrix_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   HMatrix_rejBvsS->GetYaxis()->SetLabelFont(132);
   HMatrix_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   HMatrix_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   HMatrix_rejBvsS->GetYaxis()->SetTitleFont(132);
   HMatrix_rejBvsS->GetZaxis()->SetLabelFont(132);
   HMatrix_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   HMatrix_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   HMatrix_rejBvsS->GetZaxis()->SetTitleFont(132);
   HMatrix_rejBvsS->Draw("csame");
   
   TH1D *Fisher_rejBvsS = new TH1D("Fisher_rejBvsS","Fisher",100,0,1);
   Fisher_rejBvsS->SetBinContent(1,0.9983106);
   Fisher_rejBvsS->SetBinContent(2,0.9962871);
   Fisher_rejBvsS->SetBinContent(3,0.9944799);
   Fisher_rejBvsS->SetBinContent(4,0.9931775);
   Fisher_rejBvsS->SetBinContent(5,0.9915773);
   Fisher_rejBvsS->SetBinContent(6,0.9899685);
   Fisher_rejBvsS->SetBinContent(7,0.9884467);
   Fisher_rejBvsS->SetBinContent(8,0.9869574);
   Fisher_rejBvsS->SetBinContent(9,0.9854807);
   Fisher_rejBvsS->SetBinContent(10,0.9836551);
   Fisher_rejBvsS->SetBinContent(11,0.9821223);
   Fisher_rejBvsS->SetBinContent(12,0.9805549);
   Fisher_rejBvsS->SetBinContent(13,0.9789838);
   Fisher_rejBvsS->SetBinContent(14,0.9774225);
   Fisher_rejBvsS->SetBinContent(15,0.9758648);
   Fisher_rejBvsS->SetBinContent(16,0.9742986);
   Fisher_rejBvsS->SetBinContent(17,0.9728855);
   Fisher_rejBvsS->SetBinContent(18,0.9713686);
   Fisher_rejBvsS->SetBinContent(19,0.9700647);
   Fisher_rejBvsS->SetBinContent(20,0.9685695);
   Fisher_rejBvsS->SetBinContent(21,0.9670872);
   Fisher_rejBvsS->SetBinContent(22,0.9655538);
   Fisher_rejBvsS->SetBinContent(23,0.9640812);
   Fisher_rejBvsS->SetBinContent(24,0.9625177);
   Fisher_rejBvsS->SetBinContent(25,0.9608723);
   Fisher_rejBvsS->SetBinContent(26,0.959168);
   Fisher_rejBvsS->SetBinContent(27,0.9575708);
   Fisher_rejBvsS->SetBinContent(28,0.9560917);
   Fisher_rejBvsS->SetBinContent(29,0.9543916);
   Fisher_rejBvsS->SetBinContent(30,0.952791);
   Fisher_rejBvsS->SetBinContent(31,0.9510796);
   Fisher_rejBvsS->SetBinContent(32,0.9492202);
   Fisher_rejBvsS->SetBinContent(33,0.9476456);
   Fisher_rejBvsS->SetBinContent(34,0.9460274);
   Fisher_rejBvsS->SetBinContent(35,0.9442567);
   Fisher_rejBvsS->SetBinContent(36,0.9426255);
   Fisher_rejBvsS->SetBinContent(37,0.941136);
   Fisher_rejBvsS->SetBinContent(38,0.9392498);
   Fisher_rejBvsS->SetBinContent(39,0.9374133);
   Fisher_rejBvsS->SetBinContent(40,0.9358781);
   Fisher_rejBvsS->SetBinContent(41,0.9339601);
   Fisher_rejBvsS->SetBinContent(42,0.9320986);
   Fisher_rejBvsS->SetBinContent(43,0.9301856);
   Fisher_rejBvsS->SetBinContent(44,0.9282784);
   Fisher_rejBvsS->SetBinContent(45,0.9263818);
   Fisher_rejBvsS->SetBinContent(46,0.92471);
   Fisher_rejBvsS->SetBinContent(47,0.9227098);
   Fisher_rejBvsS->SetBinContent(48,0.920838);
   Fisher_rejBvsS->SetBinContent(49,0.9188289);
   Fisher_rejBvsS->SetBinContent(50,0.9170501);
   Fisher_rejBvsS->SetBinContent(51,0.9151046);
   Fisher_rejBvsS->SetBinContent(52,0.9127437);
   Fisher_rejBvsS->SetBinContent(53,0.9106653);
   Fisher_rejBvsS->SetBinContent(54,0.9084529);
   Fisher_rejBvsS->SetBinContent(55,0.9062713);
   Fisher_rejBvsS->SetBinContent(56,0.9039389);
   Fisher_rejBvsS->SetBinContent(57,0.9018282);
   Fisher_rejBvsS->SetBinContent(58,0.8994517);
   Fisher_rejBvsS->SetBinContent(59,0.8972054);
   Fisher_rejBvsS->SetBinContent(60,0.8950416);
   Fisher_rejBvsS->SetBinContent(61,0.8925999);
   Fisher_rejBvsS->SetBinContent(62,0.8900343);
   Fisher_rejBvsS->SetBinContent(63,0.8873854);
   Fisher_rejBvsS->SetBinContent(64,0.8846938);
   Fisher_rejBvsS->SetBinContent(65,0.8816495);
   Fisher_rejBvsS->SetBinContent(66,0.8788651);
   Fisher_rejBvsS->SetBinContent(67,0.8760153);
   Fisher_rejBvsS->SetBinContent(68,0.8729729);
   Fisher_rejBvsS->SetBinContent(69,0.870138);
   Fisher_rejBvsS->SetBinContent(70,0.8668043);
   Fisher_rejBvsS->SetBinContent(71,0.8637463);
   Fisher_rejBvsS->SetBinContent(72,0.8605226);
   Fisher_rejBvsS->SetBinContent(73,0.857001);
   Fisher_rejBvsS->SetBinContent(74,0.8530814);
   Fisher_rejBvsS->SetBinContent(75,0.8493498);
   Fisher_rejBvsS->SetBinContent(76,0.8454023);
   Fisher_rejBvsS->SetBinContent(77,0.8413272);
   Fisher_rejBvsS->SetBinContent(78,0.8369315);
   Fisher_rejBvsS->SetBinContent(79,0.832145);
   Fisher_rejBvsS->SetBinContent(80,0.8271432);
   Fisher_rejBvsS->SetBinContent(81,0.8223407);
   Fisher_rejBvsS->SetBinContent(82,0.8173087);
   Fisher_rejBvsS->SetBinContent(83,0.8113511);
   Fisher_rejBvsS->SetBinContent(84,0.8049551);
   Fisher_rejBvsS->SetBinContent(85,0.7983538);
   Fisher_rejBvsS->SetBinContent(86,0.7911783);
   Fisher_rejBvsS->SetBinContent(87,0.7829732);
   Fisher_rejBvsS->SetBinContent(88,0.7744333);
   Fisher_rejBvsS->SetBinContent(89,0.7648974);
   Fisher_rejBvsS->SetBinContent(90,0.7543593);
   Fisher_rejBvsS->SetBinContent(91,0.7427448);
   Fisher_rejBvsS->SetBinContent(92,0.7289617);
   Fisher_rejBvsS->SetBinContent(93,0.7128832);
   Fisher_rejBvsS->SetBinContent(94,0.695657);
   Fisher_rejBvsS->SetBinContent(95,0.6747613);
   Fisher_rejBvsS->SetBinContent(96,0.6484838);
   Fisher_rejBvsS->SetBinContent(97,0.6154046);
   Fisher_rejBvsS->SetBinContent(98,0.5704662);
   Fisher_rejBvsS->SetBinContent(99,0.5063833);
   Fisher_rejBvsS->SetBinContent(100,0.3833123);
   Fisher_rejBvsS->SetEntries(100);
   Fisher_rejBvsS->SetStats(0);
   Fisher_rejBvsS->SetLineColor(4);
   Fisher_rejBvsS->SetLineWidth(3);
   Fisher_rejBvsS->SetMarkerStyle(21);
   Fisher_rejBvsS->SetMarkerSize(0.3);
   Fisher_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   Fisher_rejBvsS->GetXaxis()->SetNdivisions(505);
   Fisher_rejBvsS->GetXaxis()->SetLabelFont(132);
   Fisher_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   Fisher_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   Fisher_rejBvsS->GetXaxis()->SetTitleFont(132);
   Fisher_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   Fisher_rejBvsS->GetYaxis()->SetLabelFont(132);
   Fisher_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   Fisher_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   Fisher_rejBvsS->GetYaxis()->SetTitleFont(132);
   Fisher_rejBvsS->GetZaxis()->SetLabelFont(132);
   Fisher_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   Fisher_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   Fisher_rejBvsS->GetZaxis()->SetTitleFont(132);
   Fisher_rejBvsS->Draw("csame");
   
   TH1D *MLP_rejBvsS = new TH1D("MLP_rejBvsS","MLP",100,0,1);
   MLP_rejBvsS->SetBinContent(1,0.9996921);
   MLP_rejBvsS->SetBinContent(2,0.9988374);
   MLP_rejBvsS->SetBinContent(3,0.9982199);
   MLP_rejBvsS->SetBinContent(4,0.9974725);
   MLP_rejBvsS->SetBinContent(5,0.9969009);
   MLP_rejBvsS->SetBinContent(6,0.9961955);
   MLP_rejBvsS->SetBinContent(7,0.9954816);
   MLP_rejBvsS->SetBinContent(8,0.9947144);
   MLP_rejBvsS->SetBinContent(9,0.9938548);
   MLP_rejBvsS->SetBinContent(10,0.9929408);
   MLP_rejBvsS->SetBinContent(11,0.9921308);
   MLP_rejBvsS->SetBinContent(12,0.9913077);
   MLP_rejBvsS->SetBinContent(13,0.9904588);
   MLP_rejBvsS->SetBinContent(14,0.9895538);
   MLP_rejBvsS->SetBinContent(15,0.9886548);
   MLP_rejBvsS->SetBinContent(16,0.9877327);
   MLP_rejBvsS->SetBinContent(17,0.9868012);
   MLP_rejBvsS->SetBinContent(18,0.9858539);
   MLP_rejBvsS->SetBinContent(19,0.9848049);
   MLP_rejBvsS->SetBinContent(20,0.9836092);
   MLP_rejBvsS->SetBinContent(21,0.9824101);
   MLP_rejBvsS->SetBinContent(22,0.9810949);
   MLP_rejBvsS->SetBinContent(23,0.9797797);
   MLP_rejBvsS->SetBinContent(24,0.9784096);
   MLP_rejBvsS->SetBinContent(25,0.9768602);
   MLP_rejBvsS->SetBinContent(26,0.9753109);
   MLP_rejBvsS->SetBinContent(27,0.9737808);
   MLP_rejBvsS->SetBinContent(28,0.9722859);
   MLP_rejBvsS->SetBinContent(29,0.970791);
   MLP_rejBvsS->SetBinContent(30,0.9692678);
   MLP_rejBvsS->SetBinContent(31,0.9677296);
   MLP_rejBvsS->SetBinContent(32,0.966129);
   MLP_rejBvsS->SetBinContent(33,0.9643093);
   MLP_rejBvsS->SetBinContent(34,0.9624913);
   MLP_rejBvsS->SetBinContent(35,0.9606958);
   MLP_rejBvsS->SetBinContent(36,0.9589111);
   MLP_rejBvsS->SetBinContent(37,0.9572393);
   MLP_rejBvsS->SetBinContent(38,0.9555736);
   MLP_rejBvsS->SetBinContent(39,0.9539248);
   MLP_rejBvsS->SetBinContent(40,0.9522032);
   MLP_rejBvsS->SetBinContent(41,0.9504318);
   MLP_rejBvsS->SetBinContent(42,0.9486148);
   MLP_rejBvsS->SetBinContent(43,0.9468449);
   MLP_rejBvsS->SetBinContent(44,0.9450347);
   MLP_rejBvsS->SetBinContent(45,0.9430413);
   MLP_rejBvsS->SetBinContent(46,0.9412569);
   MLP_rejBvsS->SetBinContent(47,0.9394321);
   MLP_rejBvsS->SetBinContent(48,0.937558);
   MLP_rejBvsS->SetBinContent(49,0.935714);
   MLP_rejBvsS->SetBinContent(50,0.9337092);
   MLP_rejBvsS->SetBinContent(51,0.9315607);
   MLP_rejBvsS->SetBinContent(52,0.9298515);
   MLP_rejBvsS->SetBinContent(53,0.927953);
   MLP_rejBvsS->SetBinContent(54,0.9260092);
   MLP_rejBvsS->SetBinContent(55,0.9240364);
   MLP_rejBvsS->SetBinContent(56,0.921896);
   MLP_rejBvsS->SetBinContent(57,0.9199308);
   MLP_rejBvsS->SetBinContent(58,0.9179794);
   MLP_rejBvsS->SetBinContent(59,0.9158831);
   MLP_rejBvsS->SetBinContent(60,0.9135773);
   MLP_rejBvsS->SetBinContent(61,0.9114771);
   MLP_rejBvsS->SetBinContent(62,0.9094542);
   MLP_rejBvsS->SetBinContent(63,0.907362);
   MLP_rejBvsS->SetBinContent(64,0.9052519);
   MLP_rejBvsS->SetBinContent(65,0.9028762);
   MLP_rejBvsS->SetBinContent(66,0.9007101);
   MLP_rejBvsS->SetBinContent(67,0.8983011);
   MLP_rejBvsS->SetBinContent(68,0.8957021);
   MLP_rejBvsS->SetBinContent(69,0.8933985);
   MLP_rejBvsS->SetBinContent(70,0.8910103);
   MLP_rejBvsS->SetBinContent(71,0.8884935);
   MLP_rejBvsS->SetBinContent(72,0.8856242);
   MLP_rejBvsS->SetBinContent(73,0.8830234);
   MLP_rejBvsS->SetBinContent(74,0.8803935);
   MLP_rejBvsS->SetBinContent(75,0.8776569);
   MLP_rejBvsS->SetBinContent(76,0.8745782);
   MLP_rejBvsS->SetBinContent(77,0.8718852);
   MLP_rejBvsS->SetBinContent(78,0.8683487);
   MLP_rejBvsS->SetBinContent(79,0.8648227);
   MLP_rejBvsS->SetBinContent(80,0.8611793);
   MLP_rejBvsS->SetBinContent(81,0.8574715);
   MLP_rejBvsS->SetBinContent(82,0.8534918);
   MLP_rejBvsS->SetBinContent(83,0.8495184);
   MLP_rejBvsS->SetBinContent(84,0.8451227);
   MLP_rejBvsS->SetBinContent(85,0.8403532);
   MLP_rejBvsS->SetBinContent(86,0.835291);
   MLP_rejBvsS->SetBinContent(87,0.8302586);
   MLP_rejBvsS->SetBinContent(88,0.8244383);
   MLP_rejBvsS->SetBinContent(89,0.8184104);
   MLP_rejBvsS->SetBinContent(90,0.8114337);
   MLP_rejBvsS->SetBinContent(91,0.8034748);
   MLP_rejBvsS->SetBinContent(92,0.7942175);
   MLP_rejBvsS->SetBinContent(93,0.7835388);
   MLP_rejBvsS->SetBinContent(94,0.7717553);
   MLP_rejBvsS->SetBinContent(95,0.7574567);
   MLP_rejBvsS->SetBinContent(96,0.7397551);
   MLP_rejBvsS->SetBinContent(97,0.7177618);
   MLP_rejBvsS->SetBinContent(98,0.6856388);
   MLP_rejBvsS->SetBinContent(99,0.6355966);
   MLP_rejBvsS->SetBinContent(100,0.5323556);
   MLP_rejBvsS->SetEntries(100);
   MLP_rejBvsS->SetStats(0);
   MLP_rejBvsS->SetLineColor(6);
   MLP_rejBvsS->SetLineWidth(3);
   MLP_rejBvsS->SetMarkerStyle(21);
   MLP_rejBvsS->SetMarkerSize(0.3);
   MLP_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   MLP_rejBvsS->GetXaxis()->SetNdivisions(505);
   MLP_rejBvsS->GetXaxis()->SetLabelFont(132);
   MLP_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   MLP_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   MLP_rejBvsS->GetXaxis()->SetTitleFont(132);
   MLP_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   MLP_rejBvsS->GetYaxis()->SetLabelFont(132);
   MLP_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   MLP_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   MLP_rejBvsS->GetYaxis()->SetTitleFont(132);
   MLP_rejBvsS->GetZaxis()->SetLabelFont(132);
   MLP_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   MLP_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   MLP_rejBvsS->GetZaxis()->SetTitleFont(132);
   MLP_rejBvsS->Draw("csame");
   
   TH1D *KNN_rejBvsS = new TH1D("KNN_rejBvsS","KNN",100,0,1);
   KNN_rejBvsS->SetBinContent(1,0.9858289);
   KNN_rejBvsS->SetBinContent(2,0.9858289);
   KNN_rejBvsS->SetBinContent(3,0.9858289);
   KNN_rejBvsS->SetBinContent(4,0.9858289);
   KNN_rejBvsS->SetBinContent(5,0.9858289);
   KNN_rejBvsS->SetBinContent(6,0.9858289);
   KNN_rejBvsS->SetBinContent(7,0.9858289);
   KNN_rejBvsS->SetBinContent(8,0.9858289);
   KNN_rejBvsS->SetBinContent(9,0.9858289);
   KNN_rejBvsS->SetBinContent(10,0.9858289);
   KNN_rejBvsS->SetBinContent(11,0.9858289);
   KNN_rejBvsS->SetBinContent(12,0.9858289);
   KNN_rejBvsS->SetBinContent(13,0.9858289);
   KNN_rejBvsS->SetBinContent(14,0.9858289);
   KNN_rejBvsS->SetBinContent(15,0.9858289);
   KNN_rejBvsS->SetBinContent(16,0.9858289);
   KNN_rejBvsS->SetBinContent(17,0.9858289);
   KNN_rejBvsS->SetBinContent(18,0.9856149);
   KNN_rejBvsS->SetBinContent(19,0.9845569);
   KNN_rejBvsS->SetBinContent(20,0.9834988);
   KNN_rejBvsS->SetBinContent(21,0.9824408);
   KNN_rejBvsS->SetBinContent(22,0.9813827);
   KNN_rejBvsS->SetBinContent(23,0.9803247);
   KNN_rejBvsS->SetBinContent(24,0.9792666);
   KNN_rejBvsS->SetBinContent(25,0.9780028);
   KNN_rejBvsS->SetBinContent(26,0.9767342);
   KNN_rejBvsS->SetBinContent(27,0.9754657);
   KNN_rejBvsS->SetBinContent(28,0.9741971);
   KNN_rejBvsS->SetBinContent(29,0.9729285);
   KNN_rejBvsS->SetBinContent(30,0.9716373);
   KNN_rejBvsS->SetBinContent(31,0.970099);
   KNN_rejBvsS->SetBinContent(32,0.9686666);
   KNN_rejBvsS->SetBinContent(33,0.9672886);
   KNN_rejBvsS->SetBinContent(34,0.9656176);
   KNN_rejBvsS->SetBinContent(35,0.9638249);
   KNN_rejBvsS->SetBinContent(36,0.9615903);
   KNN_rejBvsS->SetBinContent(37,0.9599203);
   KNN_rejBvsS->SetBinContent(38,0.9584735);
   KNN_rejBvsS->SetBinContent(39,0.9570266);
   KNN_rejBvsS->SetBinContent(40,0.9555798);
   KNN_rejBvsS->SetBinContent(41,0.9541987);
   KNN_rejBvsS->SetBinContent(42,0.9529142);
   KNN_rejBvsS->SetBinContent(43,0.9516297);
   KNN_rejBvsS->SetBinContent(44,0.9503452);
   KNN_rejBvsS->SetBinContent(45,0.9487392);
   KNN_rejBvsS->SetBinContent(46,0.9465229);
   KNN_rejBvsS->SetBinContent(47,0.9449222);
   KNN_rejBvsS->SetBinContent(48,0.9434942);
   KNN_rejBvsS->SetBinContent(49,0.9417893);
   KNN_rejBvsS->SetBinContent(50,0.9400261);
   KNN_rejBvsS->SetBinContent(51,0.9382653);
   KNN_rejBvsS->SetBinContent(52,0.9365343);
   KNN_rejBvsS->SetBinContent(53,0.9348033);
   KNN_rejBvsS->SetBinContent(54,0.9321947);
   KNN_rejBvsS->SetBinContent(55,0.9302087);
   KNN_rejBvsS->SetBinContent(56,0.9282807);
   KNN_rejBvsS->SetBinContent(57,0.926336);
   KNN_rejBvsS->SetBinContent(58,0.924076);
   KNN_rejBvsS->SetBinContent(59,0.9218318);
   KNN_rejBvsS->SetBinContent(60,0.9200925);
   KNN_rejBvsS->SetBinContent(61,0.9183231);
   KNN_rejBvsS->SetBinContent(62,0.9167335);
   KNN_rejBvsS->SetBinContent(63,0.914157);
   KNN_rejBvsS->SetBinContent(64,0.9118623);
   KNN_rejBvsS->SetBinContent(65,0.9097709);
   KNN_rejBvsS->SetBinContent(66,0.9073196);
   KNN_rejBvsS->SetBinContent(67,0.9048674);
   KNN_rejBvsS->SetBinContent(68,0.9028406);
   KNN_rejBvsS->SetBinContent(69,0.9002922);
   KNN_rejBvsS->SetBinContent(70,0.8972529);
   KNN_rejBvsS->SetBinContent(71,0.8949366);
   KNN_rejBvsS->SetBinContent(72,0.8924606);
   KNN_rejBvsS->SetBinContent(73,0.8895983);
   KNN_rejBvsS->SetBinContent(74,0.8874984);
   KNN_rejBvsS->SetBinContent(75,0.8849331);
   KNN_rejBvsS->SetBinContent(76,0.8823114);
   KNN_rejBvsS->SetBinContent(77,0.8794013);
   KNN_rejBvsS->SetBinContent(78,0.8767871);
   KNN_rejBvsS->SetBinContent(79,0.8745196);
   KNN_rejBvsS->SetBinContent(80,0.8715191);
   KNN_rejBvsS->SetBinContent(81,0.8680588);
   KNN_rejBvsS->SetBinContent(82,0.8646077);
   KNN_rejBvsS->SetBinContent(83,0.8615713);
   KNN_rejBvsS->SetBinContent(84,0.8586932);
   KNN_rejBvsS->SetBinContent(85,0.8536169);
   KNN_rejBvsS->SetBinContent(86,0.8501019);
   KNN_rejBvsS->SetBinContent(87,0.845693);
   KNN_rejBvsS->SetBinContent(88,0.8406599);
   KNN_rejBvsS->SetBinContent(89,0.835566);
   KNN_rejBvsS->SetBinContent(90,0.8306799);
   KNN_rejBvsS->SetBinContent(91,0.8244555);
   KNN_rejBvsS->SetBinContent(92,0.8180182);
   KNN_rejBvsS->SetBinContent(93,0.8096085);
   KNN_rejBvsS->SetBinContent(94,0.7989566);
   KNN_rejBvsS->SetBinContent(95,0.7874192);
   KNN_rejBvsS->SetBinContent(96,0.7728395);
   KNN_rejBvsS->SetBinContent(97,0.7540246);
   KNN_rejBvsS->SetBinContent(98,0.7253416);
   KNN_rejBvsS->SetBinContent(99,0.6790396);
   KNN_rejBvsS->SetBinContent(100,0.5778147);
   KNN_rejBvsS->SetEntries(100);
   KNN_rejBvsS->SetStats(0);
   KNN_rejBvsS->SetLineColor(7);
   KNN_rejBvsS->SetLineWidth(3);
   KNN_rejBvsS->SetMarkerStyle(21);
   KNN_rejBvsS->SetMarkerSize(0.3);
   KNN_rejBvsS->GetXaxis()->SetTitle("Signal eff");
   KNN_rejBvsS->GetXaxis()->SetNdivisions(505);
   KNN_rejBvsS->GetXaxis()->SetLabelFont(132);
   KNN_rejBvsS->GetXaxis()->SetLabelSize(0.03);
   KNN_rejBvsS->GetXaxis()->SetTitleSize(0.036);
   KNN_rejBvsS->GetXaxis()->SetTitleFont(132);
   KNN_rejBvsS->GetYaxis()->SetTitle("Backgr rejection (1-eff)");
   KNN_rejBvsS->GetYaxis()->SetLabelFont(132);
   KNN_rejBvsS->GetYaxis()->SetLabelSize(0.03);
   KNN_rejBvsS->GetYaxis()->SetTitleSize(0.036);
   KNN_rejBvsS->GetYaxis()->SetTitleFont(132);
   KNN_rejBvsS->GetZaxis()->SetLabelFont(132);
   KNN_rejBvsS->GetZaxis()->SetLabelSize(0.03);
   KNN_rejBvsS->GetZaxis()->SetTitleSize(0.036);
   KNN_rejBvsS->GetZaxis()->SetTitleFont(132);
   KNN_rejBvsS->Draw("csame");
   
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
   
   TLegend *leg = new TLegend(0.15,0.171,0.5,0.556,NULL,"brNDC");
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
   entry=leg->AddEntry("KNN_rejBvsS","KNN","l");
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("MLP_rejBvsS","MLP","l");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Fisher_rejBvsS","Fisher","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("HMatrix_rejBvsS","HMatrix","l");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Likelihood_rejBvsS","Likelihood","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Cuts_rejBvsS","Cuts","l");
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
