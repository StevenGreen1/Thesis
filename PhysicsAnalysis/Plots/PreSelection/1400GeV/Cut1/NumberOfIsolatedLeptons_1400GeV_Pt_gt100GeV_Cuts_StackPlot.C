{
//=========Macro generated from canvas: WLBGNALUYA/NumberOfIsolatedLeptons
//=========  (Mon Jan 23 17:42:43 2017) by ROOT version5.34/30
   TCanvas *WLBGNALUYA = new TCanvas("WLBGNALUYA", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   WLBGNALUYA->SetHighLightColor(2);
   WLBGNALUYA->Range(-1.25,-2.71298,11.25,7.74042);
   WLBGNALUYA->SetFillColor(0);
   WLBGNALUYA->SetBorderMode(0);
   WLBGNALUYA->SetBorderSize(2);
   WLBGNALUYA->SetLogy();
   WLBGNALUYA->SetFrameBorderMode(0);
   WLBGNALUYA->SetFrameBorderMode(0);
   
   THStack *VXPCTASVKV = new THStack();
   VXPCTASVKV->SetName("VXPCTASVKV");
   VXPCTASVKV->SetTitle("NumberOfIsolatedLeptons");
   VXPCTASVKV->SetMinimum(0.1);
   
   TH1F *VXPCTASVKV_stack_72 = new TH1F("VXPCTASVKV_stack_72","NumberOfIsolatedLeptons",10,0,10);
   VXPCTASVKV_stack_72->SetMinimum(0.02149612);
   VXPCTASVKV_stack_72->SetMaximum(4955415);
   VXPCTASVKV_stack_72->SetDirectory(0);
   VXPCTASVKV_stack_72->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VXPCTASVKV_stack_72->SetLineColor(ci);
   VXPCTASVKV_stack_72->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VXPCTASVKV_stack_72->GetXaxis()->SetLabelFont(42);
   VXPCTASVKV_stack_72->GetXaxis()->SetLabelSize(0.035);
   VXPCTASVKV_stack_72->GetXaxis()->SetTitleSize(0.035);
   VXPCTASVKV_stack_72->GetXaxis()->SetTitleFont(42);
   VXPCTASVKV_stack_72->GetYaxis()->SetTitle("Entries");
   VXPCTASVKV_stack_72->GetYaxis()->SetLabelFont(42);
   VXPCTASVKV_stack_72->GetYaxis()->SetLabelSize(0.035);
   VXPCTASVKV_stack_72->GetYaxis()->SetTitleSize(0.035);
   VXPCTASVKV_stack_72->GetYaxis()->SetTitleFont(42);
   VXPCTASVKV_stack_72->GetZaxis()->SetLabelFont(42);
   VXPCTASVKV_stack_72->GetZaxis()->SetLabelSize(0.035);
   VXPCTASVKV_stack_72->GetZaxis()->SetTitleSize(0.035);
   VXPCTASVKV_stack_72->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->SetHistogram(VXPCTASVKV_stack_72);
   
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,23618.04);
   UXLBSCYONJ->SetBinContent(2,69.23821);
   UXLBSCYONJ->SetBinContent(3,0.1236832);
   UXLBSCYONJ->SetBinContent(4,0.01374258);
   UXLBSCYONJ->SetMinimum(0.1);
   UXLBSCYONJ->SetMaximum(47236.09);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetFillColor(1);
   UXLBSCYONJ->SetFillStyle(3001);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(UXLBSCYONJ,"");
   
   TH1F *FURKAUYLOS = new TH1F("FURKAUYLOS","NumberOfIsolatedLeptons",10,0,10);
   FURKAUYLOS->SetBinContent(1,43001.88);
   FURKAUYLOS->SetBinContent(2,38335.23);
   FURKAUYLOS->SetBinContent(3,129.342);
   FURKAUYLOS->SetMinimum(0.1);
   FURKAUYLOS->SetMaximum(86003.76);
   FURKAUYLOS->SetEntries(365360);
   FURKAUYLOS->SetStats(0);

   ci = TColor::GetColor("#000066");
   FURKAUYLOS->SetFillColor(ci);
   FURKAUYLOS->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   FURKAUYLOS->SetLineColor(ci);
   FURKAUYLOS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   FURKAUYLOS->GetXaxis()->SetLabelFont(42);
   FURKAUYLOS->GetXaxis()->SetLabelSize(0.035);
   FURKAUYLOS->GetXaxis()->SetTitleSize(0.035);
   FURKAUYLOS->GetXaxis()->SetTitleFont(42);
   FURKAUYLOS->GetYaxis()->SetTitle("Entries");
   FURKAUYLOS->GetYaxis()->SetLabelFont(42);
   FURKAUYLOS->GetYaxis()->SetLabelSize(0.035);
   FURKAUYLOS->GetYaxis()->SetTitleSize(0.035);
   FURKAUYLOS->GetYaxis()->SetTitleFont(42);
   FURKAUYLOS->GetZaxis()->SetLabelFont(42);
   FURKAUYLOS->GetZaxis()->SetLabelSize(0.035);
   FURKAUYLOS->GetZaxis()->SetTitleSize(0.035);
   FURKAUYLOS->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(FURKAUYLOS,"");
   
   TH1F *SKVSHOYLCY = new TH1F("SKVSHOYLCY","NumberOfIsolatedLeptons",10,0,10);
   SKVSHOYLCY->SetBinContent(1,709.0712);
   SKVSHOYLCY->SetBinContent(2,318.0081);
   SKVSHOYLCY->SetBinContent(3,123.5045);
   SKVSHOYLCY->SetBinContent(4,0.6608539);
   SKVSHOYLCY->SetMinimum(0.1);
   SKVSHOYLCY->SetMaximum(1418.142);
   SKVSHOYLCY->SetEntries(15679);
   SKVSHOYLCY->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   SKVSHOYLCY->SetFillColor(ci);
   SKVSHOYLCY->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   SKVSHOYLCY->SetLineColor(ci);
   SKVSHOYLCY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SKVSHOYLCY->GetXaxis()->SetLabelFont(42);
   SKVSHOYLCY->GetXaxis()->SetLabelSize(0.035);
   SKVSHOYLCY->GetXaxis()->SetTitleSize(0.035);
   SKVSHOYLCY->GetXaxis()->SetTitleFont(42);
   SKVSHOYLCY->GetYaxis()->SetTitle("Entries");
   SKVSHOYLCY->GetYaxis()->SetLabelFont(42);
   SKVSHOYLCY->GetYaxis()->SetLabelSize(0.035);
   SKVSHOYLCY->GetYaxis()->SetTitleSize(0.035);
   SKVSHOYLCY->GetYaxis()->SetTitleFont(42);
   SKVSHOYLCY->GetZaxis()->SetLabelFont(42);
   SKVSHOYLCY->GetZaxis()->SetLabelSize(0.035);
   SKVSHOYLCY->GetZaxis()->SetTitleSize(0.035);
   SKVSHOYLCY->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(SKVSHOYLCY,"");
   
   TH1F *HDKZOTIXUB = new TH1F("HDKZOTIXUB","NumberOfIsolatedLeptons",10,0,10);
   HDKZOTIXUB->SetBinContent(1,6464.335);
   HDKZOTIXUB->SetBinContent(2,22.34566);
   HDKZOTIXUB->SetMinimum(0.1);
   HDKZOTIXUB->SetMaximum(12928.67);
   HDKZOTIXUB->SetEntries(2032);
   HDKZOTIXUB->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   HDKZOTIXUB->SetFillColor(ci);
   HDKZOTIXUB->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   HDKZOTIXUB->SetLineColor(ci);
   HDKZOTIXUB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HDKZOTIXUB->GetXaxis()->SetLabelFont(42);
   HDKZOTIXUB->GetXaxis()->SetLabelSize(0.035);
   HDKZOTIXUB->GetXaxis()->SetTitleSize(0.035);
   HDKZOTIXUB->GetXaxis()->SetTitleFont(42);
   HDKZOTIXUB->GetYaxis()->SetTitle("Entries");
   HDKZOTIXUB->GetYaxis()->SetLabelFont(42);
   HDKZOTIXUB->GetYaxis()->SetLabelSize(0.035);
   HDKZOTIXUB->GetYaxis()->SetTitleSize(0.035);
   HDKZOTIXUB->GetYaxis()->SetTitleFont(42);
   HDKZOTIXUB->GetZaxis()->SetLabelFont(42);
   HDKZOTIXUB->GetZaxis()->SetLabelSize(0.035);
   HDKZOTIXUB->GetZaxis()->SetTitleSize(0.035);
   HDKZOTIXUB->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(HDKZOTIXUB,"");
   
   TH1F *JHQWNIMVED = new TH1F("JHQWNIMVED","NumberOfIsolatedLeptons",10,0,10);
   JHQWNIMVED->SetBinContent(1,513789.8);
   JHQWNIMVED->SetBinContent(2,900.22);
   JHQWNIMVED->SetMinimum(0.1);
   JHQWNIMVED->SetMaximum(1027580);
   JHQWNIMVED->SetEntries(254138);
   JHQWNIMVED->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   JHQWNIMVED->SetFillColor(ci);
   JHQWNIMVED->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   JHQWNIMVED->SetLineColor(ci);
   JHQWNIMVED->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JHQWNIMVED->GetXaxis()->SetLabelFont(42);
   JHQWNIMVED->GetXaxis()->SetLabelSize(0.035);
   JHQWNIMVED->GetXaxis()->SetTitleSize(0.035);
   JHQWNIMVED->GetXaxis()->SetTitleFont(42);
   JHQWNIMVED->GetYaxis()->SetTitle("Entries");
   JHQWNIMVED->GetYaxis()->SetLabelFont(42);
   JHQWNIMVED->GetYaxis()->SetLabelSize(0.035);
   JHQWNIMVED->GetYaxis()->SetTitleSize(0.035);
   JHQWNIMVED->GetYaxis()->SetTitleFont(42);
   JHQWNIMVED->GetZaxis()->SetLabelFont(42);
   JHQWNIMVED->GetZaxis()->SetLabelSize(0.035);
   JHQWNIMVED->GetZaxis()->SetTitleSize(0.035);
   JHQWNIMVED->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(JHQWNIMVED,"");
   
   TH1F *MEWRTXCWTV = new TH1F("MEWRTXCWTV","NumberOfIsolatedLeptons",10,0,10);
   MEWRTXCWTV->SetBinContent(1,1235321);
   MEWRTXCWTV->SetBinContent(2,763725.1);
   MEWRTXCWTV->SetBinContent(3,1244.322);
   MEWRTXCWTV->SetMinimum(0.1);
   MEWRTXCWTV->SetMaximum(2470642);
   MEWRTXCWTV->SetEntries(648676);
   MEWRTXCWTV->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   MEWRTXCWTV->SetFillColor(ci);
   MEWRTXCWTV->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   MEWRTXCWTV->SetLineColor(ci);
   MEWRTXCWTV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   MEWRTXCWTV->GetXaxis()->SetLabelFont(42);
   MEWRTXCWTV->GetXaxis()->SetLabelSize(0.035);
   MEWRTXCWTV->GetXaxis()->SetTitleSize(0.035);
   MEWRTXCWTV->GetXaxis()->SetTitleFont(42);
   MEWRTXCWTV->GetYaxis()->SetTitle("Entries");
   MEWRTXCWTV->GetYaxis()->SetLabelFont(42);
   MEWRTXCWTV->GetYaxis()->SetLabelSize(0.035);
   MEWRTXCWTV->GetYaxis()->SetTitleSize(0.035);
   MEWRTXCWTV->GetYaxis()->SetTitleFont(42);
   MEWRTXCWTV->GetZaxis()->SetLabelFont(42);
   MEWRTXCWTV->GetZaxis()->SetLabelSize(0.035);
   MEWRTXCWTV->GetZaxis()->SetTitleSize(0.035);
   MEWRTXCWTV->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(MEWRTXCWTV,"");
   
   TH1F *IEKKDGWATX = new TH1F("IEKKDGWATX","NumberOfIsolatedLeptons",10,0,10);
   IEKKDGWATX->SetBinContent(1,5985.927);
   IEKKDGWATX->SetBinContent(2,1487.743);
   IEKKDGWATX->SetBinContent(3,280.415);
   IEKKDGWATX->SetMinimum(0.1);
   IEKKDGWATX->SetMaximum(11971.85);
   IEKKDGWATX->SetEntries(3982);
   IEKKDGWATX->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   IEKKDGWATX->SetFillColor(ci);
   IEKKDGWATX->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   IEKKDGWATX->SetLineColor(ci);
   IEKKDGWATX->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   IEKKDGWATX->GetXaxis()->SetLabelFont(42);
   IEKKDGWATX->GetXaxis()->SetLabelSize(0.035);
   IEKKDGWATX->GetXaxis()->SetTitleSize(0.035);
   IEKKDGWATX->GetXaxis()->SetTitleFont(42);
   IEKKDGWATX->GetYaxis()->SetTitle("Entries");
   IEKKDGWATX->GetYaxis()->SetLabelFont(42);
   IEKKDGWATX->GetYaxis()->SetLabelSize(0.035);
   IEKKDGWATX->GetYaxis()->SetTitleSize(0.035);
   IEKKDGWATX->GetYaxis()->SetTitleFont(42);
   IEKKDGWATX->GetZaxis()->SetLabelFont(42);
   IEKKDGWATX->GetZaxis()->SetLabelSize(0.035);
   IEKKDGWATX->GetZaxis()->SetTitleSize(0.035);
   IEKKDGWATX->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(IEKKDGWATX,"");
   
   TH1F *JUWVLEYFAQ = new TH1F("JUWVLEYFAQ","NumberOfIsolatedLeptons",10,0,10);
   JUWVLEYFAQ->SetBinContent(1,34551.23);
   JUWVLEYFAQ->SetBinContent(2,61.80975);
   JUWVLEYFAQ->SetMinimum(0.1);
   JUWVLEYFAQ->SetMaximum(69102.45);
   JUWVLEYFAQ->SetEntries(2800);
   JUWVLEYFAQ->SetStats(0);

   ci = TColor::GetColor("#006633");
   JUWVLEYFAQ->SetFillColor(ci);
   JUWVLEYFAQ->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   JUWVLEYFAQ->SetLineColor(ci);
   JUWVLEYFAQ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JUWVLEYFAQ->GetXaxis()->SetLabelFont(42);
   JUWVLEYFAQ->GetXaxis()->SetLabelSize(0.035);
   JUWVLEYFAQ->GetXaxis()->SetTitleSize(0.035);
   JUWVLEYFAQ->GetXaxis()->SetTitleFont(42);
   JUWVLEYFAQ->GetYaxis()->SetTitle("Entries");
   JUWVLEYFAQ->GetYaxis()->SetLabelFont(42);
   JUWVLEYFAQ->GetYaxis()->SetLabelSize(0.035);
   JUWVLEYFAQ->GetYaxis()->SetTitleSize(0.035);
   JUWVLEYFAQ->GetYaxis()->SetTitleFont(42);
   JUWVLEYFAQ->GetZaxis()->SetLabelFont(42);
   JUWVLEYFAQ->GetZaxis()->SetLabelSize(0.035);
   JUWVLEYFAQ->GetZaxis()->SetTitleSize(0.035);
   JUWVLEYFAQ->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(JUWVLEYFAQ,"");
   
   TH1F *BVIMJLHJAG = new TH1F("BVIMJLHJAG","NumberOfIsolatedLeptons",10,0,10);
   BVIMJLHJAG->SetBinContent(1,878.8586);
   BVIMJLHJAG->SetBinContent(2,1209.279);
   BVIMJLHJAG->SetBinContent(3,374.7066);
   BVIMJLHJAG->SetMinimum(0.1);
   BVIMJLHJAG->SetMaximum(2418.559);
   BVIMJLHJAG->SetEntries(723);
   BVIMJLHJAG->SetStats(0);
   BVIMJLHJAG->SetFillColor(3);
   BVIMJLHJAG->SetFillStyle(3001);
   BVIMJLHJAG->SetLineColor(3);
   BVIMJLHJAG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BVIMJLHJAG->GetXaxis()->SetLabelFont(42);
   BVIMJLHJAG->GetXaxis()->SetLabelSize(0.035);
   BVIMJLHJAG->GetXaxis()->SetTitleSize(0.035);
   BVIMJLHJAG->GetXaxis()->SetTitleFont(42);
   BVIMJLHJAG->GetYaxis()->SetTitle("Entries");
   BVIMJLHJAG->GetYaxis()->SetLabelFont(42);
   BVIMJLHJAG->GetYaxis()->SetLabelSize(0.035);
   BVIMJLHJAG->GetYaxis()->SetTitleSize(0.035);
   BVIMJLHJAG->GetYaxis()->SetTitleFont(42);
   BVIMJLHJAG->GetZaxis()->SetLabelFont(42);
   BVIMJLHJAG->GetZaxis()->SetLabelSize(0.035);
   BVIMJLHJAG->GetZaxis()->SetTitleSize(0.035);
   BVIMJLHJAG->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(BVIMJLHJAG,"");
   
   TH1F *SJTTBTFDMO = new TH1F("SJTTBTFDMO","NumberOfIsolatedLeptons",10,0,10);
   SJTTBTFDMO->SetBinContent(1,1034.078);
   SJTTBTFDMO->SetBinContent(2,274.3473);
   SJTTBTFDMO->SetBinContent(3,73.86272);
   SJTTBTFDMO->SetMinimum(0.1);
   SJTTBTFDMO->SetMaximum(2068.156);
   SJTTBTFDMO->SetEntries(131);
   SJTTBTFDMO->SetStats(0);

   ci = TColor::GetColor("#990033");
   SJTTBTFDMO->SetFillColor(ci);
   SJTTBTFDMO->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   SJTTBTFDMO->SetLineColor(ci);
   SJTTBTFDMO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SJTTBTFDMO->GetXaxis()->SetLabelFont(42);
   SJTTBTFDMO->GetXaxis()->SetLabelSize(0.035);
   SJTTBTFDMO->GetXaxis()->SetTitleSize(0.035);
   SJTTBTFDMO->GetXaxis()->SetTitleFont(42);
   SJTTBTFDMO->GetYaxis()->SetTitle("Entries");
   SJTTBTFDMO->GetYaxis()->SetLabelFont(42);
   SJTTBTFDMO->GetYaxis()->SetLabelSize(0.035);
   SJTTBTFDMO->GetYaxis()->SetTitleSize(0.035);
   SJTTBTFDMO->GetYaxis()->SetTitleFont(42);
   SJTTBTFDMO->GetZaxis()->SetLabelFont(42);
   SJTTBTFDMO->GetZaxis()->SetLabelSize(0.035);
   SJTTBTFDMO->GetZaxis()->SetTitleSize(0.035);
   SJTTBTFDMO->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(SJTTBTFDMO,"");
   
   TH1F *DJADRODVDG = new TH1F("DJADRODVDG","NumberOfIsolatedLeptons",10,0,10);
   DJADRODVDG->SetBinContent(1,1142.616);
   DJADRODVDG->SetBinContent(2,1306.297);
   DJADRODVDG->SetBinContent(3,393.4622);
   DJADRODVDG->SetBinContent(4,3.147697);
   DJADRODVDG->SetMinimum(0.1);
   DJADRODVDG->SetMaximum(2612.593);
   DJADRODVDG->SetEntries(904);
   DJADRODVDG->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   DJADRODVDG->SetFillColor(ci);
   DJADRODVDG->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   DJADRODVDG->SetLineColor(ci);
   DJADRODVDG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   DJADRODVDG->GetXaxis()->SetLabelFont(42);
   DJADRODVDG->GetXaxis()->SetLabelSize(0.035);
   DJADRODVDG->GetXaxis()->SetTitleSize(0.035);
   DJADRODVDG->GetXaxis()->SetTitleFont(42);
   DJADRODVDG->GetYaxis()->SetTitle("Entries");
   DJADRODVDG->GetYaxis()->SetLabelFont(42);
   DJADRODVDG->GetYaxis()->SetLabelSize(0.035);
   DJADRODVDG->GetYaxis()->SetTitleSize(0.035);
   DJADRODVDG->GetYaxis()->SetTitleFont(42);
   DJADRODVDG->GetZaxis()->SetLabelFont(42);
   DJADRODVDG->GetZaxis()->SetLabelSize(0.035);
   DJADRODVDG->GetZaxis()->SetTitleSize(0.035);
   DJADRODVDG->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(DJADRODVDG,"");
   
   TH1F *JUGZCPPVTB = new TH1F("JUGZCPPVTB","NumberOfIsolatedLeptons",10,0,10);
   JUGZCPPVTB->SetBinContent(1,479.3946);
   JUGZCPPVTB->SetBinContent(2,141.6393);
   JUGZCPPVTB->SetBinContent(3,32.686);
   JUGZCPPVTB->SetMinimum(0.1);
   JUGZCPPVTB->SetMaximum(958.7891);
   JUGZCPPVTB->SetEntries(60);
   JUGZCPPVTB->SetStats(0);

   ci = TColor::GetColor("#a42400");
   JUGZCPPVTB->SetFillColor(ci);
   JUGZCPPVTB->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   JUGZCPPVTB->SetLineColor(ci);
   JUGZCPPVTB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JUGZCPPVTB->GetXaxis()->SetLabelFont(42);
   JUGZCPPVTB->GetXaxis()->SetLabelSize(0.035);
   JUGZCPPVTB->GetXaxis()->SetTitleSize(0.035);
   JUGZCPPVTB->GetXaxis()->SetTitleFont(42);
   JUGZCPPVTB->GetYaxis()->SetTitle("Entries");
   JUGZCPPVTB->GetYaxis()->SetLabelFont(42);
   JUGZCPPVTB->GetYaxis()->SetLabelSize(0.035);
   JUGZCPPVTB->GetYaxis()->SetTitleSize(0.035);
   JUGZCPPVTB->GetYaxis()->SetTitleFont(42);
   JUGZCPPVTB->GetZaxis()->SetLabelFont(42);
   JUGZCPPVTB->GetZaxis()->SetLabelSize(0.035);
   JUGZCPPVTB->GetZaxis()->SetTitleSize(0.035);
   JUGZCPPVTB->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(JUGZCPPVTB,"");
   
   TH1F *BKBLEJNRAO = new TH1F("BKBLEJNRAO","NumberOfIsolatedLeptons",10,0,10);
   BKBLEJNRAO->SetBinContent(1,12699.44);
   BKBLEJNRAO->SetBinContent(2,4726.492);
   BKBLEJNRAO->SetBinContent(3,15.77287);
   BKBLEJNRAO->SetMinimum(0.1);
   BKBLEJNRAO->SetMaximum(25398.88);
   BKBLEJNRAO->SetEntries(63048);
   BKBLEJNRAO->SetStats(0);

   ci = TColor::GetColor("#001544");
   BKBLEJNRAO->SetFillColor(ci);
   BKBLEJNRAO->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   BKBLEJNRAO->SetLineColor(ci);
   BKBLEJNRAO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BKBLEJNRAO->GetXaxis()->SetLabelFont(42);
   BKBLEJNRAO->GetXaxis()->SetLabelSize(0.035);
   BKBLEJNRAO->GetXaxis()->SetTitleSize(0.035);
   BKBLEJNRAO->GetXaxis()->SetTitleFont(42);
   BKBLEJNRAO->GetYaxis()->SetTitle("Entries");
   BKBLEJNRAO->GetYaxis()->SetLabelFont(42);
   BKBLEJNRAO->GetYaxis()->SetLabelSize(0.035);
   BKBLEJNRAO->GetYaxis()->SetTitleSize(0.035);
   BKBLEJNRAO->GetYaxis()->SetTitleFont(42);
   BKBLEJNRAO->GetZaxis()->SetLabelFont(42);
   BKBLEJNRAO->GetZaxis()->SetLabelSize(0.035);
   BKBLEJNRAO->GetZaxis()->SetTitleSize(0.035);
   BKBLEJNRAO->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(BKBLEJNRAO,"");
   
   TH1F *AHTVITNCYF = new TH1F("AHTVITNCYF","NumberOfIsolatedLeptons",10,0,10);
   AHTVITNCYF->SetBinContent(1,55799.74);
   AHTVITNCYF->SetBinContent(2,547.4474);
   AHTVITNCYF->SetMinimum(0.1);
   AHTVITNCYF->SetMaximum(111599.5);
   AHTVITNCYF->SetEntries(63748);
   AHTVITNCYF->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   AHTVITNCYF->SetFillColor(ci);
   AHTVITNCYF->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   AHTVITNCYF->SetLineColor(ci);
   AHTVITNCYF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AHTVITNCYF->GetXaxis()->SetLabelFont(42);
   AHTVITNCYF->GetXaxis()->SetLabelSize(0.035);
   AHTVITNCYF->GetXaxis()->SetTitleSize(0.035);
   AHTVITNCYF->GetXaxis()->SetTitleFont(42);
   AHTVITNCYF->GetYaxis()->SetTitle("Entries");
   AHTVITNCYF->GetYaxis()->SetLabelFont(42);
   AHTVITNCYF->GetYaxis()->SetLabelSize(0.035);
   AHTVITNCYF->GetYaxis()->SetTitleSize(0.035);
   AHTVITNCYF->GetYaxis()->SetTitleFont(42);
   AHTVITNCYF->GetZaxis()->SetLabelFont(42);
   AHTVITNCYF->GetZaxis()->SetLabelSize(0.035);
   AHTVITNCYF->GetZaxis()->SetTitleSize(0.035);
   AHTVITNCYF->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(AHTVITNCYF,"");
   
   TH1F *GBTLVNKDDA = new TH1F("GBTLVNKDDA","NumberOfIsolatedLeptons",10,0,10);
   GBTLVNKDDA->SetBinContent(1,12782.63);
   GBTLVNKDDA->SetBinContent(2,4719.293);
   GBTLVNKDDA->SetBinContent(3,13.00569);
   GBTLVNKDDA->SetMinimum(0.1);
   GBTLVNKDDA->SetMaximum(25565.25);
   GBTLVNKDDA->SetEntries(63313);
   GBTLVNKDDA->SetStats(0);

   ci = TColor::GetColor("#620e00");
   GBTLVNKDDA->SetFillColor(ci);
   GBTLVNKDDA->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   GBTLVNKDDA->SetLineColor(ci);
   GBTLVNKDDA->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GBTLVNKDDA->GetXaxis()->SetLabelFont(42);
   GBTLVNKDDA->GetXaxis()->SetLabelSize(0.035);
   GBTLVNKDDA->GetXaxis()->SetTitleSize(0.035);
   GBTLVNKDDA->GetXaxis()->SetTitleFont(42);
   GBTLVNKDDA->GetYaxis()->SetTitle("Entries");
   GBTLVNKDDA->GetYaxis()->SetLabelFont(42);
   GBTLVNKDDA->GetYaxis()->SetLabelSize(0.035);
   GBTLVNKDDA->GetYaxis()->SetTitleSize(0.035);
   GBTLVNKDDA->GetYaxis()->SetTitleFont(42);
   GBTLVNKDDA->GetZaxis()->SetLabelFont(42);
   GBTLVNKDDA->GetZaxis()->SetLabelSize(0.035);
   GBTLVNKDDA->GetZaxis()->SetTitleSize(0.035);
   GBTLVNKDDA->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(GBTLVNKDDA,"");
   
   TH1F *KSIFXRJNZK = new TH1F("KSIFXRJNZK","NumberOfIsolatedLeptons",10,0,10);
   KSIFXRJNZK->SetBinContent(1,55732.39);
   KSIFXRJNZK->SetBinContent(2,519.6242);
   KSIFXRJNZK->SetBinContent(3,2.664756);
   KSIFXRJNZK->SetMinimum(0.1);
   KSIFXRJNZK->SetMaximum(111464.8);
   KSIFXRJNZK->SetEntries(63364);
   KSIFXRJNZK->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   KSIFXRJNZK->SetFillColor(ci);
   KSIFXRJNZK->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   KSIFXRJNZK->SetLineColor(ci);
   KSIFXRJNZK->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KSIFXRJNZK->GetXaxis()->SetLabelFont(42);
   KSIFXRJNZK->GetXaxis()->SetLabelSize(0.035);
   KSIFXRJNZK->GetXaxis()->SetTitleSize(0.035);
   KSIFXRJNZK->GetXaxis()->SetTitleFont(42);
   KSIFXRJNZK->GetYaxis()->SetTitle("Entries");
   KSIFXRJNZK->GetYaxis()->SetLabelFont(42);
   KSIFXRJNZK->GetYaxis()->SetLabelSize(0.035);
   KSIFXRJNZK->GetYaxis()->SetTitleSize(0.035);
   KSIFXRJNZK->GetYaxis()->SetTitleFont(42);
   KSIFXRJNZK->GetZaxis()->SetLabelFont(42);
   KSIFXRJNZK->GetZaxis()->SetLabelSize(0.035);
   KSIFXRJNZK->GetZaxis()->SetTitleSize(0.035);
   KSIFXRJNZK->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(KSIFXRJNZK,"");
   
   TH1F *GOFPVJYZEN = new TH1F("GOFPVJYZEN","NumberOfIsolatedLeptons",10,0,10);
   GOFPVJYZEN->SetBinContent(1,1637.606);
   GOFPVJYZEN->SetBinContent(2,1224.821);
   GOFPVJYZEN->SetBinContent(3,297.7461);
   GOFPVJYZEN->SetMinimum(0.1);
   GOFPVJYZEN->SetMaximum(3275.211);
   GOFPVJYZEN->SetEntries(467);
   GOFPVJYZEN->SetStats(0);
   GOFPVJYZEN->SetFillColor(4);
   GOFPVJYZEN->SetFillStyle(3001);
   GOFPVJYZEN->SetLineColor(4);
   GOFPVJYZEN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GOFPVJYZEN->GetXaxis()->SetLabelFont(42);
   GOFPVJYZEN->GetXaxis()->SetLabelSize(0.035);
   GOFPVJYZEN->GetXaxis()->SetTitleSize(0.035);
   GOFPVJYZEN->GetXaxis()->SetTitleFont(42);
   GOFPVJYZEN->GetYaxis()->SetTitle("Entries");
   GOFPVJYZEN->GetYaxis()->SetLabelFont(42);
   GOFPVJYZEN->GetYaxis()->SetLabelSize(0.035);
   GOFPVJYZEN->GetYaxis()->SetTitleSize(0.035);
   GOFPVJYZEN->GetYaxis()->SetTitleFont(42);
   GOFPVJYZEN->GetZaxis()->SetLabelFont(42);
   GOFPVJYZEN->GetZaxis()->SetLabelSize(0.035);
   GOFPVJYZEN->GetZaxis()->SetTitleSize(0.035);
   GOFPVJYZEN->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(GOFPVJYZEN,"");
   
   TH1F *GFSGGSZYCS = new TH1F("GFSGGSZYCS","NumberOfIsolatedLeptons",10,0,10);
   GFSGGSZYCS->SetBinContent(1,4041.566);
   GFSGGSZYCS->SetBinContent(2,1201.548);
   GFSGGSZYCS->SetBinContent(3,81.92376);
   GFSGGSZYCS->SetMinimum(0.1);
   GFSGGSZYCS->SetMaximum(8083.131);
   GFSGGSZYCS->SetEntries(195);
   GFSGGSZYCS->SetStats(0);

   ci = TColor::GetColor("#007db5");
   GFSGGSZYCS->SetFillColor(ci);
   GFSGGSZYCS->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   GFSGGSZYCS->SetLineColor(ci);
   GFSGGSZYCS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GFSGGSZYCS->GetXaxis()->SetLabelFont(42);
   GFSGGSZYCS->GetXaxis()->SetLabelSize(0.035);
   GFSGGSZYCS->GetXaxis()->SetTitleSize(0.035);
   GFSGGSZYCS->GetXaxis()->SetTitleFont(42);
   GFSGGSZYCS->GetYaxis()->SetTitle("Entries");
   GFSGGSZYCS->GetYaxis()->SetLabelFont(42);
   GFSGGSZYCS->GetYaxis()->SetLabelSize(0.035);
   GFSGGSZYCS->GetYaxis()->SetTitleSize(0.035);
   GFSGGSZYCS->GetYaxis()->SetTitleFont(42);
   GFSGGSZYCS->GetZaxis()->SetLabelFont(42);
   GFSGGSZYCS->GetZaxis()->SetLabelSize(0.035);
   GFSGGSZYCS->GetZaxis()->SetTitleSize(0.035);
   GFSGGSZYCS->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(GFSGGSZYCS,"");
   
   TH1F *JSCSHLJVWY = new TH1F("JSCSHLJVWY","NumberOfIsolatedLeptons",10,0,10);
   JSCSHLJVWY->SetBinContent(1,2397.92);
   JSCSHLJVWY->SetBinContent(2,1358.821);
   JSCSHLJVWY->SetBinContent(3,53.2871);
   JSCSHLJVWY->SetMinimum(0.1);
   JSCSHLJVWY->SetMaximum(4795.839);
   JSCSHLJVWY->SetEntries(143);
   JSCSHLJVWY->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   JSCSHLJVWY->SetFillColor(ci);
   JSCSHLJVWY->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   JSCSHLJVWY->SetLineColor(ci);
   JSCSHLJVWY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JSCSHLJVWY->GetXaxis()->SetLabelFont(42);
   JSCSHLJVWY->GetXaxis()->SetLabelSize(0.035);
   JSCSHLJVWY->GetXaxis()->SetTitleSize(0.035);
   JSCSHLJVWY->GetXaxis()->SetTitleFont(42);
   JSCSHLJVWY->GetYaxis()->SetTitle("Entries");
   JSCSHLJVWY->GetYaxis()->SetLabelFont(42);
   JSCSHLJVWY->GetYaxis()->SetLabelSize(0.035);
   JSCSHLJVWY->GetYaxis()->SetTitleSize(0.035);
   JSCSHLJVWY->GetYaxis()->SetTitleFont(42);
   JSCSHLJVWY->GetZaxis()->SetLabelFont(42);
   JSCSHLJVWY->GetZaxis()->SetLabelSize(0.035);
   JSCSHLJVWY->GetZaxis()->SetTitleSize(0.035);
   JSCSHLJVWY->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(JSCSHLJVWY,"");
   
   TH1F *BSWSOXIWZI = new TH1F("BSWSOXIWZI","NumberOfIsolatedLeptons",10,0,10);
   BSWSOXIWZI->SetBinContent(1,1672.956);
   BSWSOXIWZI->SetBinContent(2,772.1337);
   BSWSOXIWZI->SetMinimum(0.1);
   BSWSOXIWZI->SetMaximum(3345.913);
   BSWSOXIWZI->SetEntries(19);
   BSWSOXIWZI->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   BSWSOXIWZI->SetFillColor(ci);
   BSWSOXIWZI->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   BSWSOXIWZI->SetLineColor(ci);
   BSWSOXIWZI->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BSWSOXIWZI->GetXaxis()->SetLabelFont(42);
   BSWSOXIWZI->GetXaxis()->SetLabelSize(0.035);
   BSWSOXIWZI->GetXaxis()->SetTitleSize(0.035);
   BSWSOXIWZI->GetXaxis()->SetTitleFont(42);
   BSWSOXIWZI->GetYaxis()->SetTitle("Entries");
   BSWSOXIWZI->GetYaxis()->SetLabelFont(42);
   BSWSOXIWZI->GetYaxis()->SetLabelSize(0.035);
   BSWSOXIWZI->GetYaxis()->SetTitleSize(0.035);
   BSWSOXIWZI->GetYaxis()->SetTitleFont(42);
   BSWSOXIWZI->GetZaxis()->SetLabelFont(42);
   BSWSOXIWZI->GetZaxis()->SetLabelSize(0.035);
   BSWSOXIWZI->GetZaxis()->SetTitleSize(0.035);
   BSWSOXIWZI->GetZaxis()->SetTitleFont(42);
   VXPCTASVKV->Add(BSWSOXIWZI,"");
   VXPCTASVKV->Draw("");
   
   TPaveText *pt = new TPaveText(0.2737644,0.9339831,0.7262356,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("UXLBSCYONJ","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("FURKAUYLOS","ee_lnuqqqq","f");

   ci = TColor::GetColor("#000066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SKVSHOYLCY","ee_llqqqq","f");

   ci = TColor::GetColor("#d5ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HDKZOTIXUB","ee_qqqq","f");

   ci = TColor::GetColor("#ff0056");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("JHQWNIMVED","ee_nunuqq","f");

   ci = TColor::GetColor("#9e008e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MEWRTXCWTV","ee_lnuqq","f");

   ci = TColor::GetColor("#0e4ca1");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("IEKKDGWATX","ee_qqll","f");

   ci = TColor::GetColor("#ffe502");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("JUWVLEYFAQ","ee_qq","f");

   ci = TColor::GetColor("#006633");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BVIMJLHJAG","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SJTTBTFDMO","egamma_qqqqe_BS","f");

   ci = TColor::GetColor("#990033");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DJADRODVDG","gammae_qqqqe_EPA","f");

   ci = TColor::GetColor("#ff937e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("JUGZCPPVTB","gammae_qqqqe_BS","f");

   ci = TColor::GetColor("#a42400");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BKBLEJNRAO","egamma_qqqqnu_EPA","f");

   ci = TColor::GetColor("#001544");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AHTVITNCYF","egamma_qqqqnu_BS","f");

   ci = TColor::GetColor("#99cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GBTLVNKDDA","gammae_qqqqnu_EPA","f");

   ci = TColor::GetColor("#620e00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("KSIFXRJNZK","gammae_qqqqnu_BS","f");

   ci = TColor::GetColor("#6b6882");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GOFPVJYZEN","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GFSGGSZYCS","gammagamma_qqqq_EPA_BS","f");

   ci = TColor::GetColor("#007db5");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("JSCSHLJVWY","gammagamma_qqqq_BS_EPA","f");

   ci = TColor::GetColor("#6a826c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BSWSOXIWZI","gammagamma_qqqq_BS_BS","f");

   ci = TColor::GetColor("#00ae7e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   WLBGNALUYA->Modified();
   WLBGNALUYA->cd();
   WLBGNALUYA->SetSelected(WLBGNALUYA);
}
