{
//=========Macro generated from canvas: XXAMTPCBJC/NumberOfIsolatedLeptons
//=========  (Wed Apr 26 09:07:52 2017) by ROOT version5.34/30
   TCanvas *XXAMTPCBJC = new TCanvas("XXAMTPCBJC", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   XXAMTPCBJC->SetHighLightColor(2);
   XXAMTPCBJC->Range(-1.25,-2.469388,11.25,6.205976);
   XXAMTPCBJC->SetFillColor(0);
   XXAMTPCBJC->SetBorderMode(0);
   XXAMTPCBJC->SetBorderSize(2);
   XXAMTPCBJC->SetLogy();
   XXAMTPCBJC->SetFrameBorderMode(0);
   XXAMTPCBJC->SetFrameBorderMode(0);
   
   THStack *VTFEOVFKXV = new THStack();
   VTFEOVFKXV->SetName("VTFEOVFKXV");
   VTFEOVFKXV->SetTitle("NumberOfIsolatedLeptons");
   VTFEOVFKXV->SetMinimum(0.1);
   
   TH1F *VTFEOVFKXV_stack_17 = new TH1F("VTFEOVFKXV_stack_17","NumberOfIsolatedLeptons",10,0,10);
   VTFEOVFKXV_stack_17->SetMinimum(0.02501198);
   VTFEOVFKXV_stack_17->SetMaximum(217991.4);
   VTFEOVFKXV_stack_17->SetDirectory(0);
   VTFEOVFKXV_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VTFEOVFKXV_stack_17->SetLineColor(ci);
   VTFEOVFKXV_stack_17->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VTFEOVFKXV_stack_17->GetXaxis()->SetLabelFont(42);
   VTFEOVFKXV_stack_17->GetXaxis()->SetLabelSize(0.035);
   VTFEOVFKXV_stack_17->GetXaxis()->SetTitleSize(0.035);
   VTFEOVFKXV_stack_17->GetXaxis()->SetTitleFont(42);
   VTFEOVFKXV_stack_17->GetYaxis()->SetTitle("Entries");
   VTFEOVFKXV_stack_17->GetYaxis()->SetLabelFont(42);
   VTFEOVFKXV_stack_17->GetYaxis()->SetLabelSize(0.035);
   VTFEOVFKXV_stack_17->GetYaxis()->SetTitleSize(0.035);
   VTFEOVFKXV_stack_17->GetYaxis()->SetTitleFont(42);
   VTFEOVFKXV_stack_17->GetZaxis()->SetLabelFont(42);
   VTFEOVFKXV_stack_17->GetZaxis()->SetLabelSize(0.035);
   VTFEOVFKXV_stack_17->GetZaxis()->SetTitleSize(0.035);
   VTFEOVFKXV_stack_17->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->SetHistogram(VTFEOVFKXV_stack_17);
   
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,16417.49);
   NQVJKQJKRV->SetMinimum(0.1);
   NQVJKQJKRV->SetMaximum(32834.99);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetFillColor(1);
   NQVJKQJKRV->SetFillStyle(3001);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(NQVJKQJKRV,"");
   
   TH1F *HWFODKTDIT = new TH1F("HWFODKTDIT","NumberOfIsolatedLeptons",10,0,10);
   HWFODKTDIT->SetBinContent(1,8581.719);
   HWFODKTDIT->SetMinimum(0.1);
   HWFODKTDIT->SetMaximum(17163.44);
   HWFODKTDIT->SetEntries(19209);
   HWFODKTDIT->SetStats(0);

   ci = TColor::GetColor("#000066");
   HWFODKTDIT->SetFillColor(ci);
   HWFODKTDIT->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   HWFODKTDIT->SetLineColor(ci);
   HWFODKTDIT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HWFODKTDIT->GetXaxis()->SetLabelFont(42);
   HWFODKTDIT->GetXaxis()->SetLabelSize(0.035);
   HWFODKTDIT->GetXaxis()->SetTitleSize(0.035);
   HWFODKTDIT->GetXaxis()->SetTitleFont(42);
   HWFODKTDIT->GetYaxis()->SetTitle("Entries");
   HWFODKTDIT->GetYaxis()->SetLabelFont(42);
   HWFODKTDIT->GetYaxis()->SetLabelSize(0.035);
   HWFODKTDIT->GetYaxis()->SetTitleSize(0.035);
   HWFODKTDIT->GetYaxis()->SetTitleFont(42);
   HWFODKTDIT->GetZaxis()->SetLabelFont(42);
   HWFODKTDIT->GetZaxis()->SetLabelSize(0.035);
   HWFODKTDIT->GetZaxis()->SetTitleSize(0.035);
   HWFODKTDIT->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(HWFODKTDIT,"");
   
   TH1F *QORXUKHNMJ = new TH1F("QORXUKHNMJ","NumberOfIsolatedLeptons",10,0,10);
   QORXUKHNMJ->SetBinContent(1,99.56946);
   QORXUKHNMJ->SetMinimum(0.1);
   QORXUKHNMJ->SetMaximum(199.1389);
   QORXUKHNMJ->SetEntries(678);
   QORXUKHNMJ->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   QORXUKHNMJ->SetFillColor(ci);
   QORXUKHNMJ->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   QORXUKHNMJ->SetLineColor(ci);
   QORXUKHNMJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QORXUKHNMJ->GetXaxis()->SetLabelFont(42);
   QORXUKHNMJ->GetXaxis()->SetLabelSize(0.035);
   QORXUKHNMJ->GetXaxis()->SetTitleSize(0.035);
   QORXUKHNMJ->GetXaxis()->SetTitleFont(42);
   QORXUKHNMJ->GetYaxis()->SetTitle("Entries");
   QORXUKHNMJ->GetYaxis()->SetLabelFont(42);
   QORXUKHNMJ->GetYaxis()->SetLabelSize(0.035);
   QORXUKHNMJ->GetYaxis()->SetTitleSize(0.035);
   QORXUKHNMJ->GetYaxis()->SetTitleFont(42);
   QORXUKHNMJ->GetZaxis()->SetLabelFont(42);
   QORXUKHNMJ->GetZaxis()->SetLabelSize(0.035);
   QORXUKHNMJ->GetZaxis()->SetTitleSize(0.035);
   QORXUKHNMJ->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(QORXUKHNMJ,"");
   
   TH1F *QJQTEKOUYV = new TH1F("QJQTEKOUYV","NumberOfIsolatedLeptons",10,0,10);
   QJQTEKOUYV->SetBinContent(1,1698.274);
   QJQTEKOUYV->SetMinimum(0.1);
   QJQTEKOUYV->SetMaximum(3396.547);
   QJQTEKOUYV->SetEntries(266);
   QJQTEKOUYV->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   QJQTEKOUYV->SetFillColor(ci);
   QJQTEKOUYV->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   QJQTEKOUYV->SetLineColor(ci);
   QJQTEKOUYV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QJQTEKOUYV->GetXaxis()->SetLabelFont(42);
   QJQTEKOUYV->GetXaxis()->SetLabelSize(0.035);
   QJQTEKOUYV->GetXaxis()->SetTitleSize(0.035);
   QJQTEKOUYV->GetXaxis()->SetTitleFont(42);
   QJQTEKOUYV->GetYaxis()->SetTitle("Entries");
   QJQTEKOUYV->GetYaxis()->SetLabelFont(42);
   QJQTEKOUYV->GetYaxis()->SetLabelSize(0.035);
   QJQTEKOUYV->GetYaxis()->SetTitleSize(0.035);
   QJQTEKOUYV->GetYaxis()->SetTitleFont(42);
   QJQTEKOUYV->GetZaxis()->SetLabelFont(42);
   QJQTEKOUYV->GetZaxis()->SetLabelSize(0.035);
   QJQTEKOUYV->GetZaxis()->SetTitleSize(0.035);
   QJQTEKOUYV->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(QJQTEKOUYV,"");
   
   TH1F *CTZREZXJQL = new TH1F("CTZREZXJQL","NumberOfIsolatedLeptons",10,0,10);
   CTZREZXJQL->SetBinContent(1,5350.61);
   CTZREZXJQL->SetMinimum(0.1);
   CTZREZXJQL->SetMaximum(10701.22);
   CTZREZXJQL->SetEntries(1322);
   CTZREZXJQL->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   CTZREZXJQL->SetFillColor(ci);
   CTZREZXJQL->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   CTZREZXJQL->SetLineColor(ci);
   CTZREZXJQL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   CTZREZXJQL->GetXaxis()->SetLabelFont(42);
   CTZREZXJQL->GetXaxis()->SetLabelSize(0.035);
   CTZREZXJQL->GetXaxis()->SetTitleSize(0.035);
   CTZREZXJQL->GetXaxis()->SetTitleFont(42);
   CTZREZXJQL->GetYaxis()->SetTitle("Entries");
   CTZREZXJQL->GetYaxis()->SetLabelFont(42);
   CTZREZXJQL->GetYaxis()->SetLabelSize(0.035);
   CTZREZXJQL->GetYaxis()->SetTitleSize(0.035);
   CTZREZXJQL->GetYaxis()->SetTitleFont(42);
   CTZREZXJQL->GetZaxis()->SetLabelFont(42);
   CTZREZXJQL->GetZaxis()->SetLabelSize(0.035);
   CTZREZXJQL->GetZaxis()->SetTitleSize(0.035);
   CTZREZXJQL->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(CTZREZXJQL,"");
   
   TH1F *PDNRXURVOY = new TH1F("PDNRXURVOY","NumberOfIsolatedLeptons",10,0,10);
   PDNRXURVOY->SetBinContent(1,9319.294);
   PDNRXURVOY->SetMinimum(0.1);
   PDNRXURVOY->SetMaximum(18638.59);
   PDNRXURVOY->SetEntries(1509);
   PDNRXURVOY->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   PDNRXURVOY->SetFillColor(ci);
   PDNRXURVOY->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   PDNRXURVOY->SetLineColor(ci);
   PDNRXURVOY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PDNRXURVOY->GetXaxis()->SetLabelFont(42);
   PDNRXURVOY->GetXaxis()->SetLabelSize(0.035);
   PDNRXURVOY->GetXaxis()->SetTitleSize(0.035);
   PDNRXURVOY->GetXaxis()->SetTitleFont(42);
   PDNRXURVOY->GetYaxis()->SetTitle("Entries");
   PDNRXURVOY->GetYaxis()->SetLabelFont(42);
   PDNRXURVOY->GetYaxis()->SetLabelSize(0.035);
   PDNRXURVOY->GetYaxis()->SetTitleSize(0.035);
   PDNRXURVOY->GetYaxis()->SetTitleFont(42);
   PDNRXURVOY->GetZaxis()->SetLabelFont(42);
   PDNRXURVOY->GetZaxis()->SetLabelSize(0.035);
   PDNRXURVOY->GetZaxis()->SetTitleSize(0.035);
   PDNRXURVOY->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(PDNRXURVOY,"");
   
   TH1F *IFGNQSKMYJ = new TH1F("IFGNQSKMYJ","NumberOfIsolatedLeptons",10,0,10);
   IFGNQSKMYJ->SetBinContent(1,233.7012);
   IFGNQSKMYJ->SetMinimum(0.1);
   IFGNQSKMYJ->SetMaximum(467.4024);
   IFGNQSKMYJ->SetEntries(60);
   IFGNQSKMYJ->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   IFGNQSKMYJ->SetFillColor(ci);
   IFGNQSKMYJ->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   IFGNQSKMYJ->SetLineColor(ci);
   IFGNQSKMYJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   IFGNQSKMYJ->GetXaxis()->SetLabelFont(42);
   IFGNQSKMYJ->GetXaxis()->SetLabelSize(0.035);
   IFGNQSKMYJ->GetXaxis()->SetTitleSize(0.035);
   IFGNQSKMYJ->GetXaxis()->SetTitleFont(42);
   IFGNQSKMYJ->GetYaxis()->SetTitle("Entries");
   IFGNQSKMYJ->GetYaxis()->SetLabelFont(42);
   IFGNQSKMYJ->GetYaxis()->SetLabelSize(0.035);
   IFGNQSKMYJ->GetYaxis()->SetTitleSize(0.035);
   IFGNQSKMYJ->GetYaxis()->SetTitleFont(42);
   IFGNQSKMYJ->GetZaxis()->SetLabelFont(42);
   IFGNQSKMYJ->GetZaxis()->SetLabelSize(0.035);
   IFGNQSKMYJ->GetZaxis()->SetTitleSize(0.035);
   IFGNQSKMYJ->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(IFGNQSKMYJ,"");
   
   TH1F *ABFCLRUBND = new TH1F("ABFCLRUBND","NumberOfIsolatedLeptons",10,0,10);
   ABFCLRUBND->SetBinContent(1,1585.586);
   ABFCLRUBND->SetMinimum(0.1);
   ABFCLRUBND->SetMaximum(3171.172);
   ABFCLRUBND->SetEntries(64);
   ABFCLRUBND->SetStats(0);

   ci = TColor::GetColor("#006633");
   ABFCLRUBND->SetFillColor(ci);
   ABFCLRUBND->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   ABFCLRUBND->SetLineColor(ci);
   ABFCLRUBND->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ABFCLRUBND->GetXaxis()->SetLabelFont(42);
   ABFCLRUBND->GetXaxis()->SetLabelSize(0.035);
   ABFCLRUBND->GetXaxis()->SetTitleSize(0.035);
   ABFCLRUBND->GetXaxis()->SetTitleFont(42);
   ABFCLRUBND->GetYaxis()->SetTitle("Entries");
   ABFCLRUBND->GetYaxis()->SetLabelFont(42);
   ABFCLRUBND->GetYaxis()->SetLabelSize(0.035);
   ABFCLRUBND->GetYaxis()->SetTitleSize(0.035);
   ABFCLRUBND->GetYaxis()->SetTitleFont(42);
   ABFCLRUBND->GetZaxis()->SetLabelFont(42);
   ABFCLRUBND->GetZaxis()->SetLabelSize(0.035);
   ABFCLRUBND->GetZaxis()->SetTitleSize(0.035);
   ABFCLRUBND->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(ABFCLRUBND,"");
   
   TH1F *ABJVCYQYQR = new TH1F("ABJVCYQYQR","NumberOfIsolatedLeptons",10,0,10);
   ABJVCYQYQR->SetBinContent(1,47.72728);
   ABJVCYQYQR->SetMinimum(0.1);
   ABJVCYQYQR->SetMaximum(95.45456);
   ABJVCYQYQR->SetEntries(7);
   ABJVCYQYQR->SetStats(0);
   ABJVCYQYQR->SetFillColor(3);
   ABJVCYQYQR->SetFillStyle(3001);
   ABJVCYQYQR->SetLineColor(3);
   ABJVCYQYQR->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ABJVCYQYQR->GetXaxis()->SetLabelFont(42);
   ABJVCYQYQR->GetXaxis()->SetLabelSize(0.035);
   ABJVCYQYQR->GetXaxis()->SetTitleSize(0.035);
   ABJVCYQYQR->GetXaxis()->SetTitleFont(42);
   ABJVCYQYQR->GetYaxis()->SetTitle("Entries");
   ABJVCYQYQR->GetYaxis()->SetLabelFont(42);
   ABJVCYQYQR->GetYaxis()->SetLabelSize(0.035);
   ABJVCYQYQR->GetYaxis()->SetTitleSize(0.035);
   ABJVCYQYQR->GetYaxis()->SetTitleFont(42);
   ABJVCYQYQR->GetZaxis()->SetLabelFont(42);
   ABJVCYQYQR->GetZaxis()->SetLabelSize(0.035);
   ABJVCYQYQR->GetZaxis()->SetTitleSize(0.035);
   ABJVCYQYQR->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(ABJVCYQYQR,"");
   
   TH1F *YNBSTBQAOS = new TH1F("YNBSTBQAOS","NumberOfIsolatedLeptons",10,0,10);
   YNBSTBQAOS->SetBinContent(1,42.20727);
   YNBSTBQAOS->SetMinimum(0.1);
   YNBSTBQAOS->SetMaximum(84.41454);
   YNBSTBQAOS->SetEntries(2);
   YNBSTBQAOS->SetStats(0);

   ci = TColor::GetColor("#990033");
   YNBSTBQAOS->SetFillColor(ci);
   YNBSTBQAOS->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   YNBSTBQAOS->SetLineColor(ci);
   YNBSTBQAOS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YNBSTBQAOS->GetXaxis()->SetLabelFont(42);
   YNBSTBQAOS->GetXaxis()->SetLabelSize(0.035);
   YNBSTBQAOS->GetXaxis()->SetTitleSize(0.035);
   YNBSTBQAOS->GetXaxis()->SetTitleFont(42);
   YNBSTBQAOS->GetYaxis()->SetTitle("Entries");
   YNBSTBQAOS->GetYaxis()->SetLabelFont(42);
   YNBSTBQAOS->GetYaxis()->SetLabelSize(0.035);
   YNBSTBQAOS->GetYaxis()->SetTitleSize(0.035);
   YNBSTBQAOS->GetYaxis()->SetTitleFont(42);
   YNBSTBQAOS->GetZaxis()->SetLabelFont(42);
   YNBSTBQAOS->GetZaxis()->SetLabelSize(0.035);
   YNBSTBQAOS->GetZaxis()->SetTitleSize(0.035);
   YNBSTBQAOS->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(YNBSTBQAOS,"");
   
   TH1F *KDQISQLISO = new TH1F("KDQISQLISO","NumberOfIsolatedLeptons",10,0,10);
   KDQISQLISO->SetBinContent(1,18.89987);
   KDQISQLISO->SetMinimum(0.1);
   KDQISQLISO->SetMaximum(37.79974);
   KDQISQLISO->SetEntries(3);
   KDQISQLISO->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   KDQISQLISO->SetFillColor(ci);
   KDQISQLISO->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   KDQISQLISO->SetLineColor(ci);
   KDQISQLISO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KDQISQLISO->GetXaxis()->SetLabelFont(42);
   KDQISQLISO->GetXaxis()->SetLabelSize(0.035);
   KDQISQLISO->GetXaxis()->SetTitleSize(0.035);
   KDQISQLISO->GetXaxis()->SetTitleFont(42);
   KDQISQLISO->GetYaxis()->SetTitle("Entries");
   KDQISQLISO->GetYaxis()->SetLabelFont(42);
   KDQISQLISO->GetYaxis()->SetLabelSize(0.035);
   KDQISQLISO->GetYaxis()->SetTitleSize(0.035);
   KDQISQLISO->GetYaxis()->SetTitleFont(42);
   KDQISQLISO->GetZaxis()->SetLabelFont(42);
   KDQISQLISO->GetZaxis()->SetLabelSize(0.035);
   KDQISQLISO->GetZaxis()->SetTitleSize(0.035);
   KDQISQLISO->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(KDQISQLISO,"");
   
   TH1F *PJDPKTMQXO = new TH1F("PJDPKTMQXO","NumberOfIsolatedLeptons",10,0,10);
   PJDPKTMQXO->SetBinContent(1,65.37201);
   PJDPKTMQXO->SetMinimum(0.1);
   PJDPKTMQXO->SetMaximum(130.744);
   PJDPKTMQXO->SetEntries(3);
   PJDPKTMQXO->SetStats(0);

   ci = TColor::GetColor("#a42400");
   PJDPKTMQXO->SetFillColor(ci);
   PJDPKTMQXO->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   PJDPKTMQXO->SetLineColor(ci);
   PJDPKTMQXO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PJDPKTMQXO->GetXaxis()->SetLabelFont(42);
   PJDPKTMQXO->GetXaxis()->SetLabelSize(0.035);
   PJDPKTMQXO->GetXaxis()->SetTitleSize(0.035);
   PJDPKTMQXO->GetXaxis()->SetTitleFont(42);
   PJDPKTMQXO->GetYaxis()->SetTitle("Entries");
   PJDPKTMQXO->GetYaxis()->SetLabelFont(42);
   PJDPKTMQXO->GetYaxis()->SetLabelSize(0.035);
   PJDPKTMQXO->GetYaxis()->SetTitleSize(0.035);
   PJDPKTMQXO->GetYaxis()->SetTitleFont(42);
   PJDPKTMQXO->GetZaxis()->SetLabelFont(42);
   PJDPKTMQXO->GetZaxis()->SetLabelSize(0.035);
   PJDPKTMQXO->GetZaxis()->SetTitleSize(0.035);
   PJDPKTMQXO->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(PJDPKTMQXO,"");
   
   TH1F *ZAVAFMYUKL = new TH1F("ZAVAFMYUKL","NumberOfIsolatedLeptons",10,0,10);
   ZAVAFMYUKL->SetBinContent(1,4420.359);
   ZAVAFMYUKL->SetMinimum(0.1);
   ZAVAFMYUKL->SetMaximum(8840.719);
   ZAVAFMYUKL->SetEntries(7983);
   ZAVAFMYUKL->SetStats(0);

   ci = TColor::GetColor("#001544");
   ZAVAFMYUKL->SetFillColor(ci);
   ZAVAFMYUKL->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   ZAVAFMYUKL->SetLineColor(ci);
   ZAVAFMYUKL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZAVAFMYUKL->GetXaxis()->SetLabelFont(42);
   ZAVAFMYUKL->GetXaxis()->SetLabelSize(0.035);
   ZAVAFMYUKL->GetXaxis()->SetTitleSize(0.035);
   ZAVAFMYUKL->GetXaxis()->SetTitleFont(42);
   ZAVAFMYUKL->GetYaxis()->SetTitle("Entries");
   ZAVAFMYUKL->GetYaxis()->SetLabelFont(42);
   ZAVAFMYUKL->GetYaxis()->SetLabelSize(0.035);
   ZAVAFMYUKL->GetYaxis()->SetTitleSize(0.035);
   ZAVAFMYUKL->GetYaxis()->SetTitleFont(42);
   ZAVAFMYUKL->GetZaxis()->SetLabelFont(42);
   ZAVAFMYUKL->GetZaxis()->SetLabelSize(0.035);
   ZAVAFMYUKL->GetZaxis()->SetTitleSize(0.035);
   ZAVAFMYUKL->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(ZAVAFMYUKL,"");
   
   TH1F *UKIHORQOPV = new TH1F("UKIHORQOPV","NumberOfIsolatedLeptons",10,0,10);
   UKIHORQOPV->SetBinContent(1,23148.97);
   UKIHORQOPV->SetMinimum(0.1);
   UKIHORQOPV->SetMaximum(46297.94);
   UKIHORQOPV->SetEntries(13081);
   UKIHORQOPV->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   UKIHORQOPV->SetFillColor(ci);
   UKIHORQOPV->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   UKIHORQOPV->SetLineColor(ci);
   UKIHORQOPV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UKIHORQOPV->GetXaxis()->SetLabelFont(42);
   UKIHORQOPV->GetXaxis()->SetLabelSize(0.035);
   UKIHORQOPV->GetXaxis()->SetTitleSize(0.035);
   UKIHORQOPV->GetXaxis()->SetTitleFont(42);
   UKIHORQOPV->GetYaxis()->SetTitle("Entries");
   UKIHORQOPV->GetYaxis()->SetLabelFont(42);
   UKIHORQOPV->GetYaxis()->SetLabelSize(0.035);
   UKIHORQOPV->GetYaxis()->SetTitleSize(0.035);
   UKIHORQOPV->GetYaxis()->SetTitleFont(42);
   UKIHORQOPV->GetZaxis()->SetLabelFont(42);
   UKIHORQOPV->GetZaxis()->SetLabelSize(0.035);
   UKIHORQOPV->GetZaxis()->SetTitleSize(0.035);
   UKIHORQOPV->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(UKIHORQOPV,"");
   
   TH1F *UEPQCLEITP = new TH1F("UEPQCLEITP","NumberOfIsolatedLeptons",10,0,10);
   UEPQCLEITP->SetBinContent(1,4494.557);
   UEPQCLEITP->SetMinimum(0.1);
   UEPQCLEITP->SetMaximum(8989.113);
   UEPQCLEITP->SetEntries(8117);
   UEPQCLEITP->SetStats(0);

   ci = TColor::GetColor("#620e00");
   UEPQCLEITP->SetFillColor(ci);
   UEPQCLEITP->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   UEPQCLEITP->SetLineColor(ci);
   UEPQCLEITP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UEPQCLEITP->GetXaxis()->SetLabelFont(42);
   UEPQCLEITP->GetXaxis()->SetLabelSize(0.035);
   UEPQCLEITP->GetXaxis()->SetTitleSize(0.035);
   UEPQCLEITP->GetXaxis()->SetTitleFont(42);
   UEPQCLEITP->GetYaxis()->SetTitle("Entries");
   UEPQCLEITP->GetYaxis()->SetLabelFont(42);
   UEPQCLEITP->GetYaxis()->SetLabelSize(0.035);
   UEPQCLEITP->GetYaxis()->SetTitleSize(0.035);
   UEPQCLEITP->GetYaxis()->SetTitleFont(42);
   UEPQCLEITP->GetZaxis()->SetLabelFont(42);
   UEPQCLEITP->GetZaxis()->SetLabelSize(0.035);
   UEPQCLEITP->GetZaxis()->SetTitleSize(0.035);
   UEPQCLEITP->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(UEPQCLEITP,"");
   
   TH1F *UKHOCRRDHH = new TH1F("UKHOCRRDHH","NumberOfIsolatedLeptons",10,0,10);
   UKHOCRRDHH->SetBinContent(1,23408.07);
   UKHOCRRDHH->SetMinimum(0.1);
   UKHOCRRDHH->SetMaximum(46816.15);
   UKHOCRRDHH->SetEntries(13170);
   UKHOCRRDHH->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   UKHOCRRDHH->SetFillColor(ci);
   UKHOCRRDHH->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   UKHOCRRDHH->SetLineColor(ci);
   UKHOCRRDHH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UKHOCRRDHH->GetXaxis()->SetLabelFont(42);
   UKHOCRRDHH->GetXaxis()->SetLabelSize(0.035);
   UKHOCRRDHH->GetXaxis()->SetTitleSize(0.035);
   UKHOCRRDHH->GetXaxis()->SetTitleFont(42);
   UKHOCRRDHH->GetYaxis()->SetTitle("Entries");
   UKHOCRRDHH->GetYaxis()->SetLabelFont(42);
   UKHOCRRDHH->GetYaxis()->SetLabelSize(0.035);
   UKHOCRRDHH->GetYaxis()->SetTitleSize(0.035);
   UKHOCRRDHH->GetYaxis()->SetTitleFont(42);
   UKHOCRRDHH->GetZaxis()->SetLabelFont(42);
   UKHOCRRDHH->GetZaxis()->SetLabelSize(0.035);
   UKHOCRRDHH->GetZaxis()->SetTitleSize(0.035);
   UKHOCRRDHH->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(UKHOCRRDHH,"");
   
   TH1F *BKUFHYXYCO = new TH1F("BKUFHYXYCO","NumberOfIsolatedLeptons",10,0,10);
   BKUFHYXYCO->SetBinContent(1,81.20349);
   BKUFHYXYCO->SetMinimum(0.1);
   BKUFHYXYCO->SetMaximum(162.407);
   BKUFHYXYCO->SetEntries(6);
   BKUFHYXYCO->SetStats(0);
   BKUFHYXYCO->SetFillColor(4);
   BKUFHYXYCO->SetFillStyle(3001);
   BKUFHYXYCO->SetLineColor(4);
   BKUFHYXYCO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BKUFHYXYCO->GetXaxis()->SetLabelFont(42);
   BKUFHYXYCO->GetXaxis()->SetLabelSize(0.035);
   BKUFHYXYCO->GetXaxis()->SetTitleSize(0.035);
   BKUFHYXYCO->GetXaxis()->SetTitleFont(42);
   BKUFHYXYCO->GetYaxis()->SetTitle("Entries");
   BKUFHYXYCO->GetYaxis()->SetLabelFont(42);
   BKUFHYXYCO->GetYaxis()->SetLabelSize(0.035);
   BKUFHYXYCO->GetYaxis()->SetTitleSize(0.035);
   BKUFHYXYCO->GetYaxis()->SetTitleFont(42);
   BKUFHYXYCO->GetZaxis()->SetLabelFont(42);
   BKUFHYXYCO->GetZaxis()->SetLabelSize(0.035);
   BKUFHYXYCO->GetZaxis()->SetTitleSize(0.035);
   BKUFHYXYCO->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(BKUFHYXYCO,"");
   
   TH1F *ATFHBYNNZP = new TH1F("ATFHBYNNZP","NumberOfIsolatedLeptons",10,0,10);
   ATFHBYNNZP->SetBinContent(1,54.64839);
   ATFHBYNNZP->SetMinimum(0.1);
   ATFHBYNNZP->SetMaximum(109.2968);
   ATFHBYNNZP->SetEntries(1);
   ATFHBYNNZP->SetStats(0);

   ci = TColor::GetColor("#007db5");
   ATFHBYNNZP->SetFillColor(ci);
   ATFHBYNNZP->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   ATFHBYNNZP->SetLineColor(ci);
   ATFHBYNNZP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ATFHBYNNZP->GetXaxis()->SetLabelFont(42);
   ATFHBYNNZP->GetXaxis()->SetLabelSize(0.035);
   ATFHBYNNZP->GetXaxis()->SetTitleSize(0.035);
   ATFHBYNNZP->GetXaxis()->SetTitleFont(42);
   ATFHBYNNZP->GetYaxis()->SetTitle("Entries");
   ATFHBYNNZP->GetYaxis()->SetLabelFont(42);
   ATFHBYNNZP->GetYaxis()->SetLabelSize(0.035);
   ATFHBYNNZP->GetYaxis()->SetTitleSize(0.035);
   ATFHBYNNZP->GetYaxis()->SetTitleFont(42);
   ATFHBYNNZP->GetZaxis()->SetLabelFont(42);
   ATFHBYNNZP->GetZaxis()->SetLabelSize(0.035);
   ATFHBYNNZP->GetZaxis()->SetTitleSize(0.035);
   ATFHBYNNZP->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(ATFHBYNNZP,"");
   
   TH1F *NDRXJITWTF = new TH1F("NDRXJITWTF","NumberOfIsolatedLeptons",10,0,10);
   NDRXJITWTF->SetBinContent(1,53.2871);
   NDRXJITWTF->SetMinimum(0.1);
   NDRXJITWTF->SetMaximum(106.5742);
   NDRXJITWTF->SetEntries(1);
   NDRXJITWTF->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   NDRXJITWTF->SetFillColor(ci);
   NDRXJITWTF->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   NDRXJITWTF->SetLineColor(ci);
   NDRXJITWTF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NDRXJITWTF->GetXaxis()->SetLabelFont(42);
   NDRXJITWTF->GetXaxis()->SetLabelSize(0.035);
   NDRXJITWTF->GetXaxis()->SetTitleSize(0.035);
   NDRXJITWTF->GetXaxis()->SetTitleFont(42);
   NDRXJITWTF->GetYaxis()->SetTitle("Entries");
   NDRXJITWTF->GetYaxis()->SetLabelFont(42);
   NDRXJITWTF->GetYaxis()->SetLabelSize(0.035);
   NDRXJITWTF->GetYaxis()->SetTitleSize(0.035);
   NDRXJITWTF->GetYaxis()->SetTitleFont(42);
   NDRXJITWTF->GetZaxis()->SetLabelFont(42);
   NDRXJITWTF->GetZaxis()->SetLabelSize(0.035);
   NDRXJITWTF->GetZaxis()->SetTitleSize(0.035);
   NDRXJITWTF->GetZaxis()->SetTitleFont(42);
   VTFEOVFKXV->Add(NDRXJITWTF,"");
   VTFEOVFKXV->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("NQVJKQJKRV","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HWFODKTDIT","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("QORXUKHNMJ","ee_llqqqq","f");

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
   entry=leg->AddEntry("QJQTEKOUYV","ee_qqqq","f");

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
   entry=leg->AddEntry("CTZREZXJQL","ee_nunuqq","f");

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
   entry=leg->AddEntry("PDNRXURVOY","ee_lnuqq","f");

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
   entry=leg->AddEntry("IFGNQSKMYJ","ee_qqll","f");

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
   entry=leg->AddEntry("ABFCLRUBND","ee_qq","f");

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
   entry=leg->AddEntry("ABJVCYQYQR","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("YNBSTBQAOS","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("KDQISQLISO","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("PJDPKTMQXO","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("ZAVAFMYUKL","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("UKIHORQOPV","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("UEPQCLEITP","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("UKHOCRRDHH","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("BKUFHYXYCO","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ATFHBYNNZP","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("NDRXJITWTF","gammagamma_qqqq_BS_EPA","f");

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
   leg->Draw();
   XXAMTPCBJC->Modified();
   XXAMTPCBJC->cd();
   XXAMTPCBJC->SetSelected(XXAMTPCBJC);
}
