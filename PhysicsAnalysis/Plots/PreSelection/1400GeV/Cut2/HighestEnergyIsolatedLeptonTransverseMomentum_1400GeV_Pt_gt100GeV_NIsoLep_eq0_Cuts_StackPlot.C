{
//=========Macro generated from canvas: POHJUMVYIL/HighestEnergyIsolatedLeptonTransverseMomentum
//=========  (Tue Apr 25 10:04:11 2017) by ROOT version5.34/30
   TCanvas *POHJUMVYIL = new TCanvas("POHJUMVYIL", "HighestEnergyIsolatedLeptonTransverseMomentum",0,0,700,500);
   gStyle->SetOptStat(0);
   POHJUMVYIL->SetHighLightColor(2);
   POHJUMVYIL->Range(0,0,1,1);
   POHJUMVYIL->SetFillColor(0);
   POHJUMVYIL->SetBorderMode(0);
   POHJUMVYIL->SetBorderSize(2);
   POHJUMVYIL->SetLogy();
   POHJUMVYIL->SetFrameBorderMode(0);
   POHJUMVYIL->SetFrameBorderMode(0);
   
   THStack *PAGKRCEMAG = new THStack();
   PAGKRCEMAG->SetName("PAGKRCEMAG");
   PAGKRCEMAG->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   PAGKRCEMAG->SetMinimum(0.1);
   
   TH1F *PAGKRCEMAG_stack_19 = new TH1F("PAGKRCEMAG_stack_19","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   PAGKRCEMAG_stack_19->SetMinimum(-0);
   PAGKRCEMAG_stack_19->SetMaximum(-nan);
   PAGKRCEMAG_stack_19->SetDirectory(0);
   PAGKRCEMAG_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   PAGKRCEMAG_stack_19->SetLineColor(ci);
   PAGKRCEMAG_stack_19->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   PAGKRCEMAG_stack_19->GetXaxis()->SetLabelFont(42);
   PAGKRCEMAG_stack_19->GetXaxis()->SetLabelSize(0.035);
   PAGKRCEMAG_stack_19->GetXaxis()->SetTitleSize(0.035);
   PAGKRCEMAG_stack_19->GetXaxis()->SetTitleFont(42);
   PAGKRCEMAG_stack_19->GetYaxis()->SetTitle("Entries");
   PAGKRCEMAG_stack_19->GetYaxis()->SetLabelFont(42);
   PAGKRCEMAG_stack_19->GetYaxis()->SetLabelSize(0.035);
   PAGKRCEMAG_stack_19->GetYaxis()->SetTitleSize(0.035);
   PAGKRCEMAG_stack_19->GetYaxis()->SetTitleFont(42);
   PAGKRCEMAG_stack_19->GetZaxis()->SetLabelFont(42);
   PAGKRCEMAG_stack_19->GetZaxis()->SetLabelSize(0.035);
   PAGKRCEMAG_stack_19->GetZaxis()->SetTitleSize(0.035);
   PAGKRCEMAG_stack_19->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->SetHistogram(PAGKRCEMAG_stack_19);
   
   
   TH1F *XTTSHPNNMD = new TH1F("XTTSHPNNMD","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   XTTSHPNNMD->SetBinContent(701,23618.04);
   XTTSHPNNMD->SetMinimum(0.1);
   XTTSHPNNMD->SetMaximum(0);
   XTTSHPNNMD->SetEntries(1726479);
   XTTSHPNNMD->SetStats(0);
   XTTSHPNNMD->SetFillColor(1);
   XTTSHPNNMD->SetFillStyle(3001);
   XTTSHPNNMD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   XTTSHPNNMD->GetXaxis()->SetLabelFont(42);
   XTTSHPNNMD->GetXaxis()->SetLabelSize(0.035);
   XTTSHPNNMD->GetXaxis()->SetTitleSize(0.035);
   XTTSHPNNMD->GetXaxis()->SetTitleFont(42);
   XTTSHPNNMD->GetYaxis()->SetTitle("Entries");
   XTTSHPNNMD->GetYaxis()->SetLabelFont(42);
   XTTSHPNNMD->GetYaxis()->SetLabelSize(0.035);
   XTTSHPNNMD->GetYaxis()->SetTitleSize(0.035);
   XTTSHPNNMD->GetYaxis()->SetTitleFont(42);
   XTTSHPNNMD->GetZaxis()->SetLabelFont(42);
   XTTSHPNNMD->GetZaxis()->SetLabelSize(0.035);
   XTTSHPNNMD->GetZaxis()->SetTitleSize(0.035);
   XTTSHPNNMD->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(XTTSHPNNMD,"");
   
   TH1F *VICTFYBCJT = new TH1F("VICTFYBCJT","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   VICTFYBCJT->SetBinContent(701,43001.88);
   VICTFYBCJT->SetMinimum(0.1);
   VICTFYBCJT->SetMaximum(0);
   VICTFYBCJT->SetEntries(192870);
   VICTFYBCJT->SetStats(0);

   ci = TColor::GetColor("#000066");
   VICTFYBCJT->SetFillColor(ci);
   VICTFYBCJT->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   VICTFYBCJT->SetLineColor(ci);
   VICTFYBCJT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   VICTFYBCJT->GetXaxis()->SetLabelFont(42);
   VICTFYBCJT->GetXaxis()->SetLabelSize(0.035);
   VICTFYBCJT->GetXaxis()->SetTitleSize(0.035);
   VICTFYBCJT->GetXaxis()->SetTitleFont(42);
   VICTFYBCJT->GetYaxis()->SetTitle("Entries");
   VICTFYBCJT->GetYaxis()->SetLabelFont(42);
   VICTFYBCJT->GetYaxis()->SetLabelSize(0.035);
   VICTFYBCJT->GetYaxis()->SetTitleSize(0.035);
   VICTFYBCJT->GetYaxis()->SetTitleFont(42);
   VICTFYBCJT->GetZaxis()->SetLabelFont(42);
   VICTFYBCJT->GetZaxis()->SetLabelSize(0.035);
   VICTFYBCJT->GetZaxis()->SetTitleSize(0.035);
   VICTFYBCJT->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(VICTFYBCJT,"");
   
   TH1F *DRBPZSQNDL = new TH1F("DRBPZSQNDL","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   DRBPZSQNDL->SetBinContent(701,709.0712);
   DRBPZSQNDL->SetMinimum(0.1);
   DRBPZSQNDL->SetMaximum(0);
   DRBPZSQNDL->SetEntries(9657);
   DRBPZSQNDL->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   DRBPZSQNDL->SetFillColor(ci);
   DRBPZSQNDL->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   DRBPZSQNDL->SetLineColor(ci);
   DRBPZSQNDL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   DRBPZSQNDL->GetXaxis()->SetLabelFont(42);
   DRBPZSQNDL->GetXaxis()->SetLabelSize(0.035);
   DRBPZSQNDL->GetXaxis()->SetTitleSize(0.035);
   DRBPZSQNDL->GetXaxis()->SetTitleFont(42);
   DRBPZSQNDL->GetYaxis()->SetTitle("Entries");
   DRBPZSQNDL->GetYaxis()->SetLabelFont(42);
   DRBPZSQNDL->GetYaxis()->SetLabelSize(0.035);
   DRBPZSQNDL->GetYaxis()->SetTitleSize(0.035);
   DRBPZSQNDL->GetYaxis()->SetTitleFont(42);
   DRBPZSQNDL->GetZaxis()->SetLabelFont(42);
   DRBPZSQNDL->GetZaxis()->SetLabelSize(0.035);
   DRBPZSQNDL->GetZaxis()->SetTitleSize(0.035);
   DRBPZSQNDL->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(DRBPZSQNDL,"");
   
   TH1F *QWCDAEHSIB = new TH1F("QWCDAEHSIB","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   QWCDAEHSIB->SetBinContent(701,6464.335);
   QWCDAEHSIB->SetMinimum(0.1);
   QWCDAEHSIB->SetMaximum(0);
   QWCDAEHSIB->SetEntries(2025);
   QWCDAEHSIB->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   QWCDAEHSIB->SetFillColor(ci);
   QWCDAEHSIB->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   QWCDAEHSIB->SetLineColor(ci);
   QWCDAEHSIB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   QWCDAEHSIB->GetXaxis()->SetLabelFont(42);
   QWCDAEHSIB->GetXaxis()->SetLabelSize(0.035);
   QWCDAEHSIB->GetXaxis()->SetTitleSize(0.035);
   QWCDAEHSIB->GetXaxis()->SetTitleFont(42);
   QWCDAEHSIB->GetYaxis()->SetTitle("Entries");
   QWCDAEHSIB->GetYaxis()->SetLabelFont(42);
   QWCDAEHSIB->GetYaxis()->SetLabelSize(0.035);
   QWCDAEHSIB->GetYaxis()->SetTitleSize(0.035);
   QWCDAEHSIB->GetYaxis()->SetTitleFont(42);
   QWCDAEHSIB->GetZaxis()->SetLabelFont(42);
   QWCDAEHSIB->GetZaxis()->SetLabelSize(0.035);
   QWCDAEHSIB->GetZaxis()->SetTitleSize(0.035);
   QWCDAEHSIB->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(QWCDAEHSIB,"");
   
   TH1F *RZBCRNGGOK = new TH1F("RZBCRNGGOK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   RZBCRNGGOK->SetBinContent(701,513789.8);
   RZBCRNGGOK->SetMinimum(0.1);
   RZBCRNGGOK->SetMaximum(0);
   RZBCRNGGOK->SetEntries(253693);
   RZBCRNGGOK->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   RZBCRNGGOK->SetFillColor(ci);
   RZBCRNGGOK->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   RZBCRNGGOK->SetLineColor(ci);
   RZBCRNGGOK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   RZBCRNGGOK->GetXaxis()->SetLabelFont(42);
   RZBCRNGGOK->GetXaxis()->SetLabelSize(0.035);
   RZBCRNGGOK->GetXaxis()->SetTitleSize(0.035);
   RZBCRNGGOK->GetXaxis()->SetTitleFont(42);
   RZBCRNGGOK->GetYaxis()->SetTitle("Entries");
   RZBCRNGGOK->GetYaxis()->SetLabelFont(42);
   RZBCRNGGOK->GetYaxis()->SetLabelSize(0.035);
   RZBCRNGGOK->GetYaxis()->SetTitleSize(0.035);
   RZBCRNGGOK->GetYaxis()->SetTitleFont(42);
   RZBCRNGGOK->GetZaxis()->SetLabelFont(42);
   RZBCRNGGOK->GetZaxis()->SetLabelSize(0.035);
   RZBCRNGGOK->GetZaxis()->SetTitleSize(0.035);
   RZBCRNGGOK->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(RZBCRNGGOK,"");
   
   TH1F *NNIZWYVXKA = new TH1F("NNIZWYVXKA","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   NNIZWYVXKA->SetBinContent(701,1235321);
   NNIZWYVXKA->SetMinimum(0.1);
   NNIZWYVXKA->SetMaximum(0);
   NNIZWYVXKA->SetEntries(400522);
   NNIZWYVXKA->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   NNIZWYVXKA->SetFillColor(ci);
   NNIZWYVXKA->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   NNIZWYVXKA->SetLineColor(ci);
   NNIZWYVXKA->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   NNIZWYVXKA->GetXaxis()->SetLabelFont(42);
   NNIZWYVXKA->GetXaxis()->SetLabelSize(0.035);
   NNIZWYVXKA->GetXaxis()->SetTitleSize(0.035);
   NNIZWYVXKA->GetXaxis()->SetTitleFont(42);
   NNIZWYVXKA->GetYaxis()->SetTitle("Entries");
   NNIZWYVXKA->GetYaxis()->SetLabelFont(42);
   NNIZWYVXKA->GetYaxis()->SetLabelSize(0.035);
   NNIZWYVXKA->GetYaxis()->SetTitleSize(0.035);
   NNIZWYVXKA->GetYaxis()->SetTitleFont(42);
   NNIZWYVXKA->GetZaxis()->SetLabelFont(42);
   NNIZWYVXKA->GetZaxis()->SetLabelSize(0.035);
   NNIZWYVXKA->GetZaxis()->SetTitleSize(0.035);
   NNIZWYVXKA->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(NNIZWYVXKA,"");
   
   TH1F *YCDRHLPJYK = new TH1F("YCDRHLPJYK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   YCDRHLPJYK->SetBinContent(701,5985.927);
   YCDRHLPJYK->SetMinimum(0.1);
   YCDRHLPJYK->SetMaximum(0);
   YCDRHLPJYK->SetEntries(3074);
   YCDRHLPJYK->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   YCDRHLPJYK->SetFillColor(ci);
   YCDRHLPJYK->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   YCDRHLPJYK->SetLineColor(ci);
   YCDRHLPJYK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   YCDRHLPJYK->GetXaxis()->SetLabelFont(42);
   YCDRHLPJYK->GetXaxis()->SetLabelSize(0.035);
   YCDRHLPJYK->GetXaxis()->SetTitleSize(0.035);
   YCDRHLPJYK->GetXaxis()->SetTitleFont(42);
   YCDRHLPJYK->GetYaxis()->SetTitle("Entries");
   YCDRHLPJYK->GetYaxis()->SetLabelFont(42);
   YCDRHLPJYK->GetYaxis()->SetLabelSize(0.035);
   YCDRHLPJYK->GetYaxis()->SetTitleSize(0.035);
   YCDRHLPJYK->GetYaxis()->SetTitleFont(42);
   YCDRHLPJYK->GetZaxis()->SetLabelFont(42);
   YCDRHLPJYK->GetZaxis()->SetLabelSize(0.035);
   YCDRHLPJYK->GetZaxis()->SetTitleSize(0.035);
   YCDRHLPJYK->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(YCDRHLPJYK,"");
   
   TH1F *SWNMCIXXMW = new TH1F("SWNMCIXXMW","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   SWNMCIXXMW->SetBinContent(701,34551.23);
   SWNMCIXXMW->SetMinimum(0.1);
   SWNMCIXXMW->SetMaximum(0);
   SWNMCIXXMW->SetEntries(2795);
   SWNMCIXXMW->SetStats(0);

   ci = TColor::GetColor("#006633");
   SWNMCIXXMW->SetFillColor(ci);
   SWNMCIXXMW->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   SWNMCIXXMW->SetLineColor(ci);
   SWNMCIXXMW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   SWNMCIXXMW->GetXaxis()->SetLabelFont(42);
   SWNMCIXXMW->GetXaxis()->SetLabelSize(0.035);
   SWNMCIXXMW->GetXaxis()->SetTitleSize(0.035);
   SWNMCIXXMW->GetXaxis()->SetTitleFont(42);
   SWNMCIXXMW->GetYaxis()->SetTitle("Entries");
   SWNMCIXXMW->GetYaxis()->SetLabelFont(42);
   SWNMCIXXMW->GetYaxis()->SetLabelSize(0.035);
   SWNMCIXXMW->GetYaxis()->SetTitleSize(0.035);
   SWNMCIXXMW->GetYaxis()->SetTitleFont(42);
   SWNMCIXXMW->GetZaxis()->SetLabelFont(42);
   SWNMCIXXMW->GetZaxis()->SetLabelSize(0.035);
   SWNMCIXXMW->GetZaxis()->SetTitleSize(0.035);
   SWNMCIXXMW->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(SWNMCIXXMW,"");
   
   TH1F *RWTFLBTKZJ = new TH1F("RWTFLBTKZJ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   RWTFLBTKZJ->SetBinContent(701,878.8586);
   RWTFLBTKZJ->SetMinimum(0.1);
   RWTFLBTKZJ->SetMaximum(0);
   RWTFLBTKZJ->SetEntries(258);
   RWTFLBTKZJ->SetStats(0);
   RWTFLBTKZJ->SetFillColor(3);
   RWTFLBTKZJ->SetFillStyle(3001);
   RWTFLBTKZJ->SetLineColor(3);
   RWTFLBTKZJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   RWTFLBTKZJ->GetXaxis()->SetLabelFont(42);
   RWTFLBTKZJ->GetXaxis()->SetLabelSize(0.035);
   RWTFLBTKZJ->GetXaxis()->SetTitleSize(0.035);
   RWTFLBTKZJ->GetXaxis()->SetTitleFont(42);
   RWTFLBTKZJ->GetYaxis()->SetTitle("Entries");
   RWTFLBTKZJ->GetYaxis()->SetLabelFont(42);
   RWTFLBTKZJ->GetYaxis()->SetLabelSize(0.035);
   RWTFLBTKZJ->GetYaxis()->SetTitleSize(0.035);
   RWTFLBTKZJ->GetYaxis()->SetTitleFont(42);
   RWTFLBTKZJ->GetZaxis()->SetLabelFont(42);
   RWTFLBTKZJ->GetZaxis()->SetLabelSize(0.035);
   RWTFLBTKZJ->GetZaxis()->SetTitleSize(0.035);
   RWTFLBTKZJ->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(RWTFLBTKZJ,"");
   
   TH1F *ILJSTQPAZX = new TH1F("ILJSTQPAZX","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   ILJSTQPAZX->SetBinContent(701,1034.078);
   ILJSTQPAZX->SetMinimum(0.1);
   ILJSTQPAZX->SetMaximum(0);
   ILJSTQPAZX->SetEntries(98);
   ILJSTQPAZX->SetStats(0);

   ci = TColor::GetColor("#990033");
   ILJSTQPAZX->SetFillColor(ci);
   ILJSTQPAZX->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   ILJSTQPAZX->SetLineColor(ci);
   ILJSTQPAZX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   ILJSTQPAZX->GetXaxis()->SetLabelFont(42);
   ILJSTQPAZX->GetXaxis()->SetLabelSize(0.035);
   ILJSTQPAZX->GetXaxis()->SetTitleSize(0.035);
   ILJSTQPAZX->GetXaxis()->SetTitleFont(42);
   ILJSTQPAZX->GetYaxis()->SetTitle("Entries");
   ILJSTQPAZX->GetYaxis()->SetLabelFont(42);
   ILJSTQPAZX->GetYaxis()->SetLabelSize(0.035);
   ILJSTQPAZX->GetYaxis()->SetTitleSize(0.035);
   ILJSTQPAZX->GetYaxis()->SetTitleFont(42);
   ILJSTQPAZX->GetZaxis()->SetLabelFont(42);
   ILJSTQPAZX->GetZaxis()->SetLabelSize(0.035);
   ILJSTQPAZX->GetZaxis()->SetTitleSize(0.035);
   ILJSTQPAZX->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(ILJSTQPAZX,"");
   
   TH1F *OKDSPEXJBR = new TH1F("OKDSPEXJBR","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OKDSPEXJBR->SetBinContent(701,1142.616);
   OKDSPEXJBR->SetMinimum(0.1);
   OKDSPEXJBR->SetMaximum(0);
   OKDSPEXJBR->SetEntries(363);
   OKDSPEXJBR->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   OKDSPEXJBR->SetFillColor(ci);
   OKDSPEXJBR->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   OKDSPEXJBR->SetLineColor(ci);
   OKDSPEXJBR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OKDSPEXJBR->GetXaxis()->SetLabelFont(42);
   OKDSPEXJBR->GetXaxis()->SetLabelSize(0.035);
   OKDSPEXJBR->GetXaxis()->SetTitleSize(0.035);
   OKDSPEXJBR->GetXaxis()->SetTitleFont(42);
   OKDSPEXJBR->GetYaxis()->SetTitle("Entries");
   OKDSPEXJBR->GetYaxis()->SetLabelFont(42);
   OKDSPEXJBR->GetYaxis()->SetLabelSize(0.035);
   OKDSPEXJBR->GetYaxis()->SetTitleSize(0.035);
   OKDSPEXJBR->GetYaxis()->SetTitleFont(42);
   OKDSPEXJBR->GetZaxis()->SetLabelFont(42);
   OKDSPEXJBR->GetZaxis()->SetLabelSize(0.035);
   OKDSPEXJBR->GetZaxis()->SetTitleSize(0.035);
   OKDSPEXJBR->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(OKDSPEXJBR,"");
   
   TH1F *BZQZTLTNAU = new TH1F("BZQZTLTNAU","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   BZQZTLTNAU->SetBinContent(701,479.3946);
   BZQZTLTNAU->SetMinimum(0.1);
   BZQZTLTNAU->SetMaximum(0);
   BZQZTLTNAU->SetEntries(44);
   BZQZTLTNAU->SetStats(0);

   ci = TColor::GetColor("#a42400");
   BZQZTLTNAU->SetFillColor(ci);
   BZQZTLTNAU->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   BZQZTLTNAU->SetLineColor(ci);
   BZQZTLTNAU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   BZQZTLTNAU->GetXaxis()->SetLabelFont(42);
   BZQZTLTNAU->GetXaxis()->SetLabelSize(0.035);
   BZQZTLTNAU->GetXaxis()->SetTitleSize(0.035);
   BZQZTLTNAU->GetXaxis()->SetTitleFont(42);
   BZQZTLTNAU->GetYaxis()->SetTitle("Entries");
   BZQZTLTNAU->GetYaxis()->SetLabelFont(42);
   BZQZTLTNAU->GetYaxis()->SetLabelSize(0.035);
   BZQZTLTNAU->GetYaxis()->SetTitleSize(0.035);
   BZQZTLTNAU->GetYaxis()->SetTitleFont(42);
   BZQZTLTNAU->GetZaxis()->SetLabelFont(42);
   BZQZTLTNAU->GetZaxis()->SetLabelSize(0.035);
   BZQZTLTNAU->GetZaxis()->SetTitleSize(0.035);
   BZQZTLTNAU->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(BZQZTLTNAU,"");
   
   TH1F *GSCOJVFOGK = new TH1F("GSCOJVFOGK","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   GSCOJVFOGK->SetBinContent(701,12699.44);
   GSCOJVFOGK->SetMinimum(0.1);
   GSCOJVFOGK->SetMaximum(0);
   GSCOJVFOGK->SetEntries(45909);
   GSCOJVFOGK->SetStats(0);

   ci = TColor::GetColor("#001544");
   GSCOJVFOGK->SetFillColor(ci);
   GSCOJVFOGK->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   GSCOJVFOGK->SetLineColor(ci);
   GSCOJVFOGK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   GSCOJVFOGK->GetXaxis()->SetLabelFont(42);
   GSCOJVFOGK->GetXaxis()->SetLabelSize(0.035);
   GSCOJVFOGK->GetXaxis()->SetTitleSize(0.035);
   GSCOJVFOGK->GetXaxis()->SetTitleFont(42);
   GSCOJVFOGK->GetYaxis()->SetTitle("Entries");
   GSCOJVFOGK->GetYaxis()->SetLabelFont(42);
   GSCOJVFOGK->GetYaxis()->SetLabelSize(0.035);
   GSCOJVFOGK->GetYaxis()->SetTitleSize(0.035);
   GSCOJVFOGK->GetYaxis()->SetTitleFont(42);
   GSCOJVFOGK->GetZaxis()->SetLabelFont(42);
   GSCOJVFOGK->GetZaxis()->SetLabelSize(0.035);
   GSCOJVFOGK->GetZaxis()->SetTitleSize(0.035);
   GSCOJVFOGK->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(GSCOJVFOGK,"");
   
   TH1F *CGGAFHCPQL = new TH1F("CGGAFHCPQL","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   CGGAFHCPQL->SetBinContent(701,55799.74);
   CGGAFHCPQL->SetMinimum(0.1);
   CGGAFHCPQL->SetMaximum(0);
   CGGAFHCPQL->SetEntries(63129);
   CGGAFHCPQL->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   CGGAFHCPQL->SetFillColor(ci);
   CGGAFHCPQL->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   CGGAFHCPQL->SetLineColor(ci);
   CGGAFHCPQL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   CGGAFHCPQL->GetXaxis()->SetLabelFont(42);
   CGGAFHCPQL->GetXaxis()->SetLabelSize(0.035);
   CGGAFHCPQL->GetXaxis()->SetTitleSize(0.035);
   CGGAFHCPQL->GetXaxis()->SetTitleFont(42);
   CGGAFHCPQL->GetYaxis()->SetTitle("Entries");
   CGGAFHCPQL->GetYaxis()->SetLabelFont(42);
   CGGAFHCPQL->GetYaxis()->SetLabelSize(0.035);
   CGGAFHCPQL->GetYaxis()->SetTitleSize(0.035);
   CGGAFHCPQL->GetYaxis()->SetTitleFont(42);
   CGGAFHCPQL->GetZaxis()->SetLabelFont(42);
   CGGAFHCPQL->GetZaxis()->SetLabelSize(0.035);
   CGGAFHCPQL->GetZaxis()->SetTitleSize(0.035);
   CGGAFHCPQL->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(CGGAFHCPQL,"");
   
   TH1F *VCVLMILYCZ = new TH1F("VCVLMILYCZ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   VCVLMILYCZ->SetBinContent(701,12782.63);
   VCVLMILYCZ->SetMinimum(0.1);
   VCVLMILYCZ->SetMaximum(0);
   VCVLMILYCZ->SetEntries(46210);
   VCVLMILYCZ->SetStats(0);

   ci = TColor::GetColor("#620e00");
   VCVLMILYCZ->SetFillColor(ci);
   VCVLMILYCZ->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   VCVLMILYCZ->SetLineColor(ci);
   VCVLMILYCZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   VCVLMILYCZ->GetXaxis()->SetLabelFont(42);
   VCVLMILYCZ->GetXaxis()->SetLabelSize(0.035);
   VCVLMILYCZ->GetXaxis()->SetTitleSize(0.035);
   VCVLMILYCZ->GetXaxis()->SetTitleFont(42);
   VCVLMILYCZ->GetYaxis()->SetTitle("Entries");
   VCVLMILYCZ->GetYaxis()->SetLabelFont(42);
   VCVLMILYCZ->GetYaxis()->SetLabelSize(0.035);
   VCVLMILYCZ->GetYaxis()->SetTitleSize(0.035);
   VCVLMILYCZ->GetYaxis()->SetTitleFont(42);
   VCVLMILYCZ->GetZaxis()->SetLabelFont(42);
   VCVLMILYCZ->GetZaxis()->SetLabelSize(0.035);
   VCVLMILYCZ->GetZaxis()->SetTitleSize(0.035);
   VCVLMILYCZ->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(VCVLMILYCZ,"");
   
   TH1F *ZFZUYKEZMU = new TH1F("ZFZUYKEZMU","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   ZFZUYKEZMU->SetBinContent(701,55732.39);
   ZFZUYKEZMU->SetMinimum(0.1);
   ZFZUYKEZMU->SetMaximum(0);
   ZFZUYKEZMU->SetEntries(62776);
   ZFZUYKEZMU->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   ZFZUYKEZMU->SetFillColor(ci);
   ZFZUYKEZMU->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   ZFZUYKEZMU->SetLineColor(ci);
   ZFZUYKEZMU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   ZFZUYKEZMU->GetXaxis()->SetLabelFont(42);
   ZFZUYKEZMU->GetXaxis()->SetLabelSize(0.035);
   ZFZUYKEZMU->GetXaxis()->SetTitleSize(0.035);
   ZFZUYKEZMU->GetXaxis()->SetTitleFont(42);
   ZFZUYKEZMU->GetYaxis()->SetTitle("Entries");
   ZFZUYKEZMU->GetYaxis()->SetLabelFont(42);
   ZFZUYKEZMU->GetYaxis()->SetLabelSize(0.035);
   ZFZUYKEZMU->GetYaxis()->SetTitleSize(0.035);
   ZFZUYKEZMU->GetYaxis()->SetTitleFont(42);
   ZFZUYKEZMU->GetZaxis()->SetLabelFont(42);
   ZFZUYKEZMU->GetZaxis()->SetLabelSize(0.035);
   ZFZUYKEZMU->GetZaxis()->SetTitleSize(0.035);
   ZFZUYKEZMU->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(ZFZUYKEZMU,"");
   
   TH1F *PAXVIXVVWQ = new TH1F("PAXVIXVVWQ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   PAXVIXVVWQ->SetBinContent(701,1637.606);
   PAXVIXVVWQ->SetMinimum(0.1);
   PAXVIXVVWQ->SetMaximum(0);
   PAXVIXVVWQ->SetEntries(242);
   PAXVIXVVWQ->SetStats(0);
   PAXVIXVVWQ->SetFillColor(4);
   PAXVIXVVWQ->SetFillStyle(3001);
   PAXVIXVVWQ->SetLineColor(4);
   PAXVIXVVWQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   PAXVIXVVWQ->GetXaxis()->SetLabelFont(42);
   PAXVIXVVWQ->GetXaxis()->SetLabelSize(0.035);
   PAXVIXVVWQ->GetXaxis()->SetTitleSize(0.035);
   PAXVIXVVWQ->GetXaxis()->SetTitleFont(42);
   PAXVIXVVWQ->GetYaxis()->SetTitle("Entries");
   PAXVIXVVWQ->GetYaxis()->SetLabelFont(42);
   PAXVIXVVWQ->GetYaxis()->SetLabelSize(0.035);
   PAXVIXVVWQ->GetYaxis()->SetTitleSize(0.035);
   PAXVIXVVWQ->GetYaxis()->SetTitleFont(42);
   PAXVIXVVWQ->GetZaxis()->SetLabelFont(42);
   PAXVIXVVWQ->GetZaxis()->SetLabelSize(0.035);
   PAXVIXVVWQ->GetZaxis()->SetTitleSize(0.035);
   PAXVIXVVWQ->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(PAXVIXVVWQ,"");
   
   TH1F *PMCQQCKMWX = new TH1F("PMCQQCKMWX","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   PMCQQCKMWX->SetBinContent(701,4041.566);
   PMCQQCKMWX->SetMinimum(0.1);
   PMCQQCKMWX->SetMaximum(0);
   PMCQQCKMWX->SetEntries(148);
   PMCQQCKMWX->SetStats(0);

   ci = TColor::GetColor("#007db5");
   PMCQQCKMWX->SetFillColor(ci);
   PMCQQCKMWX->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   PMCQQCKMWX->SetLineColor(ci);
   PMCQQCKMWX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   PMCQQCKMWX->GetXaxis()->SetLabelFont(42);
   PMCQQCKMWX->GetXaxis()->SetLabelSize(0.035);
   PMCQQCKMWX->GetXaxis()->SetTitleSize(0.035);
   PMCQQCKMWX->GetXaxis()->SetTitleFont(42);
   PMCQQCKMWX->GetYaxis()->SetTitle("Entries");
   PMCQQCKMWX->GetYaxis()->SetLabelFont(42);
   PMCQQCKMWX->GetYaxis()->SetLabelSize(0.035);
   PMCQQCKMWX->GetYaxis()->SetTitleSize(0.035);
   PMCQQCKMWX->GetYaxis()->SetTitleFont(42);
   PMCQQCKMWX->GetZaxis()->SetLabelFont(42);
   PMCQQCKMWX->GetZaxis()->SetLabelSize(0.035);
   PMCQQCKMWX->GetZaxis()->SetTitleSize(0.035);
   PMCQQCKMWX->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(PMCQQCKMWX,"");
   
   TH1F *OCVHIJOINX = new TH1F("OCVHIJOINX","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OCVHIJOINX->SetBinContent(701,2397.92);
   OCVHIJOINX->SetMinimum(0.1);
   OCVHIJOINX->SetMaximum(0);
   OCVHIJOINX->SetEntries(90);
   OCVHIJOINX->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   OCVHIJOINX->SetFillColor(ci);
   OCVHIJOINX->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   OCVHIJOINX->SetLineColor(ci);
   OCVHIJOINX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OCVHIJOINX->GetXaxis()->SetLabelFont(42);
   OCVHIJOINX->GetXaxis()->SetLabelSize(0.035);
   OCVHIJOINX->GetXaxis()->SetTitleSize(0.035);
   OCVHIJOINX->GetXaxis()->SetTitleFont(42);
   OCVHIJOINX->GetYaxis()->SetTitle("Entries");
   OCVHIJOINX->GetYaxis()->SetLabelFont(42);
   OCVHIJOINX->GetYaxis()->SetLabelSize(0.035);
   OCVHIJOINX->GetYaxis()->SetTitleSize(0.035);
   OCVHIJOINX->GetYaxis()->SetTitleFont(42);
   OCVHIJOINX->GetZaxis()->SetLabelFont(42);
   OCVHIJOINX->GetZaxis()->SetLabelSize(0.035);
   OCVHIJOINX->GetZaxis()->SetTitleSize(0.035);
   OCVHIJOINX->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(OCVHIJOINX,"");
   
   TH1F *QXBWIOBIPC = new TH1F("QXBWIOBIPC","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   QXBWIOBIPC->SetBinContent(701,1672.956);
   QXBWIOBIPC->SetMinimum(0.1);
   QXBWIOBIPC->SetMaximum(0);
   QXBWIOBIPC->SetEntries(13);
   QXBWIOBIPC->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   QXBWIOBIPC->SetFillColor(ci);
   QXBWIOBIPC->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   QXBWIOBIPC->SetLineColor(ci);
   QXBWIOBIPC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   QXBWIOBIPC->GetXaxis()->SetLabelFont(42);
   QXBWIOBIPC->GetXaxis()->SetLabelSize(0.035);
   QXBWIOBIPC->GetXaxis()->SetTitleSize(0.035);
   QXBWIOBIPC->GetXaxis()->SetTitleFont(42);
   QXBWIOBIPC->GetYaxis()->SetTitle("Entries");
   QXBWIOBIPC->GetYaxis()->SetLabelFont(42);
   QXBWIOBIPC->GetYaxis()->SetLabelSize(0.035);
   QXBWIOBIPC->GetYaxis()->SetTitleSize(0.035);
   QXBWIOBIPC->GetYaxis()->SetTitleFont(42);
   QXBWIOBIPC->GetZaxis()->SetLabelFont(42);
   QXBWIOBIPC->GetZaxis()->SetLabelSize(0.035);
   QXBWIOBIPC->GetZaxis()->SetTitleSize(0.035);
   QXBWIOBIPC->GetZaxis()->SetTitleFont(42);
   PAGKRCEMAG->Add(QXBWIOBIPC,"");
   PAGKRCEMAG->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("XTTSHPNNMD","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VICTFYBCJT","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("DRBPZSQNDL","ee_llqqqq","f");

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
   entry=leg->AddEntry("QWCDAEHSIB","ee_qqqq","f");

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
   entry=leg->AddEntry("RZBCRNGGOK","ee_nunuqq","f");

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
   entry=leg->AddEntry("NNIZWYVXKA","ee_lnuqq","f");

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
   entry=leg->AddEntry("YCDRHLPJYK","ee_qqll","f");

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
   entry=leg->AddEntry("SWNMCIXXMW","ee_qq","f");

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
   entry=leg->AddEntry("RWTFLBTKZJ","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ILJSTQPAZX","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("OKDSPEXJBR","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("BZQZTLTNAU","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("GSCOJVFOGK","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("CGGAFHCPQL","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("VCVLMILYCZ","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("ZFZUYKEZMU","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("PAXVIXVVWQ","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("PMCQQCKMWX","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("OCVHIJOINX","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("QXBWIOBIPC","gammagamma_qqqq_BS_BS","f");

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
   POHJUMVYIL->Modified();
   POHJUMVYIL->cd();
   POHJUMVYIL->SetSelected(POHJUMVYIL);
}
