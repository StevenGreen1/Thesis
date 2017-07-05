{
//=========Macro generated from canvas: KQPPWZDNRL/NumberOfIsolatedLeptons
//=========  (Tue Apr 25 10:04:10 2017) by ROOT version5.34/30
   TCanvas *KQPPWZDNRL = new TCanvas("KQPPWZDNRL", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   KQPPWZDNRL->SetHighLightColor(2);
   KQPPWZDNRL->Range(-1.25,-2.71298,11.25,7.74042);
   KQPPWZDNRL->SetFillColor(0);
   KQPPWZDNRL->SetBorderMode(0);
   KQPPWZDNRL->SetBorderSize(2);
   KQPPWZDNRL->SetLogy();
   KQPPWZDNRL->SetFrameBorderMode(0);
   KQPPWZDNRL->SetFrameBorderMode(0);
   
   THStack *ITHMJIXWHZ = new THStack();
   ITHMJIXWHZ->SetName("ITHMJIXWHZ");
   ITHMJIXWHZ->SetTitle("NumberOfIsolatedLeptons");
   ITHMJIXWHZ->SetMinimum(0.1);
   
   TH1F *ITHMJIXWHZ_stack_17 = new TH1F("ITHMJIXWHZ_stack_17","NumberOfIsolatedLeptons",10,0,10);
   ITHMJIXWHZ_stack_17->SetMinimum(0.02149612);
   ITHMJIXWHZ_stack_17->SetMaximum(4955415);
   ITHMJIXWHZ_stack_17->SetDirectory(0);
   ITHMJIXWHZ_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   ITHMJIXWHZ_stack_17->SetLineColor(ci);
   ITHMJIXWHZ_stack_17->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ITHMJIXWHZ_stack_17->GetXaxis()->SetLabelFont(42);
   ITHMJIXWHZ_stack_17->GetXaxis()->SetLabelSize(0.035);
   ITHMJIXWHZ_stack_17->GetXaxis()->SetTitleSize(0.035);
   ITHMJIXWHZ_stack_17->GetXaxis()->SetTitleFont(42);
   ITHMJIXWHZ_stack_17->GetYaxis()->SetTitle("Entries");
   ITHMJIXWHZ_stack_17->GetYaxis()->SetLabelFont(42);
   ITHMJIXWHZ_stack_17->GetYaxis()->SetLabelSize(0.035);
   ITHMJIXWHZ_stack_17->GetYaxis()->SetTitleSize(0.035);
   ITHMJIXWHZ_stack_17->GetYaxis()->SetTitleFont(42);
   ITHMJIXWHZ_stack_17->GetZaxis()->SetLabelFont(42);
   ITHMJIXWHZ_stack_17->GetZaxis()->SetLabelSize(0.035);
   ITHMJIXWHZ_stack_17->GetZaxis()->SetTitleSize(0.035);
   ITHMJIXWHZ_stack_17->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->SetHistogram(ITHMJIXWHZ_stack_17);
   
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,23618.04);
   KZFBWDBJXY->SetMinimum(0.1);
   KZFBWDBJXY->SetMaximum(47236.09);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetFillColor(1);
   KZFBWDBJXY->SetFillStyle(3001);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(KZFBWDBJXY,"");
   
   TH1F *KWVYGUUPYB = new TH1F("KWVYGUUPYB","NumberOfIsolatedLeptons",10,0,10);
   KWVYGUUPYB->SetBinContent(1,43001.88);
   KWVYGUUPYB->SetMinimum(0.1);
   KWVYGUUPYB->SetMaximum(86003.76);
   KWVYGUUPYB->SetEntries(192870);
   KWVYGUUPYB->SetStats(0);

   ci = TColor::GetColor("#000066");
   KWVYGUUPYB->SetFillColor(ci);
   KWVYGUUPYB->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   KWVYGUUPYB->SetLineColor(ci);
   KWVYGUUPYB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KWVYGUUPYB->GetXaxis()->SetLabelFont(42);
   KWVYGUUPYB->GetXaxis()->SetLabelSize(0.035);
   KWVYGUUPYB->GetXaxis()->SetTitleSize(0.035);
   KWVYGUUPYB->GetXaxis()->SetTitleFont(42);
   KWVYGUUPYB->GetYaxis()->SetTitle("Entries");
   KWVYGUUPYB->GetYaxis()->SetLabelFont(42);
   KWVYGUUPYB->GetYaxis()->SetLabelSize(0.035);
   KWVYGUUPYB->GetYaxis()->SetTitleSize(0.035);
   KWVYGUUPYB->GetYaxis()->SetTitleFont(42);
   KWVYGUUPYB->GetZaxis()->SetLabelFont(42);
   KWVYGUUPYB->GetZaxis()->SetLabelSize(0.035);
   KWVYGUUPYB->GetZaxis()->SetTitleSize(0.035);
   KWVYGUUPYB->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(KWVYGUUPYB,"");
   
   TH1F *PYXQYZZAWA = new TH1F("PYXQYZZAWA","NumberOfIsolatedLeptons",10,0,10);
   PYXQYZZAWA->SetBinContent(1,709.0712);
   PYXQYZZAWA->SetMinimum(0.1);
   PYXQYZZAWA->SetMaximum(1418.142);
   PYXQYZZAWA->SetEntries(9657);
   PYXQYZZAWA->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   PYXQYZZAWA->SetFillColor(ci);
   PYXQYZZAWA->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   PYXQYZZAWA->SetLineColor(ci);
   PYXQYZZAWA->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PYXQYZZAWA->GetXaxis()->SetLabelFont(42);
   PYXQYZZAWA->GetXaxis()->SetLabelSize(0.035);
   PYXQYZZAWA->GetXaxis()->SetTitleSize(0.035);
   PYXQYZZAWA->GetXaxis()->SetTitleFont(42);
   PYXQYZZAWA->GetYaxis()->SetTitle("Entries");
   PYXQYZZAWA->GetYaxis()->SetLabelFont(42);
   PYXQYZZAWA->GetYaxis()->SetLabelSize(0.035);
   PYXQYZZAWA->GetYaxis()->SetTitleSize(0.035);
   PYXQYZZAWA->GetYaxis()->SetTitleFont(42);
   PYXQYZZAWA->GetZaxis()->SetLabelFont(42);
   PYXQYZZAWA->GetZaxis()->SetLabelSize(0.035);
   PYXQYZZAWA->GetZaxis()->SetTitleSize(0.035);
   PYXQYZZAWA->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(PYXQYZZAWA,"");
   
   TH1F *YJLZTPJRDE = new TH1F("YJLZTPJRDE","NumberOfIsolatedLeptons",10,0,10);
   YJLZTPJRDE->SetBinContent(1,6464.335);
   YJLZTPJRDE->SetMinimum(0.1);
   YJLZTPJRDE->SetMaximum(12928.67);
   YJLZTPJRDE->SetEntries(2025);
   YJLZTPJRDE->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   YJLZTPJRDE->SetFillColor(ci);
   YJLZTPJRDE->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   YJLZTPJRDE->SetLineColor(ci);
   YJLZTPJRDE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YJLZTPJRDE->GetXaxis()->SetLabelFont(42);
   YJLZTPJRDE->GetXaxis()->SetLabelSize(0.035);
   YJLZTPJRDE->GetXaxis()->SetTitleSize(0.035);
   YJLZTPJRDE->GetXaxis()->SetTitleFont(42);
   YJLZTPJRDE->GetYaxis()->SetTitle("Entries");
   YJLZTPJRDE->GetYaxis()->SetLabelFont(42);
   YJLZTPJRDE->GetYaxis()->SetLabelSize(0.035);
   YJLZTPJRDE->GetYaxis()->SetTitleSize(0.035);
   YJLZTPJRDE->GetYaxis()->SetTitleFont(42);
   YJLZTPJRDE->GetZaxis()->SetLabelFont(42);
   YJLZTPJRDE->GetZaxis()->SetLabelSize(0.035);
   YJLZTPJRDE->GetZaxis()->SetTitleSize(0.035);
   YJLZTPJRDE->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(YJLZTPJRDE,"");
   
   TH1F *EOWFMUKTBS = new TH1F("EOWFMUKTBS","NumberOfIsolatedLeptons",10,0,10);
   EOWFMUKTBS->SetBinContent(1,513789.8);
   EOWFMUKTBS->SetMinimum(0.1);
   EOWFMUKTBS->SetMaximum(1027580);
   EOWFMUKTBS->SetEntries(253693);
   EOWFMUKTBS->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   EOWFMUKTBS->SetFillColor(ci);
   EOWFMUKTBS->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   EOWFMUKTBS->SetLineColor(ci);
   EOWFMUKTBS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EOWFMUKTBS->GetXaxis()->SetLabelFont(42);
   EOWFMUKTBS->GetXaxis()->SetLabelSize(0.035);
   EOWFMUKTBS->GetXaxis()->SetTitleSize(0.035);
   EOWFMUKTBS->GetXaxis()->SetTitleFont(42);
   EOWFMUKTBS->GetYaxis()->SetTitle("Entries");
   EOWFMUKTBS->GetYaxis()->SetLabelFont(42);
   EOWFMUKTBS->GetYaxis()->SetLabelSize(0.035);
   EOWFMUKTBS->GetYaxis()->SetTitleSize(0.035);
   EOWFMUKTBS->GetYaxis()->SetTitleFont(42);
   EOWFMUKTBS->GetZaxis()->SetLabelFont(42);
   EOWFMUKTBS->GetZaxis()->SetLabelSize(0.035);
   EOWFMUKTBS->GetZaxis()->SetTitleSize(0.035);
   EOWFMUKTBS->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(EOWFMUKTBS,"");
   
   TH1F *OASUSKCFLS = new TH1F("OASUSKCFLS","NumberOfIsolatedLeptons",10,0,10);
   OASUSKCFLS->SetBinContent(1,1235321);
   OASUSKCFLS->SetMinimum(0.1);
   OASUSKCFLS->SetMaximum(2470642);
   OASUSKCFLS->SetEntries(400522);
   OASUSKCFLS->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   OASUSKCFLS->SetFillColor(ci);
   OASUSKCFLS->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   OASUSKCFLS->SetLineColor(ci);
   OASUSKCFLS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   OASUSKCFLS->GetXaxis()->SetLabelFont(42);
   OASUSKCFLS->GetXaxis()->SetLabelSize(0.035);
   OASUSKCFLS->GetXaxis()->SetTitleSize(0.035);
   OASUSKCFLS->GetXaxis()->SetTitleFont(42);
   OASUSKCFLS->GetYaxis()->SetTitle("Entries");
   OASUSKCFLS->GetYaxis()->SetLabelFont(42);
   OASUSKCFLS->GetYaxis()->SetLabelSize(0.035);
   OASUSKCFLS->GetYaxis()->SetTitleSize(0.035);
   OASUSKCFLS->GetYaxis()->SetTitleFont(42);
   OASUSKCFLS->GetZaxis()->SetLabelFont(42);
   OASUSKCFLS->GetZaxis()->SetLabelSize(0.035);
   OASUSKCFLS->GetZaxis()->SetTitleSize(0.035);
   OASUSKCFLS->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(OASUSKCFLS,"");
   
   TH1F *RCTXHOGDKN = new TH1F("RCTXHOGDKN","NumberOfIsolatedLeptons",10,0,10);
   RCTXHOGDKN->SetBinContent(1,5985.927);
   RCTXHOGDKN->SetMinimum(0.1);
   RCTXHOGDKN->SetMaximum(11971.85);
   RCTXHOGDKN->SetEntries(3074);
   RCTXHOGDKN->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   RCTXHOGDKN->SetFillColor(ci);
   RCTXHOGDKN->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   RCTXHOGDKN->SetLineColor(ci);
   RCTXHOGDKN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RCTXHOGDKN->GetXaxis()->SetLabelFont(42);
   RCTXHOGDKN->GetXaxis()->SetLabelSize(0.035);
   RCTXHOGDKN->GetXaxis()->SetTitleSize(0.035);
   RCTXHOGDKN->GetXaxis()->SetTitleFont(42);
   RCTXHOGDKN->GetYaxis()->SetTitle("Entries");
   RCTXHOGDKN->GetYaxis()->SetLabelFont(42);
   RCTXHOGDKN->GetYaxis()->SetLabelSize(0.035);
   RCTXHOGDKN->GetYaxis()->SetTitleSize(0.035);
   RCTXHOGDKN->GetYaxis()->SetTitleFont(42);
   RCTXHOGDKN->GetZaxis()->SetLabelFont(42);
   RCTXHOGDKN->GetZaxis()->SetLabelSize(0.035);
   RCTXHOGDKN->GetZaxis()->SetTitleSize(0.035);
   RCTXHOGDKN->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(RCTXHOGDKN,"");
   
   TH1F *RABYNTXTBK = new TH1F("RABYNTXTBK","NumberOfIsolatedLeptons",10,0,10);
   RABYNTXTBK->SetBinContent(1,34551.23);
   RABYNTXTBK->SetMinimum(0.1);
   RABYNTXTBK->SetMaximum(69102.45);
   RABYNTXTBK->SetEntries(2795);
   RABYNTXTBK->SetStats(0);

   ci = TColor::GetColor("#006633");
   RABYNTXTBK->SetFillColor(ci);
   RABYNTXTBK->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   RABYNTXTBK->SetLineColor(ci);
   RABYNTXTBK->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RABYNTXTBK->GetXaxis()->SetLabelFont(42);
   RABYNTXTBK->GetXaxis()->SetLabelSize(0.035);
   RABYNTXTBK->GetXaxis()->SetTitleSize(0.035);
   RABYNTXTBK->GetXaxis()->SetTitleFont(42);
   RABYNTXTBK->GetYaxis()->SetTitle("Entries");
   RABYNTXTBK->GetYaxis()->SetLabelFont(42);
   RABYNTXTBK->GetYaxis()->SetLabelSize(0.035);
   RABYNTXTBK->GetYaxis()->SetTitleSize(0.035);
   RABYNTXTBK->GetYaxis()->SetTitleFont(42);
   RABYNTXTBK->GetZaxis()->SetLabelFont(42);
   RABYNTXTBK->GetZaxis()->SetLabelSize(0.035);
   RABYNTXTBK->GetZaxis()->SetTitleSize(0.035);
   RABYNTXTBK->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(RABYNTXTBK,"");
   
   TH1F *NGKCRFNUSE = new TH1F("NGKCRFNUSE","NumberOfIsolatedLeptons",10,0,10);
   NGKCRFNUSE->SetBinContent(1,878.8586);
   NGKCRFNUSE->SetMinimum(0.1);
   NGKCRFNUSE->SetMaximum(1757.717);
   NGKCRFNUSE->SetEntries(258);
   NGKCRFNUSE->SetStats(0);
   NGKCRFNUSE->SetFillColor(3);
   NGKCRFNUSE->SetFillStyle(3001);
   NGKCRFNUSE->SetLineColor(3);
   NGKCRFNUSE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NGKCRFNUSE->GetXaxis()->SetLabelFont(42);
   NGKCRFNUSE->GetXaxis()->SetLabelSize(0.035);
   NGKCRFNUSE->GetXaxis()->SetTitleSize(0.035);
   NGKCRFNUSE->GetXaxis()->SetTitleFont(42);
   NGKCRFNUSE->GetYaxis()->SetTitle("Entries");
   NGKCRFNUSE->GetYaxis()->SetLabelFont(42);
   NGKCRFNUSE->GetYaxis()->SetLabelSize(0.035);
   NGKCRFNUSE->GetYaxis()->SetTitleSize(0.035);
   NGKCRFNUSE->GetYaxis()->SetTitleFont(42);
   NGKCRFNUSE->GetZaxis()->SetLabelFont(42);
   NGKCRFNUSE->GetZaxis()->SetLabelSize(0.035);
   NGKCRFNUSE->GetZaxis()->SetTitleSize(0.035);
   NGKCRFNUSE->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(NGKCRFNUSE,"");
   
   TH1F *OTTTPCMSNH = new TH1F("OTTTPCMSNH","NumberOfIsolatedLeptons",10,0,10);
   OTTTPCMSNH->SetBinContent(1,1034.078);
   OTTTPCMSNH->SetMinimum(0.1);
   OTTTPCMSNH->SetMaximum(2068.156);
   OTTTPCMSNH->SetEntries(98);
   OTTTPCMSNH->SetStats(0);

   ci = TColor::GetColor("#990033");
   OTTTPCMSNH->SetFillColor(ci);
   OTTTPCMSNH->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   OTTTPCMSNH->SetLineColor(ci);
   OTTTPCMSNH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   OTTTPCMSNH->GetXaxis()->SetLabelFont(42);
   OTTTPCMSNH->GetXaxis()->SetLabelSize(0.035);
   OTTTPCMSNH->GetXaxis()->SetTitleSize(0.035);
   OTTTPCMSNH->GetXaxis()->SetTitleFont(42);
   OTTTPCMSNH->GetYaxis()->SetTitle("Entries");
   OTTTPCMSNH->GetYaxis()->SetLabelFont(42);
   OTTTPCMSNH->GetYaxis()->SetLabelSize(0.035);
   OTTTPCMSNH->GetYaxis()->SetTitleSize(0.035);
   OTTTPCMSNH->GetYaxis()->SetTitleFont(42);
   OTTTPCMSNH->GetZaxis()->SetLabelFont(42);
   OTTTPCMSNH->GetZaxis()->SetLabelSize(0.035);
   OTTTPCMSNH->GetZaxis()->SetTitleSize(0.035);
   OTTTPCMSNH->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(OTTTPCMSNH,"");
   
   TH1F *GPGKUJSWPE = new TH1F("GPGKUJSWPE","NumberOfIsolatedLeptons",10,0,10);
   GPGKUJSWPE->SetBinContent(1,1142.616);
   GPGKUJSWPE->SetMinimum(0.1);
   GPGKUJSWPE->SetMaximum(2285.232);
   GPGKUJSWPE->SetEntries(363);
   GPGKUJSWPE->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   GPGKUJSWPE->SetFillColor(ci);
   GPGKUJSWPE->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   GPGKUJSWPE->SetLineColor(ci);
   GPGKUJSWPE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GPGKUJSWPE->GetXaxis()->SetLabelFont(42);
   GPGKUJSWPE->GetXaxis()->SetLabelSize(0.035);
   GPGKUJSWPE->GetXaxis()->SetTitleSize(0.035);
   GPGKUJSWPE->GetXaxis()->SetTitleFont(42);
   GPGKUJSWPE->GetYaxis()->SetTitle("Entries");
   GPGKUJSWPE->GetYaxis()->SetLabelFont(42);
   GPGKUJSWPE->GetYaxis()->SetLabelSize(0.035);
   GPGKUJSWPE->GetYaxis()->SetTitleSize(0.035);
   GPGKUJSWPE->GetYaxis()->SetTitleFont(42);
   GPGKUJSWPE->GetZaxis()->SetLabelFont(42);
   GPGKUJSWPE->GetZaxis()->SetLabelSize(0.035);
   GPGKUJSWPE->GetZaxis()->SetTitleSize(0.035);
   GPGKUJSWPE->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(GPGKUJSWPE,"");
   
   TH1F *ZLNRNBCPRE = new TH1F("ZLNRNBCPRE","NumberOfIsolatedLeptons",10,0,10);
   ZLNRNBCPRE->SetBinContent(1,479.3946);
   ZLNRNBCPRE->SetMinimum(0.1);
   ZLNRNBCPRE->SetMaximum(958.7891);
   ZLNRNBCPRE->SetEntries(44);
   ZLNRNBCPRE->SetStats(0);

   ci = TColor::GetColor("#a42400");
   ZLNRNBCPRE->SetFillColor(ci);
   ZLNRNBCPRE->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   ZLNRNBCPRE->SetLineColor(ci);
   ZLNRNBCPRE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZLNRNBCPRE->GetXaxis()->SetLabelFont(42);
   ZLNRNBCPRE->GetXaxis()->SetLabelSize(0.035);
   ZLNRNBCPRE->GetXaxis()->SetTitleSize(0.035);
   ZLNRNBCPRE->GetXaxis()->SetTitleFont(42);
   ZLNRNBCPRE->GetYaxis()->SetTitle("Entries");
   ZLNRNBCPRE->GetYaxis()->SetLabelFont(42);
   ZLNRNBCPRE->GetYaxis()->SetLabelSize(0.035);
   ZLNRNBCPRE->GetYaxis()->SetTitleSize(0.035);
   ZLNRNBCPRE->GetYaxis()->SetTitleFont(42);
   ZLNRNBCPRE->GetZaxis()->SetLabelFont(42);
   ZLNRNBCPRE->GetZaxis()->SetLabelSize(0.035);
   ZLNRNBCPRE->GetZaxis()->SetTitleSize(0.035);
   ZLNRNBCPRE->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(ZLNRNBCPRE,"");
   
   TH1F *QWXQTPZTBM = new TH1F("QWXQTPZTBM","NumberOfIsolatedLeptons",10,0,10);
   QWXQTPZTBM->SetBinContent(1,12699.44);
   QWXQTPZTBM->SetMinimum(0.1);
   QWXQTPZTBM->SetMaximum(25398.88);
   QWXQTPZTBM->SetEntries(45909);
   QWXQTPZTBM->SetStats(0);

   ci = TColor::GetColor("#001544");
   QWXQTPZTBM->SetFillColor(ci);
   QWXQTPZTBM->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   QWXQTPZTBM->SetLineColor(ci);
   QWXQTPZTBM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QWXQTPZTBM->GetXaxis()->SetLabelFont(42);
   QWXQTPZTBM->GetXaxis()->SetLabelSize(0.035);
   QWXQTPZTBM->GetXaxis()->SetTitleSize(0.035);
   QWXQTPZTBM->GetXaxis()->SetTitleFont(42);
   QWXQTPZTBM->GetYaxis()->SetTitle("Entries");
   QWXQTPZTBM->GetYaxis()->SetLabelFont(42);
   QWXQTPZTBM->GetYaxis()->SetLabelSize(0.035);
   QWXQTPZTBM->GetYaxis()->SetTitleSize(0.035);
   QWXQTPZTBM->GetYaxis()->SetTitleFont(42);
   QWXQTPZTBM->GetZaxis()->SetLabelFont(42);
   QWXQTPZTBM->GetZaxis()->SetLabelSize(0.035);
   QWXQTPZTBM->GetZaxis()->SetTitleSize(0.035);
   QWXQTPZTBM->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(QWXQTPZTBM,"");
   
   TH1F *WXGXVBGRWJ = new TH1F("WXGXVBGRWJ","NumberOfIsolatedLeptons",10,0,10);
   WXGXVBGRWJ->SetBinContent(1,55799.74);
   WXGXVBGRWJ->SetMinimum(0.1);
   WXGXVBGRWJ->SetMaximum(111599.5);
   WXGXVBGRWJ->SetEntries(63129);
   WXGXVBGRWJ->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   WXGXVBGRWJ->SetFillColor(ci);
   WXGXVBGRWJ->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   WXGXVBGRWJ->SetLineColor(ci);
   WXGXVBGRWJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   WXGXVBGRWJ->GetXaxis()->SetLabelFont(42);
   WXGXVBGRWJ->GetXaxis()->SetLabelSize(0.035);
   WXGXVBGRWJ->GetXaxis()->SetTitleSize(0.035);
   WXGXVBGRWJ->GetXaxis()->SetTitleFont(42);
   WXGXVBGRWJ->GetYaxis()->SetTitle("Entries");
   WXGXVBGRWJ->GetYaxis()->SetLabelFont(42);
   WXGXVBGRWJ->GetYaxis()->SetLabelSize(0.035);
   WXGXVBGRWJ->GetYaxis()->SetTitleSize(0.035);
   WXGXVBGRWJ->GetYaxis()->SetTitleFont(42);
   WXGXVBGRWJ->GetZaxis()->SetLabelFont(42);
   WXGXVBGRWJ->GetZaxis()->SetLabelSize(0.035);
   WXGXVBGRWJ->GetZaxis()->SetTitleSize(0.035);
   WXGXVBGRWJ->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(WXGXVBGRWJ,"");
   
   TH1F *RSTZOPUKVT = new TH1F("RSTZOPUKVT","NumberOfIsolatedLeptons",10,0,10);
   RSTZOPUKVT->SetBinContent(1,12782.63);
   RSTZOPUKVT->SetMinimum(0.1);
   RSTZOPUKVT->SetMaximum(25565.25);
   RSTZOPUKVT->SetEntries(46210);
   RSTZOPUKVT->SetStats(0);

   ci = TColor::GetColor("#620e00");
   RSTZOPUKVT->SetFillColor(ci);
   RSTZOPUKVT->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   RSTZOPUKVT->SetLineColor(ci);
   RSTZOPUKVT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RSTZOPUKVT->GetXaxis()->SetLabelFont(42);
   RSTZOPUKVT->GetXaxis()->SetLabelSize(0.035);
   RSTZOPUKVT->GetXaxis()->SetTitleSize(0.035);
   RSTZOPUKVT->GetXaxis()->SetTitleFont(42);
   RSTZOPUKVT->GetYaxis()->SetTitle("Entries");
   RSTZOPUKVT->GetYaxis()->SetLabelFont(42);
   RSTZOPUKVT->GetYaxis()->SetLabelSize(0.035);
   RSTZOPUKVT->GetYaxis()->SetTitleSize(0.035);
   RSTZOPUKVT->GetYaxis()->SetTitleFont(42);
   RSTZOPUKVT->GetZaxis()->SetLabelFont(42);
   RSTZOPUKVT->GetZaxis()->SetLabelSize(0.035);
   RSTZOPUKVT->GetZaxis()->SetTitleSize(0.035);
   RSTZOPUKVT->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(RSTZOPUKVT,"");
   
   TH1F *AJGUZIGFPI = new TH1F("AJGUZIGFPI","NumberOfIsolatedLeptons",10,0,10);
   AJGUZIGFPI->SetBinContent(1,55732.39);
   AJGUZIGFPI->SetMinimum(0.1);
   AJGUZIGFPI->SetMaximum(111464.8);
   AJGUZIGFPI->SetEntries(62776);
   AJGUZIGFPI->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   AJGUZIGFPI->SetFillColor(ci);
   AJGUZIGFPI->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   AJGUZIGFPI->SetLineColor(ci);
   AJGUZIGFPI->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AJGUZIGFPI->GetXaxis()->SetLabelFont(42);
   AJGUZIGFPI->GetXaxis()->SetLabelSize(0.035);
   AJGUZIGFPI->GetXaxis()->SetTitleSize(0.035);
   AJGUZIGFPI->GetXaxis()->SetTitleFont(42);
   AJGUZIGFPI->GetYaxis()->SetTitle("Entries");
   AJGUZIGFPI->GetYaxis()->SetLabelFont(42);
   AJGUZIGFPI->GetYaxis()->SetLabelSize(0.035);
   AJGUZIGFPI->GetYaxis()->SetTitleSize(0.035);
   AJGUZIGFPI->GetYaxis()->SetTitleFont(42);
   AJGUZIGFPI->GetZaxis()->SetLabelFont(42);
   AJGUZIGFPI->GetZaxis()->SetLabelSize(0.035);
   AJGUZIGFPI->GetZaxis()->SetTitleSize(0.035);
   AJGUZIGFPI->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(AJGUZIGFPI,"");
   
   TH1F *GBWMILYPBB = new TH1F("GBWMILYPBB","NumberOfIsolatedLeptons",10,0,10);
   GBWMILYPBB->SetBinContent(1,1637.606);
   GBWMILYPBB->SetMinimum(0.1);
   GBWMILYPBB->SetMaximum(3275.211);
   GBWMILYPBB->SetEntries(242);
   GBWMILYPBB->SetStats(0);
   GBWMILYPBB->SetFillColor(4);
   GBWMILYPBB->SetFillStyle(3001);
   GBWMILYPBB->SetLineColor(4);
   GBWMILYPBB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GBWMILYPBB->GetXaxis()->SetLabelFont(42);
   GBWMILYPBB->GetXaxis()->SetLabelSize(0.035);
   GBWMILYPBB->GetXaxis()->SetTitleSize(0.035);
   GBWMILYPBB->GetXaxis()->SetTitleFont(42);
   GBWMILYPBB->GetYaxis()->SetTitle("Entries");
   GBWMILYPBB->GetYaxis()->SetLabelFont(42);
   GBWMILYPBB->GetYaxis()->SetLabelSize(0.035);
   GBWMILYPBB->GetYaxis()->SetTitleSize(0.035);
   GBWMILYPBB->GetYaxis()->SetTitleFont(42);
   GBWMILYPBB->GetZaxis()->SetLabelFont(42);
   GBWMILYPBB->GetZaxis()->SetLabelSize(0.035);
   GBWMILYPBB->GetZaxis()->SetTitleSize(0.035);
   GBWMILYPBB->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(GBWMILYPBB,"");
   
   TH1F *ZMPOTEBFAF = new TH1F("ZMPOTEBFAF","NumberOfIsolatedLeptons",10,0,10);
   ZMPOTEBFAF->SetBinContent(1,4041.566);
   ZMPOTEBFAF->SetMinimum(0.1);
   ZMPOTEBFAF->SetMaximum(8083.131);
   ZMPOTEBFAF->SetEntries(148);
   ZMPOTEBFAF->SetStats(0);

   ci = TColor::GetColor("#007db5");
   ZMPOTEBFAF->SetFillColor(ci);
   ZMPOTEBFAF->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   ZMPOTEBFAF->SetLineColor(ci);
   ZMPOTEBFAF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZMPOTEBFAF->GetXaxis()->SetLabelFont(42);
   ZMPOTEBFAF->GetXaxis()->SetLabelSize(0.035);
   ZMPOTEBFAF->GetXaxis()->SetTitleSize(0.035);
   ZMPOTEBFAF->GetXaxis()->SetTitleFont(42);
   ZMPOTEBFAF->GetYaxis()->SetTitle("Entries");
   ZMPOTEBFAF->GetYaxis()->SetLabelFont(42);
   ZMPOTEBFAF->GetYaxis()->SetLabelSize(0.035);
   ZMPOTEBFAF->GetYaxis()->SetTitleSize(0.035);
   ZMPOTEBFAF->GetYaxis()->SetTitleFont(42);
   ZMPOTEBFAF->GetZaxis()->SetLabelFont(42);
   ZMPOTEBFAF->GetZaxis()->SetLabelSize(0.035);
   ZMPOTEBFAF->GetZaxis()->SetTitleSize(0.035);
   ZMPOTEBFAF->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(ZMPOTEBFAF,"");
   
   TH1F *AMPMUZCHEO = new TH1F("AMPMUZCHEO","NumberOfIsolatedLeptons",10,0,10);
   AMPMUZCHEO->SetBinContent(1,2397.92);
   AMPMUZCHEO->SetMinimum(0.1);
   AMPMUZCHEO->SetMaximum(4795.839);
   AMPMUZCHEO->SetEntries(90);
   AMPMUZCHEO->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   AMPMUZCHEO->SetFillColor(ci);
   AMPMUZCHEO->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   AMPMUZCHEO->SetLineColor(ci);
   AMPMUZCHEO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AMPMUZCHEO->GetXaxis()->SetLabelFont(42);
   AMPMUZCHEO->GetXaxis()->SetLabelSize(0.035);
   AMPMUZCHEO->GetXaxis()->SetTitleSize(0.035);
   AMPMUZCHEO->GetXaxis()->SetTitleFont(42);
   AMPMUZCHEO->GetYaxis()->SetTitle("Entries");
   AMPMUZCHEO->GetYaxis()->SetLabelFont(42);
   AMPMUZCHEO->GetYaxis()->SetLabelSize(0.035);
   AMPMUZCHEO->GetYaxis()->SetTitleSize(0.035);
   AMPMUZCHEO->GetYaxis()->SetTitleFont(42);
   AMPMUZCHEO->GetZaxis()->SetLabelFont(42);
   AMPMUZCHEO->GetZaxis()->SetLabelSize(0.035);
   AMPMUZCHEO->GetZaxis()->SetTitleSize(0.035);
   AMPMUZCHEO->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(AMPMUZCHEO,"");
   
   TH1F *NXLIAYFWKO = new TH1F("NXLIAYFWKO","NumberOfIsolatedLeptons",10,0,10);
   NXLIAYFWKO->SetBinContent(1,1672.956);
   NXLIAYFWKO->SetMinimum(0.1);
   NXLIAYFWKO->SetMaximum(3345.913);
   NXLIAYFWKO->SetEntries(13);
   NXLIAYFWKO->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   NXLIAYFWKO->SetFillColor(ci);
   NXLIAYFWKO->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   NXLIAYFWKO->SetLineColor(ci);
   NXLIAYFWKO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NXLIAYFWKO->GetXaxis()->SetLabelFont(42);
   NXLIAYFWKO->GetXaxis()->SetLabelSize(0.035);
   NXLIAYFWKO->GetXaxis()->SetTitleSize(0.035);
   NXLIAYFWKO->GetXaxis()->SetTitleFont(42);
   NXLIAYFWKO->GetYaxis()->SetTitle("Entries");
   NXLIAYFWKO->GetYaxis()->SetLabelFont(42);
   NXLIAYFWKO->GetYaxis()->SetLabelSize(0.035);
   NXLIAYFWKO->GetYaxis()->SetTitleSize(0.035);
   NXLIAYFWKO->GetYaxis()->SetTitleFont(42);
   NXLIAYFWKO->GetZaxis()->SetLabelFont(42);
   NXLIAYFWKO->GetZaxis()->SetLabelSize(0.035);
   NXLIAYFWKO->GetZaxis()->SetTitleSize(0.035);
   NXLIAYFWKO->GetZaxis()->SetTitleFont(42);
   ITHMJIXWHZ->Add(NXLIAYFWKO,"");
   ITHMJIXWHZ->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("KZFBWDBJXY","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("KWVYGUUPYB","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("PYXQYZZAWA","ee_llqqqq","f");

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
   entry=leg->AddEntry("YJLZTPJRDE","ee_qqqq","f");

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
   entry=leg->AddEntry("EOWFMUKTBS","ee_nunuqq","f");

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
   entry=leg->AddEntry("OASUSKCFLS","ee_lnuqq","f");

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
   entry=leg->AddEntry("RCTXHOGDKN","ee_qqll","f");

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
   entry=leg->AddEntry("RABYNTXTBK","ee_qq","f");

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
   entry=leg->AddEntry("NGKCRFNUSE","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("OTTTPCMSNH","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("GPGKUJSWPE","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("ZLNRNBCPRE","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("QWXQTPZTBM","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("WXGXVBGRWJ","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("RSTZOPUKVT","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("AJGUZIGFPI","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("GBWMILYPBB","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZMPOTEBFAF","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("AMPMUZCHEO","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("NXLIAYFWKO","gammagamma_qqqq_BS_BS","f");

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
   KQPPWZDNRL->Modified();
   KQPPWZDNRL->cd();
   KQPPWZDNRL->SetSelected(KQPPWZDNRL);
}
