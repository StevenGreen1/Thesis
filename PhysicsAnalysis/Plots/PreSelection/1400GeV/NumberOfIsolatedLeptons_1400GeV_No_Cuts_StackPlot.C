{
//=========Macro generated from canvas: RWSSVMYKOS/NumberOfIsolatedLeptons
//=========  (Mon Jan 23 16:04:49 2017) by ROOT version5.34/30
   TCanvas *RWSSVMYKOS = new TCanvas("RWSSVMYKOS", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   RWSSVMYKOS->SetHighLightColor(2);
   RWSSVMYKOS->Range(-1.25,-2.960602,11.25,9.36424);
   RWSSVMYKOS->SetFillColor(0);
   RWSSVMYKOS->SetBorderMode(0);
   RWSSVMYKOS->SetBorderSize(2);
   RWSSVMYKOS->SetLogy();
   RWSSVMYKOS->SetFrameBorderMode(0);
   RWSSVMYKOS->SetFrameBorderMode(0);
   RWSSVMYKOS->SetTopMargin(0.05);
   RWSSVMYKOS->SetRightMargin(0.05);
   RWSSVMYKOS->SetBottomMargin(0.125);
   
   THStack *HLAAMGXXTE = new THStack();
   HLAAMGXXTE->SetName("HLAAMGXXTE");
   HLAAMGXXTE->SetTitle("");
   HLAAMGXXTE->SetMinimum(1);
   
   TH1F *HLAAMGXXTE_stack_17 = new TH1F("HLAAMGXXTE_stack_17","NumberOfIsolatedLeptons",10,0,10);
   HLAAMGXXTE_stack_17->SetMinimum(0.01870174);
   HLAAMGXXTE_stack_17->SetMaximum(1.354427e+08);
   HLAAMGXXTE_stack_17->SetDirectory(0);
   HLAAMGXXTE_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HLAAMGXXTE_stack_17->SetLineColor(ci);
   HLAAMGXXTE_stack_17->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   HLAAMGXXTE_stack_17->GetXaxis()->SetLabelFont(42);
   HLAAMGXXTE_stack_17->GetXaxis()->SetLabelSize(0.05);
   HLAAMGXXTE_stack_17->GetXaxis()->SetTitleSize(0.05);
   HLAAMGXXTE_stack_17->GetXaxis()->SetTitleFont(42);
   HLAAMGXXTE_stack_17->GetYaxis()->SetTitle("Entries");
   HLAAMGXXTE_stack_17->GetYaxis()->SetLabelFont(42);
   HLAAMGXXTE_stack_17->GetYaxis()->SetLabelSize(0.05);
   HLAAMGXXTE_stack_17->GetYaxis()->SetTitleSize(0.05);
   HLAAMGXXTE_stack_17->GetYaxis()->SetTitleFont(42);
   HLAAMGXXTE_stack_17->GetZaxis()->SetLabelFont(42);
   HLAAMGXXTE_stack_17->GetZaxis()->SetLabelSize(0.035);
   HLAAMGXXTE_stack_17->GetZaxis()->SetTitleSize(0.035);
   HLAAMGXXTE_stack_17->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->SetHistogram(HLAAMGXXTE_stack_17);
   
   
   TH1F *YKMVPWGTOC = new TH1F("YKMVPWGTOC","NumberOfIsolatedLeptons",10,0,10);
   YKMVPWGTOC->SetBinContent(1,37330.74);
   YKMVPWGTOC->SetBinContent(2,113.153);
   YKMVPWGTOC->SetBinContent(3,0.1923961);
   YKMVPWGTOC->SetBinContent(4,0.01374258);
   YKMVPWGTOC->SetMinimum(0.1);
   YKMVPWGTOC->SetMaximum(74661.48);
   YKMVPWGTOC->SetEntries(2695997);
   YKMVPWGTOC->SetStats(0);
   YKMVPWGTOC->SetFillColor(1);
   YKMVPWGTOC->SetFillStyle(3001);
   YKMVPWGTOC->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   YKMVPWGTOC->GetXaxis()->SetLabelFont(42);
   YKMVPWGTOC->GetXaxis()->SetLabelSize(0.05);
   YKMVPWGTOC->GetXaxis()->SetTitleSize(0.05);
   YKMVPWGTOC->GetXaxis()->SetTitleFont(42);
   YKMVPWGTOC->GetYaxis()->SetTitle("Entries");
   YKMVPWGTOC->GetYaxis()->SetLabelFont(42);
   YKMVPWGTOC->GetYaxis()->SetLabelSize(0.05);
   YKMVPWGTOC->GetYaxis()->SetTitleSize(0.05);
   YKMVPWGTOC->GetYaxis()->SetTitleFont(42);
   YKMVPWGTOC->GetZaxis()->SetLabelFont(42);
   YKMVPWGTOC->GetZaxis()->SetLabelSize(0.035);
   YKMVPWGTOC->GetZaxis()->SetTitleSize(0.035);
   YKMVPWGTOC->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(YKMVPWGTOC,"");
   
   TH1F *WXGNCOGTGP = new TH1F("WXGNCOGTGP","NumberOfIsolatedLeptons",10,0,10);
   WXGNCOGTGP->SetBinContent(1,81026.34);
   WXGNCOGTGP->SetBinContent(2,84454);
   WXGNCOGTGP->SetBinContent(3,287.2777);
   WXGNCOGTGP->SetBinContent(4,0.4467754);
   WXGNCOGTGP->SetBinContent(5,0.2233877);
   WXGNCOGTGP->SetMinimum(0.1);
   WXGNCOGTGP->SetMaximum(168908);
   WXGNCOGTGP->SetEntries(741312);
   WXGNCOGTGP->SetStats(0);

   ci = TColor::GetColor(203,94,221);
   WXGNCOGTGP->SetFillColor(ci);
   WXGNCOGTGP->SetFillStyle(3001);

   ci = TColor::GetColor(203,94,221);
   WXGNCOGTGP->SetLineColor(ci);
   WXGNCOGTGP->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   WXGNCOGTGP->GetXaxis()->SetLabelFont(42);
   WXGNCOGTGP->GetXaxis()->SetLabelSize(0.05);
   WXGNCOGTGP->GetXaxis()->SetTitleSize(0.05);
   WXGNCOGTGP->GetXaxis()->SetTitleFont(42);
   WXGNCOGTGP->GetYaxis()->SetTitle("Entries");
   WXGNCOGTGP->GetYaxis()->SetLabelFont(42);
   WXGNCOGTGP->GetYaxis()->SetLabelSize(0.05);
   WXGNCOGTGP->GetYaxis()->SetTitleSize(0.05);
   WXGNCOGTGP->GetYaxis()->SetTitleFont(42);
   WXGNCOGTGP->GetZaxis()->SetLabelFont(42);
   WXGNCOGTGP->GetZaxis()->SetLabelSize(0.035);
   WXGNCOGTGP->GetZaxis()->SetTitleSize(0.035);
   WXGNCOGTGP->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(WXGNCOGTGP,"");
   
   TH1F *KAQXXJOVHW = new TH1F("KAQXXJOVHW","NumberOfIsolatedLeptons",10,0,10);
   KAQXXJOVHW->SetBinContent(1,52482.45);
   KAQXXJOVHW->SetBinContent(2,31786.18);
   KAQXXJOVHW->SetBinContent(3,9334.589);
   KAQXXJOVHW->SetBinContent(4,26.65456);
   KAQXXJOVHW->SetMinimum(0.1);
   KAQXXJOVHW->SetMaximum(104964.9);
   KAQXXJOVHW->SetEntries(1268584);
   KAQXXJOVHW->SetStats(0);

   ci = TColor::GetColor(100,218,92);
   KAQXXJOVHW->SetFillColor(ci);
   KAQXXJOVHW->SetFillStyle(3001);

   ci = TColor::GetColor(100,218,92);
   KAQXXJOVHW->SetLineColor(ci);
   KAQXXJOVHW->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   KAQXXJOVHW->GetXaxis()->SetLabelFont(42);
   KAQXXJOVHW->GetXaxis()->SetLabelSize(0.05);
   KAQXXJOVHW->GetXaxis()->SetTitleSize(0.05);
   KAQXXJOVHW->GetXaxis()->SetTitleFont(42);
   KAQXXJOVHW->GetYaxis()->SetTitle("Entries");
   KAQXXJOVHW->GetYaxis()->SetLabelFont(42);
   KAQXXJOVHW->GetYaxis()->SetLabelSize(0.05);
   KAQXXJOVHW->GetYaxis()->SetTitleSize(0.05);
   KAQXXJOVHW->GetYaxis()->SetTitleFont(42);
   KAQXXJOVHW->GetZaxis()->SetLabelFont(42);
   KAQXXJOVHW->GetZaxis()->SetLabelSize(0.035);
   KAQXXJOVHW->GetZaxis()->SetTitleSize(0.035);
   KAQXXJOVHW->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(KAQXXJOVHW,"");
   
   TH1F *BQCGYMDCYX = new TH1F("BQCGYMDCYX","NumberOfIsolatedLeptons",10,0,10);
   BQCGYMDCYX->SetBinContent(1,1877820);
   BQCGYMDCYX->SetBinContent(2,3233.71);
   BQCGYMDCYX->SetBinContent(3,3.192237);
   BQCGYMDCYX->SetMinimum(0.1);
   BQCGYMDCYX->SetMaximum(3755640);
   BQCGYMDCYX->SetEntries(585054);
   BQCGYMDCYX->SetStats(0);

   ci = TColor::GetColor(232,80,125);
   BQCGYMDCYX->SetFillColor(ci);
   BQCGYMDCYX->SetFillStyle(3001);

   ci = TColor::GetColor(232,80,125);
   BQCGYMDCYX->SetLineColor(ci);
   BQCGYMDCYX->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   BQCGYMDCYX->GetXaxis()->SetLabelFont(42);
   BQCGYMDCYX->GetXaxis()->SetLabelSize(0.05);
   BQCGYMDCYX->GetXaxis()->SetTitleSize(0.05);
   BQCGYMDCYX->GetXaxis()->SetTitleFont(42);
   BQCGYMDCYX->GetYaxis()->SetTitle("Entries");
   BQCGYMDCYX->GetYaxis()->SetLabelFont(42);
   BQCGYMDCYX->GetYaxis()->SetLabelSize(0.05);
   BQCGYMDCYX->GetYaxis()->SetTitleSize(0.05);
   BQCGYMDCYX->GetYaxis()->SetTitleFont(42);
   BQCGYMDCYX->GetZaxis()->SetLabelFont(42);
   BQCGYMDCYX->GetZaxis()->SetLabelSize(0.035);
   BQCGYMDCYX->GetZaxis()->SetTitleSize(0.035);
   BQCGYMDCYX->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(BQCGYMDCYX,"");
   
   TH1F *LRVSBNEOWX = new TH1F("LRVSBNEOWX","NumberOfIsolatedLeptons",10,0,10);
   LRVSBNEOWX->SetBinContent(1,1171885);
   LRVSBNEOWX->SetBinContent(2,2486.212);
   LRVSBNEOWX->SetMinimum(0.1);
   LRVSBNEOWX->SetMaximum(2343771);
   LRVSBNEOWX->SetEntries(583889);
   LRVSBNEOWX->SetStats(0);

   ci = TColor::GetColor(189,226,61);
   LRVSBNEOWX->SetFillColor(ci);
   LRVSBNEOWX->SetFillStyle(3001);

   ci = TColor::GetColor(189,226,61);
   LRVSBNEOWX->SetLineColor(ci);
   LRVSBNEOWX->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   LRVSBNEOWX->GetXaxis()->SetLabelFont(42);
   LRVSBNEOWX->GetXaxis()->SetLabelSize(0.05);
   LRVSBNEOWX->GetXaxis()->SetTitleSize(0.05);
   LRVSBNEOWX->GetXaxis()->SetTitleFont(42);
   LRVSBNEOWX->GetYaxis()->SetTitle("Entries");
   LRVSBNEOWX->GetYaxis()->SetLabelFont(42);
   LRVSBNEOWX->GetYaxis()->SetLabelSize(0.05);
   LRVSBNEOWX->GetYaxis()->SetTitleSize(0.05);
   LRVSBNEOWX->GetYaxis()->SetTitleFont(42);
   LRVSBNEOWX->GetZaxis()->SetLabelFont(42);
   LRVSBNEOWX->GetZaxis()->SetLabelSize(0.035);
   LRVSBNEOWX->GetZaxis()->SetTitleSize(0.035);
   LRVSBNEOWX->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(LRVSBNEOWX,"");
   
   TH1F *CHLLLAFXFR = new TH1F("CHLLLAFXFR","NumberOfIsolatedLeptons",10,0,10);
   CHLLLAFXFR->SetBinContent(1,4719632);
   CHLLLAFXFR->SetBinContent(2,1677956);
   CHLLLAFXFR->SetBinContent(3,2593.623);
   CHLLLAFXFR->SetMinimum(0.1);
   CHLLLAFXFR->SetMaximum(9439265);
   CHLLLAFXFR->SetEntries(2093473);
   CHLLLAFXFR->SetStats(0);

   ci = TColor::GetColor(127,141,224);
   CHLLLAFXFR->SetFillColor(ci);
   CHLLLAFXFR->SetFillStyle(3001);

   ci = TColor::GetColor(127,141,224);
   CHLLLAFXFR->SetLineColor(ci);
   CHLLLAFXFR->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   CHLLLAFXFR->GetXaxis()->SetLabelFont(42);
   CHLLLAFXFR->GetXaxis()->SetLabelSize(0.05);
   CHLLLAFXFR->GetXaxis()->SetTitleSize(0.05);
   CHLLLAFXFR->GetXaxis()->SetTitleFont(42);
   CHLLLAFXFR->GetYaxis()->SetTitle("Entries");
   CHLLLAFXFR->GetYaxis()->SetLabelFont(42);
   CHLLLAFXFR->GetYaxis()->SetLabelSize(0.05);
   CHLLLAFXFR->GetYaxis()->SetTitleSize(0.05);
   CHLLLAFXFR->GetYaxis()->SetTitleFont(42);
   CHLLLAFXFR->GetZaxis()->SetLabelFont(42);
   CHLLLAFXFR->GetZaxis()->SetLabelSize(0.035);
   CHLLLAFXFR->GetZaxis()->SetTitleSize(0.035);
   CHLLLAFXFR->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(CHLLLAFXFR,"");
   
   TH1F *UTIJYHJVLI = new TH1F("UTIJYHJVLI","NumberOfIsolatedLeptons",10,0,10);
   UTIJYHJVLI->SetBinContent(1,3495368);
   UTIJYHJVLI->SetBinContent(2,579476.4);
   UTIJYHJVLI->SetBinContent(3,72802.68);
   UTIJYHJVLI->SetBinContent(4,97.36631);
   UTIJYHJVLI->SetMinimum(0.1);
   UTIJYHJVLI->SetMaximum(6990736);
   UTIJYHJVLI->SetEntries(2099378);
   UTIJYHJVLI->SetStats(0);

   ci = TColor::GetColor(225,188,51);
   UTIJYHJVLI->SetFillColor(ci);
   UTIJYHJVLI->SetFillStyle(3001);

   ci = TColor::GetColor(225,188,51);
   UTIJYHJVLI->SetLineColor(ci);
   UTIJYHJVLI->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   UTIJYHJVLI->GetXaxis()->SetLabelFont(42);
   UTIJYHJVLI->GetXaxis()->SetLabelSize(0.05);
   UTIJYHJVLI->GetXaxis()->SetTitleSize(0.05);
   UTIJYHJVLI->GetXaxis()->SetTitleFont(42);
   UTIJYHJVLI->GetYaxis()->SetTitle("Entries");
   UTIJYHJVLI->GetYaxis()->SetLabelFont(42);
   UTIJYHJVLI->GetYaxis()->SetLabelSize(0.05);
   UTIJYHJVLI->GetYaxis()->SetTitleSize(0.05);
   UTIJYHJVLI->GetYaxis()->SetTitleFont(42);
   UTIJYHJVLI->GetZaxis()->SetLabelFont(42);
   UTIJYHJVLI->GetZaxis()->SetLabelSize(0.035);
   UTIJYHJVLI->GetZaxis()->SetTitleSize(0.035);
   UTIJYHJVLI->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(UTIJYHJVLI,"");
   
   TH1F *CZZQNZKSIN = new TH1F("CZZQNZKSIN","NumberOfIsolatedLeptons",10,0,10);
   CZZQNZKSIN->SetBinContent(1,6004987);
   CZZQNZKSIN->SetBinContent(2,8331.931);
   CZZQNZKSIN->SetBinContent(3,24.7239);
   CZZQNZKSIN->SetMinimum(0.1);
   CZZQNZKSIN->SetMaximum(1.200997e+07);
   CZZQNZKSIN->SetEntries(486219);
   CZZQNZKSIN->SetStats(0);

   ci = TColor::GetColor(209,128,193);
   CZZQNZKSIN->SetFillColor(ci);
   CZZQNZKSIN->SetFillStyle(3001);

   ci = TColor::GetColor(209,128,193);
   CZZQNZKSIN->SetLineColor(ci);
   CZZQNZKSIN->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   CZZQNZKSIN->GetXaxis()->SetLabelFont(42);
   CZZQNZKSIN->GetXaxis()->SetLabelSize(0.05);
   CZZQNZKSIN->GetXaxis()->SetTitleSize(0.05);
   CZZQNZKSIN->GetXaxis()->SetTitleFont(42);
   CZZQNZKSIN->GetYaxis()->SetTitle("Entries");
   CZZQNZKSIN->GetYaxis()->SetLabelFont(42);
   CZZQNZKSIN->GetYaxis()->SetLabelSize(0.05);
   CZZQNZKSIN->GetYaxis()->SetTitleSize(0.05);
   CZZQNZKSIN->GetYaxis()->SetTitleFont(42);
   CZZQNZKSIN->GetZaxis()->SetLabelFont(42);
   CZZQNZKSIN->GetZaxis()->SetLabelSize(0.035);
   CZZQNZKSIN->GetZaxis()->SetTitleSize(0.035);
   CZZQNZKSIN->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(CZZQNZKSIN,"");
   
   TH1F *ZGDJGCQCXE = new TH1F("ZGDJGCQCXE","NumberOfIsolatedLeptons",10,0,10);
   ZGDJGCQCXE->SetBinContent(1,274928.9);
   ZGDJGCQCXE->SetBinContent(2,134063.4);
   ZGDJGCQCXE->SetBinContent(3,21578.83);
   ZGDJGCQCXE->SetBinContent(4,51.09632);
   ZGDJGCQCXE->SetBinContent(5,3.406421);
   ZGDJGCQCXE->SetMinimum(0.1);
   ZGDJGCQCXE->SetMaximum(549857.8);
   ZGDJGCQCXE->SetEntries(126422);
   ZGDJGCQCXE->SetStats(0);
   ZGDJGCQCXE->SetFillColor(TColor::GetColor(113,161,55));
   ZGDJGCQCXE->SetFillStyle(3001);
   ZGDJGCQCXE->SetLineColor(TColor::GetColor(113,161,55));
   ZGDJGCQCXE->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   ZGDJGCQCXE->GetXaxis()->SetLabelFont(42);
   ZGDJGCQCXE->GetXaxis()->SetLabelSize(0.05);
   ZGDJGCQCXE->GetXaxis()->SetTitleSize(0.05);
   ZGDJGCQCXE->GetXaxis()->SetTitleFont(42);
   ZGDJGCQCXE->GetYaxis()->SetTitle("Entries");
   ZGDJGCQCXE->GetYaxis()->SetLabelFont(42);
   ZGDJGCQCXE->GetYaxis()->SetLabelSize(0.05);
   ZGDJGCQCXE->GetYaxis()->SetTitleSize(0.05);
   ZGDJGCQCXE->GetYaxis()->SetTitleFont(42);
   ZGDJGCQCXE->GetZaxis()->SetLabelFont(42);
   ZGDJGCQCXE->GetZaxis()->SetLabelSize(0.035);
   ZGDJGCQCXE->GetZaxis()->SetTitleSize(0.035);
   ZGDJGCQCXE->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(ZGDJGCQCXE,"");
   
   TH1F *VTEGUHTFGK = new TH1F("VTEGUHTFGK","NumberOfIsolatedLeptons",10,0,10);
   VTEGUHTFGK->SetBinContent(1,1128902);
   VTEGUHTFGK->SetBinContent(2,175851.5);
   VTEGUHTFGK->SetBinContent(3,1361.183);
   VTEGUHTFGK->SetBinContent(4,10.55182);
   VTEGUHTFGK->SetMinimum(0.1);
   VTEGUHTFGK->SetMaximum(2257804);
   VTEGUHTFGK->SetEntries(123749);
   VTEGUHTFGK->SetStats(0);

   ci = TColor::GetColor(208,214,112);
   VTEGUHTFGK->SetFillColor(ci);
   VTEGUHTFGK->SetFillStyle(3001);

   ci = TColor::GetColor(208,214,112);
   VTEGUHTFGK->SetLineColor(ci);
   VTEGUHTFGK->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   VTEGUHTFGK->GetXaxis()->SetLabelFont(42);
   VTEGUHTFGK->GetXaxis()->SetLabelSize(0.05);
   VTEGUHTFGK->GetXaxis()->SetTitleSize(0.05);
   VTEGUHTFGK->GetXaxis()->SetTitleFont(42);
   VTEGUHTFGK->GetYaxis()->SetTitle("Entries");
   VTEGUHTFGK->GetYaxis()->SetLabelFont(42);
   VTEGUHTFGK->GetYaxis()->SetLabelSize(0.05);
   VTEGUHTFGK->GetYaxis()->SetTitleSize(0.05);
   VTEGUHTFGK->GetYaxis()->SetTitleFont(42);
   VTEGUHTFGK->GetZaxis()->SetLabelFont(42);
   VTEGUHTFGK->GetZaxis()->SetLabelSize(0.035);
   VTEGUHTFGK->GetZaxis()->SetTitleSize(0.035);
   VTEGUHTFGK->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(VTEGUHTFGK,"");
   
   TH1F *SHCTCDAIZJ = new TH1F("SHCTCDAIZJ","NumberOfIsolatedLeptons",10,0,10);
   SHCTCDAIZJ->SetBinContent(1,273504.3);
   SHCTCDAIZJ->SetBinContent(2,135116.1);
   SHCTCDAIZJ->SetBinContent(3,21442.39);
   SHCTCDAIZJ->SetBinContent(4,59.80625);
   SHCTCDAIZJ->SetMinimum(0.1);
   SHCTCDAIZJ->SetMaximum(547008.6);
   SHCTCDAIZJ->SetEntries(136717);
   SHCTCDAIZJ->SetStats(0);

   ci = TColor::GetColor(105,174,204);
   SHCTCDAIZJ->SetFillColor(ci);
   SHCTCDAIZJ->SetFillStyle(3001);

   ci = TColor::GetColor(105,174,204);
   SHCTCDAIZJ->SetLineColor(ci);
   SHCTCDAIZJ->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   SHCTCDAIZJ->GetXaxis()->SetLabelFont(42);
   SHCTCDAIZJ->GetXaxis()->SetLabelSize(0.05);
   SHCTCDAIZJ->GetXaxis()->SetTitleSize(0.05);
   SHCTCDAIZJ->GetXaxis()->SetTitleFont(42);
   SHCTCDAIZJ->GetYaxis()->SetTitle("Entries");
   SHCTCDAIZJ->GetYaxis()->SetLabelFont(42);
   SHCTCDAIZJ->GetYaxis()->SetLabelSize(0.05);
   SHCTCDAIZJ->GetYaxis()->SetTitleSize(0.05);
   SHCTCDAIZJ->GetYaxis()->SetTitleFont(42);
   SHCTCDAIZJ->GetZaxis()->SetLabelFont(42);
   SHCTCDAIZJ->GetZaxis()->SetLabelSize(0.035);
   SHCTCDAIZJ->GetZaxis()->SetTitleSize(0.035);
   SHCTCDAIZJ->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(SHCTCDAIZJ,"");
   
   TH1F *MWRGMHMGHZ = new TH1F("MWRGMHMGHZ","NumberOfIsolatedLeptons",10,0,10);
   MWRGMHMGHZ->SetBinContent(1,1124489);
   MWRGMHMGHZ->SetBinContent(2,174038.7);
   MWRGMHMGHZ->SetBinContent(3,1383.709);
   MWRGMHMGHZ->SetBinContent(4,10.89533);
   MWRGMHMGHZ->SetMinimum(0.1);
   MWRGMHMGHZ->SetMaximum(2248977);
   MWRGMHMGHZ->SetEntries(119393);
   MWRGMHMGHZ->SetStats(0);

   ci = TColor::GetColor(233,104,50);
   MWRGMHMGHZ->SetFillColor(ci);
   MWRGMHMGHZ->SetFillStyle(3001);

   ci = TColor::GetColor(233,104,50);
   MWRGMHMGHZ->SetLineColor(ci);
   MWRGMHMGHZ->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   MWRGMHMGHZ->GetXaxis()->SetLabelFont(42);
   MWRGMHMGHZ->GetXaxis()->SetLabelSize(0.05);
   MWRGMHMGHZ->GetXaxis()->SetTitleSize(0.05);
   MWRGMHMGHZ->GetXaxis()->SetTitleFont(42);
   MWRGMHMGHZ->GetYaxis()->SetTitle("Entries");
   MWRGMHMGHZ->GetYaxis()->SetLabelFont(42);
   MWRGMHMGHZ->GetYaxis()->SetLabelSize(0.05);
   MWRGMHMGHZ->GetYaxis()->SetTitleSize(0.05);
   MWRGMHMGHZ->GetYaxis()->SetTitleFont(42);
   MWRGMHMGHZ->GetZaxis()->SetLabelFont(42);
   MWRGMHMGHZ->GetZaxis()->SetLabelSize(0.035);
   MWRGMHMGHZ->GetZaxis()->SetTitleSize(0.035);
   MWRGMHMGHZ->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(MWRGMHMGHZ,"");
   
   TH1F *DEMLHVKHZF = new TH1F("DEMLHVKHZF","NumberOfIsolatedLeptons",10,0,10);
   DEMLHVKHZF->SetBinContent(1,36060.67);
   DEMLHVKHZF->SetBinContent(2,12822.15);
   DEMLHVKHZF->SetBinContent(3,42.06098);
   DEMLHVKHZF->SetMinimum(0.1);
   DEMLHVKHZF->SetMaximum(72121.34);
   DEMLHVKHZF->SetEntries(176693);
   DEMLHVKHZF->SetStats(0);

   ci = TColor::GetColor(99,224,195);
   DEMLHVKHZF->SetFillColor(ci);
   DEMLHVKHZF->SetFillStyle(3001);

   ci = TColor::GetColor(99,224,195);
   DEMLHVKHZF->SetLineColor(ci);
   DEMLHVKHZF->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   DEMLHVKHZF->GetXaxis()->SetLabelFont(42);
   DEMLHVKHZF->GetXaxis()->SetLabelSize(0.05);
   DEMLHVKHZF->GetXaxis()->SetTitleSize(0.05);
   DEMLHVKHZF->GetXaxis()->SetTitleFont(42);
   DEMLHVKHZF->GetYaxis()->SetTitle("Entries");
   DEMLHVKHZF->GetYaxis()->SetLabelFont(42);
   DEMLHVKHZF->GetYaxis()->SetLabelSize(0.05);
   DEMLHVKHZF->GetYaxis()->SetTitleSize(0.05);
   DEMLHVKHZF->GetYaxis()->SetTitleFont(42);
   DEMLHVKHZF->GetZaxis()->SetLabelFont(42);
   DEMLHVKHZF->GetZaxis()->SetLabelSize(0.035);
   DEMLHVKHZF->GetZaxis()->SetTitleSize(0.035);
   DEMLHVKHZF->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(DEMLHVKHZF,"");
   
   TH1F *HRJIGGWROH = new TH1F("HRJIGGWROH","NumberOfIsolatedLeptons",10,0,10);
   HRJIGGWROH->SetBinContent(1,152506.5);
   HRJIGGWROH->SetBinContent(2,1467.223);
   HRJIGGWROH->SetBinContent(3,5.306476);
   HRJIGGWROH->SetMinimum(0.1);
   HRJIGGWROH->SetMaximum(305013.1);
   HRJIGGWROH->SetEntries(174125);
   HRJIGGWROH->SetStats(0);

   ci = TColor::GetColor(212,127,110);
   HRJIGGWROH->SetFillColor(ci);
   HRJIGGWROH->SetFillStyle(3001);

   ci = TColor::GetColor(212,127,110);
   HRJIGGWROH->SetLineColor(ci);
   HRJIGGWROH->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   HRJIGGWROH->GetXaxis()->SetLabelFont(42);
   HRJIGGWROH->GetXaxis()->SetLabelSize(0.05);
   HRJIGGWROH->GetXaxis()->SetTitleSize(0.05);
   HRJIGGWROH->GetXaxis()->SetTitleFont(42);
   HRJIGGWROH->GetYaxis()->SetTitle("Entries");
   HRJIGGWROH->GetYaxis()->SetLabelFont(42);
   HRJIGGWROH->GetYaxis()->SetLabelSize(0.05);
   HRJIGGWROH->GetYaxis()->SetTitleSize(0.05);
   HRJIGGWROH->GetYaxis()->SetTitleFont(42);
   HRJIGGWROH->GetZaxis()->SetLabelFont(42);
   HRJIGGWROH->GetZaxis()->SetLabelSize(0.035);
   HRJIGGWROH->GetZaxis()->SetTitleSize(0.035);
   HRJIGGWROH->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(HRJIGGWROH,"");
   
   TH1F *VHYAMYVHDN = new TH1F("VHYAMYVHDN","NumberOfIsolatedLeptons",10,0,10);
   VHYAMYVHDN->SetBinContent(1,36070.1);
   VHYAMYVHDN->SetBinContent(2,12818);
   VHYAMYVHDN->SetBinContent(3,36.2499);
   VHYAMYVHDN->SetMinimum(0.1);
   VHYAMYVHDN->SetMaximum(72140.2);
   VHYAMYVHDN->SetEntries(176691);
   VHYAMYVHDN->SetStats(0);

   ci = TColor::GetColor("#620e00");
   VHYAMYVHDN->SetFillColor(ci);
   VHYAMYVHDN->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   VHYAMYVHDN->SetLineColor(ci);
   VHYAMYVHDN->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   VHYAMYVHDN->GetXaxis()->SetLabelFont(42);
   VHYAMYVHDN->GetXaxis()->SetLabelSize(0.05);
   VHYAMYVHDN->GetXaxis()->SetTitleSize(0.05);
   VHYAMYVHDN->GetXaxis()->SetTitleFont(42);
   VHYAMYVHDN->GetYaxis()->SetTitle("Entries");
   VHYAMYVHDN->GetYaxis()->SetLabelFont(42);
   VHYAMYVHDN->GetYaxis()->SetLabelSize(0.05);
   VHYAMYVHDN->GetYaxis()->SetTitleSize(0.05);
   VHYAMYVHDN->GetYaxis()->SetTitleFont(42);
   VHYAMYVHDN->GetZaxis()->SetLabelFont(42);
   VHYAMYVHDN->GetZaxis()->SetLabelSize(0.035);
   VHYAMYVHDN->GetZaxis()->SetTitleSize(0.035);
   VHYAMYVHDN->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(VHYAMYVHDN,"");
   
   TH1F *EGGJYRCWKE = new TH1F("EGGJYRCWKE","NumberOfIsolatedLeptons",10,0,10);
   EGGJYRCWKE->SetBinContent(1,152234.7);
   EGGJYRCWKE->SetBinContent(2,1378.581);
   EGGJYRCWKE->SetBinContent(3,6.217765);
   EGGJYRCWKE->SetMinimum(0.1);
   EGGJYRCWKE->SetMaximum(304469.5);
   EGGJYRCWKE->SetEntries(172737);
   EGGJYRCWKE->SetStats(0);

   ci = TColor::GetColor(192,160,184);
   EGGJYRCWKE->SetFillColor(ci);
   EGGJYRCWKE->SetFillStyle(3001);

   ci = TColor::GetColor(192,160,184);
   EGGJYRCWKE->SetLineColor(ci);
   EGGJYRCWKE->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   EGGJYRCWKE->GetXaxis()->SetLabelFont(42);
   EGGJYRCWKE->GetXaxis()->SetLabelSize(0.05);
   EGGJYRCWKE->GetXaxis()->SetTitleSize(0.05);
   EGGJYRCWKE->GetXaxis()->SetTitleFont(42);
   EGGJYRCWKE->GetYaxis()->SetTitle("Entries");
   EGGJYRCWKE->GetYaxis()->SetLabelFont(42);
   EGGJYRCWKE->GetYaxis()->SetLabelSize(0.05);
   EGGJYRCWKE->GetYaxis()->SetTitleSize(0.05);
   EGGJYRCWKE->GetYaxis()->SetTitleFont(42);
   EGGJYRCWKE->GetZaxis()->SetLabelFont(42);
   EGGJYRCWKE->GetZaxis()->SetLabelSize(0.035);
   EGGJYRCWKE->GetZaxis()->SetTitleSize(0.035);
   EGGJYRCWKE->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(EGGJYRCWKE,"");
   
   TH1F *RRQHYZATTP = new TH1F("RRQHYZATTP","NumberOfIsolatedLeptons",10,0,10);
   RRQHYZATTP->SetBinContent(1,858720);
   RRQHYZATTP->SetBinContent(2,245403.6);
   RRQHYZATTP->SetBinContent(3,24909.57);
   RRQHYZATTP->SetBinContent(4,60.90261);
   RRQHYZATTP->SetMinimum(0.1);
   RRQHYZATTP->SetMaximum(1717440);
   RRQHYZATTP->SetEntries(166909);
   RRQHYZATTP->SetStats(0);
   RRQHYZATTP->SetFillColor(TColor::GetColor(113,161,55));
   RRQHYZATTP->SetFillStyle(3001);
   RRQHYZATTP->SetLineColor(TColor::GetColor(113,161,55));
   RRQHYZATTP->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   RRQHYZATTP->GetXaxis()->SetLabelFont(42);
   RRQHYZATTP->GetXaxis()->SetLabelSize(0.05);
   RRQHYZATTP->GetXaxis()->SetTitleSize(0.05);
   RRQHYZATTP->GetXaxis()->SetTitleFont(42);
   RRQHYZATTP->GetYaxis()->SetTitle("Entries");
   RRQHYZATTP->GetYaxis()->SetLabelFont(42);
   RRQHYZATTP->GetYaxis()->SetLabelSize(0.05);
   RRQHYZATTP->GetYaxis()->SetTitleSize(0.05);
   RRQHYZATTP->GetYaxis()->SetTitleFont(42);
   RRQHYZATTP->GetZaxis()->SetLabelFont(42);
   RRQHYZATTP->GetZaxis()->SetLabelSize(0.035);
   RRQHYZATTP->GetZaxis()->SetTitleSize(0.035);
   RRQHYZATTP->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(RRQHYZATTP,"");
   
   TH1F *IRUYSMKQBM = new TH1F("IRUYSMKQBM","NumberOfIsolatedLeptons",10,0,10);
   IRUYSMKQBM->SetBinContent(1,3896369);
   IRUYSMKQBM->SetBinContent(2,631163.2);
   IRUYSMKQBM->SetBinContent(3,5789.284);
   IRUYSMKQBM->SetMinimum(0.1);
   IRUYSMKQBM->SetMaximum(7792738);
   IRUYSMKQBM->SetEntries(166221);
   IRUYSMKQBM->SetStats(0);

   ci = TColor::GetColor(189,146,63);
   IRUYSMKQBM->SetFillColor(ci);
   IRUYSMKQBM->SetFillStyle(3001);

   ci = TColor::GetColor(189,146,63);
   IRUYSMKQBM->SetLineColor(ci);
   IRUYSMKQBM->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   IRUYSMKQBM->GetXaxis()->SetLabelFont(42);
   IRUYSMKQBM->GetXaxis()->SetLabelSize(0.05);
   IRUYSMKQBM->GetXaxis()->SetTitleSize(0.05);
   IRUYSMKQBM->GetXaxis()->SetTitleFont(42);
   IRUYSMKQBM->GetYaxis()->SetTitle("Entries");
   IRUYSMKQBM->GetYaxis()->SetLabelFont(42);
   IRUYSMKQBM->GetYaxis()->SetLabelSize(0.05);
   IRUYSMKQBM->GetYaxis()->SetTitleSize(0.05);
   IRUYSMKQBM->GetYaxis()->SetTitleFont(42);
   IRUYSMKQBM->GetZaxis()->SetLabelFont(42);
   IRUYSMKQBM->GetZaxis()->SetLabelSize(0.035);
   IRUYSMKQBM->GetZaxis()->SetTitleSize(0.035);
   IRUYSMKQBM->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(IRUYSMKQBM,"");
   
   TH1F *OWMFDKJGZA = new TH1F("OWMFDKJGZA","NumberOfIsolatedLeptons",10,0,10);
   OWMFDKJGZA->SetBinContent(1,3893798);
   OWMFDKJGZA->SetBinContent(2,628046.8);
   OWMFDKJGZA->SetBinContent(3,5328.71);
   OWMFDKJGZA->SetMinimum(0.1);
   OWMFDKJGZA->SetMaximum(7787596);
   OWMFDKJGZA->SetEntries(169684);
   OWMFDKJGZA->SetStats(0);

   ci = TColor::GetColor(184,212,203);
   OWMFDKJGZA->SetFillColor(ci);
   OWMFDKJGZA->SetFillStyle(3001);

   ci = TColor::GetColor(184,212,203);
   OWMFDKJGZA->SetLineColor(ci);
   OWMFDKJGZA->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   OWMFDKJGZA->GetXaxis()->SetLabelFont(42);
   OWMFDKJGZA->GetXaxis()->SetLabelSize(0.05);
   OWMFDKJGZA->GetXaxis()->SetTitleSize(0.05);
   OWMFDKJGZA->GetXaxis()->SetTitleFont(42);
   OWMFDKJGZA->GetYaxis()->SetTitle("Entries");
   OWMFDKJGZA->GetYaxis()->SetLabelFont(42);
   OWMFDKJGZA->GetYaxis()->SetLabelSize(0.05);
   OWMFDKJGZA->GetYaxis()->SetTitleSize(0.05);
   OWMFDKJGZA->GetYaxis()->SetTitleFont(42);
   OWMFDKJGZA->GetZaxis()->SetLabelFont(42);
   OWMFDKJGZA->GetZaxis()->SetLabelSize(0.035);
   OWMFDKJGZA->GetZaxis()->SetTitleSize(0.035);
   OWMFDKJGZA->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(OWMFDKJGZA,"");
   
   TH1F *ANJYFPMVTD = new TH1F("ANJYFPMVTD","NumberOfIsolatedLeptons",10,0,10);
   ANJYFPMVTD->SetBinContent(1,2.018451e+07);
   ANJYFPMVTD->SetBinContent(2,360196.7);
   ANJYFPMVTD->SetBinContent(3,2445.09);
   ANJYFPMVTD->SetMinimum(0.1);
   ANJYFPMVTD->SetMaximum(4.036902e+07);
   ANJYFPMVTD->SetEntries(159687);
   ANJYFPMVTD->SetStats(0);

   ci = TColor::GetColor(92,161,114);
   ANJYFPMVTD->SetFillColor(ci);
   ANJYFPMVTD->SetFillStyle(3001);

   ci = TColor::GetColor(92,161,114);
   ANJYFPMVTD->SetLineColor(ci);
   ANJYFPMVTD->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   ANJYFPMVTD->GetXaxis()->SetLabelFont(42);
   ANJYFPMVTD->GetXaxis()->SetLabelSize(0.05);
   ANJYFPMVTD->GetXaxis()->SetTitleSize(0.05);
   ANJYFPMVTD->GetXaxis()->SetTitleFont(42);
   ANJYFPMVTD->GetYaxis()->SetTitle("Entries");
   ANJYFPMVTD->GetYaxis()->SetLabelFont(42);
   ANJYFPMVTD->GetYaxis()->SetLabelSize(0.05);
   ANJYFPMVTD->GetYaxis()->SetTitleSize(0.05);
   ANJYFPMVTD->GetYaxis()->SetTitleFont(42);
   ANJYFPMVTD->GetZaxis()->SetLabelFont(42);
   ANJYFPMVTD->GetZaxis()->SetLabelSize(0.035);
   ANJYFPMVTD->GetZaxis()->SetTitleSize(0.035);
   ANJYFPMVTD->GetZaxis()->SetTitleFont(42);
   HLAAMGXXTE->Add(ANJYFPMVTD,"");
   HLAAMGXXTE->Draw("");

   HLAAMGXXTE->GetXaxis()->SetRangeUser(0,5);
   
   TPaveText *pt = new TPaveText(0.2737644,0.9339831,0.7262356,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.1,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","","");
   entry=leg->AddEntry("YKMVPWGTOC","e^{+}e^{-} #rightarrow #nu #nu qqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("WXGNCOGTGP","e^{+}e^{-} #rightarrow l #nu qqqq","f");

   ci = TColor::GetColor(203,94,221);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(203,94,221);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("KAQXXJOVHW","e^{+}e^{-} #rightarrow llqqqq","f");

   ci = TColor::GetColor(100,218,92);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(100,218,92);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BQCGYMDCYX","e^{+}e^{-} #rightarrow qqqq","f");

   ci = TColor::GetColor(232,80,125);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(232,80,125);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("LRVSBNEOWX","e^{+}e^{-} #rightarrow #nu #nu qq","f");

   ci = TColor::GetColor(189,226,61);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(189,226,61);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CHLLLAFXFR","e^{+}e^{-} #rightarrow l #nu qq","f");

   ci = TColor::GetColor(127,141,224);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(127,141,224);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("UTIJYHJVLI","e^{+}e^{-} #rightarrow qqll","f");

   ci = TColor::GetColor(225,188,51);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(225,188,51);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CZZQNZKSIN","e^{+}e^{-} #rightarrow qq","f");

   ci = TColor::GetColor(209,128,193);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(209,128,193);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZGDJGCQCXE","#gamma_{EPA} e^{-} #rightarrow qqqq e^{-}","f");
   entry->SetFillColor(TColor::GetColor(113,161,55));
   entry->SetFillStyle(3001);
   entry->SetLineColor(TColor::GetColor(113,161,55));
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VTEGUHTFGK","#gamma_{BS} e^{-} #rightarrow qqqq e^{-}","f");

   ci = TColor::GetColor(208,214,112);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(208,214,112);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SHCTCDAIZJ","e^{+} #gamma_{EPA} #rightarrow qqqq e^{+}","f");

   ci = TColor::GetColor(105,174,204);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(105,174,204);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MWRGMHMGHZ","e^{+} #gamma_{BS} #rightarrow qqqq e^{+}","f");

   ci = TColor::GetColor(233,104,50);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(233,104,50);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DEMLHVKHZF","#gamma_{EPA} e^{-} #rightarrow qqqq #nu","f");

   ci = TColor::GetColor(99,224,195);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(99,224,195);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HRJIGGWROH","#gamma_{BS} e^{-} #rightarrow qqqq #nu","f");

   ci = TColor::GetColor(212,127,110);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(212,127,110);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VHYAMYVHDN","e^{+} #gamma_{EPA} #rightarrow qqqq #nu","f");

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
   entry=leg->AddEntry("EGGJYRCWKE","e^{+} #gamma_{BS} #rightarrow qqqq #nu","f");

   ci = TColor::GetColor(192,160,184);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(192,160,184);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RRQHYZATTP","#gamma_{EPA}#gamma_{EPA} #rightarrow qqqq","f");
   entry->SetFillColor(TColor::GetColor(113,161,55));
   entry->SetFillStyle(3001);
   entry->SetLineColor(TColor::GetColor(113,161,55));
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("IRUYSMKQBM","#gamma_{EPA}#gamma_{BS} #rightarrow qqqq","f");

   ci = TColor::GetColor(189,146,63);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(189,146,63);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("OWMFDKJGZA","#gamma_{BS}#gamma_{EPA} #rightarrow qqqq","f");

   ci = TColor::GetColor(184,212,203);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(184,212,203);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ANJYFPMVTD","#gamma_{BS}#gamma_{BS} #rightarrow qqqq","f");
   entry=leg->AddEntry("","","");

   ci = TColor::GetColor(92,161,114);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor(92,161,114);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   //leg->Draw();
   RWSSVMYKOS->Modified();
   RWSSVMYKOS->cd();
   RWSSVMYKOS->SetSelected(RWSSVMYKOS);
   RWSSVMYKOS->SaveAs("NumberOfIsolatedLeptons.pdf");
}
