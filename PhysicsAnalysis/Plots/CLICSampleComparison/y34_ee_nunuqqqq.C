{
//=========Macro generated from canvas: c1_n34/c1_n34
//=========  (Thu Aug 11 09:06:07 2016) by ROOT version5.34/30
   TCanvas *c1_n34 = new TCanvas("c1_n34", "c1_n34",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n34->SetHighLightColor(2);
   c1_n34->Range(0,0,1,1);
   c1_n34->SetFillColor(0);
   c1_n34->SetBorderMode(0);
   c1_n34->SetBorderSize(2);
   c1_n34->SetFrameBorderMode(0);
   
   TH1F *y34_ee_nunuqqqq = new TH1F("y34_ee_nunuqqqq","y34 ee_nunuqqqq",100,0,10);
   y34_ee_nunuqqqq->SetBinContent(15,1.176637);
   y34_ee_nunuqqqq->SetBinContent(16,10.09946);
   y34_ee_nunuqqqq->SetBinContent(17,45.49659);
   y34_ee_nunuqqqq->SetBinContent(18,123.4487);
   y34_ee_nunuqqqq->SetBinContent(19,270.5282);
   y34_ee_nunuqqqq->SetBinContent(20,483.5973);
   y34_ee_nunuqqqq->SetBinContent(21,784.7048);
   y34_ee_nunuqqqq->SetBinContent(22,1125.874);
   y34_ee_nunuqqqq->SetBinContent(23,1504.633);
   y34_ee_nunuqqqq->SetBinContent(24,1851.142);
   y34_ee_nunuqqqq->SetBinContent(25,2202.254);
   y34_ee_nunuqqqq->SetBinContent(26,2378.228);
   y34_ee_nunuqqqq->SetBinContent(27,2511.9);
   y34_ee_nunuqqqq->SetBinContent(28,2548.606);
   y34_ee_nunuqqqq->SetBinContent(29,2491.683);
   y34_ee_nunuqqqq->SetBinContent(30,2340.736);
   y34_ee_nunuqqqq->SetBinContent(31,2146.705);
   y34_ee_nunuqqqq->SetBinContent(32,1925.541);
   y34_ee_nunuqqqq->SetBinContent(33,1707.441);
   y34_ee_nunuqqqq->SetBinContent(34,1470.227);
   y34_ee_nunuqqqq->SetBinContent(35,1238.502);
   y34_ee_nunuqqqq->SetBinContent(36,1015.691);
   y34_ee_nunuqqqq->SetBinContent(37,823.9382);
   y34_ee_nunuqqqq->SetBinContent(38,665.6315);
   y34_ee_nunuqqqq->SetBinContent(39,500.5605);
   y34_ee_nunuqqqq->SetBinContent(40,370.052);
   y34_ee_nunuqqqq->SetBinContent(41,265.3314);
   y34_ee_nunuqqqq->SetBinContent(42,183.163);
   y34_ee_nunuqqqq->SetBinContent(43,116.2908);
   y34_ee_nunuqqqq->SetBinContent(44,66.47993);
   y34_ee_nunuqqqq->SetBinContent(45,37.7504);
   y34_ee_nunuqqqq->SetBinContent(46,18.63007);
   y34_ee_nunuqqqq->SetBinContent(47,9.315036);
   y34_ee_nunuqqqq->SetBinContent(48,4.706545);
   y34_ee_nunuqqqq->SetBinContent(49,0.8824779);
   y34_ee_nunuqqqq->SetBinContent(50,0.2941593);
   y34_ee_nunuqqqq->SetBinContent(51,0.0980531);
   y34_ee_nunuqqqq->SetEntries(339000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   y34_ee_nunuqqqq->SetLineColor(ci);
   y34_ee_nunuqqqq->GetXaxis()->SetTitle("y34");
   y34_ee_nunuqqqq->GetXaxis()->SetLabelFont(42);
   y34_ee_nunuqqqq->GetXaxis()->SetLabelSize(0.035);
   y34_ee_nunuqqqq->GetXaxis()->SetTitleSize(0.035);
   y34_ee_nunuqqqq->GetXaxis()->SetTitleFont(42);
   y34_ee_nunuqqqq->GetYaxis()->SetTitle("Entries");
   y34_ee_nunuqqqq->GetYaxis()->SetLabelFont(42);
   y34_ee_nunuqqqq->GetYaxis()->SetLabelSize(0.035);
   y34_ee_nunuqqqq->GetYaxis()->SetTitleSize(0.035);
   y34_ee_nunuqqqq->GetYaxis()->SetTitleFont(42);
   y34_ee_nunuqqqq->GetZaxis()->SetLabelFont(42);
   y34_ee_nunuqqqq->GetZaxis()->SetLabelSize(0.035);
   y34_ee_nunuqqqq->GetZaxis()->SetTitleSize(0.035);
   y34_ee_nunuqqqq->GetZaxis()->SetTitleFont(42);
   y34_ee_nunuqqqq->Draw("");
   c1_n34->Modified();
   c1_n34->cd();
   c1_n34->SetSelected(c1_n34);
}
