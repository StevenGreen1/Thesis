{
//=========Macro generated from canvas: ZRMTZPEXFT/HighestEnergyIsolatedLeptonCosTheta
//=========  (Tue Apr 25 10:04:11 2017) by ROOT version5.34/30
   TCanvas *ZRMTZPEXFT = new TCanvas("ZRMTZPEXFT", "HighestEnergyIsolatedLeptonCosTheta",0,0,700,500);
   gStyle->SetOptStat(0);
   ZRMTZPEXFT->SetHighLightColor(2);
   ZRMTZPEXFT->Range(0,0,1,1);
   ZRMTZPEXFT->SetFillColor(0);
   ZRMTZPEXFT->SetBorderMode(0);
   ZRMTZPEXFT->SetBorderSize(2);
   ZRMTZPEXFT->SetLogy();
   ZRMTZPEXFT->SetFrameBorderMode(0);
   ZRMTZPEXFT->SetFrameBorderMode(0);
   
   THStack *LZVGTRJEAY = new THStack();
   LZVGTRJEAY->SetName("LZVGTRJEAY");
   LZVGTRJEAY->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   LZVGTRJEAY->SetMinimum(0.1);
   
   TH1F *LZVGTRJEAY_stack_21 = new TH1F("LZVGTRJEAY_stack_21","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   LZVGTRJEAY_stack_21->SetMinimum(-0);
   LZVGTRJEAY_stack_21->SetMaximum(-nan);
   LZVGTRJEAY_stack_21->SetDirectory(0);
   LZVGTRJEAY_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LZVGTRJEAY_stack_21->SetLineColor(ci);
   LZVGTRJEAY_stack_21->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   LZVGTRJEAY_stack_21->GetXaxis()->SetLabelFont(42);
   LZVGTRJEAY_stack_21->GetXaxis()->SetLabelSize(0.035);
   LZVGTRJEAY_stack_21->GetXaxis()->SetTitleSize(0.035);
   LZVGTRJEAY_stack_21->GetXaxis()->SetTitleFont(42);
   LZVGTRJEAY_stack_21->GetYaxis()->SetTitle("Entries");
   LZVGTRJEAY_stack_21->GetYaxis()->SetLabelFont(42);
   LZVGTRJEAY_stack_21->GetYaxis()->SetLabelSize(0.035);
   LZVGTRJEAY_stack_21->GetYaxis()->SetTitleSize(0.035);
   LZVGTRJEAY_stack_21->GetYaxis()->SetTitleFont(42);
   LZVGTRJEAY_stack_21->GetZaxis()->SetLabelFont(42);
   LZVGTRJEAY_stack_21->GetZaxis()->SetLabelSize(0.035);
   LZVGTRJEAY_stack_21->GetZaxis()->SetTitleSize(0.035);
   LZVGTRJEAY_stack_21->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->SetHistogram(LZVGTRJEAY_stack_21);
   
   
   TH1F *EKCFZTNWFM = new TH1F("EKCFZTNWFM","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   EKCFZTNWFM->SetBinContent(101,23618.04);
   EKCFZTNWFM->SetMinimum(0.1);
   EKCFZTNWFM->SetMaximum(0);
   EKCFZTNWFM->SetEntries(1726479);
   EKCFZTNWFM->SetStats(0);
   EKCFZTNWFM->SetFillColor(1);
   EKCFZTNWFM->SetFillStyle(3001);
   EKCFZTNWFM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   EKCFZTNWFM->GetXaxis()->SetLabelFont(42);
   EKCFZTNWFM->GetXaxis()->SetLabelSize(0.035);
   EKCFZTNWFM->GetXaxis()->SetTitleSize(0.035);
   EKCFZTNWFM->GetXaxis()->SetTitleFont(42);
   EKCFZTNWFM->GetYaxis()->SetTitle("Entries");
   EKCFZTNWFM->GetYaxis()->SetLabelFont(42);
   EKCFZTNWFM->GetYaxis()->SetLabelSize(0.035);
   EKCFZTNWFM->GetYaxis()->SetTitleSize(0.035);
   EKCFZTNWFM->GetYaxis()->SetTitleFont(42);
   EKCFZTNWFM->GetZaxis()->SetLabelFont(42);
   EKCFZTNWFM->GetZaxis()->SetLabelSize(0.035);
   EKCFZTNWFM->GetZaxis()->SetTitleSize(0.035);
   EKCFZTNWFM->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(EKCFZTNWFM,"");
   
   TH1F *RWKKRKRJZL = new TH1F("RWKKRKRJZL","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   RWKKRKRJZL->SetBinContent(101,43001.88);
   RWKKRKRJZL->SetMinimum(0.1);
   RWKKRKRJZL->SetMaximum(0);
   RWKKRKRJZL->SetEntries(192870);
   RWKKRKRJZL->SetStats(0);

   ci = TColor::GetColor("#000066");
   RWKKRKRJZL->SetFillColor(ci);
   RWKKRKRJZL->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   RWKKRKRJZL->SetLineColor(ci);
   RWKKRKRJZL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   RWKKRKRJZL->GetXaxis()->SetLabelFont(42);
   RWKKRKRJZL->GetXaxis()->SetLabelSize(0.035);
   RWKKRKRJZL->GetXaxis()->SetTitleSize(0.035);
   RWKKRKRJZL->GetXaxis()->SetTitleFont(42);
   RWKKRKRJZL->GetYaxis()->SetTitle("Entries");
   RWKKRKRJZL->GetYaxis()->SetLabelFont(42);
   RWKKRKRJZL->GetYaxis()->SetLabelSize(0.035);
   RWKKRKRJZL->GetYaxis()->SetTitleSize(0.035);
   RWKKRKRJZL->GetYaxis()->SetTitleFont(42);
   RWKKRKRJZL->GetZaxis()->SetLabelFont(42);
   RWKKRKRJZL->GetZaxis()->SetLabelSize(0.035);
   RWKKRKRJZL->GetZaxis()->SetTitleSize(0.035);
   RWKKRKRJZL->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(RWKKRKRJZL,"");
   
   TH1F *LLFDSJIOIQ = new TH1F("LLFDSJIOIQ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   LLFDSJIOIQ->SetBinContent(101,709.0712);
   LLFDSJIOIQ->SetMinimum(0.1);
   LLFDSJIOIQ->SetMaximum(0);
   LLFDSJIOIQ->SetEntries(9657);
   LLFDSJIOIQ->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   LLFDSJIOIQ->SetFillColor(ci);
   LLFDSJIOIQ->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   LLFDSJIOIQ->SetLineColor(ci);
   LLFDSJIOIQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   LLFDSJIOIQ->GetXaxis()->SetLabelFont(42);
   LLFDSJIOIQ->GetXaxis()->SetLabelSize(0.035);
   LLFDSJIOIQ->GetXaxis()->SetTitleSize(0.035);
   LLFDSJIOIQ->GetXaxis()->SetTitleFont(42);
   LLFDSJIOIQ->GetYaxis()->SetTitle("Entries");
   LLFDSJIOIQ->GetYaxis()->SetLabelFont(42);
   LLFDSJIOIQ->GetYaxis()->SetLabelSize(0.035);
   LLFDSJIOIQ->GetYaxis()->SetTitleSize(0.035);
   LLFDSJIOIQ->GetYaxis()->SetTitleFont(42);
   LLFDSJIOIQ->GetZaxis()->SetLabelFont(42);
   LLFDSJIOIQ->GetZaxis()->SetLabelSize(0.035);
   LLFDSJIOIQ->GetZaxis()->SetTitleSize(0.035);
   LLFDSJIOIQ->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(LLFDSJIOIQ,"");
   
   TH1F *XYBQYELTWD = new TH1F("XYBQYELTWD","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   XYBQYELTWD->SetBinContent(101,6464.335);
   XYBQYELTWD->SetMinimum(0.1);
   XYBQYELTWD->SetMaximum(0);
   XYBQYELTWD->SetEntries(2025);
   XYBQYELTWD->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   XYBQYELTWD->SetFillColor(ci);
   XYBQYELTWD->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   XYBQYELTWD->SetLineColor(ci);
   XYBQYELTWD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   XYBQYELTWD->GetXaxis()->SetLabelFont(42);
   XYBQYELTWD->GetXaxis()->SetLabelSize(0.035);
   XYBQYELTWD->GetXaxis()->SetTitleSize(0.035);
   XYBQYELTWD->GetXaxis()->SetTitleFont(42);
   XYBQYELTWD->GetYaxis()->SetTitle("Entries");
   XYBQYELTWD->GetYaxis()->SetLabelFont(42);
   XYBQYELTWD->GetYaxis()->SetLabelSize(0.035);
   XYBQYELTWD->GetYaxis()->SetTitleSize(0.035);
   XYBQYELTWD->GetYaxis()->SetTitleFont(42);
   XYBQYELTWD->GetZaxis()->SetLabelFont(42);
   XYBQYELTWD->GetZaxis()->SetLabelSize(0.035);
   XYBQYELTWD->GetZaxis()->SetTitleSize(0.035);
   XYBQYELTWD->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(XYBQYELTWD,"");
   
   TH1F *ECHUVTXJEC = new TH1F("ECHUVTXJEC","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   ECHUVTXJEC->SetBinContent(101,513789.8);
   ECHUVTXJEC->SetMinimum(0.1);
   ECHUVTXJEC->SetMaximum(0);
   ECHUVTXJEC->SetEntries(253693);
   ECHUVTXJEC->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   ECHUVTXJEC->SetFillColor(ci);
   ECHUVTXJEC->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   ECHUVTXJEC->SetLineColor(ci);
   ECHUVTXJEC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   ECHUVTXJEC->GetXaxis()->SetLabelFont(42);
   ECHUVTXJEC->GetXaxis()->SetLabelSize(0.035);
   ECHUVTXJEC->GetXaxis()->SetTitleSize(0.035);
   ECHUVTXJEC->GetXaxis()->SetTitleFont(42);
   ECHUVTXJEC->GetYaxis()->SetTitle("Entries");
   ECHUVTXJEC->GetYaxis()->SetLabelFont(42);
   ECHUVTXJEC->GetYaxis()->SetLabelSize(0.035);
   ECHUVTXJEC->GetYaxis()->SetTitleSize(0.035);
   ECHUVTXJEC->GetYaxis()->SetTitleFont(42);
   ECHUVTXJEC->GetZaxis()->SetLabelFont(42);
   ECHUVTXJEC->GetZaxis()->SetLabelSize(0.035);
   ECHUVTXJEC->GetZaxis()->SetTitleSize(0.035);
   ECHUVTXJEC->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(ECHUVTXJEC,"");
   
   TH1F *OGTRJGRLLC = new TH1F("OGTRJGRLLC","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   OGTRJGRLLC->SetBinContent(101,1235321);
   OGTRJGRLLC->SetMinimum(0.1);
   OGTRJGRLLC->SetMaximum(0);
   OGTRJGRLLC->SetEntries(400522);
   OGTRJGRLLC->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   OGTRJGRLLC->SetFillColor(ci);
   OGTRJGRLLC->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   OGTRJGRLLC->SetLineColor(ci);
   OGTRJGRLLC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   OGTRJGRLLC->GetXaxis()->SetLabelFont(42);
   OGTRJGRLLC->GetXaxis()->SetLabelSize(0.035);
   OGTRJGRLLC->GetXaxis()->SetTitleSize(0.035);
   OGTRJGRLLC->GetXaxis()->SetTitleFont(42);
   OGTRJGRLLC->GetYaxis()->SetTitle("Entries");
   OGTRJGRLLC->GetYaxis()->SetLabelFont(42);
   OGTRJGRLLC->GetYaxis()->SetLabelSize(0.035);
   OGTRJGRLLC->GetYaxis()->SetTitleSize(0.035);
   OGTRJGRLLC->GetYaxis()->SetTitleFont(42);
   OGTRJGRLLC->GetZaxis()->SetLabelFont(42);
   OGTRJGRLLC->GetZaxis()->SetLabelSize(0.035);
   OGTRJGRLLC->GetZaxis()->SetTitleSize(0.035);
   OGTRJGRLLC->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(OGTRJGRLLC,"");
   
   TH1F *INPQXRUJRJ = new TH1F("INPQXRUJRJ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   INPQXRUJRJ->SetBinContent(101,5985.927);
   INPQXRUJRJ->SetMinimum(0.1);
   INPQXRUJRJ->SetMaximum(0);
   INPQXRUJRJ->SetEntries(3074);
   INPQXRUJRJ->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   INPQXRUJRJ->SetFillColor(ci);
   INPQXRUJRJ->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   INPQXRUJRJ->SetLineColor(ci);
   INPQXRUJRJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   INPQXRUJRJ->GetXaxis()->SetLabelFont(42);
   INPQXRUJRJ->GetXaxis()->SetLabelSize(0.035);
   INPQXRUJRJ->GetXaxis()->SetTitleSize(0.035);
   INPQXRUJRJ->GetXaxis()->SetTitleFont(42);
   INPQXRUJRJ->GetYaxis()->SetTitle("Entries");
   INPQXRUJRJ->GetYaxis()->SetLabelFont(42);
   INPQXRUJRJ->GetYaxis()->SetLabelSize(0.035);
   INPQXRUJRJ->GetYaxis()->SetTitleSize(0.035);
   INPQXRUJRJ->GetYaxis()->SetTitleFont(42);
   INPQXRUJRJ->GetZaxis()->SetLabelFont(42);
   INPQXRUJRJ->GetZaxis()->SetLabelSize(0.035);
   INPQXRUJRJ->GetZaxis()->SetTitleSize(0.035);
   INPQXRUJRJ->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(INPQXRUJRJ,"");
   
   TH1F *MOTSUCGSIY = new TH1F("MOTSUCGSIY","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   MOTSUCGSIY->SetBinContent(101,34551.23);
   MOTSUCGSIY->SetMinimum(0.1);
   MOTSUCGSIY->SetMaximum(0);
   MOTSUCGSIY->SetEntries(2795);
   MOTSUCGSIY->SetStats(0);

   ci = TColor::GetColor("#006633");
   MOTSUCGSIY->SetFillColor(ci);
   MOTSUCGSIY->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   MOTSUCGSIY->SetLineColor(ci);
   MOTSUCGSIY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   MOTSUCGSIY->GetXaxis()->SetLabelFont(42);
   MOTSUCGSIY->GetXaxis()->SetLabelSize(0.035);
   MOTSUCGSIY->GetXaxis()->SetTitleSize(0.035);
   MOTSUCGSIY->GetXaxis()->SetTitleFont(42);
   MOTSUCGSIY->GetYaxis()->SetTitle("Entries");
   MOTSUCGSIY->GetYaxis()->SetLabelFont(42);
   MOTSUCGSIY->GetYaxis()->SetLabelSize(0.035);
   MOTSUCGSIY->GetYaxis()->SetTitleSize(0.035);
   MOTSUCGSIY->GetYaxis()->SetTitleFont(42);
   MOTSUCGSIY->GetZaxis()->SetLabelFont(42);
   MOTSUCGSIY->GetZaxis()->SetLabelSize(0.035);
   MOTSUCGSIY->GetZaxis()->SetTitleSize(0.035);
   MOTSUCGSIY->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(MOTSUCGSIY,"");
   
   TH1F *NSHDSVAHVJ = new TH1F("NSHDSVAHVJ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   NSHDSVAHVJ->SetBinContent(101,878.8586);
   NSHDSVAHVJ->SetMinimum(0.1);
   NSHDSVAHVJ->SetMaximum(0);
   NSHDSVAHVJ->SetEntries(258);
   NSHDSVAHVJ->SetStats(0);
   NSHDSVAHVJ->SetFillColor(3);
   NSHDSVAHVJ->SetFillStyle(3001);
   NSHDSVAHVJ->SetLineColor(3);
   NSHDSVAHVJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   NSHDSVAHVJ->GetXaxis()->SetLabelFont(42);
   NSHDSVAHVJ->GetXaxis()->SetLabelSize(0.035);
   NSHDSVAHVJ->GetXaxis()->SetTitleSize(0.035);
   NSHDSVAHVJ->GetXaxis()->SetTitleFont(42);
   NSHDSVAHVJ->GetYaxis()->SetTitle("Entries");
   NSHDSVAHVJ->GetYaxis()->SetLabelFont(42);
   NSHDSVAHVJ->GetYaxis()->SetLabelSize(0.035);
   NSHDSVAHVJ->GetYaxis()->SetTitleSize(0.035);
   NSHDSVAHVJ->GetYaxis()->SetTitleFont(42);
   NSHDSVAHVJ->GetZaxis()->SetLabelFont(42);
   NSHDSVAHVJ->GetZaxis()->SetLabelSize(0.035);
   NSHDSVAHVJ->GetZaxis()->SetTitleSize(0.035);
   NSHDSVAHVJ->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(NSHDSVAHVJ,"");
   
   TH1F *GLDSVEYSKI = new TH1F("GLDSVEYSKI","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   GLDSVEYSKI->SetBinContent(101,1034.078);
   GLDSVEYSKI->SetMinimum(0.1);
   GLDSVEYSKI->SetMaximum(0);
   GLDSVEYSKI->SetEntries(98);
   GLDSVEYSKI->SetStats(0);

   ci = TColor::GetColor("#990033");
   GLDSVEYSKI->SetFillColor(ci);
   GLDSVEYSKI->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   GLDSVEYSKI->SetLineColor(ci);
   GLDSVEYSKI->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   GLDSVEYSKI->GetXaxis()->SetLabelFont(42);
   GLDSVEYSKI->GetXaxis()->SetLabelSize(0.035);
   GLDSVEYSKI->GetXaxis()->SetTitleSize(0.035);
   GLDSVEYSKI->GetXaxis()->SetTitleFont(42);
   GLDSVEYSKI->GetYaxis()->SetTitle("Entries");
   GLDSVEYSKI->GetYaxis()->SetLabelFont(42);
   GLDSVEYSKI->GetYaxis()->SetLabelSize(0.035);
   GLDSVEYSKI->GetYaxis()->SetTitleSize(0.035);
   GLDSVEYSKI->GetYaxis()->SetTitleFont(42);
   GLDSVEYSKI->GetZaxis()->SetLabelFont(42);
   GLDSVEYSKI->GetZaxis()->SetLabelSize(0.035);
   GLDSVEYSKI->GetZaxis()->SetTitleSize(0.035);
   GLDSVEYSKI->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(GLDSVEYSKI,"");
   
   TH1F *SUHTPMXHXQ = new TH1F("SUHTPMXHXQ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   SUHTPMXHXQ->SetBinContent(101,1142.616);
   SUHTPMXHXQ->SetMinimum(0.1);
   SUHTPMXHXQ->SetMaximum(0);
   SUHTPMXHXQ->SetEntries(363);
   SUHTPMXHXQ->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   SUHTPMXHXQ->SetFillColor(ci);
   SUHTPMXHXQ->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   SUHTPMXHXQ->SetLineColor(ci);
   SUHTPMXHXQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   SUHTPMXHXQ->GetXaxis()->SetLabelFont(42);
   SUHTPMXHXQ->GetXaxis()->SetLabelSize(0.035);
   SUHTPMXHXQ->GetXaxis()->SetTitleSize(0.035);
   SUHTPMXHXQ->GetXaxis()->SetTitleFont(42);
   SUHTPMXHXQ->GetYaxis()->SetTitle("Entries");
   SUHTPMXHXQ->GetYaxis()->SetLabelFont(42);
   SUHTPMXHXQ->GetYaxis()->SetLabelSize(0.035);
   SUHTPMXHXQ->GetYaxis()->SetTitleSize(0.035);
   SUHTPMXHXQ->GetYaxis()->SetTitleFont(42);
   SUHTPMXHXQ->GetZaxis()->SetLabelFont(42);
   SUHTPMXHXQ->GetZaxis()->SetLabelSize(0.035);
   SUHTPMXHXQ->GetZaxis()->SetTitleSize(0.035);
   SUHTPMXHXQ->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(SUHTPMXHXQ,"");
   
   TH1F *DMAKTOPOZM = new TH1F("DMAKTOPOZM","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   DMAKTOPOZM->SetBinContent(101,479.3946);
   DMAKTOPOZM->SetMinimum(0.1);
   DMAKTOPOZM->SetMaximum(0);
   DMAKTOPOZM->SetEntries(44);
   DMAKTOPOZM->SetStats(0);

   ci = TColor::GetColor("#a42400");
   DMAKTOPOZM->SetFillColor(ci);
   DMAKTOPOZM->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   DMAKTOPOZM->SetLineColor(ci);
   DMAKTOPOZM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   DMAKTOPOZM->GetXaxis()->SetLabelFont(42);
   DMAKTOPOZM->GetXaxis()->SetLabelSize(0.035);
   DMAKTOPOZM->GetXaxis()->SetTitleSize(0.035);
   DMAKTOPOZM->GetXaxis()->SetTitleFont(42);
   DMAKTOPOZM->GetYaxis()->SetTitle("Entries");
   DMAKTOPOZM->GetYaxis()->SetLabelFont(42);
   DMAKTOPOZM->GetYaxis()->SetLabelSize(0.035);
   DMAKTOPOZM->GetYaxis()->SetTitleSize(0.035);
   DMAKTOPOZM->GetYaxis()->SetTitleFont(42);
   DMAKTOPOZM->GetZaxis()->SetLabelFont(42);
   DMAKTOPOZM->GetZaxis()->SetLabelSize(0.035);
   DMAKTOPOZM->GetZaxis()->SetTitleSize(0.035);
   DMAKTOPOZM->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(DMAKTOPOZM,"");
   
   TH1F *EPEUKEQGTF = new TH1F("EPEUKEQGTF","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   EPEUKEQGTF->SetBinContent(101,12699.44);
   EPEUKEQGTF->SetMinimum(0.1);
   EPEUKEQGTF->SetMaximum(0);
   EPEUKEQGTF->SetEntries(45909);
   EPEUKEQGTF->SetStats(0);

   ci = TColor::GetColor("#001544");
   EPEUKEQGTF->SetFillColor(ci);
   EPEUKEQGTF->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   EPEUKEQGTF->SetLineColor(ci);
   EPEUKEQGTF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   EPEUKEQGTF->GetXaxis()->SetLabelFont(42);
   EPEUKEQGTF->GetXaxis()->SetLabelSize(0.035);
   EPEUKEQGTF->GetXaxis()->SetTitleSize(0.035);
   EPEUKEQGTF->GetXaxis()->SetTitleFont(42);
   EPEUKEQGTF->GetYaxis()->SetTitle("Entries");
   EPEUKEQGTF->GetYaxis()->SetLabelFont(42);
   EPEUKEQGTF->GetYaxis()->SetLabelSize(0.035);
   EPEUKEQGTF->GetYaxis()->SetTitleSize(0.035);
   EPEUKEQGTF->GetYaxis()->SetTitleFont(42);
   EPEUKEQGTF->GetZaxis()->SetLabelFont(42);
   EPEUKEQGTF->GetZaxis()->SetLabelSize(0.035);
   EPEUKEQGTF->GetZaxis()->SetTitleSize(0.035);
   EPEUKEQGTF->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(EPEUKEQGTF,"");
   
   TH1F *DKZJVDZSRL = new TH1F("DKZJVDZSRL","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   DKZJVDZSRL->SetBinContent(101,55799.74);
   DKZJVDZSRL->SetMinimum(0.1);
   DKZJVDZSRL->SetMaximum(0);
   DKZJVDZSRL->SetEntries(63129);
   DKZJVDZSRL->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   DKZJVDZSRL->SetFillColor(ci);
   DKZJVDZSRL->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   DKZJVDZSRL->SetLineColor(ci);
   DKZJVDZSRL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   DKZJVDZSRL->GetXaxis()->SetLabelFont(42);
   DKZJVDZSRL->GetXaxis()->SetLabelSize(0.035);
   DKZJVDZSRL->GetXaxis()->SetTitleSize(0.035);
   DKZJVDZSRL->GetXaxis()->SetTitleFont(42);
   DKZJVDZSRL->GetYaxis()->SetTitle("Entries");
   DKZJVDZSRL->GetYaxis()->SetLabelFont(42);
   DKZJVDZSRL->GetYaxis()->SetLabelSize(0.035);
   DKZJVDZSRL->GetYaxis()->SetTitleSize(0.035);
   DKZJVDZSRL->GetYaxis()->SetTitleFont(42);
   DKZJVDZSRL->GetZaxis()->SetLabelFont(42);
   DKZJVDZSRL->GetZaxis()->SetLabelSize(0.035);
   DKZJVDZSRL->GetZaxis()->SetTitleSize(0.035);
   DKZJVDZSRL->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(DKZJVDZSRL,"");
   
   TH1F *MPMKVNVEHU = new TH1F("MPMKVNVEHU","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   MPMKVNVEHU->SetBinContent(101,12782.63);
   MPMKVNVEHU->SetMinimum(0.1);
   MPMKVNVEHU->SetMaximum(0);
   MPMKVNVEHU->SetEntries(46210);
   MPMKVNVEHU->SetStats(0);

   ci = TColor::GetColor("#620e00");
   MPMKVNVEHU->SetFillColor(ci);
   MPMKVNVEHU->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   MPMKVNVEHU->SetLineColor(ci);
   MPMKVNVEHU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   MPMKVNVEHU->GetXaxis()->SetLabelFont(42);
   MPMKVNVEHU->GetXaxis()->SetLabelSize(0.035);
   MPMKVNVEHU->GetXaxis()->SetTitleSize(0.035);
   MPMKVNVEHU->GetXaxis()->SetTitleFont(42);
   MPMKVNVEHU->GetYaxis()->SetTitle("Entries");
   MPMKVNVEHU->GetYaxis()->SetLabelFont(42);
   MPMKVNVEHU->GetYaxis()->SetLabelSize(0.035);
   MPMKVNVEHU->GetYaxis()->SetTitleSize(0.035);
   MPMKVNVEHU->GetYaxis()->SetTitleFont(42);
   MPMKVNVEHU->GetZaxis()->SetLabelFont(42);
   MPMKVNVEHU->GetZaxis()->SetLabelSize(0.035);
   MPMKVNVEHU->GetZaxis()->SetTitleSize(0.035);
   MPMKVNVEHU->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(MPMKVNVEHU,"");
   
   TH1F *APPGLIWRTN = new TH1F("APPGLIWRTN","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   APPGLIWRTN->SetBinContent(101,55732.39);
   APPGLIWRTN->SetMinimum(0.1);
   APPGLIWRTN->SetMaximum(0);
   APPGLIWRTN->SetEntries(62776);
   APPGLIWRTN->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   APPGLIWRTN->SetFillColor(ci);
   APPGLIWRTN->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   APPGLIWRTN->SetLineColor(ci);
   APPGLIWRTN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   APPGLIWRTN->GetXaxis()->SetLabelFont(42);
   APPGLIWRTN->GetXaxis()->SetLabelSize(0.035);
   APPGLIWRTN->GetXaxis()->SetTitleSize(0.035);
   APPGLIWRTN->GetXaxis()->SetTitleFont(42);
   APPGLIWRTN->GetYaxis()->SetTitle("Entries");
   APPGLIWRTN->GetYaxis()->SetLabelFont(42);
   APPGLIWRTN->GetYaxis()->SetLabelSize(0.035);
   APPGLIWRTN->GetYaxis()->SetTitleSize(0.035);
   APPGLIWRTN->GetYaxis()->SetTitleFont(42);
   APPGLIWRTN->GetZaxis()->SetLabelFont(42);
   APPGLIWRTN->GetZaxis()->SetLabelSize(0.035);
   APPGLIWRTN->GetZaxis()->SetTitleSize(0.035);
   APPGLIWRTN->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(APPGLIWRTN,"");
   
   TH1F *UIYKOSXQJZ = new TH1F("UIYKOSXQJZ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   UIYKOSXQJZ->SetBinContent(101,1637.606);
   UIYKOSXQJZ->SetMinimum(0.1);
   UIYKOSXQJZ->SetMaximum(0);
   UIYKOSXQJZ->SetEntries(242);
   UIYKOSXQJZ->SetStats(0);
   UIYKOSXQJZ->SetFillColor(4);
   UIYKOSXQJZ->SetFillStyle(3001);
   UIYKOSXQJZ->SetLineColor(4);
   UIYKOSXQJZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   UIYKOSXQJZ->GetXaxis()->SetLabelFont(42);
   UIYKOSXQJZ->GetXaxis()->SetLabelSize(0.035);
   UIYKOSXQJZ->GetXaxis()->SetTitleSize(0.035);
   UIYKOSXQJZ->GetXaxis()->SetTitleFont(42);
   UIYKOSXQJZ->GetYaxis()->SetTitle("Entries");
   UIYKOSXQJZ->GetYaxis()->SetLabelFont(42);
   UIYKOSXQJZ->GetYaxis()->SetLabelSize(0.035);
   UIYKOSXQJZ->GetYaxis()->SetTitleSize(0.035);
   UIYKOSXQJZ->GetYaxis()->SetTitleFont(42);
   UIYKOSXQJZ->GetZaxis()->SetLabelFont(42);
   UIYKOSXQJZ->GetZaxis()->SetLabelSize(0.035);
   UIYKOSXQJZ->GetZaxis()->SetTitleSize(0.035);
   UIYKOSXQJZ->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(UIYKOSXQJZ,"");
   
   TH1F *UATSJYXUIH = new TH1F("UATSJYXUIH","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   UATSJYXUIH->SetBinContent(101,4041.566);
   UATSJYXUIH->SetMinimum(0.1);
   UATSJYXUIH->SetMaximum(0);
   UATSJYXUIH->SetEntries(148);
   UATSJYXUIH->SetStats(0);

   ci = TColor::GetColor("#007db5");
   UATSJYXUIH->SetFillColor(ci);
   UATSJYXUIH->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   UATSJYXUIH->SetLineColor(ci);
   UATSJYXUIH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   UATSJYXUIH->GetXaxis()->SetLabelFont(42);
   UATSJYXUIH->GetXaxis()->SetLabelSize(0.035);
   UATSJYXUIH->GetXaxis()->SetTitleSize(0.035);
   UATSJYXUIH->GetXaxis()->SetTitleFont(42);
   UATSJYXUIH->GetYaxis()->SetTitle("Entries");
   UATSJYXUIH->GetYaxis()->SetLabelFont(42);
   UATSJYXUIH->GetYaxis()->SetLabelSize(0.035);
   UATSJYXUIH->GetYaxis()->SetTitleSize(0.035);
   UATSJYXUIH->GetYaxis()->SetTitleFont(42);
   UATSJYXUIH->GetZaxis()->SetLabelFont(42);
   UATSJYXUIH->GetZaxis()->SetLabelSize(0.035);
   UATSJYXUIH->GetZaxis()->SetTitleSize(0.035);
   UATSJYXUIH->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(UATSJYXUIH,"");
   
   TH1F *RIVLRJHFAL = new TH1F("RIVLRJHFAL","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   RIVLRJHFAL->SetBinContent(101,2397.92);
   RIVLRJHFAL->SetMinimum(0.1);
   RIVLRJHFAL->SetMaximum(0);
   RIVLRJHFAL->SetEntries(90);
   RIVLRJHFAL->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   RIVLRJHFAL->SetFillColor(ci);
   RIVLRJHFAL->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   RIVLRJHFAL->SetLineColor(ci);
   RIVLRJHFAL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   RIVLRJHFAL->GetXaxis()->SetLabelFont(42);
   RIVLRJHFAL->GetXaxis()->SetLabelSize(0.035);
   RIVLRJHFAL->GetXaxis()->SetTitleSize(0.035);
   RIVLRJHFAL->GetXaxis()->SetTitleFont(42);
   RIVLRJHFAL->GetYaxis()->SetTitle("Entries");
   RIVLRJHFAL->GetYaxis()->SetLabelFont(42);
   RIVLRJHFAL->GetYaxis()->SetLabelSize(0.035);
   RIVLRJHFAL->GetYaxis()->SetTitleSize(0.035);
   RIVLRJHFAL->GetYaxis()->SetTitleFont(42);
   RIVLRJHFAL->GetZaxis()->SetLabelFont(42);
   RIVLRJHFAL->GetZaxis()->SetLabelSize(0.035);
   RIVLRJHFAL->GetZaxis()->SetTitleSize(0.035);
   RIVLRJHFAL->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(RIVLRJHFAL,"");
   
   TH1F *IUTUITYRZW = new TH1F("IUTUITYRZW","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   IUTUITYRZW->SetBinContent(101,1672.956);
   IUTUITYRZW->SetMinimum(0.1);
   IUTUITYRZW->SetMaximum(0);
   IUTUITYRZW->SetEntries(13);
   IUTUITYRZW->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   IUTUITYRZW->SetFillColor(ci);
   IUTUITYRZW->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   IUTUITYRZW->SetLineColor(ci);
   IUTUITYRZW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   IUTUITYRZW->GetXaxis()->SetLabelFont(42);
   IUTUITYRZW->GetXaxis()->SetLabelSize(0.035);
   IUTUITYRZW->GetXaxis()->SetTitleSize(0.035);
   IUTUITYRZW->GetXaxis()->SetTitleFont(42);
   IUTUITYRZW->GetYaxis()->SetTitle("Entries");
   IUTUITYRZW->GetYaxis()->SetLabelFont(42);
   IUTUITYRZW->GetYaxis()->SetLabelSize(0.035);
   IUTUITYRZW->GetYaxis()->SetTitleSize(0.035);
   IUTUITYRZW->GetYaxis()->SetTitleFont(42);
   IUTUITYRZW->GetZaxis()->SetLabelFont(42);
   IUTUITYRZW->GetZaxis()->SetLabelSize(0.035);
   IUTUITYRZW->GetZaxis()->SetTitleSize(0.035);
   IUTUITYRZW->GetZaxis()->SetTitleFont(42);
   LZVGTRJEAY->Add(IUTUITYRZW,"");
   LZVGTRJEAY->Draw("");
   
   TPaveText *pt = new TPaveText(0.1674425,0.9339831,0.8325575,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("HighestEnergyIsolatedLeptonCosTheta");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("EKCFZTNWFM","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RWKKRKRJZL","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("LLFDSJIOIQ","ee_llqqqq","f");

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
   entry=leg->AddEntry("XYBQYELTWD","ee_qqqq","f");

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
   entry=leg->AddEntry("ECHUVTXJEC","ee_nunuqq","f");

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
   entry=leg->AddEntry("OGTRJGRLLC","ee_lnuqq","f");

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
   entry=leg->AddEntry("INPQXRUJRJ","ee_qqll","f");

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
   entry=leg->AddEntry("MOTSUCGSIY","ee_qq","f");

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
   entry=leg->AddEntry("NSHDSVAHVJ","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("GLDSVEYSKI","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("SUHTPMXHXQ","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("DMAKTOPOZM","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("EPEUKEQGTF","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("DKZJVDZSRL","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("MPMKVNVEHU","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("APPGLIWRTN","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("UIYKOSXQJZ","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("UATSJYXUIH","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("RIVLRJHFAL","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("IUTUITYRZW","gammagamma_qqqq_BS_BS","f");

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
   ZRMTZPEXFT->Modified();
   ZRMTZPEXFT->cd();
   ZRMTZPEXFT->SetSelected(ZRMTZPEXFT);
}
