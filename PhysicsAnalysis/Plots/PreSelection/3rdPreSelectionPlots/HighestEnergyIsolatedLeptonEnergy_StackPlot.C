{
//=========Macro generated from canvas: NZYOCOBNJK/HighestEnergyIsolatedLeptonEnergy
//=========  (Wed Sep 28 10:50:39 2016) by ROOT version5.34/30
   TCanvas *NZYOCOBNJK = new TCanvas("NZYOCOBNJK", "HighestEnergyIsolatedLeptonEnergy",0,0,700,500);
   gStyle->SetOptStat(0);
   NZYOCOBNJK->SetHighLightColor(2);
   NZYOCOBNJK->Range(0,0,1,1);
   NZYOCOBNJK->SetFillColor(0);
   NZYOCOBNJK->SetBorderMode(0);
   NZYOCOBNJK->SetBorderSize(2);
   NZYOCOBNJK->SetLogy();
   NZYOCOBNJK->SetFrameBorderMode(0);
   NZYOCOBNJK->SetFrameBorderMode(0);
   
   THStack *RPNDISWBIV = new THStack();
   RPNDISWBIV->SetName("RPNDISWBIV");
   RPNDISWBIV->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RPNDISWBIV->SetMinimum(0.1);
   
   TH1F *RPNDISWBIV_stack_31 = new TH1F("RPNDISWBIV_stack_31","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RPNDISWBIV_stack_31->SetMinimum(-0);
   RPNDISWBIV_stack_31->SetMaximum(-nan);
   RPNDISWBIV_stack_31->SetDirectory(0);
   RPNDISWBIV_stack_31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   RPNDISWBIV_stack_31->SetLineColor(ci);
   RPNDISWBIV_stack_31->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RPNDISWBIV_stack_31->GetXaxis()->SetLabelFont(42);
   RPNDISWBIV_stack_31->GetXaxis()->SetLabelSize(0.035);
   RPNDISWBIV_stack_31->GetXaxis()->SetTitleSize(0.035);
   RPNDISWBIV_stack_31->GetXaxis()->SetTitleFont(42);
   RPNDISWBIV_stack_31->GetYaxis()->SetTitle("Entries");
   RPNDISWBIV_stack_31->GetYaxis()->SetLabelFont(42);
   RPNDISWBIV_stack_31->GetYaxis()->SetLabelSize(0.035);
   RPNDISWBIV_stack_31->GetYaxis()->SetTitleSize(0.035);
   RPNDISWBIV_stack_31->GetYaxis()->SetTitleFont(42);
   RPNDISWBIV_stack_31->GetZaxis()->SetLabelFont(42);
   RPNDISWBIV_stack_31->GetZaxis()->SetLabelSize(0.035);
   RPNDISWBIV_stack_31->GetZaxis()->SetTitleSize(0.035);
   RPNDISWBIV_stack_31->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->SetHistogram(RPNDISWBIV_stack_31);
   
   
   TH1F *ZSGIOLFVPB = new TH1F("ZSGIOLFVPB","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   ZSGIOLFVPB->SetBinContent(701,17903.56);
   ZSGIOLFVPB->SetMinimum(0.1);
   ZSGIOLFVPB->SetMaximum(0);
   ZSGIOLFVPB->SetEntries(825376);
   ZSGIOLFVPB->SetStats(0);
   ZSGIOLFVPB->SetFillColor(1);
   ZSGIOLFVPB->SetFillStyle(3001);
   ZSGIOLFVPB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   ZSGIOLFVPB->GetXaxis()->SetLabelFont(42);
   ZSGIOLFVPB->GetXaxis()->SetLabelSize(0.035);
   ZSGIOLFVPB->GetXaxis()->SetTitleSize(0.035);
   ZSGIOLFVPB->GetXaxis()->SetTitleFont(42);
   ZSGIOLFVPB->GetYaxis()->SetTitle("Entries");
   ZSGIOLFVPB->GetYaxis()->SetLabelFont(42);
   ZSGIOLFVPB->GetYaxis()->SetLabelSize(0.035);
   ZSGIOLFVPB->GetYaxis()->SetTitleSize(0.035);
   ZSGIOLFVPB->GetYaxis()->SetTitleFont(42);
   ZSGIOLFVPB->GetZaxis()->SetLabelFont(42);
   ZSGIOLFVPB->GetZaxis()->SetLabelSize(0.035);
   ZSGIOLFVPB->GetZaxis()->SetTitleSize(0.035);
   ZSGIOLFVPB->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(ZSGIOLFVPB,"");
   
   TH1F *BXYMWMRPAN = new TH1F("BXYMWMRPAN","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   BXYMWMRPAN->SetBinContent(701,43763.42);
   BXYMWMRPAN->SetMinimum(0.1);
   BXYMWMRPAN->SetMaximum(0);
   BXYMWMRPAN->SetEntries(94165);
   BXYMWMRPAN->SetStats(0);

   ci = TColor::GetColor("#000066");
   BXYMWMRPAN->SetFillColor(ci);
   BXYMWMRPAN->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   BXYMWMRPAN->SetLineColor(ci);
   BXYMWMRPAN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   BXYMWMRPAN->GetXaxis()->SetLabelFont(42);
   BXYMWMRPAN->GetXaxis()->SetLabelSize(0.035);
   BXYMWMRPAN->GetXaxis()->SetTitleSize(0.035);
   BXYMWMRPAN->GetXaxis()->SetTitleFont(42);
   BXYMWMRPAN->GetYaxis()->SetTitle("Entries");
   BXYMWMRPAN->GetYaxis()->SetLabelFont(42);
   BXYMWMRPAN->GetYaxis()->SetLabelSize(0.035);
   BXYMWMRPAN->GetYaxis()->SetTitleSize(0.035);
   BXYMWMRPAN->GetYaxis()->SetTitleFont(42);
   BXYMWMRPAN->GetZaxis()->SetLabelFont(42);
   BXYMWMRPAN->GetZaxis()->SetLabelSize(0.035);
   BXYMWMRPAN->GetZaxis()->SetTitleSize(0.035);
   BXYMWMRPAN->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(BXYMWMRPAN,"");
   
   TH1F *ENIDZGHWAW = new TH1F("ENIDZGHWAW","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   ENIDZGHWAW->SetBinContent(701,866.5126);
   ENIDZGHWAW->SetMinimum(0.1);
   ENIDZGHWAW->SetMaximum(0);
   ENIDZGHWAW->SetEntries(5111);
   ENIDZGHWAW->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   ENIDZGHWAW->SetFillColor(ci);
   ENIDZGHWAW->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   ENIDZGHWAW->SetLineColor(ci);
   ENIDZGHWAW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   ENIDZGHWAW->GetXaxis()->SetLabelFont(42);
   ENIDZGHWAW->GetXaxis()->SetLabelSize(0.035);
   ENIDZGHWAW->GetXaxis()->SetTitleSize(0.035);
   ENIDZGHWAW->GetXaxis()->SetTitleFont(42);
   ENIDZGHWAW->GetYaxis()->SetTitle("Entries");
   ENIDZGHWAW->GetYaxis()->SetLabelFont(42);
   ENIDZGHWAW->GetYaxis()->SetLabelSize(0.035);
   ENIDZGHWAW->GetYaxis()->SetTitleSize(0.035);
   ENIDZGHWAW->GetYaxis()->SetTitleFont(42);
   ENIDZGHWAW->GetZaxis()->SetLabelFont(42);
   ENIDZGHWAW->GetZaxis()->SetLabelSize(0.035);
   ENIDZGHWAW->GetZaxis()->SetTitleSize(0.035);
   ENIDZGHWAW->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(ENIDZGHWAW,"");
   
   TH1F *RQEVIWQAYN = new TH1F("RQEVIWQAYN","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RQEVIWQAYN->SetBinContent(701,7384.521);
   RQEVIWQAYN->SetMinimum(0.1);
   RQEVIWQAYN->SetMaximum(0);
   RQEVIWQAYN->SetEntries(1091);
   RQEVIWQAYN->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   RQEVIWQAYN->SetFillColor(ci);
   RQEVIWQAYN->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   RQEVIWQAYN->SetLineColor(ci);
   RQEVIWQAYN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RQEVIWQAYN->GetXaxis()->SetLabelFont(42);
   RQEVIWQAYN->GetXaxis()->SetLabelSize(0.035);
   RQEVIWQAYN->GetXaxis()->SetTitleSize(0.035);
   RQEVIWQAYN->GetXaxis()->SetTitleFont(42);
   RQEVIWQAYN->GetYaxis()->SetTitle("Entries");
   RQEVIWQAYN->GetYaxis()->SetLabelFont(42);
   RQEVIWQAYN->GetYaxis()->SetLabelSize(0.035);
   RQEVIWQAYN->GetYaxis()->SetTitleSize(0.035);
   RQEVIWQAYN->GetYaxis()->SetTitleFont(42);
   RQEVIWQAYN->GetZaxis()->SetLabelFont(42);
   RQEVIWQAYN->GetZaxis()->SetLabelSize(0.035);
   RQEVIWQAYN->GetZaxis()->SetTitleSize(0.035);
   RQEVIWQAYN->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(RQEVIWQAYN,"");
   
   TH1F *HBPFJTANGH = new TH1F("HBPFJTANGH","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   HBPFJTANGH->SetBinContent(701,43706.31);
   HBPFJTANGH->SetMinimum(0.1);
   HBPFJTANGH->SetMaximum(0);
   HBPFJTANGH->SetEntries(9146);
   HBPFJTANGH->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   HBPFJTANGH->SetFillColor(ci);
   HBPFJTANGH->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   HBPFJTANGH->SetLineColor(ci);
   HBPFJTANGH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   HBPFJTANGH->GetXaxis()->SetLabelFont(42);
   HBPFJTANGH->GetXaxis()->SetLabelSize(0.035);
   HBPFJTANGH->GetXaxis()->SetTitleSize(0.035);
   HBPFJTANGH->GetXaxis()->SetTitleFont(42);
   HBPFJTANGH->GetYaxis()->SetTitle("Entries");
   HBPFJTANGH->GetYaxis()->SetLabelFont(42);
   HBPFJTANGH->GetYaxis()->SetLabelSize(0.035);
   HBPFJTANGH->GetYaxis()->SetTitleSize(0.035);
   HBPFJTANGH->GetYaxis()->SetTitleFont(42);
   HBPFJTANGH->GetZaxis()->SetLabelFont(42);
   HBPFJTANGH->GetZaxis()->SetLabelSize(0.035);
   HBPFJTANGH->GetZaxis()->SetTitleSize(0.035);
   HBPFJTANGH->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(HBPFJTANGH,"");
   
   TH1F *FMZIXZORNR = new TH1F("FMZIXZORNR","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   FMZIXZORNR->SetBinContent(701,537750.2);
   FMZIXZORNR->SetMinimum(0.1);
   FMZIXZORNR->SetMaximum(0);
   FMZIXZORNR->SetEntries(87253);
   FMZIXZORNR->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   FMZIXZORNR->SetFillColor(ci);
   FMZIXZORNR->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   FMZIXZORNR->SetLineColor(ci);
   FMZIXZORNR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   FMZIXZORNR->GetXaxis()->SetLabelFont(42);
   FMZIXZORNR->GetXaxis()->SetLabelSize(0.035);
   FMZIXZORNR->GetXaxis()->SetTitleSize(0.035);
   FMZIXZORNR->GetXaxis()->SetTitleFont(42);
   FMZIXZORNR->GetYaxis()->SetTitle("Entries");
   FMZIXZORNR->GetYaxis()->SetLabelFont(42);
   FMZIXZORNR->GetYaxis()->SetLabelSize(0.035);
   FMZIXZORNR->GetYaxis()->SetTitleSize(0.035);
   FMZIXZORNR->GetYaxis()->SetTitleFont(42);
   FMZIXZORNR->GetZaxis()->SetLabelFont(42);
   FMZIXZORNR->GetZaxis()->SetLabelSize(0.035);
   FMZIXZORNR->GetZaxis()->SetTitleSize(0.035);
   FMZIXZORNR->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(FMZIXZORNR,"");
   
   TH1F *TVCQKCVFEY = new TH1F("TVCQKCVFEY","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   TVCQKCVFEY->SetBinContent(701,5457.279);
   TVCQKCVFEY->SetMinimum(0.1);
   TVCQKCVFEY->SetMaximum(0);
   TVCQKCVFEY->SetEntries(1412);
   TVCQKCVFEY->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   TVCQKCVFEY->SetFillColor(ci);
   TVCQKCVFEY->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   TVCQKCVFEY->SetLineColor(ci);
   TVCQKCVFEY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   TVCQKCVFEY->GetXaxis()->SetLabelFont(42);
   TVCQKCVFEY->GetXaxis()->SetLabelSize(0.035);
   TVCQKCVFEY->GetXaxis()->SetTitleSize(0.035);
   TVCQKCVFEY->GetXaxis()->SetTitleFont(42);
   TVCQKCVFEY->GetYaxis()->SetTitle("Entries");
   TVCQKCVFEY->GetYaxis()->SetLabelFont(42);
   TVCQKCVFEY->GetYaxis()->SetLabelSize(0.035);
   TVCQKCVFEY->GetYaxis()->SetTitleSize(0.035);
   TVCQKCVFEY->GetYaxis()->SetTitleFont(42);
   TVCQKCVFEY->GetZaxis()->SetLabelFont(42);
   TVCQKCVFEY->GetZaxis()->SetLabelSize(0.035);
   TVCQKCVFEY->GetZaxis()->SetTitleSize(0.035);
   TVCQKCVFEY->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(TVCQKCVFEY,"");
   
   TH1F *TIDGZORKMZ = new TH1F("TIDGZORKMZ","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   TIDGZORKMZ->SetBinContent(701,35604.71);
   TIDGZORKMZ->SetMinimum(0.1);
   TIDGZORKMZ->SetMaximum(0);
   TIDGZORKMZ->SetEntries(1514);
   TIDGZORKMZ->SetStats(0);

   ci = TColor::GetColor("#006633");
   TIDGZORKMZ->SetFillColor(ci);
   TIDGZORKMZ->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   TIDGZORKMZ->SetLineColor(ci);
   TIDGZORKMZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   TIDGZORKMZ->GetXaxis()->SetLabelFont(42);
   TIDGZORKMZ->GetXaxis()->SetLabelSize(0.035);
   TIDGZORKMZ->GetXaxis()->SetTitleSize(0.035);
   TIDGZORKMZ->GetXaxis()->SetTitleFont(42);
   TIDGZORKMZ->GetYaxis()->SetTitle("Entries");
   TIDGZORKMZ->GetYaxis()->SetLabelFont(42);
   TIDGZORKMZ->GetYaxis()->SetLabelSize(0.035);
   TIDGZORKMZ->GetYaxis()->SetTitleSize(0.035);
   TIDGZORKMZ->GetYaxis()->SetTitleFont(42);
   TIDGZORKMZ->GetZaxis()->SetLabelFont(42);
   TIDGZORKMZ->GetZaxis()->SetLabelSize(0.035);
   TIDGZORKMZ->GetZaxis()->SetTitleSize(0.035);
   TIDGZORKMZ->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(TIDGZORKMZ,"");
   
   TH1F *NLLHSHNVUR = new TH1F("NLLHSHNVUR","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   NLLHSHNVUR->SetBinContent(701,892.8231);
   NLLHSHNVUR->SetMinimum(0.1);
   NLLHSHNVUR->SetMaximum(0);
   NLLHSHNVUR->SetEntries(133);
   NLLHSHNVUR->SetStats(0);
   NLLHSHNVUR->SetFillColor(3);
   NLLHSHNVUR->SetFillStyle(3001);
   NLLHSHNVUR->SetLineColor(3);
   NLLHSHNVUR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   NLLHSHNVUR->GetXaxis()->SetLabelFont(42);
   NLLHSHNVUR->GetXaxis()->SetLabelSize(0.035);
   NLLHSHNVUR->GetXaxis()->SetTitleSize(0.035);
   NLLHSHNVUR->GetXaxis()->SetTitleFont(42);
   NLLHSHNVUR->GetYaxis()->SetTitle("Entries");
   NLLHSHNVUR->GetYaxis()->SetLabelFont(42);
   NLLHSHNVUR->GetYaxis()->SetLabelSize(0.035);
   NLLHSHNVUR->GetYaxis()->SetTitleSize(0.035);
   NLLHSHNVUR->GetYaxis()->SetTitleFont(42);
   NLLHSHNVUR->GetZaxis()->SetLabelFont(42);
   NLLHSHNVUR->GetZaxis()->SetLabelSize(0.035);
   NLLHSHNVUR->GetZaxis()->SetTitleSize(0.035);
   NLLHSHNVUR->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(NLLHSHNVUR,"");
   
   TH1F *MRFDNHMYWM = new TH1F("MRFDNHMYWM","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   MRFDNHMYWM->SetBinContent(701,1111.303);
   MRFDNHMYWM->SetMinimum(0.1);
   MRFDNHMYWM->SetMaximum(0);
   MRFDNHMYWM->SetEntries(40);
   MRFDNHMYWM->SetStats(0);

   ci = TColor::GetColor("#990033");
   MRFDNHMYWM->SetFillColor(ci);
   MRFDNHMYWM->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   MRFDNHMYWM->SetLineColor(ci);
   MRFDNHMYWM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   MRFDNHMYWM->GetXaxis()->SetLabelFont(42);
   MRFDNHMYWM->GetXaxis()->SetLabelSize(0.035);
   MRFDNHMYWM->GetXaxis()->SetTitleSize(0.035);
   MRFDNHMYWM->GetXaxis()->SetTitleFont(42);
   MRFDNHMYWM->GetYaxis()->SetTitle("Entries");
   MRFDNHMYWM->GetYaxis()->SetLabelFont(42);
   MRFDNHMYWM->GetYaxis()->SetLabelSize(0.035);
   MRFDNHMYWM->GetYaxis()->SetTitleSize(0.035);
   MRFDNHMYWM->GetYaxis()->SetTitleFont(42);
   MRFDNHMYWM->GetZaxis()->SetLabelFont(42);
   MRFDNHMYWM->GetZaxis()->SetLabelSize(0.035);
   MRFDNHMYWM->GetZaxis()->SetTitleSize(0.035);
   MRFDNHMYWM->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(MRFDNHMYWM,"");
   
   TH1F *JBOFERBYIH = new TH1F("JBOFERBYIH","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   JBOFERBYIH->SetBinContent(701,1304.087);
   JBOFERBYIH->SetMinimum(0.1);
   JBOFERBYIH->SetMaximum(0);
   JBOFERBYIH->SetEntries(207);
   JBOFERBYIH->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   JBOFERBYIH->SetFillColor(ci);
   JBOFERBYIH->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   JBOFERBYIH->SetLineColor(ci);
   JBOFERBYIH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   JBOFERBYIH->GetXaxis()->SetLabelFont(42);
   JBOFERBYIH->GetXaxis()->SetLabelSize(0.035);
   JBOFERBYIH->GetXaxis()->SetTitleSize(0.035);
   JBOFERBYIH->GetXaxis()->SetTitleFont(42);
   JBOFERBYIH->GetYaxis()->SetTitle("Entries");
   JBOFERBYIH->GetYaxis()->SetLabelFont(42);
   JBOFERBYIH->GetYaxis()->SetLabelSize(0.035);
   JBOFERBYIH->GetYaxis()->SetTitleSize(0.035);
   JBOFERBYIH->GetYaxis()->SetTitleFont(42);
   JBOFERBYIH->GetZaxis()->SetLabelFont(42);
   JBOFERBYIH->GetZaxis()->SetLabelSize(0.035);
   JBOFERBYIH->GetZaxis()->SetTitleSize(0.035);
   JBOFERBYIH->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(JBOFERBYIH,"");
   
   TH1F *IRVUVEVWTX = new TH1F("IRVUVEVWTX","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   IRVUVEVWTX->SetBinContent(701,667.1408);
   IRVUVEVWTX->SetMinimum(0.1);
   IRVUVEVWTX->SetMaximum(0);
   IRVUVEVWTX->SetEntries(23);
   IRVUVEVWTX->SetStats(0);

   ci = TColor::GetColor("#a42400");
   IRVUVEVWTX->SetFillColor(ci);
   IRVUVEVWTX->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   IRVUVEVWTX->SetLineColor(ci);
   IRVUVEVWTX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   IRVUVEVWTX->GetXaxis()->SetLabelFont(42);
   IRVUVEVWTX->GetXaxis()->SetLabelSize(0.035);
   IRVUVEVWTX->GetXaxis()->SetTitleSize(0.035);
   IRVUVEVWTX->GetXaxis()->SetTitleFont(42);
   IRVUVEVWTX->GetYaxis()->SetTitle("Entries");
   IRVUVEVWTX->GetYaxis()->SetLabelFont(42);
   IRVUVEVWTX->GetYaxis()->SetLabelSize(0.035);
   IRVUVEVWTX->GetYaxis()->SetTitleSize(0.035);
   IRVUVEVWTX->GetYaxis()->SetTitleFont(42);
   IRVUVEVWTX->GetZaxis()->SetLabelFont(42);
   IRVUVEVWTX->GetZaxis()->SetLabelSize(0.035);
   IRVUVEVWTX->GetZaxis()->SetTitleSize(0.035);
   IRVUVEVWTX->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(IRVUVEVWTX,"");
   
   TH1F *UJVPDPBPAS = new TH1F("UJVPDPBPAS","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   UJVPDPBPAS->SetBinContent(701,8404.182);
   UJVPDPBPAS->SetMinimum(0.1);
   UJVPDPBPAS->SetMaximum(0);
   UJVPDPBPAS->SetEntries(15208);
   UJVPDPBPAS->SetStats(0);

   ci = TColor::GetColor("#001544");
   UJVPDPBPAS->SetFillColor(ci);
   UJVPDPBPAS->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   UJVPDPBPAS->SetLineColor(ci);
   UJVPDPBPAS->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   UJVPDPBPAS->GetXaxis()->SetLabelFont(42);
   UJVPDPBPAS->GetXaxis()->SetLabelSize(0.035);
   UJVPDPBPAS->GetXaxis()->SetTitleSize(0.035);
   UJVPDPBPAS->GetXaxis()->SetTitleFont(42);
   UJVPDPBPAS->GetYaxis()->SetTitle("Entries");
   UJVPDPBPAS->GetYaxis()->SetLabelFont(42);
   UJVPDPBPAS->GetYaxis()->SetLabelSize(0.035);
   UJVPDPBPAS->GetYaxis()->SetTitleSize(0.035);
   UJVPDPBPAS->GetYaxis()->SetTitleFont(42);
   UJVPDPBPAS->GetZaxis()->SetLabelFont(42);
   UJVPDPBPAS->GetZaxis()->SetLabelSize(0.035);
   UJVPDPBPAS->GetZaxis()->SetTitleSize(0.035);
   UJVPDPBPAS->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(UJVPDPBPAS,"");
   
   TH1F *XNUGKUHNAF = new TH1F("XNUGKUHNAF","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   XNUGKUHNAF->SetBinContent(701,44121.92);
   XNUGKUHNAF->SetMinimum(0.1);
   XNUGKUHNAF->SetMaximum(0);
   XNUGKUHNAF->SetEntries(18700);
   XNUGKUHNAF->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   XNUGKUHNAF->SetFillColor(ci);
   XNUGKUHNAF->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   XNUGKUHNAF->SetLineColor(ci);
   XNUGKUHNAF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   XNUGKUHNAF->GetXaxis()->SetLabelFont(42);
   XNUGKUHNAF->GetXaxis()->SetLabelSize(0.035);
   XNUGKUHNAF->GetXaxis()->SetTitleSize(0.035);
   XNUGKUHNAF->GetXaxis()->SetTitleFont(42);
   XNUGKUHNAF->GetYaxis()->SetTitle("Entries");
   XNUGKUHNAF->GetYaxis()->SetLabelFont(42);
   XNUGKUHNAF->GetYaxis()->SetLabelSize(0.035);
   XNUGKUHNAF->GetYaxis()->SetTitleSize(0.035);
   XNUGKUHNAF->GetYaxis()->SetTitleFont(42);
   XNUGKUHNAF->GetZaxis()->SetLabelFont(42);
   XNUGKUHNAF->GetZaxis()->SetLabelSize(0.035);
   XNUGKUHNAF->GetZaxis()->SetTitleSize(0.035);
   XNUGKUHNAF->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(XNUGKUHNAF,"");
   
   TH1F *CUNEBCBUFI = new TH1F("CUNEBCBUFI","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   CUNEBCBUFI->SetBinContent(701,8398.418);
   CUNEBCBUFI->SetMinimum(0.1);
   CUNEBCBUFI->SetMaximum(0);
   CUNEBCBUFI->SetEntries(15182);
   CUNEBCBUFI->SetStats(0);

   ci = TColor::GetColor("#620e00");
   CUNEBCBUFI->SetFillColor(ci);
   CUNEBCBUFI->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   CUNEBCBUFI->SetLineColor(ci);
   CUNEBCBUFI->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   CUNEBCBUFI->GetXaxis()->SetLabelFont(42);
   CUNEBCBUFI->GetXaxis()->SetLabelSize(0.035);
   CUNEBCBUFI->GetXaxis()->SetTitleSize(0.035);
   CUNEBCBUFI->GetXaxis()->SetTitleFont(42);
   CUNEBCBUFI->GetYaxis()->SetTitle("Entries");
   CUNEBCBUFI->GetYaxis()->SetLabelFont(42);
   CUNEBCBUFI->GetYaxis()->SetLabelSize(0.035);
   CUNEBCBUFI->GetYaxis()->SetTitleSize(0.035);
   CUNEBCBUFI->GetYaxis()->SetTitleFont(42);
   CUNEBCBUFI->GetZaxis()->SetLabelFont(42);
   CUNEBCBUFI->GetZaxis()->SetLabelSize(0.035);
   CUNEBCBUFI->GetZaxis()->SetTitleSize(0.035);
   CUNEBCBUFI->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(CUNEBCBUFI,"");
   
   TH1F *VDQVCNICKF = new TH1F("VDQVCNICKF","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   VDQVCNICKF->SetBinContent(701,44238.49);
   VDQVCNICKF->SetMinimum(0.1);
   VDQVCNICKF->SetMaximum(0);
   VDQVCNICKF->SetEntries(18666);
   VDQVCNICKF->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   VDQVCNICKF->SetFillColor(ci);
   VDQVCNICKF->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   VDQVCNICKF->SetLineColor(ci);
   VDQVCNICKF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VDQVCNICKF->GetXaxis()->SetLabelFont(42);
   VDQVCNICKF->GetXaxis()->SetLabelSize(0.035);
   VDQVCNICKF->GetXaxis()->SetTitleSize(0.035);
   VDQVCNICKF->GetXaxis()->SetTitleFont(42);
   VDQVCNICKF->GetYaxis()->SetTitle("Entries");
   VDQVCNICKF->GetYaxis()->SetLabelFont(42);
   VDQVCNICKF->GetYaxis()->SetLabelSize(0.035);
   VDQVCNICKF->GetYaxis()->SetTitleSize(0.035);
   VDQVCNICKF->GetYaxis()->SetTitleFont(42);
   VDQVCNICKF->GetZaxis()->SetLabelFont(42);
   VDQVCNICKF->GetZaxis()->SetLabelSize(0.035);
   VDQVCNICKF->GetZaxis()->SetTitleSize(0.035);
   VDQVCNICKF->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(VDQVCNICKF,"");
   
   TH1F *CFSUOJHXNU = new TH1F("CFSUOJHXNU","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   CFSUOJHXNU->SetBinContent(701,1514.001);
   CFSUOJHXNU->SetMinimum(0.1);
   CFSUOJHXNU->SetMaximum(0);
   CFSUOJHXNU->SetEntries(112);
   CFSUOJHXNU->SetStats(0);
   CFSUOJHXNU->SetFillColor(4);
   CFSUOJHXNU->SetFillStyle(3001);
   CFSUOJHXNU->SetLineColor(4);
   CFSUOJHXNU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   CFSUOJHXNU->GetXaxis()->SetLabelFont(42);
   CFSUOJHXNU->GetXaxis()->SetLabelSize(0.035);
   CFSUOJHXNU->GetXaxis()->SetTitleSize(0.035);
   CFSUOJHXNU->GetXaxis()->SetTitleFont(42);
   CFSUOJHXNU->GetYaxis()->SetTitle("Entries");
   CFSUOJHXNU->GetYaxis()->SetLabelFont(42);
   CFSUOJHXNU->GetYaxis()->SetLabelSize(0.035);
   CFSUOJHXNU->GetYaxis()->SetTitleSize(0.035);
   CFSUOJHXNU->GetYaxis()->SetTitleFont(42);
   CFSUOJHXNU->GetZaxis()->SetLabelFont(42);
   CFSUOJHXNU->GetZaxis()->SetLabelSize(0.035);
   CFSUOJHXNU->GetZaxis()->SetTitleSize(0.035);
   CFSUOJHXNU->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(CFSUOJHXNU,"");
   
   TH1F *GXZZOPIVBX = new TH1F("GXZZOPIVBX","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   GXZZOPIVBX->SetBinContent(701,5597.227);
   GXZZOPIVBX->SetMinimum(0.1);
   GXZZOPIVBX->SetMaximum(0);
   GXZZOPIVBX->SetEntries(77);
   GXZZOPIVBX->SetStats(0);

   ci = TColor::GetColor("#007db5");
   GXZZOPIVBX->SetFillColor(ci);
   GXZZOPIVBX->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   GXZZOPIVBX->SetLineColor(ci);
   GXZZOPIVBX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   GXZZOPIVBX->GetXaxis()->SetLabelFont(42);
   GXZZOPIVBX->GetXaxis()->SetLabelSize(0.035);
   GXZZOPIVBX->GetXaxis()->SetTitleSize(0.035);
   GXZZOPIVBX->GetXaxis()->SetTitleFont(42);
   GXZZOPIVBX->GetYaxis()->SetTitle("Entries");
   GXZZOPIVBX->GetYaxis()->SetLabelFont(42);
   GXZZOPIVBX->GetYaxis()->SetLabelSize(0.035);
   GXZZOPIVBX->GetYaxis()->SetTitleSize(0.035);
   GXZZOPIVBX->GetYaxis()->SetTitleFont(42);
   GXZZOPIVBX->GetZaxis()->SetLabelFont(42);
   GXZZOPIVBX->GetZaxis()->SetLabelSize(0.035);
   GXZZOPIVBX->GetZaxis()->SetTitleSize(0.035);
   GXZZOPIVBX->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(GXZZOPIVBX,"");
   
   TH1F *XAHDQNJOXA = new TH1F("XAHDQNJOXA","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   XAHDQNJOXA->SetBinContent(701,3343.228);
   XAHDQNJOXA->SetMinimum(0.1);
   XAHDQNJOXA->SetMaximum(0);
   XAHDQNJOXA->SetEntries(47);
   XAHDQNJOXA->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   XAHDQNJOXA->SetFillColor(ci);
   XAHDQNJOXA->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   XAHDQNJOXA->SetLineColor(ci);
   XAHDQNJOXA->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   XAHDQNJOXA->GetXaxis()->SetLabelFont(42);
   XAHDQNJOXA->GetXaxis()->SetLabelSize(0.035);
   XAHDQNJOXA->GetXaxis()->SetTitleSize(0.035);
   XAHDQNJOXA->GetXaxis()->SetTitleFont(42);
   XAHDQNJOXA->GetYaxis()->SetTitle("Entries");
   XAHDQNJOXA->GetYaxis()->SetLabelFont(42);
   XAHDQNJOXA->GetYaxis()->SetLabelSize(0.035);
   XAHDQNJOXA->GetYaxis()->SetTitleSize(0.035);
   XAHDQNJOXA->GetYaxis()->SetTitleFont(42);
   XAHDQNJOXA->GetZaxis()->SetLabelFont(42);
   XAHDQNJOXA->GetZaxis()->SetLabelSize(0.035);
   XAHDQNJOXA->GetZaxis()->SetTitleSize(0.035);
   XAHDQNJOXA->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(XAHDQNJOXA,"");
   
   TH1F *QDDKFKVTWD = new TH1F("QDDKFKVTWD","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   QDDKFKVTWD->SetBinContent(701,376.861);
   QDDKFKVTWD->SetMinimum(0.1);
   QDDKFKVTWD->SetMaximum(0);
   QDDKFKVTWD->SetEntries(5);
   QDDKFKVTWD->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   QDDKFKVTWD->SetFillColor(ci);
   QDDKFKVTWD->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   QDDKFKVTWD->SetLineColor(ci);
   QDDKFKVTWD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   QDDKFKVTWD->GetXaxis()->SetLabelFont(42);
   QDDKFKVTWD->GetXaxis()->SetLabelSize(0.035);
   QDDKFKVTWD->GetXaxis()->SetTitleSize(0.035);
   QDDKFKVTWD->GetXaxis()->SetTitleFont(42);
   QDDKFKVTWD->GetYaxis()->SetTitle("Entries");
   QDDKFKVTWD->GetYaxis()->SetLabelFont(42);
   QDDKFKVTWD->GetYaxis()->SetLabelSize(0.035);
   QDDKFKVTWD->GetYaxis()->SetTitleSize(0.035);
   QDDKFKVTWD->GetYaxis()->SetTitleFont(42);
   QDDKFKVTWD->GetZaxis()->SetLabelFont(42);
   QDDKFKVTWD->GetZaxis()->SetLabelSize(0.035);
   QDDKFKVTWD->GetZaxis()->SetTitleSize(0.035);
   QDDKFKVTWD->GetZaxis()->SetTitleFont(42);
   RPNDISWBIV->Add(QDDKFKVTWD,"");
   RPNDISWBIV->Draw("");
   
   TPaveText *pt = new TPaveText(0.1868391,0.9339831,0.8131609,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("HighestEnergyIsolatedLeptonEnergy");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ZSGIOLFVPB","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BXYMWMRPAN","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("ENIDZGHWAW","ee_llqqqq","f");

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
   entry=leg->AddEntry("RQEVIWQAYN","ee_qqqq","f");

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
   entry=leg->AddEntry("HBPFJTANGH","ee_nunuqq","f");

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
   entry=leg->AddEntry("FMZIXZORNR","ee_lnuqq","f");

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
   entry=leg->AddEntry("TVCQKCVFEY","ee_qqll","f");

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
   entry=leg->AddEntry("TIDGZORKMZ","ee_qq","f");

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
   entry=leg->AddEntry("NLLHSHNVUR","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MRFDNHMYWM","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("JBOFERBYIH","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("IRVUVEVWTX","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("UJVPDPBPAS","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("XNUGKUHNAF","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("CUNEBCBUFI","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("VDQVCNICKF","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("CFSUOJHXNU","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GXZZOPIVBX","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("XAHDQNJOXA","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("QDDKFKVTWD","gammagamma_qqqq_BS_BS","f");

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
   NZYOCOBNJK->Modified();
   NZYOCOBNJK->cd();
   NZYOCOBNJK->SetSelected(NZYOCOBNJK);
}
