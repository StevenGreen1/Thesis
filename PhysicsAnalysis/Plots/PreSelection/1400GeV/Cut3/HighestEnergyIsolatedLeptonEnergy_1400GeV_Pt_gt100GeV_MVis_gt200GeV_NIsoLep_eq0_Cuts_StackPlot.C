{
//=========Macro generated from canvas: BZOEAADEWF/HighestEnergyIsolatedLeptonEnergy
//=========  (Thu Jan  5 10:54:47 2017) by ROOT version5.34/30
   TCanvas *BZOEAADEWF = new TCanvas("BZOEAADEWF", "HighestEnergyIsolatedLeptonEnergy",0,0,700,500);
   gStyle->SetOptStat(0);
   BZOEAADEWF->SetHighLightColor(2);
   BZOEAADEWF->Range(0,0,1,1);
   BZOEAADEWF->SetFillColor(0);
   BZOEAADEWF->SetBorderMode(0);
   BZOEAADEWF->SetBorderSize(2);
   BZOEAADEWF->SetLogy();
   BZOEAADEWF->SetFrameBorderMode(0);
   BZOEAADEWF->SetFrameBorderMode(0);
   
   THStack *EBTRRXDPBD = new THStack();
   EBTRRXDPBD->SetName("EBTRRXDPBD");
   EBTRRXDPBD->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   EBTRRXDPBD->SetMinimum(0.1);
   
   TH1F *EBTRRXDPBD_stack_128 = new TH1F("EBTRRXDPBD_stack_128","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   EBTRRXDPBD_stack_128->SetMinimum(-0);
   EBTRRXDPBD_stack_128->SetMaximum(-nan);
   EBTRRXDPBD_stack_128->SetDirectory(0);
   EBTRRXDPBD_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   EBTRRXDPBD_stack_128->SetLineColor(ci);
   EBTRRXDPBD_stack_128->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   EBTRRXDPBD_stack_128->GetXaxis()->SetLabelFont(42);
   EBTRRXDPBD_stack_128->GetXaxis()->SetLabelSize(0.035);
   EBTRRXDPBD_stack_128->GetXaxis()->SetTitleSize(0.035);
   EBTRRXDPBD_stack_128->GetXaxis()->SetTitleFont(42);
   EBTRRXDPBD_stack_128->GetYaxis()->SetTitle("Entries");
   EBTRRXDPBD_stack_128->GetYaxis()->SetLabelFont(42);
   EBTRRXDPBD_stack_128->GetYaxis()->SetLabelSize(0.035);
   EBTRRXDPBD_stack_128->GetYaxis()->SetTitleSize(0.035);
   EBTRRXDPBD_stack_128->GetYaxis()->SetTitleFont(42);
   EBTRRXDPBD_stack_128->GetZaxis()->SetLabelFont(42);
   EBTRRXDPBD_stack_128->GetZaxis()->SetLabelSize(0.035);
   EBTRRXDPBD_stack_128->GetZaxis()->SetTitleSize(0.035);
   EBTRRXDPBD_stack_128->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->SetHistogram(EBTRRXDPBD_stack_128);
   
   
   TH1F *OFHKYHIEFI = new TH1F("OFHKYHIEFI","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   OFHKYHIEFI->SetBinContent(701,20934.6);
   OFHKYHIEFI->SetMinimum(0.1);
   OFHKYHIEFI->SetMaximum(0);
   OFHKYHIEFI->SetEntries(764596);
   OFHKYHIEFI->SetStats(0);
   OFHKYHIEFI->SetFillColor(1);
   OFHKYHIEFI->SetFillStyle(3001);
   OFHKYHIEFI->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   OFHKYHIEFI->GetXaxis()->SetLabelFont(42);
   OFHKYHIEFI->GetXaxis()->SetLabelSize(0.035);
   OFHKYHIEFI->GetXaxis()->SetTitleSize(0.035);
   OFHKYHIEFI->GetXaxis()->SetTitleFont(42);
   OFHKYHIEFI->GetYaxis()->SetTitle("Entries");
   OFHKYHIEFI->GetYaxis()->SetLabelFont(42);
   OFHKYHIEFI->GetYaxis()->SetLabelSize(0.035);
   OFHKYHIEFI->GetYaxis()->SetTitleSize(0.035);
   OFHKYHIEFI->GetYaxis()->SetTitleFont(42);
   OFHKYHIEFI->GetZaxis()->SetLabelFont(42);
   OFHKYHIEFI->GetZaxis()->SetLabelSize(0.035);
   OFHKYHIEFI->GetZaxis()->SetTitleSize(0.035);
   OFHKYHIEFI->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(OFHKYHIEFI,"");
   
   TH1F *RAFVADMJHK = new TH1F("RAFVADMJHK","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RAFVADMJHK->SetBinContent(701,42473.12);
   RAFVADMJHK->SetMinimum(0.1);
   RAFVADMJHK->SetMaximum(0);
   RAFVADMJHK->SetEntries(95117);
   RAFVADMJHK->SetStats(0);

   ci = TColor::GetColor("#000066");
   RAFVADMJHK->SetFillColor(ci);
   RAFVADMJHK->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   RAFVADMJHK->SetLineColor(ci);
   RAFVADMJHK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RAFVADMJHK->GetXaxis()->SetLabelFont(42);
   RAFVADMJHK->GetXaxis()->SetLabelSize(0.035);
   RAFVADMJHK->GetXaxis()->SetTitleSize(0.035);
   RAFVADMJHK->GetXaxis()->SetTitleFont(42);
   RAFVADMJHK->GetYaxis()->SetTitle("Entries");
   RAFVADMJHK->GetYaxis()->SetLabelFont(42);
   RAFVADMJHK->GetYaxis()->SetLabelSize(0.035);
   RAFVADMJHK->GetYaxis()->SetTitleSize(0.035);
   RAFVADMJHK->GetYaxis()->SetTitleFont(42);
   RAFVADMJHK->GetZaxis()->SetLabelFont(42);
   RAFVADMJHK->GetZaxis()->SetLabelSize(0.035);
   RAFVADMJHK->GetZaxis()->SetTitleSize(0.035);
   RAFVADMJHK->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(RAFVADMJHK,"");
   
   TH1F *RXHSNKCUDA = new TH1F("RXHSNKCUDA","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RXHSNKCUDA->SetBinContent(701,689.4698);
   RXHSNKCUDA->SetMinimum(0.1);
   RXHSNKCUDA->SetMaximum(0);
   RXHSNKCUDA->SetEntries(4695);
   RXHSNKCUDA->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   RXHSNKCUDA->SetFillColor(ci);
   RXHSNKCUDA->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   RXHSNKCUDA->SetLineColor(ci);
   RXHSNKCUDA->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RXHSNKCUDA->GetXaxis()->SetLabelFont(42);
   RXHSNKCUDA->GetXaxis()->SetLabelSize(0.035);
   RXHSNKCUDA->GetXaxis()->SetTitleSize(0.035);
   RXHSNKCUDA->GetXaxis()->SetTitleFont(42);
   RXHSNKCUDA->GetYaxis()->SetTitle("Entries");
   RXHSNKCUDA->GetYaxis()->SetLabelFont(42);
   RXHSNKCUDA->GetYaxis()->SetLabelSize(0.035);
   RXHSNKCUDA->GetYaxis()->SetTitleSize(0.035);
   RXHSNKCUDA->GetYaxis()->SetTitleFont(42);
   RXHSNKCUDA->GetZaxis()->SetLabelFont(42);
   RXHSNKCUDA->GetZaxis()->SetLabelSize(0.035);
   RXHSNKCUDA->GetZaxis()->SetTitleSize(0.035);
   RXHSNKCUDA->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(RXHSNKCUDA,"");
   
   TH1F *DDPCLWAMWB = new TH1F("DDPCLWAMWB","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   DDPCLWAMWB->SetBinContent(701,6160.975);
   DDPCLWAMWB->SetMinimum(0.1);
   DDPCLWAMWB->SetMaximum(0);
   DDPCLWAMWB->SetEntries(965);
   DDPCLWAMWB->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   DDPCLWAMWB->SetFillColor(ci);
   DDPCLWAMWB->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   DDPCLWAMWB->SetLineColor(ci);
   DDPCLWAMWB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   DDPCLWAMWB->GetXaxis()->SetLabelFont(42);
   DDPCLWAMWB->GetXaxis()->SetLabelSize(0.035);
   DDPCLWAMWB->GetXaxis()->SetTitleSize(0.035);
   DDPCLWAMWB->GetXaxis()->SetTitleFont(42);
   DDPCLWAMWB->GetYaxis()->SetTitle("Entries");
   DDPCLWAMWB->GetYaxis()->SetLabelFont(42);
   DDPCLWAMWB->GetYaxis()->SetLabelSize(0.035);
   DDPCLWAMWB->GetYaxis()->SetTitleSize(0.035);
   DDPCLWAMWB->GetYaxis()->SetTitleFont(42);
   DDPCLWAMWB->GetZaxis()->SetLabelFont(42);
   DDPCLWAMWB->GetZaxis()->SetLabelSize(0.035);
   DDPCLWAMWB->GetZaxis()->SetTitleSize(0.035);
   DDPCLWAMWB->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(DDPCLWAMWB,"");
   
   TH1F *QIRZDVSHJX = new TH1F("QIRZDVSHJX","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   QIRZDVSHJX->SetBinContent(701,50704.28);
   QIRZDVSHJX->SetMinimum(0.1);
   QIRZDVSHJX->SetMaximum(0);
   QIRZDVSHJX->SetEntries(12529);
   QIRZDVSHJX->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   QIRZDVSHJX->SetFillColor(ci);
   QIRZDVSHJX->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   QIRZDVSHJX->SetLineColor(ci);
   QIRZDVSHJX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   QIRZDVSHJX->GetXaxis()->SetLabelFont(42);
   QIRZDVSHJX->GetXaxis()->SetLabelSize(0.035);
   QIRZDVSHJX->GetXaxis()->SetTitleSize(0.035);
   QIRZDVSHJX->GetXaxis()->SetTitleFont(42);
   QIRZDVSHJX->GetYaxis()->SetTitle("Entries");
   QIRZDVSHJX->GetYaxis()->SetLabelFont(42);
   QIRZDVSHJX->GetYaxis()->SetLabelSize(0.035);
   QIRZDVSHJX->GetYaxis()->SetTitleSize(0.035);
   QIRZDVSHJX->GetYaxis()->SetTitleFont(42);
   QIRZDVSHJX->GetZaxis()->SetLabelFont(42);
   QIRZDVSHJX->GetZaxis()->SetLabelSize(0.035);
   QIRZDVSHJX->GetZaxis()->SetTitleSize(0.035);
   QIRZDVSHJX->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(QIRZDVSHJX,"");
   
   TH1F *XZZRDKYHAE = new TH1F("XZZRDKYHAE","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   XZZRDKYHAE->SetBinContent(701,567250.8);
   XZZRDKYHAE->SetMinimum(0.1);
   XZZRDKYHAE->SetMaximum(0);
   XZZRDKYHAE->SetEntries(91764);
   XZZRDKYHAE->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   XZZRDKYHAE->SetFillColor(ci);
   XZZRDKYHAE->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   XZZRDKYHAE->SetLineColor(ci);
   XZZRDKYHAE->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   XZZRDKYHAE->GetXaxis()->SetLabelFont(42);
   XZZRDKYHAE->GetXaxis()->SetLabelSize(0.035);
   XZZRDKYHAE->GetXaxis()->SetTitleSize(0.035);
   XZZRDKYHAE->GetXaxis()->SetTitleFont(42);
   XZZRDKYHAE->GetYaxis()->SetTitle("Entries");
   XZZRDKYHAE->GetYaxis()->SetLabelFont(42);
   XZZRDKYHAE->GetYaxis()->SetLabelSize(0.035);
   XZZRDKYHAE->GetYaxis()->SetTitleSize(0.035);
   XZZRDKYHAE->GetYaxis()->SetTitleFont(42);
   XZZRDKYHAE->GetZaxis()->SetLabelFont(42);
   XZZRDKYHAE->GetZaxis()->SetLabelSize(0.035);
   XZZRDKYHAE->GetZaxis()->SetTitleSize(0.035);
   XZZRDKYHAE->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(XZZRDKYHAE,"");
   
   TH1F *ZYCXBLYFWU = new TH1F("ZYCXBLYFWU","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   ZYCXBLYFWU->SetBinContent(701,5636.094);
   ZYCXBLYFWU->SetMinimum(0.1);
   ZYCXBLYFWU->SetMaximum(0);
   ZYCXBLYFWU->SetEntries(1447);
   ZYCXBLYFWU->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   ZYCXBLYFWU->SetFillColor(ci);
   ZYCXBLYFWU->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   ZYCXBLYFWU->SetLineColor(ci);
   ZYCXBLYFWU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   ZYCXBLYFWU->GetXaxis()->SetLabelFont(42);
   ZYCXBLYFWU->GetXaxis()->SetLabelSize(0.035);
   ZYCXBLYFWU->GetXaxis()->SetTitleSize(0.035);
   ZYCXBLYFWU->GetXaxis()->SetTitleFont(42);
   ZYCXBLYFWU->GetYaxis()->SetTitle("Entries");
   ZYCXBLYFWU->GetYaxis()->SetLabelFont(42);
   ZYCXBLYFWU->GetYaxis()->SetLabelSize(0.035);
   ZYCXBLYFWU->GetYaxis()->SetTitleSize(0.035);
   ZYCXBLYFWU->GetYaxis()->SetTitleFont(42);
   ZYCXBLYFWU->GetZaxis()->SetLabelFont(42);
   ZYCXBLYFWU->GetZaxis()->SetLabelSize(0.035);
   ZYCXBLYFWU->GetZaxis()->SetTitleSize(0.035);
   ZYCXBLYFWU->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(ZYCXBLYFWU,"");
   
   TH1F *MDSZRCOBUW = new TH1F("MDSZRCOBUW","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   MDSZRCOBUW->SetBinContent(701,34536.24);
   MDSZRCOBUW->SetMinimum(0.1);
   MDSZRCOBUW->SetMaximum(0);
   MDSZRCOBUW->SetEntries(1394);
   MDSZRCOBUW->SetStats(0);

   ci = TColor::GetColor("#006633");
   MDSZRCOBUW->SetFillColor(ci);
   MDSZRCOBUW->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   MDSZRCOBUW->SetLineColor(ci);
   MDSZRCOBUW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   MDSZRCOBUW->GetXaxis()->SetLabelFont(42);
   MDSZRCOBUW->GetXaxis()->SetLabelSize(0.035);
   MDSZRCOBUW->GetXaxis()->SetTitleSize(0.035);
   MDSZRCOBUW->GetXaxis()->SetTitleFont(42);
   MDSZRCOBUW->GetYaxis()->SetTitle("Entries");
   MDSZRCOBUW->GetYaxis()->SetLabelFont(42);
   MDSZRCOBUW->GetYaxis()->SetLabelSize(0.035);
   MDSZRCOBUW->GetYaxis()->SetTitleSize(0.035);
   MDSZRCOBUW->GetYaxis()->SetTitleFont(42);
   MDSZRCOBUW->GetZaxis()->SetLabelFont(42);
   MDSZRCOBUW->GetZaxis()->SetLabelSize(0.035);
   MDSZRCOBUW->GetZaxis()->SetTitleSize(0.035);
   MDSZRCOBUW->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(MDSZRCOBUW,"");
   
   TH1F *WOIYXUKTWY = new TH1F("WOIYXUKTWY","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   WOIYXUKTWY->SetBinContent(701,968.1812);
   WOIYXUKTWY->SetMinimum(0.1);
   WOIYXUKTWY->SetMaximum(0);
   WOIYXUKTWY->SetEntries(142);
   WOIYXUKTWY->SetStats(0);
   WOIYXUKTWY->SetFillColor(3);
   WOIYXUKTWY->SetFillStyle(3001);
   WOIYXUKTWY->SetLineColor(3);
   WOIYXUKTWY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   WOIYXUKTWY->GetXaxis()->SetLabelFont(42);
   WOIYXUKTWY->GetXaxis()->SetLabelSize(0.035);
   WOIYXUKTWY->GetXaxis()->SetTitleSize(0.035);
   WOIYXUKTWY->GetXaxis()->SetTitleFont(42);
   WOIYXUKTWY->GetYaxis()->SetTitle("Entries");
   WOIYXUKTWY->GetYaxis()->SetLabelFont(42);
   WOIYXUKTWY->GetYaxis()->SetLabelSize(0.035);
   WOIYXUKTWY->GetYaxis()->SetTitleSize(0.035);
   WOIYXUKTWY->GetYaxis()->SetTitleFont(42);
   WOIYXUKTWY->GetZaxis()->SetLabelFont(42);
   WOIYXUKTWY->GetZaxis()->SetLabelSize(0.035);
   WOIYXUKTWY->GetZaxis()->SetTitleSize(0.035);
   WOIYXUKTWY->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(WOIYXUKTWY,"");
   
   TH1F *XBHALUNTWX = new TH1F("XBHALUNTWX","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   XBHALUNTWX->SetBinContent(701,1378.771);
   XBHALUNTWX->SetMinimum(0.1);
   XBHALUNTWX->SetMaximum(0);
   XBHALUNTWX->SetEntries(49);
   XBHALUNTWX->SetStats(0);

   ci = TColor::GetColor("#990033");
   XBHALUNTWX->SetFillColor(ci);
   XBHALUNTWX->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   XBHALUNTWX->SetLineColor(ci);
   XBHALUNTWX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   XBHALUNTWX->GetXaxis()->SetLabelFont(42);
   XBHALUNTWX->GetXaxis()->SetLabelSize(0.035);
   XBHALUNTWX->GetXaxis()->SetTitleSize(0.035);
   XBHALUNTWX->GetXaxis()->SetTitleFont(42);
   XBHALUNTWX->GetYaxis()->SetTitle("Entries");
   XBHALUNTWX->GetYaxis()->SetLabelFont(42);
   XBHALUNTWX->GetYaxis()->SetLabelSize(0.035);
   XBHALUNTWX->GetYaxis()->SetTitleSize(0.035);
   XBHALUNTWX->GetYaxis()->SetTitleFont(42);
   XBHALUNTWX->GetZaxis()->SetLabelFont(42);
   XBHALUNTWX->GetZaxis()->SetLabelSize(0.035);
   XBHALUNTWX->GetZaxis()->SetTitleSize(0.035);
   XBHALUNTWX->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(XBHALUNTWX,"");
   
   TH1F *VLBRWHGDZY = new TH1F("VLBRWHGDZY","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   VLBRWHGDZY->SetBinContent(701,1184.389);
   VLBRWHGDZY->SetMinimum(0.1);
   VLBRWHGDZY->SetMaximum(0);
   VLBRWHGDZY->SetEntries(188);
   VLBRWHGDZY->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   VLBRWHGDZY->SetFillColor(ci);
   VLBRWHGDZY->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   VLBRWHGDZY->SetLineColor(ci);
   VLBRWHGDZY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VLBRWHGDZY->GetXaxis()->SetLabelFont(42);
   VLBRWHGDZY->GetXaxis()->SetLabelSize(0.035);
   VLBRWHGDZY->GetXaxis()->SetTitleSize(0.035);
   VLBRWHGDZY->GetXaxis()->SetTitleFont(42);
   VLBRWHGDZY->GetYaxis()->SetTitle("Entries");
   VLBRWHGDZY->GetYaxis()->SetLabelFont(42);
   VLBRWHGDZY->GetYaxis()->SetLabelSize(0.035);
   VLBRWHGDZY->GetYaxis()->SetTitleSize(0.035);
   VLBRWHGDZY->GetYaxis()->SetTitleFont(42);
   VLBRWHGDZY->GetZaxis()->SetLabelFont(42);
   VLBRWHGDZY->GetZaxis()->SetLabelSize(0.035);
   VLBRWHGDZY->GetZaxis()->SetTitleSize(0.035);
   VLBRWHGDZY->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(VLBRWHGDZY,"");
   
   TH1F *LYLYYSFPMZ = new TH1F("LYLYYSFPMZ","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   LYLYYSFPMZ->SetBinContent(701,697.3013);
   LYLYYSFPMZ->SetMinimum(0.1);
   LYLYYSFPMZ->SetMaximum(0);
   LYLYYSFPMZ->SetEntries(24);
   LYLYYSFPMZ->SetStats(0);

   ci = TColor::GetColor("#a42400");
   LYLYYSFPMZ->SetFillColor(ci);
   LYLYYSFPMZ->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   LYLYYSFPMZ->SetLineColor(ci);
   LYLYYSFPMZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   LYLYYSFPMZ->GetXaxis()->SetLabelFont(42);
   LYLYYSFPMZ->GetXaxis()->SetLabelSize(0.035);
   LYLYYSFPMZ->GetXaxis()->SetTitleSize(0.035);
   LYLYYSFPMZ->GetXaxis()->SetTitleFont(42);
   LYLYYSFPMZ->GetYaxis()->SetTitle("Entries");
   LYLYYSFPMZ->GetYaxis()->SetLabelFont(42);
   LYLYYSFPMZ->GetYaxis()->SetLabelSize(0.035);
   LYLYYSFPMZ->GetYaxis()->SetTitleSize(0.035);
   LYLYYSFPMZ->GetYaxis()->SetTitleFont(42);
   LYLYYSFPMZ->GetZaxis()->SetLabelFont(42);
   LYLYYSFPMZ->GetZaxis()->SetLabelSize(0.035);
   LYLYYSFPMZ->GetZaxis()->SetTitleSize(0.035);
   LYLYYSFPMZ->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(LYLYYSFPMZ,"");
   
   TH1F *SNQGPDPDRT = new TH1F("SNQGPDPDRT","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   SNQGPDPDRT->SetBinContent(701,8808.519);
   SNQGPDPDRT->SetMinimum(0.1);
   SNQGPDPDRT->SetMaximum(0);
   SNQGPDPDRT->SetEntries(15908);
   SNQGPDPDRT->SetStats(0);

   ci = TColor::GetColor("#001544");
   SNQGPDPDRT->SetFillColor(ci);
   SNQGPDPDRT->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   SNQGPDPDRT->SetLineColor(ci);
   SNQGPDPDRT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   SNQGPDPDRT->GetXaxis()->SetLabelFont(42);
   SNQGPDPDRT->GetXaxis()->SetLabelSize(0.035);
   SNQGPDPDRT->GetXaxis()->SetTitleSize(0.035);
   SNQGPDPDRT->GetXaxis()->SetTitleFont(42);
   SNQGPDPDRT->GetYaxis()->SetTitle("Entries");
   SNQGPDPDRT->GetYaxis()->SetLabelFont(42);
   SNQGPDPDRT->GetYaxis()->SetLabelSize(0.035);
   SNQGPDPDRT->GetYaxis()->SetTitleSize(0.035);
   SNQGPDPDRT->GetYaxis()->SetTitleFont(42);
   SNQGPDPDRT->GetZaxis()->SetLabelFont(42);
   SNQGPDPDRT->GetZaxis()->SetLabelSize(0.035);
   SNQGPDPDRT->GetZaxis()->SetTitleSize(0.035);
   SNQGPDPDRT->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(SNQGPDPDRT,"");
   
   TH1F *DPEQLEUEZP = new TH1F("DPEQLEUEZP","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   DPEQLEUEZP->SetBinContent(701,47698.73);
   DPEQLEUEZP->SetMinimum(0.1);
   DPEQLEUEZP->SetMaximum(0);
   DPEQLEUEZP->SetEntries(20216);
   DPEQLEUEZP->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   DPEQLEUEZP->SetFillColor(ci);
   DPEQLEUEZP->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   DPEQLEUEZP->SetLineColor(ci);
   DPEQLEUEZP->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   DPEQLEUEZP->GetXaxis()->SetLabelFont(42);
   DPEQLEUEZP->GetXaxis()->SetLabelSize(0.035);
   DPEQLEUEZP->GetXaxis()->SetTitleSize(0.035);
   DPEQLEUEZP->GetXaxis()->SetTitleFont(42);
   DPEQLEUEZP->GetYaxis()->SetTitle("Entries");
   DPEQLEUEZP->GetYaxis()->SetLabelFont(42);
   DPEQLEUEZP->GetYaxis()->SetLabelSize(0.035);
   DPEQLEUEZP->GetYaxis()->SetTitleSize(0.035);
   DPEQLEUEZP->GetYaxis()->SetTitleFont(42);
   DPEQLEUEZP->GetZaxis()->SetLabelFont(42);
   DPEQLEUEZP->GetZaxis()->SetLabelSize(0.035);
   DPEQLEUEZP->GetZaxis()->SetTitleSize(0.035);
   DPEQLEUEZP->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(DPEQLEUEZP,"");
   
   TH1F *GKSEXXPBTN = new TH1F("GKSEXXPBTN","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   GKSEXXPBTN->SetBinContent(701,8904.864);
   GKSEXXPBTN->SetMinimum(0.1);
   GKSEXXPBTN->SetMaximum(0);
   GKSEXXPBTN->SetEntries(16082);
   GKSEXXPBTN->SetStats(0);

   ci = TColor::GetColor("#620e00");
   GKSEXXPBTN->SetFillColor(ci);
   GKSEXXPBTN->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   GKSEXXPBTN->SetLineColor(ci);
   GKSEXXPBTN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   GKSEXXPBTN->GetXaxis()->SetLabelFont(42);
   GKSEXXPBTN->GetXaxis()->SetLabelSize(0.035);
   GKSEXXPBTN->GetXaxis()->SetTitleSize(0.035);
   GKSEXXPBTN->GetXaxis()->SetTitleFont(42);
   GKSEXXPBTN->GetYaxis()->SetTitle("Entries");
   GKSEXXPBTN->GetYaxis()->SetLabelFont(42);
   GKSEXXPBTN->GetYaxis()->SetLabelSize(0.035);
   GKSEXXPBTN->GetYaxis()->SetTitleSize(0.035);
   GKSEXXPBTN->GetYaxis()->SetTitleFont(42);
   GKSEXXPBTN->GetZaxis()->SetLabelFont(42);
   GKSEXXPBTN->GetZaxis()->SetLabelSize(0.035);
   GKSEXXPBTN->GetZaxis()->SetTitleSize(0.035);
   GKSEXXPBTN->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(GKSEXXPBTN,"");
   
   TH1F *CWIHTBNWHR = new TH1F("CWIHTBNWHR","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   CWIHTBNWHR->SetBinContent(701,47835.44);
   CWIHTBNWHR->SetMinimum(0.1);
   CWIHTBNWHR->SetMaximum(0);
   CWIHTBNWHR->SetEntries(20183);
   CWIHTBNWHR->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   CWIHTBNWHR->SetFillColor(ci);
   CWIHTBNWHR->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   CWIHTBNWHR->SetLineColor(ci);
   CWIHTBNWHR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   CWIHTBNWHR->GetXaxis()->SetLabelFont(42);
   CWIHTBNWHR->GetXaxis()->SetLabelSize(0.035);
   CWIHTBNWHR->GetXaxis()->SetTitleSize(0.035);
   CWIHTBNWHR->GetXaxis()->SetTitleFont(42);
   CWIHTBNWHR->GetYaxis()->SetTitle("Entries");
   CWIHTBNWHR->GetYaxis()->SetLabelFont(42);
   CWIHTBNWHR->GetYaxis()->SetLabelSize(0.035);
   CWIHTBNWHR->GetYaxis()->SetTitleSize(0.035);
   CWIHTBNWHR->GetYaxis()->SetTitleFont(42);
   CWIHTBNWHR->GetZaxis()->SetLabelFont(42);
   CWIHTBNWHR->GetZaxis()->SetLabelSize(0.035);
   CWIHTBNWHR->GetZaxis()->SetTitleSize(0.035);
   CWIHTBNWHR->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(CWIHTBNWHR,"");
   
   TH1F *FKFHJSFFJH = new TH1F("FKFHJSFFJH","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   FKFHJSFFJH->SetBinContent(701,1705.275);
   FKFHJSFFJH->SetMinimum(0.1);
   FKFHJSFFJH->SetMaximum(0);
   FKFHJSFFJH->SetEntries(126);
   FKFHJSFFJH->SetStats(0);
   FKFHJSFFJH->SetFillColor(4);
   FKFHJSFFJH->SetFillStyle(3001);
   FKFHJSFFJH->SetLineColor(4);
   FKFHJSFFJH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   FKFHJSFFJH->GetXaxis()->SetLabelFont(42);
   FKFHJSFFJH->GetXaxis()->SetLabelSize(0.035);
   FKFHJSFFJH->GetXaxis()->SetTitleSize(0.035);
   FKFHJSFFJH->GetXaxis()->SetTitleFont(42);
   FKFHJSFFJH->GetYaxis()->SetTitle("Entries");
   FKFHJSFFJH->GetYaxis()->SetLabelFont(42);
   FKFHJSFFJH->GetYaxis()->SetLabelSize(0.035);
   FKFHJSFFJH->GetYaxis()->SetTitleSize(0.035);
   FKFHJSFFJH->GetYaxis()->SetTitleFont(42);
   FKFHJSFFJH->GetZaxis()->SetLabelFont(42);
   FKFHJSFFJH->GetZaxis()->SetLabelSize(0.035);
   FKFHJSFFJH->GetZaxis()->SetTitleSize(0.035);
   FKFHJSFFJH->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(FKFHJSFFJH,"");
   
   TH1F *VWECZPMYMB = new TH1F("VWECZPMYMB","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   VWECZPMYMB->SetBinContent(701,5100.519);
   VWECZPMYMB->SetMinimum(0.1);
   VWECZPMYMB->SetMaximum(0);
   VWECZPMYMB->SetEntries(70);
   VWECZPMYMB->SetStats(0);

   ci = TColor::GetColor("#007db5");
   VWECZPMYMB->SetFillColor(ci);
   VWECZPMYMB->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   VWECZPMYMB->SetLineColor(ci);
   VWECZPMYMB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VWECZPMYMB->GetXaxis()->SetLabelFont(42);
   VWECZPMYMB->GetXaxis()->SetLabelSize(0.035);
   VWECZPMYMB->GetXaxis()->SetTitleSize(0.035);
   VWECZPMYMB->GetXaxis()->SetTitleFont(42);
   VWECZPMYMB->GetYaxis()->SetTitle("Entries");
   VWECZPMYMB->GetYaxis()->SetLabelFont(42);
   VWECZPMYMB->GetYaxis()->SetLabelSize(0.035);
   VWECZPMYMB->GetYaxis()->SetTitleSize(0.035);
   VWECZPMYMB->GetYaxis()->SetTitleFont(42);
   VWECZPMYMB->GetZaxis()->SetLabelFont(42);
   VWECZPMYMB->GetZaxis()->SetLabelSize(0.035);
   VWECZPMYMB->GetZaxis()->SetTitleSize(0.035);
   VWECZPMYMB->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(VWECZPMYMB,"");
   
   TH1F *LVAXTRIWPM = new TH1F("LVAXTRIWPM","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   LVAXTRIWPM->SetBinContent(701,2984.078);
   LVAXTRIWPM->SetMinimum(0.1);
   LVAXTRIWPM->SetMaximum(0);
   LVAXTRIWPM->SetEntries(42);
   LVAXTRIWPM->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   LVAXTRIWPM->SetFillColor(ci);
   LVAXTRIWPM->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   LVAXTRIWPM->SetLineColor(ci);
   LVAXTRIWPM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   LVAXTRIWPM->GetXaxis()->SetLabelFont(42);
   LVAXTRIWPM->GetXaxis()->SetLabelSize(0.035);
   LVAXTRIWPM->GetXaxis()->SetTitleSize(0.035);
   LVAXTRIWPM->GetXaxis()->SetTitleFont(42);
   LVAXTRIWPM->GetYaxis()->SetTitle("Entries");
   LVAXTRIWPM->GetYaxis()->SetLabelFont(42);
   LVAXTRIWPM->GetYaxis()->SetLabelSize(0.035);
   LVAXTRIWPM->GetYaxis()->SetTitleSize(0.035);
   LVAXTRIWPM->GetYaxis()->SetTitleFont(42);
   LVAXTRIWPM->GetZaxis()->SetLabelFont(42);
   LVAXTRIWPM->GetZaxis()->SetLabelSize(0.035);
   LVAXTRIWPM->GetZaxis()->SetTitleSize(0.035);
   LVAXTRIWPM->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(LVAXTRIWPM,"");
   
   TH1F *OPVXQFDTHU = new TH1F("OPVXQFDTHU","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   OPVXQFDTHU->SetBinContent(701,1609.61);
   OPVXQFDTHU->SetMinimum(0.1);
   OPVXQFDTHU->SetMaximum(0);
   OPVXQFDTHU->SetEntries(4);
   OPVXQFDTHU->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   OPVXQFDTHU->SetFillColor(ci);
   OPVXQFDTHU->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   OPVXQFDTHU->SetLineColor(ci);
   OPVXQFDTHU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   OPVXQFDTHU->GetXaxis()->SetLabelFont(42);
   OPVXQFDTHU->GetXaxis()->SetLabelSize(0.035);
   OPVXQFDTHU->GetXaxis()->SetTitleSize(0.035);
   OPVXQFDTHU->GetXaxis()->SetTitleFont(42);
   OPVXQFDTHU->GetYaxis()->SetTitle("Entries");
   OPVXQFDTHU->GetYaxis()->SetLabelFont(42);
   OPVXQFDTHU->GetYaxis()->SetLabelSize(0.035);
   OPVXQFDTHU->GetYaxis()->SetTitleSize(0.035);
   OPVXQFDTHU->GetYaxis()->SetTitleFont(42);
   OPVXQFDTHU->GetZaxis()->SetLabelFont(42);
   OPVXQFDTHU->GetZaxis()->SetLabelSize(0.035);
   OPVXQFDTHU->GetZaxis()->SetTitleSize(0.035);
   OPVXQFDTHU->GetZaxis()->SetTitleFont(42);
   EBTRRXDPBD->Add(OPVXQFDTHU,"");
   EBTRRXDPBD->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("OFHKYHIEFI","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RAFVADMJHK","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("RXHSNKCUDA","ee_llqqqq","f");

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
   entry=leg->AddEntry("DDPCLWAMWB","ee_qqqq","f");

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
   entry=leg->AddEntry("QIRZDVSHJX","ee_nunuqq","f");

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
   entry=leg->AddEntry("XZZRDKYHAE","ee_lnuqq","f");

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
   entry=leg->AddEntry("ZYCXBLYFWU","ee_qqll","f");

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
   entry=leg->AddEntry("MDSZRCOBUW","ee_qq","f");

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
   entry=leg->AddEntry("WOIYXUKTWY","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("XBHALUNTWX","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("VLBRWHGDZY","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("LYLYYSFPMZ","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("SNQGPDPDRT","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("DPEQLEUEZP","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("GKSEXXPBTN","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("CWIHTBNWHR","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("FKFHJSFFJH","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VWECZPMYMB","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("LVAXTRIWPM","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("OPVXQFDTHU","gammagamma_qqqq_BS_BS","f");

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
   BZOEAADEWF->Modified();
   BZOEAADEWF->cd();
   BZOEAADEWF->SetSelected(BZOEAADEWF);
}
