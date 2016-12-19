{
//=========Macro generated from canvas: QKZIZKXKUH/HighestEnergyIsolatedLeptonTransverseMomentum
//=========  (Wed Sep 28 10:50:39 2016) by ROOT version5.34/30
   TCanvas *QKZIZKXKUH = new TCanvas("QKZIZKXKUH", "HighestEnergyIsolatedLeptonTransverseMomentum",0,0,700,500);
   gStyle->SetOptStat(0);
   QKZIZKXKUH->SetHighLightColor(2);
   QKZIZKXKUH->Range(0,0,1,1);
   QKZIZKXKUH->SetFillColor(0);
   QKZIZKXKUH->SetBorderMode(0);
   QKZIZKXKUH->SetBorderSize(2);
   QKZIZKXKUH->SetLogy();
   QKZIZKXKUH->SetFrameBorderMode(0);
   QKZIZKXKUH->SetFrameBorderMode(0);
   
   THStack *FCVMHFSLZA = new THStack();
   FCVMHFSLZA->SetName("FCVMHFSLZA");
   FCVMHFSLZA->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   FCVMHFSLZA->SetMinimum(0.1);
   
   TH1F *FCVMHFSLZA_stack_32 = new TH1F("FCVMHFSLZA_stack_32","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   FCVMHFSLZA_stack_32->SetMinimum(-0);
   FCVMHFSLZA_stack_32->SetMaximum(-nan);
   FCVMHFSLZA_stack_32->SetDirectory(0);
   FCVMHFSLZA_stack_32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   FCVMHFSLZA_stack_32->SetLineColor(ci);
   FCVMHFSLZA_stack_32->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   FCVMHFSLZA_stack_32->GetXaxis()->SetLabelFont(42);
   FCVMHFSLZA_stack_32->GetXaxis()->SetLabelSize(0.035);
   FCVMHFSLZA_stack_32->GetXaxis()->SetTitleSize(0.035);
   FCVMHFSLZA_stack_32->GetXaxis()->SetTitleFont(42);
   FCVMHFSLZA_stack_32->GetYaxis()->SetTitle("Entries");
   FCVMHFSLZA_stack_32->GetYaxis()->SetLabelFont(42);
   FCVMHFSLZA_stack_32->GetYaxis()->SetLabelSize(0.035);
   FCVMHFSLZA_stack_32->GetYaxis()->SetTitleSize(0.035);
   FCVMHFSLZA_stack_32->GetYaxis()->SetTitleFont(42);
   FCVMHFSLZA_stack_32->GetZaxis()->SetLabelFont(42);
   FCVMHFSLZA_stack_32->GetZaxis()->SetLabelSize(0.035);
   FCVMHFSLZA_stack_32->GetZaxis()->SetTitleSize(0.035);
   FCVMHFSLZA_stack_32->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->SetHistogram(FCVMHFSLZA_stack_32);
   
   
   TH1F *RLOJDCHQOK = new TH1F("RLOJDCHQOK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   RLOJDCHQOK->SetBinContent(701,17903.56);
   RLOJDCHQOK->SetMinimum(0.1);
   RLOJDCHQOK->SetMaximum(0);
   RLOJDCHQOK->SetEntries(825376);
   RLOJDCHQOK->SetStats(0);
   RLOJDCHQOK->SetFillColor(1);
   RLOJDCHQOK->SetFillStyle(3001);
   RLOJDCHQOK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   RLOJDCHQOK->GetXaxis()->SetLabelFont(42);
   RLOJDCHQOK->GetXaxis()->SetLabelSize(0.035);
   RLOJDCHQOK->GetXaxis()->SetTitleSize(0.035);
   RLOJDCHQOK->GetXaxis()->SetTitleFont(42);
   RLOJDCHQOK->GetYaxis()->SetTitle("Entries");
   RLOJDCHQOK->GetYaxis()->SetLabelFont(42);
   RLOJDCHQOK->GetYaxis()->SetLabelSize(0.035);
   RLOJDCHQOK->GetYaxis()->SetTitleSize(0.035);
   RLOJDCHQOK->GetYaxis()->SetTitleFont(42);
   RLOJDCHQOK->GetZaxis()->SetLabelFont(42);
   RLOJDCHQOK->GetZaxis()->SetLabelSize(0.035);
   RLOJDCHQOK->GetZaxis()->SetTitleSize(0.035);
   RLOJDCHQOK->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(RLOJDCHQOK,"");
   
   TH1F *LWKYWJDQXM = new TH1F("LWKYWJDQXM","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   LWKYWJDQXM->SetBinContent(701,43763.42);
   LWKYWJDQXM->SetMinimum(0.1);
   LWKYWJDQXM->SetMaximum(0);
   LWKYWJDQXM->SetEntries(94165);
   LWKYWJDQXM->SetStats(0);

   ci = TColor::GetColor("#000066");
   LWKYWJDQXM->SetFillColor(ci);
   LWKYWJDQXM->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   LWKYWJDQXM->SetLineColor(ci);
   LWKYWJDQXM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   LWKYWJDQXM->GetXaxis()->SetLabelFont(42);
   LWKYWJDQXM->GetXaxis()->SetLabelSize(0.035);
   LWKYWJDQXM->GetXaxis()->SetTitleSize(0.035);
   LWKYWJDQXM->GetXaxis()->SetTitleFont(42);
   LWKYWJDQXM->GetYaxis()->SetTitle("Entries");
   LWKYWJDQXM->GetYaxis()->SetLabelFont(42);
   LWKYWJDQXM->GetYaxis()->SetLabelSize(0.035);
   LWKYWJDQXM->GetYaxis()->SetTitleSize(0.035);
   LWKYWJDQXM->GetYaxis()->SetTitleFont(42);
   LWKYWJDQXM->GetZaxis()->SetLabelFont(42);
   LWKYWJDQXM->GetZaxis()->SetLabelSize(0.035);
   LWKYWJDQXM->GetZaxis()->SetTitleSize(0.035);
   LWKYWJDQXM->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(LWKYWJDQXM,"");
   
   TH1F *FSCNBDCZYJ = new TH1F("FSCNBDCZYJ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   FSCNBDCZYJ->SetBinContent(701,866.5126);
   FSCNBDCZYJ->SetMinimum(0.1);
   FSCNBDCZYJ->SetMaximum(0);
   FSCNBDCZYJ->SetEntries(5111);
   FSCNBDCZYJ->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   FSCNBDCZYJ->SetFillColor(ci);
   FSCNBDCZYJ->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   FSCNBDCZYJ->SetLineColor(ci);
   FSCNBDCZYJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   FSCNBDCZYJ->GetXaxis()->SetLabelFont(42);
   FSCNBDCZYJ->GetXaxis()->SetLabelSize(0.035);
   FSCNBDCZYJ->GetXaxis()->SetTitleSize(0.035);
   FSCNBDCZYJ->GetXaxis()->SetTitleFont(42);
   FSCNBDCZYJ->GetYaxis()->SetTitle("Entries");
   FSCNBDCZYJ->GetYaxis()->SetLabelFont(42);
   FSCNBDCZYJ->GetYaxis()->SetLabelSize(0.035);
   FSCNBDCZYJ->GetYaxis()->SetTitleSize(0.035);
   FSCNBDCZYJ->GetYaxis()->SetTitleFont(42);
   FSCNBDCZYJ->GetZaxis()->SetLabelFont(42);
   FSCNBDCZYJ->GetZaxis()->SetLabelSize(0.035);
   FSCNBDCZYJ->GetZaxis()->SetTitleSize(0.035);
   FSCNBDCZYJ->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(FSCNBDCZYJ,"");
   
   TH1F *MAPSNAGXVN = new TH1F("MAPSNAGXVN","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   MAPSNAGXVN->SetBinContent(701,7384.521);
   MAPSNAGXVN->SetMinimum(0.1);
   MAPSNAGXVN->SetMaximum(0);
   MAPSNAGXVN->SetEntries(1091);
   MAPSNAGXVN->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   MAPSNAGXVN->SetFillColor(ci);
   MAPSNAGXVN->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   MAPSNAGXVN->SetLineColor(ci);
   MAPSNAGXVN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   MAPSNAGXVN->GetXaxis()->SetLabelFont(42);
   MAPSNAGXVN->GetXaxis()->SetLabelSize(0.035);
   MAPSNAGXVN->GetXaxis()->SetTitleSize(0.035);
   MAPSNAGXVN->GetXaxis()->SetTitleFont(42);
   MAPSNAGXVN->GetYaxis()->SetTitle("Entries");
   MAPSNAGXVN->GetYaxis()->SetLabelFont(42);
   MAPSNAGXVN->GetYaxis()->SetLabelSize(0.035);
   MAPSNAGXVN->GetYaxis()->SetTitleSize(0.035);
   MAPSNAGXVN->GetYaxis()->SetTitleFont(42);
   MAPSNAGXVN->GetZaxis()->SetLabelFont(42);
   MAPSNAGXVN->GetZaxis()->SetLabelSize(0.035);
   MAPSNAGXVN->GetZaxis()->SetTitleSize(0.035);
   MAPSNAGXVN->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(MAPSNAGXVN,"");
   
   TH1F *XXBNHEOCTQ = new TH1F("XXBNHEOCTQ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   XXBNHEOCTQ->SetBinContent(701,43706.31);
   XXBNHEOCTQ->SetMinimum(0.1);
   XXBNHEOCTQ->SetMaximum(0);
   XXBNHEOCTQ->SetEntries(9146);
   XXBNHEOCTQ->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   XXBNHEOCTQ->SetFillColor(ci);
   XXBNHEOCTQ->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   XXBNHEOCTQ->SetLineColor(ci);
   XXBNHEOCTQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   XXBNHEOCTQ->GetXaxis()->SetLabelFont(42);
   XXBNHEOCTQ->GetXaxis()->SetLabelSize(0.035);
   XXBNHEOCTQ->GetXaxis()->SetTitleSize(0.035);
   XXBNHEOCTQ->GetXaxis()->SetTitleFont(42);
   XXBNHEOCTQ->GetYaxis()->SetTitle("Entries");
   XXBNHEOCTQ->GetYaxis()->SetLabelFont(42);
   XXBNHEOCTQ->GetYaxis()->SetLabelSize(0.035);
   XXBNHEOCTQ->GetYaxis()->SetTitleSize(0.035);
   XXBNHEOCTQ->GetYaxis()->SetTitleFont(42);
   XXBNHEOCTQ->GetZaxis()->SetLabelFont(42);
   XXBNHEOCTQ->GetZaxis()->SetLabelSize(0.035);
   XXBNHEOCTQ->GetZaxis()->SetTitleSize(0.035);
   XXBNHEOCTQ->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(XXBNHEOCTQ,"");
   
   TH1F *VEXJMGBXFF = new TH1F("VEXJMGBXFF","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   VEXJMGBXFF->SetBinContent(701,537750.2);
   VEXJMGBXFF->SetMinimum(0.1);
   VEXJMGBXFF->SetMaximum(0);
   VEXJMGBXFF->SetEntries(87253);
   VEXJMGBXFF->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   VEXJMGBXFF->SetFillColor(ci);
   VEXJMGBXFF->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   VEXJMGBXFF->SetLineColor(ci);
   VEXJMGBXFF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   VEXJMGBXFF->GetXaxis()->SetLabelFont(42);
   VEXJMGBXFF->GetXaxis()->SetLabelSize(0.035);
   VEXJMGBXFF->GetXaxis()->SetTitleSize(0.035);
   VEXJMGBXFF->GetXaxis()->SetTitleFont(42);
   VEXJMGBXFF->GetYaxis()->SetTitle("Entries");
   VEXJMGBXFF->GetYaxis()->SetLabelFont(42);
   VEXJMGBXFF->GetYaxis()->SetLabelSize(0.035);
   VEXJMGBXFF->GetYaxis()->SetTitleSize(0.035);
   VEXJMGBXFF->GetYaxis()->SetTitleFont(42);
   VEXJMGBXFF->GetZaxis()->SetLabelFont(42);
   VEXJMGBXFF->GetZaxis()->SetLabelSize(0.035);
   VEXJMGBXFF->GetZaxis()->SetTitleSize(0.035);
   VEXJMGBXFF->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(VEXJMGBXFF,"");
   
   TH1F *WGAVBXMDDK = new TH1F("WGAVBXMDDK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   WGAVBXMDDK->SetBinContent(701,5457.279);
   WGAVBXMDDK->SetMinimum(0.1);
   WGAVBXMDDK->SetMaximum(0);
   WGAVBXMDDK->SetEntries(1412);
   WGAVBXMDDK->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   WGAVBXMDDK->SetFillColor(ci);
   WGAVBXMDDK->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   WGAVBXMDDK->SetLineColor(ci);
   WGAVBXMDDK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   WGAVBXMDDK->GetXaxis()->SetLabelFont(42);
   WGAVBXMDDK->GetXaxis()->SetLabelSize(0.035);
   WGAVBXMDDK->GetXaxis()->SetTitleSize(0.035);
   WGAVBXMDDK->GetXaxis()->SetTitleFont(42);
   WGAVBXMDDK->GetYaxis()->SetTitle("Entries");
   WGAVBXMDDK->GetYaxis()->SetLabelFont(42);
   WGAVBXMDDK->GetYaxis()->SetLabelSize(0.035);
   WGAVBXMDDK->GetYaxis()->SetTitleSize(0.035);
   WGAVBXMDDK->GetYaxis()->SetTitleFont(42);
   WGAVBXMDDK->GetZaxis()->SetLabelFont(42);
   WGAVBXMDDK->GetZaxis()->SetLabelSize(0.035);
   WGAVBXMDDK->GetZaxis()->SetTitleSize(0.035);
   WGAVBXMDDK->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(WGAVBXMDDK,"");
   
   TH1F *UGNJVNIGSF = new TH1F("UGNJVNIGSF","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   UGNJVNIGSF->SetBinContent(701,35604.71);
   UGNJVNIGSF->SetMinimum(0.1);
   UGNJVNIGSF->SetMaximum(0);
   UGNJVNIGSF->SetEntries(1514);
   UGNJVNIGSF->SetStats(0);

   ci = TColor::GetColor("#006633");
   UGNJVNIGSF->SetFillColor(ci);
   UGNJVNIGSF->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   UGNJVNIGSF->SetLineColor(ci);
   UGNJVNIGSF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   UGNJVNIGSF->GetXaxis()->SetLabelFont(42);
   UGNJVNIGSF->GetXaxis()->SetLabelSize(0.035);
   UGNJVNIGSF->GetXaxis()->SetTitleSize(0.035);
   UGNJVNIGSF->GetXaxis()->SetTitleFont(42);
   UGNJVNIGSF->GetYaxis()->SetTitle("Entries");
   UGNJVNIGSF->GetYaxis()->SetLabelFont(42);
   UGNJVNIGSF->GetYaxis()->SetLabelSize(0.035);
   UGNJVNIGSF->GetYaxis()->SetTitleSize(0.035);
   UGNJVNIGSF->GetYaxis()->SetTitleFont(42);
   UGNJVNIGSF->GetZaxis()->SetLabelFont(42);
   UGNJVNIGSF->GetZaxis()->SetLabelSize(0.035);
   UGNJVNIGSF->GetZaxis()->SetTitleSize(0.035);
   UGNJVNIGSF->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(UGNJVNIGSF,"");
   
   TH1F *TBVEGHGXUT = new TH1F("TBVEGHGXUT","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   TBVEGHGXUT->SetBinContent(701,892.8231);
   TBVEGHGXUT->SetMinimum(0.1);
   TBVEGHGXUT->SetMaximum(0);
   TBVEGHGXUT->SetEntries(133);
   TBVEGHGXUT->SetStats(0);
   TBVEGHGXUT->SetFillColor(3);
   TBVEGHGXUT->SetFillStyle(3001);
   TBVEGHGXUT->SetLineColor(3);
   TBVEGHGXUT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   TBVEGHGXUT->GetXaxis()->SetLabelFont(42);
   TBVEGHGXUT->GetXaxis()->SetLabelSize(0.035);
   TBVEGHGXUT->GetXaxis()->SetTitleSize(0.035);
   TBVEGHGXUT->GetXaxis()->SetTitleFont(42);
   TBVEGHGXUT->GetYaxis()->SetTitle("Entries");
   TBVEGHGXUT->GetYaxis()->SetLabelFont(42);
   TBVEGHGXUT->GetYaxis()->SetLabelSize(0.035);
   TBVEGHGXUT->GetYaxis()->SetTitleSize(0.035);
   TBVEGHGXUT->GetYaxis()->SetTitleFont(42);
   TBVEGHGXUT->GetZaxis()->SetLabelFont(42);
   TBVEGHGXUT->GetZaxis()->SetLabelSize(0.035);
   TBVEGHGXUT->GetZaxis()->SetTitleSize(0.035);
   TBVEGHGXUT->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(TBVEGHGXUT,"");
   
   TH1F *MAVCVVYUHK = new TH1F("MAVCVVYUHK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   MAVCVVYUHK->SetBinContent(701,1111.303);
   MAVCVVYUHK->SetMinimum(0.1);
   MAVCVVYUHK->SetMaximum(0);
   MAVCVVYUHK->SetEntries(40);
   MAVCVVYUHK->SetStats(0);

   ci = TColor::GetColor("#990033");
   MAVCVVYUHK->SetFillColor(ci);
   MAVCVVYUHK->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   MAVCVVYUHK->SetLineColor(ci);
   MAVCVVYUHK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   MAVCVVYUHK->GetXaxis()->SetLabelFont(42);
   MAVCVVYUHK->GetXaxis()->SetLabelSize(0.035);
   MAVCVVYUHK->GetXaxis()->SetTitleSize(0.035);
   MAVCVVYUHK->GetXaxis()->SetTitleFont(42);
   MAVCVVYUHK->GetYaxis()->SetTitle("Entries");
   MAVCVVYUHK->GetYaxis()->SetLabelFont(42);
   MAVCVVYUHK->GetYaxis()->SetLabelSize(0.035);
   MAVCVVYUHK->GetYaxis()->SetTitleSize(0.035);
   MAVCVVYUHK->GetYaxis()->SetTitleFont(42);
   MAVCVVYUHK->GetZaxis()->SetLabelFont(42);
   MAVCVVYUHK->GetZaxis()->SetLabelSize(0.035);
   MAVCVVYUHK->GetZaxis()->SetTitleSize(0.035);
   MAVCVVYUHK->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(MAVCVVYUHK,"");
   
   TH1F *MSGULYXVSK = new TH1F("MSGULYXVSK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   MSGULYXVSK->SetBinContent(701,1304.087);
   MSGULYXVSK->SetMinimum(0.1);
   MSGULYXVSK->SetMaximum(0);
   MSGULYXVSK->SetEntries(207);
   MSGULYXVSK->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   MSGULYXVSK->SetFillColor(ci);
   MSGULYXVSK->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   MSGULYXVSK->SetLineColor(ci);
   MSGULYXVSK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   MSGULYXVSK->GetXaxis()->SetLabelFont(42);
   MSGULYXVSK->GetXaxis()->SetLabelSize(0.035);
   MSGULYXVSK->GetXaxis()->SetTitleSize(0.035);
   MSGULYXVSK->GetXaxis()->SetTitleFont(42);
   MSGULYXVSK->GetYaxis()->SetTitle("Entries");
   MSGULYXVSK->GetYaxis()->SetLabelFont(42);
   MSGULYXVSK->GetYaxis()->SetLabelSize(0.035);
   MSGULYXVSK->GetYaxis()->SetTitleSize(0.035);
   MSGULYXVSK->GetYaxis()->SetTitleFont(42);
   MSGULYXVSK->GetZaxis()->SetLabelFont(42);
   MSGULYXVSK->GetZaxis()->SetLabelSize(0.035);
   MSGULYXVSK->GetZaxis()->SetTitleSize(0.035);
   MSGULYXVSK->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(MSGULYXVSK,"");
   
   TH1F *OTJWITMMTT = new TH1F("OTJWITMMTT","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OTJWITMMTT->SetBinContent(701,667.1408);
   OTJWITMMTT->SetMinimum(0.1);
   OTJWITMMTT->SetMaximum(0);
   OTJWITMMTT->SetEntries(23);
   OTJWITMMTT->SetStats(0);

   ci = TColor::GetColor("#a42400");
   OTJWITMMTT->SetFillColor(ci);
   OTJWITMMTT->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   OTJWITMMTT->SetLineColor(ci);
   OTJWITMMTT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OTJWITMMTT->GetXaxis()->SetLabelFont(42);
   OTJWITMMTT->GetXaxis()->SetLabelSize(0.035);
   OTJWITMMTT->GetXaxis()->SetTitleSize(0.035);
   OTJWITMMTT->GetXaxis()->SetTitleFont(42);
   OTJWITMMTT->GetYaxis()->SetTitle("Entries");
   OTJWITMMTT->GetYaxis()->SetLabelFont(42);
   OTJWITMMTT->GetYaxis()->SetLabelSize(0.035);
   OTJWITMMTT->GetYaxis()->SetTitleSize(0.035);
   OTJWITMMTT->GetYaxis()->SetTitleFont(42);
   OTJWITMMTT->GetZaxis()->SetLabelFont(42);
   OTJWITMMTT->GetZaxis()->SetLabelSize(0.035);
   OTJWITMMTT->GetZaxis()->SetTitleSize(0.035);
   OTJWITMMTT->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(OTJWITMMTT,"");
   
   TH1F *SNUSBDSOIB = new TH1F("SNUSBDSOIB","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   SNUSBDSOIB->SetBinContent(701,8404.182);
   SNUSBDSOIB->SetMinimum(0.1);
   SNUSBDSOIB->SetMaximum(0);
   SNUSBDSOIB->SetEntries(15208);
   SNUSBDSOIB->SetStats(0);

   ci = TColor::GetColor("#001544");
   SNUSBDSOIB->SetFillColor(ci);
   SNUSBDSOIB->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   SNUSBDSOIB->SetLineColor(ci);
   SNUSBDSOIB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   SNUSBDSOIB->GetXaxis()->SetLabelFont(42);
   SNUSBDSOIB->GetXaxis()->SetLabelSize(0.035);
   SNUSBDSOIB->GetXaxis()->SetTitleSize(0.035);
   SNUSBDSOIB->GetXaxis()->SetTitleFont(42);
   SNUSBDSOIB->GetYaxis()->SetTitle("Entries");
   SNUSBDSOIB->GetYaxis()->SetLabelFont(42);
   SNUSBDSOIB->GetYaxis()->SetLabelSize(0.035);
   SNUSBDSOIB->GetYaxis()->SetTitleSize(0.035);
   SNUSBDSOIB->GetYaxis()->SetTitleFont(42);
   SNUSBDSOIB->GetZaxis()->SetLabelFont(42);
   SNUSBDSOIB->GetZaxis()->SetLabelSize(0.035);
   SNUSBDSOIB->GetZaxis()->SetTitleSize(0.035);
   SNUSBDSOIB->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(SNUSBDSOIB,"");
   
   TH1F *GRKVHVFBSD = new TH1F("GRKVHVFBSD","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   GRKVHVFBSD->SetBinContent(701,44121.92);
   GRKVHVFBSD->SetMinimum(0.1);
   GRKVHVFBSD->SetMaximum(0);
   GRKVHVFBSD->SetEntries(18700);
   GRKVHVFBSD->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   GRKVHVFBSD->SetFillColor(ci);
   GRKVHVFBSD->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   GRKVHVFBSD->SetLineColor(ci);
   GRKVHVFBSD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   GRKVHVFBSD->GetXaxis()->SetLabelFont(42);
   GRKVHVFBSD->GetXaxis()->SetLabelSize(0.035);
   GRKVHVFBSD->GetXaxis()->SetTitleSize(0.035);
   GRKVHVFBSD->GetXaxis()->SetTitleFont(42);
   GRKVHVFBSD->GetYaxis()->SetTitle("Entries");
   GRKVHVFBSD->GetYaxis()->SetLabelFont(42);
   GRKVHVFBSD->GetYaxis()->SetLabelSize(0.035);
   GRKVHVFBSD->GetYaxis()->SetTitleSize(0.035);
   GRKVHVFBSD->GetYaxis()->SetTitleFont(42);
   GRKVHVFBSD->GetZaxis()->SetLabelFont(42);
   GRKVHVFBSD->GetZaxis()->SetLabelSize(0.035);
   GRKVHVFBSD->GetZaxis()->SetTitleSize(0.035);
   GRKVHVFBSD->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(GRKVHVFBSD,"");
   
   TH1F *IVLJNOPJJD = new TH1F("IVLJNOPJJD","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   IVLJNOPJJD->SetBinContent(701,8398.418);
   IVLJNOPJJD->SetMinimum(0.1);
   IVLJNOPJJD->SetMaximum(0);
   IVLJNOPJJD->SetEntries(15182);
   IVLJNOPJJD->SetStats(0);

   ci = TColor::GetColor("#620e00");
   IVLJNOPJJD->SetFillColor(ci);
   IVLJNOPJJD->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   IVLJNOPJJD->SetLineColor(ci);
   IVLJNOPJJD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   IVLJNOPJJD->GetXaxis()->SetLabelFont(42);
   IVLJNOPJJD->GetXaxis()->SetLabelSize(0.035);
   IVLJNOPJJD->GetXaxis()->SetTitleSize(0.035);
   IVLJNOPJJD->GetXaxis()->SetTitleFont(42);
   IVLJNOPJJD->GetYaxis()->SetTitle("Entries");
   IVLJNOPJJD->GetYaxis()->SetLabelFont(42);
   IVLJNOPJJD->GetYaxis()->SetLabelSize(0.035);
   IVLJNOPJJD->GetYaxis()->SetTitleSize(0.035);
   IVLJNOPJJD->GetYaxis()->SetTitleFont(42);
   IVLJNOPJJD->GetZaxis()->SetLabelFont(42);
   IVLJNOPJJD->GetZaxis()->SetLabelSize(0.035);
   IVLJNOPJJD->GetZaxis()->SetTitleSize(0.035);
   IVLJNOPJJD->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(IVLJNOPJJD,"");
   
   TH1F *BWGVKYADSR = new TH1F("BWGVKYADSR","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   BWGVKYADSR->SetBinContent(701,44238.49);
   BWGVKYADSR->SetMinimum(0.1);
   BWGVKYADSR->SetMaximum(0);
   BWGVKYADSR->SetEntries(18666);
   BWGVKYADSR->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   BWGVKYADSR->SetFillColor(ci);
   BWGVKYADSR->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   BWGVKYADSR->SetLineColor(ci);
   BWGVKYADSR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   BWGVKYADSR->GetXaxis()->SetLabelFont(42);
   BWGVKYADSR->GetXaxis()->SetLabelSize(0.035);
   BWGVKYADSR->GetXaxis()->SetTitleSize(0.035);
   BWGVKYADSR->GetXaxis()->SetTitleFont(42);
   BWGVKYADSR->GetYaxis()->SetTitle("Entries");
   BWGVKYADSR->GetYaxis()->SetLabelFont(42);
   BWGVKYADSR->GetYaxis()->SetLabelSize(0.035);
   BWGVKYADSR->GetYaxis()->SetTitleSize(0.035);
   BWGVKYADSR->GetYaxis()->SetTitleFont(42);
   BWGVKYADSR->GetZaxis()->SetLabelFont(42);
   BWGVKYADSR->GetZaxis()->SetLabelSize(0.035);
   BWGVKYADSR->GetZaxis()->SetTitleSize(0.035);
   BWGVKYADSR->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(BWGVKYADSR,"");
   
   TH1F *FARPTZOCUH = new TH1F("FARPTZOCUH","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   FARPTZOCUH->SetBinContent(701,1514.001);
   FARPTZOCUH->SetMinimum(0.1);
   FARPTZOCUH->SetMaximum(0);
   FARPTZOCUH->SetEntries(112);
   FARPTZOCUH->SetStats(0);
   FARPTZOCUH->SetFillColor(4);
   FARPTZOCUH->SetFillStyle(3001);
   FARPTZOCUH->SetLineColor(4);
   FARPTZOCUH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   FARPTZOCUH->GetXaxis()->SetLabelFont(42);
   FARPTZOCUH->GetXaxis()->SetLabelSize(0.035);
   FARPTZOCUH->GetXaxis()->SetTitleSize(0.035);
   FARPTZOCUH->GetXaxis()->SetTitleFont(42);
   FARPTZOCUH->GetYaxis()->SetTitle("Entries");
   FARPTZOCUH->GetYaxis()->SetLabelFont(42);
   FARPTZOCUH->GetYaxis()->SetLabelSize(0.035);
   FARPTZOCUH->GetYaxis()->SetTitleSize(0.035);
   FARPTZOCUH->GetYaxis()->SetTitleFont(42);
   FARPTZOCUH->GetZaxis()->SetLabelFont(42);
   FARPTZOCUH->GetZaxis()->SetLabelSize(0.035);
   FARPTZOCUH->GetZaxis()->SetTitleSize(0.035);
   FARPTZOCUH->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(FARPTZOCUH,"");
   
   TH1F *GLIOFUUTZV = new TH1F("GLIOFUUTZV","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   GLIOFUUTZV->SetBinContent(701,5597.227);
   GLIOFUUTZV->SetMinimum(0.1);
   GLIOFUUTZV->SetMaximum(0);
   GLIOFUUTZV->SetEntries(77);
   GLIOFUUTZV->SetStats(0);

   ci = TColor::GetColor("#007db5");
   GLIOFUUTZV->SetFillColor(ci);
   GLIOFUUTZV->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   GLIOFUUTZV->SetLineColor(ci);
   GLIOFUUTZV->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   GLIOFUUTZV->GetXaxis()->SetLabelFont(42);
   GLIOFUUTZV->GetXaxis()->SetLabelSize(0.035);
   GLIOFUUTZV->GetXaxis()->SetTitleSize(0.035);
   GLIOFUUTZV->GetXaxis()->SetTitleFont(42);
   GLIOFUUTZV->GetYaxis()->SetTitle("Entries");
   GLIOFUUTZV->GetYaxis()->SetLabelFont(42);
   GLIOFUUTZV->GetYaxis()->SetLabelSize(0.035);
   GLIOFUUTZV->GetYaxis()->SetTitleSize(0.035);
   GLIOFUUTZV->GetYaxis()->SetTitleFont(42);
   GLIOFUUTZV->GetZaxis()->SetLabelFont(42);
   GLIOFUUTZV->GetZaxis()->SetLabelSize(0.035);
   GLIOFUUTZV->GetZaxis()->SetTitleSize(0.035);
   GLIOFUUTZV->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(GLIOFUUTZV,"");
   
   TH1F *NDJADDSFFP = new TH1F("NDJADDSFFP","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   NDJADDSFFP->SetBinContent(701,3343.228);
   NDJADDSFFP->SetMinimum(0.1);
   NDJADDSFFP->SetMaximum(0);
   NDJADDSFFP->SetEntries(47);
   NDJADDSFFP->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   NDJADDSFFP->SetFillColor(ci);
   NDJADDSFFP->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   NDJADDSFFP->SetLineColor(ci);
   NDJADDSFFP->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   NDJADDSFFP->GetXaxis()->SetLabelFont(42);
   NDJADDSFFP->GetXaxis()->SetLabelSize(0.035);
   NDJADDSFFP->GetXaxis()->SetTitleSize(0.035);
   NDJADDSFFP->GetXaxis()->SetTitleFont(42);
   NDJADDSFFP->GetYaxis()->SetTitle("Entries");
   NDJADDSFFP->GetYaxis()->SetLabelFont(42);
   NDJADDSFFP->GetYaxis()->SetLabelSize(0.035);
   NDJADDSFFP->GetYaxis()->SetTitleSize(0.035);
   NDJADDSFFP->GetYaxis()->SetTitleFont(42);
   NDJADDSFFP->GetZaxis()->SetLabelFont(42);
   NDJADDSFFP->GetZaxis()->SetLabelSize(0.035);
   NDJADDSFFP->GetZaxis()->SetTitleSize(0.035);
   NDJADDSFFP->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(NDJADDSFFP,"");
   
   TH1F *XHBAFMLAUU = new TH1F("XHBAFMLAUU","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   XHBAFMLAUU->SetBinContent(701,376.861);
   XHBAFMLAUU->SetMinimum(0.1);
   XHBAFMLAUU->SetMaximum(0);
   XHBAFMLAUU->SetEntries(5);
   XHBAFMLAUU->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   XHBAFMLAUU->SetFillColor(ci);
   XHBAFMLAUU->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   XHBAFMLAUU->SetLineColor(ci);
   XHBAFMLAUU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   XHBAFMLAUU->GetXaxis()->SetLabelFont(42);
   XHBAFMLAUU->GetXaxis()->SetLabelSize(0.035);
   XHBAFMLAUU->GetXaxis()->SetTitleSize(0.035);
   XHBAFMLAUU->GetXaxis()->SetTitleFont(42);
   XHBAFMLAUU->GetYaxis()->SetTitle("Entries");
   XHBAFMLAUU->GetYaxis()->SetLabelFont(42);
   XHBAFMLAUU->GetYaxis()->SetLabelSize(0.035);
   XHBAFMLAUU->GetYaxis()->SetTitleSize(0.035);
   XHBAFMLAUU->GetYaxis()->SetTitleFont(42);
   XHBAFMLAUU->GetZaxis()->SetLabelFont(42);
   XHBAFMLAUU->GetZaxis()->SetLabelSize(0.035);
   XHBAFMLAUU->GetZaxis()->SetTitleSize(0.035);
   XHBAFMLAUU->GetZaxis()->SetTitleFont(42);
   FCVMHFSLZA->Add(XHBAFMLAUU,"");
   FCVMHFSLZA->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9339831,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("HighestEnergyIsolatedLeptonTransverseMomentum");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("RLOJDCHQOK","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("LWKYWJDQXM","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("FSCNBDCZYJ","ee_llqqqq","f");

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
   entry=leg->AddEntry("MAPSNAGXVN","ee_qqqq","f");

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
   entry=leg->AddEntry("XXBNHEOCTQ","ee_nunuqq","f");

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
   entry=leg->AddEntry("VEXJMGBXFF","ee_lnuqq","f");

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
   entry=leg->AddEntry("WGAVBXMDDK","ee_qqll","f");

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
   entry=leg->AddEntry("UGNJVNIGSF","ee_qq","f");

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
   entry=leg->AddEntry("TBVEGHGXUT","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MAVCVVYUHK","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("MSGULYXVSK","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("OTJWITMMTT","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("SNUSBDSOIB","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("GRKVHVFBSD","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("IVLJNOPJJD","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("BWGVKYADSR","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("FARPTZOCUH","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GLIOFUUTZV","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("NDJADDSFFP","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("XHBAFMLAUU","gammagamma_qqqq_BS_BS","f");

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
   QKZIZKXKUH->Modified();
   QKZIZKXKUH->cd();
   QKZIZKXKUH->SetSelected(QKZIZKXKUH);
}
