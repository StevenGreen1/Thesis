{
//=========Macro generated from canvas: POUQKHFRSW/HighestEnergyIsolatedLeptonTransverseMomentum
//=========  (Wed Apr 26 09:07:52 2017) by ROOT version5.34/30
   TCanvas *POUQKHFRSW = new TCanvas("POUQKHFRSW", "HighestEnergyIsolatedLeptonTransverseMomentum",0,0,700,500);
   gStyle->SetOptStat(0);
   POUQKHFRSW->SetHighLightColor(2);
   POUQKHFRSW->Range(0,0,1,1);
   POUQKHFRSW->SetFillColor(0);
   POUQKHFRSW->SetBorderMode(0);
   POUQKHFRSW->SetBorderSize(2);
   POUQKHFRSW->SetLogy();
   POUQKHFRSW->SetFrameBorderMode(0);
   POUQKHFRSW->SetFrameBorderMode(0);
   
   THStack *LVREHAHLUY = new THStack();
   LVREHAHLUY->SetName("LVREHAHLUY");
   LVREHAHLUY->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   LVREHAHLUY->SetMinimum(0.1);
   
   TH1F *LVREHAHLUY_stack_19 = new TH1F("LVREHAHLUY_stack_19","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   LVREHAHLUY_stack_19->SetMinimum(-0);
   LVREHAHLUY_stack_19->SetMaximum(-nan);
   LVREHAHLUY_stack_19->SetDirectory(0);
   LVREHAHLUY_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LVREHAHLUY_stack_19->SetLineColor(ci);
   LVREHAHLUY_stack_19->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   LVREHAHLUY_stack_19->GetXaxis()->SetLabelFont(42);
   LVREHAHLUY_stack_19->GetXaxis()->SetLabelSize(0.035);
   LVREHAHLUY_stack_19->GetXaxis()->SetTitleSize(0.035);
   LVREHAHLUY_stack_19->GetXaxis()->SetTitleFont(42);
   LVREHAHLUY_stack_19->GetYaxis()->SetTitle("Entries");
   LVREHAHLUY_stack_19->GetYaxis()->SetLabelFont(42);
   LVREHAHLUY_stack_19->GetYaxis()->SetLabelSize(0.035);
   LVREHAHLUY_stack_19->GetYaxis()->SetTitleSize(0.035);
   LVREHAHLUY_stack_19->GetYaxis()->SetTitleFont(42);
   LVREHAHLUY_stack_19->GetZaxis()->SetLabelFont(42);
   LVREHAHLUY_stack_19->GetZaxis()->SetLabelSize(0.035);
   LVREHAHLUY_stack_19->GetZaxis()->SetTitleSize(0.035);
   LVREHAHLUY_stack_19->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->SetHistogram(LVREHAHLUY_stack_19);
   
   
   TH1F *UDFROZKSHQ = new TH1F("UDFROZKSHQ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   UDFROZKSHQ->SetBinContent(701,16417.49);
   UDFROZKSHQ->SetMinimum(0.1);
   UDFROZKSHQ->SetMaximum(0);
   UDFROZKSHQ->SetEntries(599399);
   UDFROZKSHQ->SetStats(0);
   UDFROZKSHQ->SetFillColor(1);
   UDFROZKSHQ->SetFillStyle(3001);
   UDFROZKSHQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   UDFROZKSHQ->GetXaxis()->SetLabelFont(42);
   UDFROZKSHQ->GetXaxis()->SetLabelSize(0.035);
   UDFROZKSHQ->GetXaxis()->SetTitleSize(0.035);
   UDFROZKSHQ->GetXaxis()->SetTitleFont(42);
   UDFROZKSHQ->GetYaxis()->SetTitle("Entries");
   UDFROZKSHQ->GetYaxis()->SetLabelFont(42);
   UDFROZKSHQ->GetYaxis()->SetLabelSize(0.035);
   UDFROZKSHQ->GetYaxis()->SetTitleSize(0.035);
   UDFROZKSHQ->GetYaxis()->SetTitleFont(42);
   UDFROZKSHQ->GetZaxis()->SetLabelFont(42);
   UDFROZKSHQ->GetZaxis()->SetLabelSize(0.035);
   UDFROZKSHQ->GetZaxis()->SetTitleSize(0.035);
   UDFROZKSHQ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(UDFROZKSHQ,"");
   
   TH1F *OHCRXZJCRY = new TH1F("OHCRXZJCRY","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OHCRXZJCRY->SetBinContent(701,8581.719);
   OHCRXZJCRY->SetMinimum(0.1);
   OHCRXZJCRY->SetMaximum(0);
   OHCRXZJCRY->SetEntries(19209);
   OHCRXZJCRY->SetStats(0);

   ci = TColor::GetColor("#000066");
   OHCRXZJCRY->SetFillColor(ci);
   OHCRXZJCRY->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   OHCRXZJCRY->SetLineColor(ci);
   OHCRXZJCRY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OHCRXZJCRY->GetXaxis()->SetLabelFont(42);
   OHCRXZJCRY->GetXaxis()->SetLabelSize(0.035);
   OHCRXZJCRY->GetXaxis()->SetTitleSize(0.035);
   OHCRXZJCRY->GetXaxis()->SetTitleFont(42);
   OHCRXZJCRY->GetYaxis()->SetTitle("Entries");
   OHCRXZJCRY->GetYaxis()->SetLabelFont(42);
   OHCRXZJCRY->GetYaxis()->SetLabelSize(0.035);
   OHCRXZJCRY->GetYaxis()->SetTitleSize(0.035);
   OHCRXZJCRY->GetYaxis()->SetTitleFont(42);
   OHCRXZJCRY->GetZaxis()->SetLabelFont(42);
   OHCRXZJCRY->GetZaxis()->SetLabelSize(0.035);
   OHCRXZJCRY->GetZaxis()->SetTitleSize(0.035);
   OHCRXZJCRY->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(OHCRXZJCRY,"");
   
   TH1F *TOHAJJHAZA = new TH1F("TOHAJJHAZA","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   TOHAJJHAZA->SetBinContent(701,99.56946);
   TOHAJJHAZA->SetMinimum(0.1);
   TOHAJJHAZA->SetMaximum(0);
   TOHAJJHAZA->SetEntries(678);
   TOHAJJHAZA->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   TOHAJJHAZA->SetFillColor(ci);
   TOHAJJHAZA->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   TOHAJJHAZA->SetLineColor(ci);
   TOHAJJHAZA->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   TOHAJJHAZA->GetXaxis()->SetLabelFont(42);
   TOHAJJHAZA->GetXaxis()->SetLabelSize(0.035);
   TOHAJJHAZA->GetXaxis()->SetTitleSize(0.035);
   TOHAJJHAZA->GetXaxis()->SetTitleFont(42);
   TOHAJJHAZA->GetYaxis()->SetTitle("Entries");
   TOHAJJHAZA->GetYaxis()->SetLabelFont(42);
   TOHAJJHAZA->GetYaxis()->SetLabelSize(0.035);
   TOHAJJHAZA->GetYaxis()->SetTitleSize(0.035);
   TOHAJJHAZA->GetYaxis()->SetTitleFont(42);
   TOHAJJHAZA->GetZaxis()->SetLabelFont(42);
   TOHAJJHAZA->GetZaxis()->SetLabelSize(0.035);
   TOHAJJHAZA->GetZaxis()->SetTitleSize(0.035);
   TOHAJJHAZA->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(TOHAJJHAZA,"");
   
   TH1F *FJBHVCYHAL = new TH1F("FJBHVCYHAL","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   FJBHVCYHAL->SetBinContent(701,1698.274);
   FJBHVCYHAL->SetMinimum(0.1);
   FJBHVCYHAL->SetMaximum(0);
   FJBHVCYHAL->SetEntries(266);
   FJBHVCYHAL->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   FJBHVCYHAL->SetFillColor(ci);
   FJBHVCYHAL->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   FJBHVCYHAL->SetLineColor(ci);
   FJBHVCYHAL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   FJBHVCYHAL->GetXaxis()->SetLabelFont(42);
   FJBHVCYHAL->GetXaxis()->SetLabelSize(0.035);
   FJBHVCYHAL->GetXaxis()->SetTitleSize(0.035);
   FJBHVCYHAL->GetXaxis()->SetTitleFont(42);
   FJBHVCYHAL->GetYaxis()->SetTitle("Entries");
   FJBHVCYHAL->GetYaxis()->SetLabelFont(42);
   FJBHVCYHAL->GetYaxis()->SetLabelSize(0.035);
   FJBHVCYHAL->GetYaxis()->SetTitleSize(0.035);
   FJBHVCYHAL->GetYaxis()->SetTitleFont(42);
   FJBHVCYHAL->GetZaxis()->SetLabelFont(42);
   FJBHVCYHAL->GetZaxis()->SetLabelSize(0.035);
   FJBHVCYHAL->GetZaxis()->SetTitleSize(0.035);
   FJBHVCYHAL->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(FJBHVCYHAL,"");
   
   TH1F *OSKBTQSWUM = new TH1F("OSKBTQSWUM","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OSKBTQSWUM->SetBinContent(701,5350.61);
   OSKBTQSWUM->SetMinimum(0.1);
   OSKBTQSWUM->SetMaximum(0);
   OSKBTQSWUM->SetEntries(1322);
   OSKBTQSWUM->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   OSKBTQSWUM->SetFillColor(ci);
   OSKBTQSWUM->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   OSKBTQSWUM->SetLineColor(ci);
   OSKBTQSWUM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OSKBTQSWUM->GetXaxis()->SetLabelFont(42);
   OSKBTQSWUM->GetXaxis()->SetLabelSize(0.035);
   OSKBTQSWUM->GetXaxis()->SetTitleSize(0.035);
   OSKBTQSWUM->GetXaxis()->SetTitleFont(42);
   OSKBTQSWUM->GetYaxis()->SetTitle("Entries");
   OSKBTQSWUM->GetYaxis()->SetLabelFont(42);
   OSKBTQSWUM->GetYaxis()->SetLabelSize(0.035);
   OSKBTQSWUM->GetYaxis()->SetTitleSize(0.035);
   OSKBTQSWUM->GetYaxis()->SetTitleFont(42);
   OSKBTQSWUM->GetZaxis()->SetLabelFont(42);
   OSKBTQSWUM->GetZaxis()->SetLabelSize(0.035);
   OSKBTQSWUM->GetZaxis()->SetTitleSize(0.035);
   OSKBTQSWUM->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(OSKBTQSWUM,"");
   
   TH1F *TOBGVOOAYJ = new TH1F("TOBGVOOAYJ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   TOBGVOOAYJ->SetBinContent(701,9319.294);
   TOBGVOOAYJ->SetMinimum(0.1);
   TOBGVOOAYJ->SetMaximum(0);
   TOBGVOOAYJ->SetEntries(1509);
   TOBGVOOAYJ->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   TOBGVOOAYJ->SetFillColor(ci);
   TOBGVOOAYJ->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   TOBGVOOAYJ->SetLineColor(ci);
   TOBGVOOAYJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   TOBGVOOAYJ->GetXaxis()->SetLabelFont(42);
   TOBGVOOAYJ->GetXaxis()->SetLabelSize(0.035);
   TOBGVOOAYJ->GetXaxis()->SetTitleSize(0.035);
   TOBGVOOAYJ->GetXaxis()->SetTitleFont(42);
   TOBGVOOAYJ->GetYaxis()->SetTitle("Entries");
   TOBGVOOAYJ->GetYaxis()->SetLabelFont(42);
   TOBGVOOAYJ->GetYaxis()->SetLabelSize(0.035);
   TOBGVOOAYJ->GetYaxis()->SetTitleSize(0.035);
   TOBGVOOAYJ->GetYaxis()->SetTitleFont(42);
   TOBGVOOAYJ->GetZaxis()->SetLabelFont(42);
   TOBGVOOAYJ->GetZaxis()->SetLabelSize(0.035);
   TOBGVOOAYJ->GetZaxis()->SetTitleSize(0.035);
   TOBGVOOAYJ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(TOBGVOOAYJ,"");
   
   TH1F *GYJHZATPYJ = new TH1F("GYJHZATPYJ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   GYJHZATPYJ->SetBinContent(701,233.7012);
   GYJHZATPYJ->SetMinimum(0.1);
   GYJHZATPYJ->SetMaximum(0);
   GYJHZATPYJ->SetEntries(60);
   GYJHZATPYJ->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   GYJHZATPYJ->SetFillColor(ci);
   GYJHZATPYJ->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   GYJHZATPYJ->SetLineColor(ci);
   GYJHZATPYJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   GYJHZATPYJ->GetXaxis()->SetLabelFont(42);
   GYJHZATPYJ->GetXaxis()->SetLabelSize(0.035);
   GYJHZATPYJ->GetXaxis()->SetTitleSize(0.035);
   GYJHZATPYJ->GetXaxis()->SetTitleFont(42);
   GYJHZATPYJ->GetYaxis()->SetTitle("Entries");
   GYJHZATPYJ->GetYaxis()->SetLabelFont(42);
   GYJHZATPYJ->GetYaxis()->SetLabelSize(0.035);
   GYJHZATPYJ->GetYaxis()->SetTitleSize(0.035);
   GYJHZATPYJ->GetYaxis()->SetTitleFont(42);
   GYJHZATPYJ->GetZaxis()->SetLabelFont(42);
   GYJHZATPYJ->GetZaxis()->SetLabelSize(0.035);
   GYJHZATPYJ->GetZaxis()->SetTitleSize(0.035);
   GYJHZATPYJ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(GYJHZATPYJ,"");
   
   TH1F *OTYSDGYEGQ = new TH1F("OTYSDGYEGQ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OTYSDGYEGQ->SetBinContent(701,1585.586);
   OTYSDGYEGQ->SetMinimum(0.1);
   OTYSDGYEGQ->SetMaximum(0);
   OTYSDGYEGQ->SetEntries(64);
   OTYSDGYEGQ->SetStats(0);

   ci = TColor::GetColor("#006633");
   OTYSDGYEGQ->SetFillColor(ci);
   OTYSDGYEGQ->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   OTYSDGYEGQ->SetLineColor(ci);
   OTYSDGYEGQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OTYSDGYEGQ->GetXaxis()->SetLabelFont(42);
   OTYSDGYEGQ->GetXaxis()->SetLabelSize(0.035);
   OTYSDGYEGQ->GetXaxis()->SetTitleSize(0.035);
   OTYSDGYEGQ->GetXaxis()->SetTitleFont(42);
   OTYSDGYEGQ->GetYaxis()->SetTitle("Entries");
   OTYSDGYEGQ->GetYaxis()->SetLabelFont(42);
   OTYSDGYEGQ->GetYaxis()->SetLabelSize(0.035);
   OTYSDGYEGQ->GetYaxis()->SetTitleSize(0.035);
   OTYSDGYEGQ->GetYaxis()->SetTitleFont(42);
   OTYSDGYEGQ->GetZaxis()->SetLabelFont(42);
   OTYSDGYEGQ->GetZaxis()->SetLabelSize(0.035);
   OTYSDGYEGQ->GetZaxis()->SetTitleSize(0.035);
   OTYSDGYEGQ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(OTYSDGYEGQ,"");
   
   TH1F *LNJTDQPEHZ = new TH1F("LNJTDQPEHZ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   LNJTDQPEHZ->SetBinContent(701,47.72728);
   LNJTDQPEHZ->SetMinimum(0.1);
   LNJTDQPEHZ->SetMaximum(0);
   LNJTDQPEHZ->SetEntries(7);
   LNJTDQPEHZ->SetStats(0);
   LNJTDQPEHZ->SetFillColor(3);
   LNJTDQPEHZ->SetFillStyle(3001);
   LNJTDQPEHZ->SetLineColor(3);
   LNJTDQPEHZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   LNJTDQPEHZ->GetXaxis()->SetLabelFont(42);
   LNJTDQPEHZ->GetXaxis()->SetLabelSize(0.035);
   LNJTDQPEHZ->GetXaxis()->SetTitleSize(0.035);
   LNJTDQPEHZ->GetXaxis()->SetTitleFont(42);
   LNJTDQPEHZ->GetYaxis()->SetTitle("Entries");
   LNJTDQPEHZ->GetYaxis()->SetLabelFont(42);
   LNJTDQPEHZ->GetYaxis()->SetLabelSize(0.035);
   LNJTDQPEHZ->GetYaxis()->SetTitleSize(0.035);
   LNJTDQPEHZ->GetYaxis()->SetTitleFont(42);
   LNJTDQPEHZ->GetZaxis()->SetLabelFont(42);
   LNJTDQPEHZ->GetZaxis()->SetLabelSize(0.035);
   LNJTDQPEHZ->GetZaxis()->SetTitleSize(0.035);
   LNJTDQPEHZ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(LNJTDQPEHZ,"");
   
   TH1F *HVRKRLMUGY = new TH1F("HVRKRLMUGY","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   HVRKRLMUGY->SetBinContent(701,42.20727);
   HVRKRLMUGY->SetMinimum(0.1);
   HVRKRLMUGY->SetMaximum(0);
   HVRKRLMUGY->SetEntries(2);
   HVRKRLMUGY->SetStats(0);

   ci = TColor::GetColor("#990033");
   HVRKRLMUGY->SetFillColor(ci);
   HVRKRLMUGY->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   HVRKRLMUGY->SetLineColor(ci);
   HVRKRLMUGY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   HVRKRLMUGY->GetXaxis()->SetLabelFont(42);
   HVRKRLMUGY->GetXaxis()->SetLabelSize(0.035);
   HVRKRLMUGY->GetXaxis()->SetTitleSize(0.035);
   HVRKRLMUGY->GetXaxis()->SetTitleFont(42);
   HVRKRLMUGY->GetYaxis()->SetTitle("Entries");
   HVRKRLMUGY->GetYaxis()->SetLabelFont(42);
   HVRKRLMUGY->GetYaxis()->SetLabelSize(0.035);
   HVRKRLMUGY->GetYaxis()->SetTitleSize(0.035);
   HVRKRLMUGY->GetYaxis()->SetTitleFont(42);
   HVRKRLMUGY->GetZaxis()->SetLabelFont(42);
   HVRKRLMUGY->GetZaxis()->SetLabelSize(0.035);
   HVRKRLMUGY->GetZaxis()->SetTitleSize(0.035);
   HVRKRLMUGY->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(HVRKRLMUGY,"");
   
   TH1F *UBWEHZNLNN = new TH1F("UBWEHZNLNN","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   UBWEHZNLNN->SetBinContent(701,18.89987);
   UBWEHZNLNN->SetMinimum(0.1);
   UBWEHZNLNN->SetMaximum(0);
   UBWEHZNLNN->SetEntries(3);
   UBWEHZNLNN->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   UBWEHZNLNN->SetFillColor(ci);
   UBWEHZNLNN->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   UBWEHZNLNN->SetLineColor(ci);
   UBWEHZNLNN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   UBWEHZNLNN->GetXaxis()->SetLabelFont(42);
   UBWEHZNLNN->GetXaxis()->SetLabelSize(0.035);
   UBWEHZNLNN->GetXaxis()->SetTitleSize(0.035);
   UBWEHZNLNN->GetXaxis()->SetTitleFont(42);
   UBWEHZNLNN->GetYaxis()->SetTitle("Entries");
   UBWEHZNLNN->GetYaxis()->SetLabelFont(42);
   UBWEHZNLNN->GetYaxis()->SetLabelSize(0.035);
   UBWEHZNLNN->GetYaxis()->SetTitleSize(0.035);
   UBWEHZNLNN->GetYaxis()->SetTitleFont(42);
   UBWEHZNLNN->GetZaxis()->SetLabelFont(42);
   UBWEHZNLNN->GetZaxis()->SetLabelSize(0.035);
   UBWEHZNLNN->GetZaxis()->SetTitleSize(0.035);
   UBWEHZNLNN->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(UBWEHZNLNN,"");
   
   TH1F *FOHILISPVA = new TH1F("FOHILISPVA","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   FOHILISPVA->SetBinContent(701,65.37201);
   FOHILISPVA->SetMinimum(0.1);
   FOHILISPVA->SetMaximum(0);
   FOHILISPVA->SetEntries(3);
   FOHILISPVA->SetStats(0);

   ci = TColor::GetColor("#a42400");
   FOHILISPVA->SetFillColor(ci);
   FOHILISPVA->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   FOHILISPVA->SetLineColor(ci);
   FOHILISPVA->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   FOHILISPVA->GetXaxis()->SetLabelFont(42);
   FOHILISPVA->GetXaxis()->SetLabelSize(0.035);
   FOHILISPVA->GetXaxis()->SetTitleSize(0.035);
   FOHILISPVA->GetXaxis()->SetTitleFont(42);
   FOHILISPVA->GetYaxis()->SetTitle("Entries");
   FOHILISPVA->GetYaxis()->SetLabelFont(42);
   FOHILISPVA->GetYaxis()->SetLabelSize(0.035);
   FOHILISPVA->GetYaxis()->SetTitleSize(0.035);
   FOHILISPVA->GetYaxis()->SetTitleFont(42);
   FOHILISPVA->GetZaxis()->SetLabelFont(42);
   FOHILISPVA->GetZaxis()->SetLabelSize(0.035);
   FOHILISPVA->GetZaxis()->SetTitleSize(0.035);
   FOHILISPVA->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(FOHILISPVA,"");
   
   TH1F *IEXSOZDGAZ = new TH1F("IEXSOZDGAZ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   IEXSOZDGAZ->SetBinContent(701,4420.359);
   IEXSOZDGAZ->SetMinimum(0.1);
   IEXSOZDGAZ->SetMaximum(0);
   IEXSOZDGAZ->SetEntries(7983);
   IEXSOZDGAZ->SetStats(0);

   ci = TColor::GetColor("#001544");
   IEXSOZDGAZ->SetFillColor(ci);
   IEXSOZDGAZ->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   IEXSOZDGAZ->SetLineColor(ci);
   IEXSOZDGAZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   IEXSOZDGAZ->GetXaxis()->SetLabelFont(42);
   IEXSOZDGAZ->GetXaxis()->SetLabelSize(0.035);
   IEXSOZDGAZ->GetXaxis()->SetTitleSize(0.035);
   IEXSOZDGAZ->GetXaxis()->SetTitleFont(42);
   IEXSOZDGAZ->GetYaxis()->SetTitle("Entries");
   IEXSOZDGAZ->GetYaxis()->SetLabelFont(42);
   IEXSOZDGAZ->GetYaxis()->SetLabelSize(0.035);
   IEXSOZDGAZ->GetYaxis()->SetTitleSize(0.035);
   IEXSOZDGAZ->GetYaxis()->SetTitleFont(42);
   IEXSOZDGAZ->GetZaxis()->SetLabelFont(42);
   IEXSOZDGAZ->GetZaxis()->SetLabelSize(0.035);
   IEXSOZDGAZ->GetZaxis()->SetTitleSize(0.035);
   IEXSOZDGAZ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(IEXSOZDGAZ,"");
   
   TH1F *BAOUFQGRUB = new TH1F("BAOUFQGRUB","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   BAOUFQGRUB->SetBinContent(701,23148.97);
   BAOUFQGRUB->SetMinimum(0.1);
   BAOUFQGRUB->SetMaximum(0);
   BAOUFQGRUB->SetEntries(13081);
   BAOUFQGRUB->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   BAOUFQGRUB->SetFillColor(ci);
   BAOUFQGRUB->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   BAOUFQGRUB->SetLineColor(ci);
   BAOUFQGRUB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   BAOUFQGRUB->GetXaxis()->SetLabelFont(42);
   BAOUFQGRUB->GetXaxis()->SetLabelSize(0.035);
   BAOUFQGRUB->GetXaxis()->SetTitleSize(0.035);
   BAOUFQGRUB->GetXaxis()->SetTitleFont(42);
   BAOUFQGRUB->GetYaxis()->SetTitle("Entries");
   BAOUFQGRUB->GetYaxis()->SetLabelFont(42);
   BAOUFQGRUB->GetYaxis()->SetLabelSize(0.035);
   BAOUFQGRUB->GetYaxis()->SetTitleSize(0.035);
   BAOUFQGRUB->GetYaxis()->SetTitleFont(42);
   BAOUFQGRUB->GetZaxis()->SetLabelFont(42);
   BAOUFQGRUB->GetZaxis()->SetLabelSize(0.035);
   BAOUFQGRUB->GetZaxis()->SetTitleSize(0.035);
   BAOUFQGRUB->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(BAOUFQGRUB,"");
   
   TH1F *UYDKPWTALW = new TH1F("UYDKPWTALW","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   UYDKPWTALW->SetBinContent(701,4494.557);
   UYDKPWTALW->SetMinimum(0.1);
   UYDKPWTALW->SetMaximum(0);
   UYDKPWTALW->SetEntries(8117);
   UYDKPWTALW->SetStats(0);

   ci = TColor::GetColor("#620e00");
   UYDKPWTALW->SetFillColor(ci);
   UYDKPWTALW->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   UYDKPWTALW->SetLineColor(ci);
   UYDKPWTALW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   UYDKPWTALW->GetXaxis()->SetLabelFont(42);
   UYDKPWTALW->GetXaxis()->SetLabelSize(0.035);
   UYDKPWTALW->GetXaxis()->SetTitleSize(0.035);
   UYDKPWTALW->GetXaxis()->SetTitleFont(42);
   UYDKPWTALW->GetYaxis()->SetTitle("Entries");
   UYDKPWTALW->GetYaxis()->SetLabelFont(42);
   UYDKPWTALW->GetYaxis()->SetLabelSize(0.035);
   UYDKPWTALW->GetYaxis()->SetTitleSize(0.035);
   UYDKPWTALW->GetYaxis()->SetTitleFont(42);
   UYDKPWTALW->GetZaxis()->SetLabelFont(42);
   UYDKPWTALW->GetZaxis()->SetLabelSize(0.035);
   UYDKPWTALW->GetZaxis()->SetTitleSize(0.035);
   UYDKPWTALW->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(UYDKPWTALW,"");
   
   TH1F *DYSEKALJPO = new TH1F("DYSEKALJPO","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   DYSEKALJPO->SetBinContent(701,23408.07);
   DYSEKALJPO->SetMinimum(0.1);
   DYSEKALJPO->SetMaximum(0);
   DYSEKALJPO->SetEntries(13170);
   DYSEKALJPO->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   DYSEKALJPO->SetFillColor(ci);
   DYSEKALJPO->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   DYSEKALJPO->SetLineColor(ci);
   DYSEKALJPO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   DYSEKALJPO->GetXaxis()->SetLabelFont(42);
   DYSEKALJPO->GetXaxis()->SetLabelSize(0.035);
   DYSEKALJPO->GetXaxis()->SetTitleSize(0.035);
   DYSEKALJPO->GetXaxis()->SetTitleFont(42);
   DYSEKALJPO->GetYaxis()->SetTitle("Entries");
   DYSEKALJPO->GetYaxis()->SetLabelFont(42);
   DYSEKALJPO->GetYaxis()->SetLabelSize(0.035);
   DYSEKALJPO->GetYaxis()->SetTitleSize(0.035);
   DYSEKALJPO->GetYaxis()->SetTitleFont(42);
   DYSEKALJPO->GetZaxis()->SetLabelFont(42);
   DYSEKALJPO->GetZaxis()->SetLabelSize(0.035);
   DYSEKALJPO->GetZaxis()->SetTitleSize(0.035);
   DYSEKALJPO->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(DYSEKALJPO,"");
   
   TH1F *SGGROVSIPT = new TH1F("SGGROVSIPT","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   SGGROVSIPT->SetBinContent(701,81.20349);
   SGGROVSIPT->SetMinimum(0.1);
   SGGROVSIPT->SetMaximum(0);
   SGGROVSIPT->SetEntries(6);
   SGGROVSIPT->SetStats(0);
   SGGROVSIPT->SetFillColor(4);
   SGGROVSIPT->SetFillStyle(3001);
   SGGROVSIPT->SetLineColor(4);
   SGGROVSIPT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   SGGROVSIPT->GetXaxis()->SetLabelFont(42);
   SGGROVSIPT->GetXaxis()->SetLabelSize(0.035);
   SGGROVSIPT->GetXaxis()->SetTitleSize(0.035);
   SGGROVSIPT->GetXaxis()->SetTitleFont(42);
   SGGROVSIPT->GetYaxis()->SetTitle("Entries");
   SGGROVSIPT->GetYaxis()->SetLabelFont(42);
   SGGROVSIPT->GetYaxis()->SetLabelSize(0.035);
   SGGROVSIPT->GetYaxis()->SetTitleSize(0.035);
   SGGROVSIPT->GetYaxis()->SetTitleFont(42);
   SGGROVSIPT->GetZaxis()->SetLabelFont(42);
   SGGROVSIPT->GetZaxis()->SetLabelSize(0.035);
   SGGROVSIPT->GetZaxis()->SetTitleSize(0.035);
   SGGROVSIPT->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(SGGROVSIPT,"");
   
   TH1F *JWOFSCBMDH = new TH1F("JWOFSCBMDH","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   JWOFSCBMDH->SetBinContent(701,54.64839);
   JWOFSCBMDH->SetMinimum(0.1);
   JWOFSCBMDH->SetMaximum(0);
   JWOFSCBMDH->SetEntries(1);
   JWOFSCBMDH->SetStats(0);

   ci = TColor::GetColor("#007db5");
   JWOFSCBMDH->SetFillColor(ci);
   JWOFSCBMDH->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   JWOFSCBMDH->SetLineColor(ci);
   JWOFSCBMDH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   JWOFSCBMDH->GetXaxis()->SetLabelFont(42);
   JWOFSCBMDH->GetXaxis()->SetLabelSize(0.035);
   JWOFSCBMDH->GetXaxis()->SetTitleSize(0.035);
   JWOFSCBMDH->GetXaxis()->SetTitleFont(42);
   JWOFSCBMDH->GetYaxis()->SetTitle("Entries");
   JWOFSCBMDH->GetYaxis()->SetLabelFont(42);
   JWOFSCBMDH->GetYaxis()->SetLabelSize(0.035);
   JWOFSCBMDH->GetYaxis()->SetTitleSize(0.035);
   JWOFSCBMDH->GetYaxis()->SetTitleFont(42);
   JWOFSCBMDH->GetZaxis()->SetLabelFont(42);
   JWOFSCBMDH->GetZaxis()->SetLabelSize(0.035);
   JWOFSCBMDH->GetZaxis()->SetTitleSize(0.035);
   JWOFSCBMDH->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(JWOFSCBMDH,"");
   
   TH1F *CQZQCLCTMZ = new TH1F("CQZQCLCTMZ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   CQZQCLCTMZ->SetBinContent(701,53.2871);
   CQZQCLCTMZ->SetMinimum(0.1);
   CQZQCLCTMZ->SetMaximum(0);
   CQZQCLCTMZ->SetEntries(1);
   CQZQCLCTMZ->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   CQZQCLCTMZ->SetFillColor(ci);
   CQZQCLCTMZ->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   CQZQCLCTMZ->SetLineColor(ci);
   CQZQCLCTMZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   CQZQCLCTMZ->GetXaxis()->SetLabelFont(42);
   CQZQCLCTMZ->GetXaxis()->SetLabelSize(0.035);
   CQZQCLCTMZ->GetXaxis()->SetTitleSize(0.035);
   CQZQCLCTMZ->GetXaxis()->SetTitleFont(42);
   CQZQCLCTMZ->GetYaxis()->SetTitle("Entries");
   CQZQCLCTMZ->GetYaxis()->SetLabelFont(42);
   CQZQCLCTMZ->GetYaxis()->SetLabelSize(0.035);
   CQZQCLCTMZ->GetYaxis()->SetTitleSize(0.035);
   CQZQCLCTMZ->GetYaxis()->SetTitleFont(42);
   CQZQCLCTMZ->GetZaxis()->SetLabelFont(42);
   CQZQCLCTMZ->GetZaxis()->SetLabelSize(0.035);
   CQZQCLCTMZ->GetZaxis()->SetTitleSize(0.035);
   CQZQCLCTMZ->GetZaxis()->SetTitleFont(42);
   LVREHAHLUY->Add(CQZQCLCTMZ,"");
   LVREHAHLUY->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("UDFROZKSHQ","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("OHCRXZJCRY","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("TOHAJJHAZA","ee_llqqqq","f");

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
   entry=leg->AddEntry("FJBHVCYHAL","ee_qqqq","f");

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
   entry=leg->AddEntry("OSKBTQSWUM","ee_nunuqq","f");

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
   entry=leg->AddEntry("TOBGVOOAYJ","ee_lnuqq","f");

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
   entry=leg->AddEntry("GYJHZATPYJ","ee_qqll","f");

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
   entry=leg->AddEntry("OTYSDGYEGQ","ee_qq","f");

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
   entry=leg->AddEntry("LNJTDQPEHZ","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HVRKRLMUGY","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("UBWEHZNLNN","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("FOHILISPVA","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("IEXSOZDGAZ","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("BAOUFQGRUB","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("UYDKPWTALW","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("DYSEKALJPO","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("SGGROVSIPT","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("JWOFSCBMDH","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("CQZQCLCTMZ","gammagamma_qqqq_BS_EPA","f");

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
   POUQKHFRSW->Modified();
   POUQKHFRSW->cd();
   POUQKHFRSW->SetSelected(POUQKHFRSW);
}
