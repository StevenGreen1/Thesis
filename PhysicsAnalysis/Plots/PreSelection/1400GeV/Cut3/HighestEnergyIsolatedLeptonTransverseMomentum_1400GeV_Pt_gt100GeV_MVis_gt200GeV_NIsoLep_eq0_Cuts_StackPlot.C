{
//=========Macro generated from canvas: SWIAKAWRHF/HighestEnergyIsolatedLeptonTransverseMomentum
//=========  (Thu Jan  5 10:54:47 2017) by ROOT version5.34/30
   TCanvas *SWIAKAWRHF = new TCanvas("SWIAKAWRHF", "HighestEnergyIsolatedLeptonTransverseMomentum",0,0,700,500);
   gStyle->SetOptStat(0);
   SWIAKAWRHF->SetHighLightColor(2);
   SWIAKAWRHF->Range(0,0,1,1);
   SWIAKAWRHF->SetFillColor(0);
   SWIAKAWRHF->SetBorderMode(0);
   SWIAKAWRHF->SetBorderSize(2);
   SWIAKAWRHF->SetLogy();
   SWIAKAWRHF->SetFrameBorderMode(0);
   SWIAKAWRHF->SetFrameBorderMode(0);
   
   THStack *KVRFNTFAUH = new THStack();
   KVRFNTFAUH->SetName("KVRFNTFAUH");
   KVRFNTFAUH->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   KVRFNTFAUH->SetMinimum(0.1);
   
   TH1F *KVRFNTFAUH_stack_129 = new TH1F("KVRFNTFAUH_stack_129","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   KVRFNTFAUH_stack_129->SetMinimum(-0);
   KVRFNTFAUH_stack_129->SetMaximum(-nan);
   KVRFNTFAUH_stack_129->SetDirectory(0);
   KVRFNTFAUH_stack_129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   KVRFNTFAUH_stack_129->SetLineColor(ci);
   KVRFNTFAUH_stack_129->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   KVRFNTFAUH_stack_129->GetXaxis()->SetLabelFont(42);
   KVRFNTFAUH_stack_129->GetXaxis()->SetLabelSize(0.035);
   KVRFNTFAUH_stack_129->GetXaxis()->SetTitleSize(0.035);
   KVRFNTFAUH_stack_129->GetXaxis()->SetTitleFont(42);
   KVRFNTFAUH_stack_129->GetYaxis()->SetTitle("Entries");
   KVRFNTFAUH_stack_129->GetYaxis()->SetLabelFont(42);
   KVRFNTFAUH_stack_129->GetYaxis()->SetLabelSize(0.035);
   KVRFNTFAUH_stack_129->GetYaxis()->SetTitleSize(0.035);
   KVRFNTFAUH_stack_129->GetYaxis()->SetTitleFont(42);
   KVRFNTFAUH_stack_129->GetZaxis()->SetLabelFont(42);
   KVRFNTFAUH_stack_129->GetZaxis()->SetLabelSize(0.035);
   KVRFNTFAUH_stack_129->GetZaxis()->SetTitleSize(0.035);
   KVRFNTFAUH_stack_129->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->SetHistogram(KVRFNTFAUH_stack_129);
   
   
   TH1F *KBWWBABZIV = new TH1F("KBWWBABZIV","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   KBWWBABZIV->SetBinContent(701,20934.6);
   KBWWBABZIV->SetMinimum(0.1);
   KBWWBABZIV->SetMaximum(0);
   KBWWBABZIV->SetEntries(764596);
   KBWWBABZIV->SetStats(0);
   KBWWBABZIV->SetFillColor(1);
   KBWWBABZIV->SetFillStyle(3001);
   KBWWBABZIV->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   KBWWBABZIV->GetXaxis()->SetLabelFont(42);
   KBWWBABZIV->GetXaxis()->SetLabelSize(0.035);
   KBWWBABZIV->GetXaxis()->SetTitleSize(0.035);
   KBWWBABZIV->GetXaxis()->SetTitleFont(42);
   KBWWBABZIV->GetYaxis()->SetTitle("Entries");
   KBWWBABZIV->GetYaxis()->SetLabelFont(42);
   KBWWBABZIV->GetYaxis()->SetLabelSize(0.035);
   KBWWBABZIV->GetYaxis()->SetTitleSize(0.035);
   KBWWBABZIV->GetYaxis()->SetTitleFont(42);
   KBWWBABZIV->GetZaxis()->SetLabelFont(42);
   KBWWBABZIV->GetZaxis()->SetLabelSize(0.035);
   KBWWBABZIV->GetZaxis()->SetTitleSize(0.035);
   KBWWBABZIV->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(KBWWBABZIV,"");
   
   TH1F *CYYLEPLZEG = new TH1F("CYYLEPLZEG","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   CYYLEPLZEG->SetBinContent(701,42473.12);
   CYYLEPLZEG->SetMinimum(0.1);
   CYYLEPLZEG->SetMaximum(0);
   CYYLEPLZEG->SetEntries(95117);
   CYYLEPLZEG->SetStats(0);

   ci = TColor::GetColor("#000066");
   CYYLEPLZEG->SetFillColor(ci);
   CYYLEPLZEG->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   CYYLEPLZEG->SetLineColor(ci);
   CYYLEPLZEG->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   CYYLEPLZEG->GetXaxis()->SetLabelFont(42);
   CYYLEPLZEG->GetXaxis()->SetLabelSize(0.035);
   CYYLEPLZEG->GetXaxis()->SetTitleSize(0.035);
   CYYLEPLZEG->GetXaxis()->SetTitleFont(42);
   CYYLEPLZEG->GetYaxis()->SetTitle("Entries");
   CYYLEPLZEG->GetYaxis()->SetLabelFont(42);
   CYYLEPLZEG->GetYaxis()->SetLabelSize(0.035);
   CYYLEPLZEG->GetYaxis()->SetTitleSize(0.035);
   CYYLEPLZEG->GetYaxis()->SetTitleFont(42);
   CYYLEPLZEG->GetZaxis()->SetLabelFont(42);
   CYYLEPLZEG->GetZaxis()->SetLabelSize(0.035);
   CYYLEPLZEG->GetZaxis()->SetTitleSize(0.035);
   CYYLEPLZEG->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(CYYLEPLZEG,"");
   
   TH1F *HOWTHOJURC = new TH1F("HOWTHOJURC","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   HOWTHOJURC->SetBinContent(701,689.4698);
   HOWTHOJURC->SetMinimum(0.1);
   HOWTHOJURC->SetMaximum(0);
   HOWTHOJURC->SetEntries(4695);
   HOWTHOJURC->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   HOWTHOJURC->SetFillColor(ci);
   HOWTHOJURC->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   HOWTHOJURC->SetLineColor(ci);
   HOWTHOJURC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   HOWTHOJURC->GetXaxis()->SetLabelFont(42);
   HOWTHOJURC->GetXaxis()->SetLabelSize(0.035);
   HOWTHOJURC->GetXaxis()->SetTitleSize(0.035);
   HOWTHOJURC->GetXaxis()->SetTitleFont(42);
   HOWTHOJURC->GetYaxis()->SetTitle("Entries");
   HOWTHOJURC->GetYaxis()->SetLabelFont(42);
   HOWTHOJURC->GetYaxis()->SetLabelSize(0.035);
   HOWTHOJURC->GetYaxis()->SetTitleSize(0.035);
   HOWTHOJURC->GetYaxis()->SetTitleFont(42);
   HOWTHOJURC->GetZaxis()->SetLabelFont(42);
   HOWTHOJURC->GetZaxis()->SetLabelSize(0.035);
   HOWTHOJURC->GetZaxis()->SetTitleSize(0.035);
   HOWTHOJURC->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(HOWTHOJURC,"");
   
   TH1F *OWSZEUEPWN = new TH1F("OWSZEUEPWN","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OWSZEUEPWN->SetBinContent(701,6160.975);
   OWSZEUEPWN->SetMinimum(0.1);
   OWSZEUEPWN->SetMaximum(0);
   OWSZEUEPWN->SetEntries(965);
   OWSZEUEPWN->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   OWSZEUEPWN->SetFillColor(ci);
   OWSZEUEPWN->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   OWSZEUEPWN->SetLineColor(ci);
   OWSZEUEPWN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OWSZEUEPWN->GetXaxis()->SetLabelFont(42);
   OWSZEUEPWN->GetXaxis()->SetLabelSize(0.035);
   OWSZEUEPWN->GetXaxis()->SetTitleSize(0.035);
   OWSZEUEPWN->GetXaxis()->SetTitleFont(42);
   OWSZEUEPWN->GetYaxis()->SetTitle("Entries");
   OWSZEUEPWN->GetYaxis()->SetLabelFont(42);
   OWSZEUEPWN->GetYaxis()->SetLabelSize(0.035);
   OWSZEUEPWN->GetYaxis()->SetTitleSize(0.035);
   OWSZEUEPWN->GetYaxis()->SetTitleFont(42);
   OWSZEUEPWN->GetZaxis()->SetLabelFont(42);
   OWSZEUEPWN->GetZaxis()->SetLabelSize(0.035);
   OWSZEUEPWN->GetZaxis()->SetTitleSize(0.035);
   OWSZEUEPWN->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(OWSZEUEPWN,"");
   
   TH1F *NZRQOMPOBQ = new TH1F("NZRQOMPOBQ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   NZRQOMPOBQ->SetBinContent(701,50704.28);
   NZRQOMPOBQ->SetMinimum(0.1);
   NZRQOMPOBQ->SetMaximum(0);
   NZRQOMPOBQ->SetEntries(12529);
   NZRQOMPOBQ->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   NZRQOMPOBQ->SetFillColor(ci);
   NZRQOMPOBQ->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   NZRQOMPOBQ->SetLineColor(ci);
   NZRQOMPOBQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   NZRQOMPOBQ->GetXaxis()->SetLabelFont(42);
   NZRQOMPOBQ->GetXaxis()->SetLabelSize(0.035);
   NZRQOMPOBQ->GetXaxis()->SetTitleSize(0.035);
   NZRQOMPOBQ->GetXaxis()->SetTitleFont(42);
   NZRQOMPOBQ->GetYaxis()->SetTitle("Entries");
   NZRQOMPOBQ->GetYaxis()->SetLabelFont(42);
   NZRQOMPOBQ->GetYaxis()->SetLabelSize(0.035);
   NZRQOMPOBQ->GetYaxis()->SetTitleSize(0.035);
   NZRQOMPOBQ->GetYaxis()->SetTitleFont(42);
   NZRQOMPOBQ->GetZaxis()->SetLabelFont(42);
   NZRQOMPOBQ->GetZaxis()->SetLabelSize(0.035);
   NZRQOMPOBQ->GetZaxis()->SetTitleSize(0.035);
   NZRQOMPOBQ->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(NZRQOMPOBQ,"");
   
   TH1F *YQRFGWKRIT = new TH1F("YQRFGWKRIT","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   YQRFGWKRIT->SetBinContent(701,567250.8);
   YQRFGWKRIT->SetMinimum(0.1);
   YQRFGWKRIT->SetMaximum(0);
   YQRFGWKRIT->SetEntries(91764);
   YQRFGWKRIT->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   YQRFGWKRIT->SetFillColor(ci);
   YQRFGWKRIT->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   YQRFGWKRIT->SetLineColor(ci);
   YQRFGWKRIT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   YQRFGWKRIT->GetXaxis()->SetLabelFont(42);
   YQRFGWKRIT->GetXaxis()->SetLabelSize(0.035);
   YQRFGWKRIT->GetXaxis()->SetTitleSize(0.035);
   YQRFGWKRIT->GetXaxis()->SetTitleFont(42);
   YQRFGWKRIT->GetYaxis()->SetTitle("Entries");
   YQRFGWKRIT->GetYaxis()->SetLabelFont(42);
   YQRFGWKRIT->GetYaxis()->SetLabelSize(0.035);
   YQRFGWKRIT->GetYaxis()->SetTitleSize(0.035);
   YQRFGWKRIT->GetYaxis()->SetTitleFont(42);
   YQRFGWKRIT->GetZaxis()->SetLabelFont(42);
   YQRFGWKRIT->GetZaxis()->SetLabelSize(0.035);
   YQRFGWKRIT->GetZaxis()->SetTitleSize(0.035);
   YQRFGWKRIT->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(YQRFGWKRIT,"");
   
   TH1F *CNFIFAVTFY = new TH1F("CNFIFAVTFY","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   CNFIFAVTFY->SetBinContent(701,5636.094);
   CNFIFAVTFY->SetMinimum(0.1);
   CNFIFAVTFY->SetMaximum(0);
   CNFIFAVTFY->SetEntries(1447);
   CNFIFAVTFY->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   CNFIFAVTFY->SetFillColor(ci);
   CNFIFAVTFY->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   CNFIFAVTFY->SetLineColor(ci);
   CNFIFAVTFY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   CNFIFAVTFY->GetXaxis()->SetLabelFont(42);
   CNFIFAVTFY->GetXaxis()->SetLabelSize(0.035);
   CNFIFAVTFY->GetXaxis()->SetTitleSize(0.035);
   CNFIFAVTFY->GetXaxis()->SetTitleFont(42);
   CNFIFAVTFY->GetYaxis()->SetTitle("Entries");
   CNFIFAVTFY->GetYaxis()->SetLabelFont(42);
   CNFIFAVTFY->GetYaxis()->SetLabelSize(0.035);
   CNFIFAVTFY->GetYaxis()->SetTitleSize(0.035);
   CNFIFAVTFY->GetYaxis()->SetTitleFont(42);
   CNFIFAVTFY->GetZaxis()->SetLabelFont(42);
   CNFIFAVTFY->GetZaxis()->SetLabelSize(0.035);
   CNFIFAVTFY->GetZaxis()->SetTitleSize(0.035);
   CNFIFAVTFY->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(CNFIFAVTFY,"");
   
   TH1F *NJNDSCCGJG = new TH1F("NJNDSCCGJG","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   NJNDSCCGJG->SetBinContent(701,34536.24);
   NJNDSCCGJG->SetMinimum(0.1);
   NJNDSCCGJG->SetMaximum(0);
   NJNDSCCGJG->SetEntries(1394);
   NJNDSCCGJG->SetStats(0);

   ci = TColor::GetColor("#006633");
   NJNDSCCGJG->SetFillColor(ci);
   NJNDSCCGJG->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   NJNDSCCGJG->SetLineColor(ci);
   NJNDSCCGJG->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   NJNDSCCGJG->GetXaxis()->SetLabelFont(42);
   NJNDSCCGJG->GetXaxis()->SetLabelSize(0.035);
   NJNDSCCGJG->GetXaxis()->SetTitleSize(0.035);
   NJNDSCCGJG->GetXaxis()->SetTitleFont(42);
   NJNDSCCGJG->GetYaxis()->SetTitle("Entries");
   NJNDSCCGJG->GetYaxis()->SetLabelFont(42);
   NJNDSCCGJG->GetYaxis()->SetLabelSize(0.035);
   NJNDSCCGJG->GetYaxis()->SetTitleSize(0.035);
   NJNDSCCGJG->GetYaxis()->SetTitleFont(42);
   NJNDSCCGJG->GetZaxis()->SetLabelFont(42);
   NJNDSCCGJG->GetZaxis()->SetLabelSize(0.035);
   NJNDSCCGJG->GetZaxis()->SetTitleSize(0.035);
   NJNDSCCGJG->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(NJNDSCCGJG,"");
   
   TH1F *OMLYBIGFQJ = new TH1F("OMLYBIGFQJ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OMLYBIGFQJ->SetBinContent(701,968.1812);
   OMLYBIGFQJ->SetMinimum(0.1);
   OMLYBIGFQJ->SetMaximum(0);
   OMLYBIGFQJ->SetEntries(142);
   OMLYBIGFQJ->SetStats(0);
   OMLYBIGFQJ->SetFillColor(3);
   OMLYBIGFQJ->SetFillStyle(3001);
   OMLYBIGFQJ->SetLineColor(3);
   OMLYBIGFQJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OMLYBIGFQJ->GetXaxis()->SetLabelFont(42);
   OMLYBIGFQJ->GetXaxis()->SetLabelSize(0.035);
   OMLYBIGFQJ->GetXaxis()->SetTitleSize(0.035);
   OMLYBIGFQJ->GetXaxis()->SetTitleFont(42);
   OMLYBIGFQJ->GetYaxis()->SetTitle("Entries");
   OMLYBIGFQJ->GetYaxis()->SetLabelFont(42);
   OMLYBIGFQJ->GetYaxis()->SetLabelSize(0.035);
   OMLYBIGFQJ->GetYaxis()->SetTitleSize(0.035);
   OMLYBIGFQJ->GetYaxis()->SetTitleFont(42);
   OMLYBIGFQJ->GetZaxis()->SetLabelFont(42);
   OMLYBIGFQJ->GetZaxis()->SetLabelSize(0.035);
   OMLYBIGFQJ->GetZaxis()->SetTitleSize(0.035);
   OMLYBIGFQJ->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(OMLYBIGFQJ,"");
   
   TH1F *PFSSHPYBIN = new TH1F("PFSSHPYBIN","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   PFSSHPYBIN->SetBinContent(701,1378.771);
   PFSSHPYBIN->SetMinimum(0.1);
   PFSSHPYBIN->SetMaximum(0);
   PFSSHPYBIN->SetEntries(49);
   PFSSHPYBIN->SetStats(0);

   ci = TColor::GetColor("#990033");
   PFSSHPYBIN->SetFillColor(ci);
   PFSSHPYBIN->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   PFSSHPYBIN->SetLineColor(ci);
   PFSSHPYBIN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   PFSSHPYBIN->GetXaxis()->SetLabelFont(42);
   PFSSHPYBIN->GetXaxis()->SetLabelSize(0.035);
   PFSSHPYBIN->GetXaxis()->SetTitleSize(0.035);
   PFSSHPYBIN->GetXaxis()->SetTitleFont(42);
   PFSSHPYBIN->GetYaxis()->SetTitle("Entries");
   PFSSHPYBIN->GetYaxis()->SetLabelFont(42);
   PFSSHPYBIN->GetYaxis()->SetLabelSize(0.035);
   PFSSHPYBIN->GetYaxis()->SetTitleSize(0.035);
   PFSSHPYBIN->GetYaxis()->SetTitleFont(42);
   PFSSHPYBIN->GetZaxis()->SetLabelFont(42);
   PFSSHPYBIN->GetZaxis()->SetLabelSize(0.035);
   PFSSHPYBIN->GetZaxis()->SetTitleSize(0.035);
   PFSSHPYBIN->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(PFSSHPYBIN,"");
   
   TH1F *ZWSGVJKMKO = new TH1F("ZWSGVJKMKO","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   ZWSGVJKMKO->SetBinContent(701,1184.389);
   ZWSGVJKMKO->SetMinimum(0.1);
   ZWSGVJKMKO->SetMaximum(0);
   ZWSGVJKMKO->SetEntries(188);
   ZWSGVJKMKO->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   ZWSGVJKMKO->SetFillColor(ci);
   ZWSGVJKMKO->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   ZWSGVJKMKO->SetLineColor(ci);
   ZWSGVJKMKO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   ZWSGVJKMKO->GetXaxis()->SetLabelFont(42);
   ZWSGVJKMKO->GetXaxis()->SetLabelSize(0.035);
   ZWSGVJKMKO->GetXaxis()->SetTitleSize(0.035);
   ZWSGVJKMKO->GetXaxis()->SetTitleFont(42);
   ZWSGVJKMKO->GetYaxis()->SetTitle("Entries");
   ZWSGVJKMKO->GetYaxis()->SetLabelFont(42);
   ZWSGVJKMKO->GetYaxis()->SetLabelSize(0.035);
   ZWSGVJKMKO->GetYaxis()->SetTitleSize(0.035);
   ZWSGVJKMKO->GetYaxis()->SetTitleFont(42);
   ZWSGVJKMKO->GetZaxis()->SetLabelFont(42);
   ZWSGVJKMKO->GetZaxis()->SetLabelSize(0.035);
   ZWSGVJKMKO->GetZaxis()->SetTitleSize(0.035);
   ZWSGVJKMKO->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(ZWSGVJKMKO,"");
   
   TH1F *THVANZBSKI = new TH1F("THVANZBSKI","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   THVANZBSKI->SetBinContent(701,697.3013);
   THVANZBSKI->SetMinimum(0.1);
   THVANZBSKI->SetMaximum(0);
   THVANZBSKI->SetEntries(24);
   THVANZBSKI->SetStats(0);

   ci = TColor::GetColor("#a42400");
   THVANZBSKI->SetFillColor(ci);
   THVANZBSKI->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   THVANZBSKI->SetLineColor(ci);
   THVANZBSKI->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   THVANZBSKI->GetXaxis()->SetLabelFont(42);
   THVANZBSKI->GetXaxis()->SetLabelSize(0.035);
   THVANZBSKI->GetXaxis()->SetTitleSize(0.035);
   THVANZBSKI->GetXaxis()->SetTitleFont(42);
   THVANZBSKI->GetYaxis()->SetTitle("Entries");
   THVANZBSKI->GetYaxis()->SetLabelFont(42);
   THVANZBSKI->GetYaxis()->SetLabelSize(0.035);
   THVANZBSKI->GetYaxis()->SetTitleSize(0.035);
   THVANZBSKI->GetYaxis()->SetTitleFont(42);
   THVANZBSKI->GetZaxis()->SetLabelFont(42);
   THVANZBSKI->GetZaxis()->SetLabelSize(0.035);
   THVANZBSKI->GetZaxis()->SetTitleSize(0.035);
   THVANZBSKI->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(THVANZBSKI,"");
   
   TH1F *OHBJNODELZ = new TH1F("OHBJNODELZ","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   OHBJNODELZ->SetBinContent(701,8808.519);
   OHBJNODELZ->SetMinimum(0.1);
   OHBJNODELZ->SetMaximum(0);
   OHBJNODELZ->SetEntries(15908);
   OHBJNODELZ->SetStats(0);

   ci = TColor::GetColor("#001544");
   OHBJNODELZ->SetFillColor(ci);
   OHBJNODELZ->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   OHBJNODELZ->SetLineColor(ci);
   OHBJNODELZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   OHBJNODELZ->GetXaxis()->SetLabelFont(42);
   OHBJNODELZ->GetXaxis()->SetLabelSize(0.035);
   OHBJNODELZ->GetXaxis()->SetTitleSize(0.035);
   OHBJNODELZ->GetXaxis()->SetTitleFont(42);
   OHBJNODELZ->GetYaxis()->SetTitle("Entries");
   OHBJNODELZ->GetYaxis()->SetLabelFont(42);
   OHBJNODELZ->GetYaxis()->SetLabelSize(0.035);
   OHBJNODELZ->GetYaxis()->SetTitleSize(0.035);
   OHBJNODELZ->GetYaxis()->SetTitleFont(42);
   OHBJNODELZ->GetZaxis()->SetLabelFont(42);
   OHBJNODELZ->GetZaxis()->SetLabelSize(0.035);
   OHBJNODELZ->GetZaxis()->SetTitleSize(0.035);
   OHBJNODELZ->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(OHBJNODELZ,"");
   
   TH1F *KYHKOXNTQD = new TH1F("KYHKOXNTQD","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   KYHKOXNTQD->SetBinContent(701,47698.73);
   KYHKOXNTQD->SetMinimum(0.1);
   KYHKOXNTQD->SetMaximum(0);
   KYHKOXNTQD->SetEntries(20216);
   KYHKOXNTQD->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   KYHKOXNTQD->SetFillColor(ci);
   KYHKOXNTQD->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   KYHKOXNTQD->SetLineColor(ci);
   KYHKOXNTQD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   KYHKOXNTQD->GetXaxis()->SetLabelFont(42);
   KYHKOXNTQD->GetXaxis()->SetLabelSize(0.035);
   KYHKOXNTQD->GetXaxis()->SetTitleSize(0.035);
   KYHKOXNTQD->GetXaxis()->SetTitleFont(42);
   KYHKOXNTQD->GetYaxis()->SetTitle("Entries");
   KYHKOXNTQD->GetYaxis()->SetLabelFont(42);
   KYHKOXNTQD->GetYaxis()->SetLabelSize(0.035);
   KYHKOXNTQD->GetYaxis()->SetTitleSize(0.035);
   KYHKOXNTQD->GetYaxis()->SetTitleFont(42);
   KYHKOXNTQD->GetZaxis()->SetLabelFont(42);
   KYHKOXNTQD->GetZaxis()->SetLabelSize(0.035);
   KYHKOXNTQD->GetZaxis()->SetTitleSize(0.035);
   KYHKOXNTQD->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(KYHKOXNTQD,"");
   
   TH1F *GWROKXBSVT = new TH1F("GWROKXBSVT","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   GWROKXBSVT->SetBinContent(701,8904.864);
   GWROKXBSVT->SetMinimum(0.1);
   GWROKXBSVT->SetMaximum(0);
   GWROKXBSVT->SetEntries(16082);
   GWROKXBSVT->SetStats(0);

   ci = TColor::GetColor("#620e00");
   GWROKXBSVT->SetFillColor(ci);
   GWROKXBSVT->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   GWROKXBSVT->SetLineColor(ci);
   GWROKXBSVT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   GWROKXBSVT->GetXaxis()->SetLabelFont(42);
   GWROKXBSVT->GetXaxis()->SetLabelSize(0.035);
   GWROKXBSVT->GetXaxis()->SetTitleSize(0.035);
   GWROKXBSVT->GetXaxis()->SetTitleFont(42);
   GWROKXBSVT->GetYaxis()->SetTitle("Entries");
   GWROKXBSVT->GetYaxis()->SetLabelFont(42);
   GWROKXBSVT->GetYaxis()->SetLabelSize(0.035);
   GWROKXBSVT->GetYaxis()->SetTitleSize(0.035);
   GWROKXBSVT->GetYaxis()->SetTitleFont(42);
   GWROKXBSVT->GetZaxis()->SetLabelFont(42);
   GWROKXBSVT->GetZaxis()->SetLabelSize(0.035);
   GWROKXBSVT->GetZaxis()->SetTitleSize(0.035);
   GWROKXBSVT->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(GWROKXBSVT,"");
   
   TH1F *ORKNCZPZDF = new TH1F("ORKNCZPZDF","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   ORKNCZPZDF->SetBinContent(701,47835.44);
   ORKNCZPZDF->SetMinimum(0.1);
   ORKNCZPZDF->SetMaximum(0);
   ORKNCZPZDF->SetEntries(20183);
   ORKNCZPZDF->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   ORKNCZPZDF->SetFillColor(ci);
   ORKNCZPZDF->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   ORKNCZPZDF->SetLineColor(ci);
   ORKNCZPZDF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   ORKNCZPZDF->GetXaxis()->SetLabelFont(42);
   ORKNCZPZDF->GetXaxis()->SetLabelSize(0.035);
   ORKNCZPZDF->GetXaxis()->SetTitleSize(0.035);
   ORKNCZPZDF->GetXaxis()->SetTitleFont(42);
   ORKNCZPZDF->GetYaxis()->SetTitle("Entries");
   ORKNCZPZDF->GetYaxis()->SetLabelFont(42);
   ORKNCZPZDF->GetYaxis()->SetLabelSize(0.035);
   ORKNCZPZDF->GetYaxis()->SetTitleSize(0.035);
   ORKNCZPZDF->GetYaxis()->SetTitleFont(42);
   ORKNCZPZDF->GetZaxis()->SetLabelFont(42);
   ORKNCZPZDF->GetZaxis()->SetLabelSize(0.035);
   ORKNCZPZDF->GetZaxis()->SetTitleSize(0.035);
   ORKNCZPZDF->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(ORKNCZPZDF,"");
   
   TH1F *RUWQVSQHXE = new TH1F("RUWQVSQHXE","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   RUWQVSQHXE->SetBinContent(701,1705.275);
   RUWQVSQHXE->SetMinimum(0.1);
   RUWQVSQHXE->SetMaximum(0);
   RUWQVSQHXE->SetEntries(126);
   RUWQVSQHXE->SetStats(0);
   RUWQVSQHXE->SetFillColor(4);
   RUWQVSQHXE->SetFillStyle(3001);
   RUWQVSQHXE->SetLineColor(4);
   RUWQVSQHXE->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   RUWQVSQHXE->GetXaxis()->SetLabelFont(42);
   RUWQVSQHXE->GetXaxis()->SetLabelSize(0.035);
   RUWQVSQHXE->GetXaxis()->SetTitleSize(0.035);
   RUWQVSQHXE->GetXaxis()->SetTitleFont(42);
   RUWQVSQHXE->GetYaxis()->SetTitle("Entries");
   RUWQVSQHXE->GetYaxis()->SetLabelFont(42);
   RUWQVSQHXE->GetYaxis()->SetLabelSize(0.035);
   RUWQVSQHXE->GetYaxis()->SetTitleSize(0.035);
   RUWQVSQHXE->GetYaxis()->SetTitleFont(42);
   RUWQVSQHXE->GetZaxis()->SetLabelFont(42);
   RUWQVSQHXE->GetZaxis()->SetLabelSize(0.035);
   RUWQVSQHXE->GetZaxis()->SetTitleSize(0.035);
   RUWQVSQHXE->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(RUWQVSQHXE,"");
   
   TH1F *NIMURCNNOY = new TH1F("NIMURCNNOY","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   NIMURCNNOY->SetBinContent(701,5100.519);
   NIMURCNNOY->SetMinimum(0.1);
   NIMURCNNOY->SetMaximum(0);
   NIMURCNNOY->SetEntries(70);
   NIMURCNNOY->SetStats(0);

   ci = TColor::GetColor("#007db5");
   NIMURCNNOY->SetFillColor(ci);
   NIMURCNNOY->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   NIMURCNNOY->SetLineColor(ci);
   NIMURCNNOY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   NIMURCNNOY->GetXaxis()->SetLabelFont(42);
   NIMURCNNOY->GetXaxis()->SetLabelSize(0.035);
   NIMURCNNOY->GetXaxis()->SetTitleSize(0.035);
   NIMURCNNOY->GetXaxis()->SetTitleFont(42);
   NIMURCNNOY->GetYaxis()->SetTitle("Entries");
   NIMURCNNOY->GetYaxis()->SetLabelFont(42);
   NIMURCNNOY->GetYaxis()->SetLabelSize(0.035);
   NIMURCNNOY->GetYaxis()->SetTitleSize(0.035);
   NIMURCNNOY->GetYaxis()->SetTitleFont(42);
   NIMURCNNOY->GetZaxis()->SetLabelFont(42);
   NIMURCNNOY->GetZaxis()->SetLabelSize(0.035);
   NIMURCNNOY->GetZaxis()->SetTitleSize(0.035);
   NIMURCNNOY->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(NIMURCNNOY,"");
   
   TH1F *EOFAMKUTWI = new TH1F("EOFAMKUTWI","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   EOFAMKUTWI->SetBinContent(701,2984.078);
   EOFAMKUTWI->SetMinimum(0.1);
   EOFAMKUTWI->SetMaximum(0);
   EOFAMKUTWI->SetEntries(42);
   EOFAMKUTWI->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   EOFAMKUTWI->SetFillColor(ci);
   EOFAMKUTWI->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   EOFAMKUTWI->SetLineColor(ci);
   EOFAMKUTWI->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   EOFAMKUTWI->GetXaxis()->SetLabelFont(42);
   EOFAMKUTWI->GetXaxis()->SetLabelSize(0.035);
   EOFAMKUTWI->GetXaxis()->SetTitleSize(0.035);
   EOFAMKUTWI->GetXaxis()->SetTitleFont(42);
   EOFAMKUTWI->GetYaxis()->SetTitle("Entries");
   EOFAMKUTWI->GetYaxis()->SetLabelFont(42);
   EOFAMKUTWI->GetYaxis()->SetLabelSize(0.035);
   EOFAMKUTWI->GetYaxis()->SetTitleSize(0.035);
   EOFAMKUTWI->GetYaxis()->SetTitleFont(42);
   EOFAMKUTWI->GetZaxis()->SetLabelFont(42);
   EOFAMKUTWI->GetZaxis()->SetLabelSize(0.035);
   EOFAMKUTWI->GetZaxis()->SetTitleSize(0.035);
   EOFAMKUTWI->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(EOFAMKUTWI,"");
   
   TH1F *CXTBBBROWU = new TH1F("CXTBBBROWU","HighestEnergyIsolatedLeptonTransverseMomentum",700,0,700);
   CXTBBBROWU->SetBinContent(701,1609.61);
   CXTBBBROWU->SetMinimum(0.1);
   CXTBBBROWU->SetMaximum(0);
   CXTBBBROWU->SetEntries(4);
   CXTBBBROWU->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   CXTBBBROWU->SetFillColor(ci);
   CXTBBBROWU->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   CXTBBBROWU->SetLineColor(ci);
   CXTBBBROWU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonTransverseMomentum");
   CXTBBBROWU->GetXaxis()->SetLabelFont(42);
   CXTBBBROWU->GetXaxis()->SetLabelSize(0.035);
   CXTBBBROWU->GetXaxis()->SetTitleSize(0.035);
   CXTBBBROWU->GetXaxis()->SetTitleFont(42);
   CXTBBBROWU->GetYaxis()->SetTitle("Entries");
   CXTBBBROWU->GetYaxis()->SetLabelFont(42);
   CXTBBBROWU->GetYaxis()->SetLabelSize(0.035);
   CXTBBBROWU->GetYaxis()->SetTitleSize(0.035);
   CXTBBBROWU->GetYaxis()->SetTitleFont(42);
   CXTBBBROWU->GetZaxis()->SetLabelFont(42);
   CXTBBBROWU->GetZaxis()->SetLabelSize(0.035);
   CXTBBBROWU->GetZaxis()->SetTitleSize(0.035);
   CXTBBBROWU->GetZaxis()->SetTitleFont(42);
   KVRFNTFAUH->Add(CXTBBBROWU,"");
   KVRFNTFAUH->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("KBWWBABZIV","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CYYLEPLZEG","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("HOWTHOJURC","ee_llqqqq","f");

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
   entry=leg->AddEntry("OWSZEUEPWN","ee_qqqq","f");

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
   entry=leg->AddEntry("NZRQOMPOBQ","ee_nunuqq","f");

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
   entry=leg->AddEntry("YQRFGWKRIT","ee_lnuqq","f");

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
   entry=leg->AddEntry("CNFIFAVTFY","ee_qqll","f");

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
   entry=leg->AddEntry("NJNDSCCGJG","ee_qq","f");

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
   entry=leg->AddEntry("OMLYBIGFQJ","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("PFSSHPYBIN","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("ZWSGVJKMKO","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("THVANZBSKI","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("OHBJNODELZ","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("KYHKOXNTQD","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("GWROKXBSVT","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("ORKNCZPZDF","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("RUWQVSQHXE","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NIMURCNNOY","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("EOFAMKUTWI","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("CXTBBBROWU","gammagamma_qqqq_BS_BS","f");

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
   SWIAKAWRHF->Modified();
   SWIAKAWRHF->cd();
   SWIAKAWRHF->SetSelected(SWIAKAWRHF);
}
