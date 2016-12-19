{
//=========Macro generated from canvas: DNGKZOZXBJ/NumberOfIsolatedLeptons
//=========  (Wed Sep 28 11:48:13 2016) by ROOT version5.34/30
   TCanvas *DNGKZOZXBJ = new TCanvas("DNGKZOZXBJ", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   DNGKZOZXBJ->SetHighLightColor(2);
   DNGKZOZXBJ->Range(-0.625,-2.942413,5.625,9.242981);
   DNGKZOZXBJ->SetFillColor(0);
   DNGKZOZXBJ->SetBorderMode(0);
   DNGKZOZXBJ->SetBorderSize(2);
   DNGKZOZXBJ->SetLogy();
   DNGKZOZXBJ->SetFrameBorderMode(0);
   DNGKZOZXBJ->SetFrameBorderMode(0);
   DNGKZOZXBJ->SetRightMargin(0.2);
   
   THStack *INTWTJKEEB = new THStack();
   INTWTJKEEB->SetName("INTWTJKEEB");
   INTWTJKEEB->SetTitle("NumberOfIsolatedLeptons");
   INTWTJKEEB->SetMinimum(0.1);
   
   TH1F *INTWTJKEEB_stack_4 = new TH1F("INTWTJKEEB_stack_4","NumberOfIsolatedLeptons",5,0,5);
   INTWTJKEEB_stack_4->SetMinimum(0.01888541);
   INTWTJKEEB_stack_4->SetMaximum(1.057893e+08);
   INTWTJKEEB_stack_4->SetDirectory(0);
   INTWTJKEEB_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   INTWTJKEEB_stack_4->SetLineColor(ci);
   INTWTJKEEB_stack_4->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   INTWTJKEEB_stack_4->GetXaxis()->SetLabelFont(42);
   INTWTJKEEB_stack_4->GetXaxis()->SetLabelSize(0.035);
   INTWTJKEEB_stack_4->GetXaxis()->SetTitleSize(0.035);
   INTWTJKEEB_stack_4->GetXaxis()->SetTitleFont(42);
   INTWTJKEEB_stack_4->GetYaxis()->SetTitle("Entries");
   INTWTJKEEB_stack_4->GetYaxis()->SetLabelFont(42);
   INTWTJKEEB_stack_4->GetYaxis()->SetLabelSize(0.035);
   INTWTJKEEB_stack_4->GetYaxis()->SetTitleSize(0.035);
   INTWTJKEEB_stack_4->GetYaxis()->SetTitleFont(42);
   INTWTJKEEB_stack_4->GetZaxis()->SetLabelFont(42);
   INTWTJKEEB_stack_4->GetZaxis()->SetLabelSize(0.035);
   INTWTJKEEB_stack_4->GetZaxis()->SetTitleSize(0.035);
   INTWTJKEEB_stack_4->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->SetHistogram(INTWTJKEEB_stack_4);
   
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,32748.59);
   FYILIUFOAS->SetBinContent(2,101.0263);
   FYILIUFOAS->SetBinContent(3,0.1748323);
   FYILIUFOAS->SetMinimum(0.1);
   FYILIUFOAS->SetMaximum(65497.19);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetFillColor(1);
   FYILIUFOAS->SetFillStyle(3001);
   FYILIUFOAS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   FYILIUFOAS->GetXaxis()->SetLabelFont(42);
   FYILIUFOAS->GetXaxis()->SetLabelSize(0.035);
   FYILIUFOAS->GetXaxis()->SetTitleSize(0.035);
   FYILIUFOAS->GetXaxis()->SetTitleFont(42);
   FYILIUFOAS->GetYaxis()->SetTitle("Entries");
   FYILIUFOAS->GetYaxis()->SetLabelFont(42);
   FYILIUFOAS->GetYaxis()->SetLabelSize(0.035);
   FYILIUFOAS->GetYaxis()->SetTitleSize(0.035);
   FYILIUFOAS->GetYaxis()->SetTitleFont(42);
   FYILIUFOAS->GetZaxis()->SetLabelFont(42);
   FYILIUFOAS->GetZaxis()->SetLabelSize(0.035);
   FYILIUFOAS->GetZaxis()->SetTitleSize(0.035);
   FYILIUFOAS->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(FYILIUFOAS,"");
   
   TH1F *WKQSRVCKCL = new TH1F("WKQSRVCKCL","NumberOfIsolatedLeptons",5,0,5);
   WKQSRVCKCL->SetBinContent(1,84342.02);
   WKQSRVCKCL->SetBinContent(2,88106.96);
   WKQSRVCKCL->SetBinContent(3,307.8796);
   WKQSRVCKCL->SetMinimum(0.1);
   WKQSRVCKCL->SetMaximum(176213.9);
   WKQSRVCKCL->SetEntries(372437);
   WKQSRVCKCL->SetStats(0);

   ci = TColor::GetColor("#000066");
   WKQSRVCKCL->SetFillColor(ci);
   WKQSRVCKCL->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   WKQSRVCKCL->SetLineColor(ci);
   WKQSRVCKCL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   WKQSRVCKCL->GetXaxis()->SetLabelFont(42);
   WKQSRVCKCL->GetXaxis()->SetLabelSize(0.035);
   WKQSRVCKCL->GetXaxis()->SetTitleSize(0.035);
   WKQSRVCKCL->GetXaxis()->SetTitleFont(42);
   WKQSRVCKCL->GetYaxis()->SetTitle("Entries");
   WKQSRVCKCL->GetYaxis()->SetLabelFont(42);
   WKQSRVCKCL->GetYaxis()->SetLabelSize(0.035);
   WKQSRVCKCL->GetYaxis()->SetTitleSize(0.035);
   WKQSRVCKCL->GetYaxis()->SetTitleFont(42);
   WKQSRVCKCL->GetZaxis()->SetLabelFont(42);
   WKQSRVCKCL->GetZaxis()->SetLabelSize(0.035);
   WKQSRVCKCL->GetZaxis()->SetTitleSize(0.035);
   WKQSRVCKCL->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(WKQSRVCKCL,"");
   
   TH1F *EOIKLRPMRF = new TH1F("EOIKLRPMRF","NumberOfIsolatedLeptons",5,0,5);
   EOIKLRPMRF->SetBinContent(1,59998.37);
   EOIKLRPMRF->SetBinContent(2,36589.07);
   EOIKLRPMRF->SetBinContent(3,10749.64);
   EOIKLRPMRF->SetBinContent(4,30.68541);
   EOIKLRPMRF->SetMinimum(0.1);
   EOIKLRPMRF->SetMaximum(119996.7);
   EOIKLRPMRF->SetEntries(634383);
   EOIKLRPMRF->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   EOIKLRPMRF->SetFillColor(ci);
   EOIKLRPMRF->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   EOIKLRPMRF->SetLineColor(ci);
   EOIKLRPMRF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EOIKLRPMRF->GetXaxis()->SetLabelFont(42);
   EOIKLRPMRF->GetXaxis()->SetLabelSize(0.035);
   EOIKLRPMRF->GetXaxis()->SetTitleSize(0.035);
   EOIKLRPMRF->GetXaxis()->SetTitleFont(42);
   EOIKLRPMRF->GetYaxis()->SetTitle("Entries");
   EOIKLRPMRF->GetYaxis()->SetLabelFont(42);
   EOIKLRPMRF->GetYaxis()->SetLabelSize(0.035);
   EOIKLRPMRF->GetYaxis()->SetTitleSize(0.035);
   EOIKLRPMRF->GetYaxis()->SetTitleFont(42);
   EOIKLRPMRF->GetZaxis()->SetLabelFont(42);
   EOIKLRPMRF->GetZaxis()->SetLabelSize(0.035);
   EOIKLRPMRF->GetZaxis()->SetTitleSize(0.035);
   EOIKLRPMRF->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(EOIKLRPMRF,"");
   
   TH1F *KYTVIDRBEM = new TH1F("KYTVIDRBEM","NumberOfIsolatedLeptons",5,0,5);
   KYTVIDRBEM->SetBinContent(1,1984898);
   KYTVIDRBEM->SetBinContent(2,3451.991);
   KYTVIDRBEM->SetMinimum(0.1);
   KYTVIDRBEM->SetMaximum(3969795);
   KYTVIDRBEM->SetEntries(294295);
   KYTVIDRBEM->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   KYTVIDRBEM->SetFillColor(ci);
   KYTVIDRBEM->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   KYTVIDRBEM->SetLineColor(ci);
   KYTVIDRBEM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KYTVIDRBEM->GetXaxis()->SetLabelFont(42);
   KYTVIDRBEM->GetXaxis()->SetLabelSize(0.035);
   KYTVIDRBEM->GetXaxis()->SetTitleSize(0.035);
   KYTVIDRBEM->GetXaxis()->SetTitleFont(42);
   KYTVIDRBEM->GetYaxis()->SetTitle("Entries");
   KYTVIDRBEM->GetYaxis()->SetLabelFont(42);
   KYTVIDRBEM->GetYaxis()->SetLabelSize(0.035);
   KYTVIDRBEM->GetYaxis()->SetTitleSize(0.035);
   KYTVIDRBEM->GetYaxis()->SetTitleFont(42);
   KYTVIDRBEM->GetZaxis()->SetLabelFont(42);
   KYTVIDRBEM->GetZaxis()->SetLabelSize(0.035);
   KYTVIDRBEM->GetZaxis()->SetTitleSize(0.035);
   KYTVIDRBEM->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(KYTVIDRBEM,"");
   
   TH1F *MQOIAROKJN = new TH1F("MQOIAROKJN","NumberOfIsolatedLeptons",5,0,5);
   MQOIAROKJN->SetBinContent(1,1390633);
   MQOIAROKJN->SetBinContent(2,2857.834);
   MQOIAROKJN->SetMinimum(0.1);
   MQOIAROKJN->SetMaximum(2781266);
   MQOIAROKJN->SetEntries(292650);
   MQOIAROKJN->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   MQOIAROKJN->SetFillColor(ci);
   MQOIAROKJN->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   MQOIAROKJN->SetLineColor(ci);
   MQOIAROKJN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   MQOIAROKJN->GetXaxis()->SetLabelFont(42);
   MQOIAROKJN->GetXaxis()->SetLabelSize(0.035);
   MQOIAROKJN->GetXaxis()->SetTitleSize(0.035);
   MQOIAROKJN->GetXaxis()->SetTitleFont(42);
   MQOIAROKJN->GetYaxis()->SetTitle("Entries");
   MQOIAROKJN->GetYaxis()->SetLabelFont(42);
   MQOIAROKJN->GetYaxis()->SetLabelSize(0.035);
   MQOIAROKJN->GetYaxis()->SetTitleSize(0.035);
   MQOIAROKJN->GetYaxis()->SetTitleFont(42);
   MQOIAROKJN->GetZaxis()->SetLabelFont(42);
   MQOIAROKJN->GetZaxis()->SetLabelSize(0.035);
   MQOIAROKJN->GetZaxis()->SetTitleSize(0.035);
   MQOIAROKJN->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(MQOIAROKJN,"");
   
   TH1F *HHAYPHMTGO = new TH1F("HHAYPHMTGO","NumberOfIsolatedLeptons",5,0,5);
   HHAYPHMTGO->SetBinContent(1,4792228);
   HHAYPHMTGO->SetBinContent(2,1669769);
   HHAYPHMTGO->SetBinContent(3,2719.428);
   HHAYPHMTGO->SetMinimum(0.1);
   HHAYPHMTGO->SetMaximum(9584455);
   HHAYPHMTGO->SetEntries(1047876);
   HHAYPHMTGO->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   HHAYPHMTGO->SetFillColor(ci);
   HHAYPHMTGO->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   HHAYPHMTGO->SetLineColor(ci);
   HHAYPHMTGO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HHAYPHMTGO->GetXaxis()->SetLabelFont(42);
   HHAYPHMTGO->GetXaxis()->SetLabelSize(0.035);
   HHAYPHMTGO->GetXaxis()->SetTitleSize(0.035);
   HHAYPHMTGO->GetXaxis()->SetTitleFont(42);
   HHAYPHMTGO->GetYaxis()->SetTitle("Entries");
   HHAYPHMTGO->GetYaxis()->SetLabelFont(42);
   HHAYPHMTGO->GetYaxis()->SetLabelSize(0.035);
   HHAYPHMTGO->GetYaxis()->SetTitleSize(0.035);
   HHAYPHMTGO->GetYaxis()->SetTitleFont(42);
   HHAYPHMTGO->GetZaxis()->SetLabelFont(42);
   HHAYPHMTGO->GetZaxis()->SetLabelSize(0.035);
   HHAYPHMTGO->GetZaxis()->SetTitleSize(0.035);
   HHAYPHMTGO->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(HHAYPHMTGO,"");
   
   TH1F *ZSPEDNPVMN = new TH1F("ZSPEDNPVMN","NumberOfIsolatedLeptons",5,0,5);
   ZSPEDNPVMN->SetBinContent(1,3397056);
   ZSPEDNPVMN->SetBinContent(2,581016.2);
   ZSPEDNPVMN->SetBinContent(3,73124.45);
   ZSPEDNPVMN->SetBinContent(4,104.3545);
   ZSPEDNPVMN->SetMinimum(0.1);
   ZSPEDNPVMN->SetMaximum(6794112);
   ZSPEDNPVMN->SetEntries(1057167);
   ZSPEDNPVMN->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   ZSPEDNPVMN->SetFillColor(ci);
   ZSPEDNPVMN->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   ZSPEDNPVMN->SetLineColor(ci);
   ZSPEDNPVMN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZSPEDNPVMN->GetXaxis()->SetLabelFont(42);
   ZSPEDNPVMN->GetXaxis()->SetLabelSize(0.035);
   ZSPEDNPVMN->GetXaxis()->SetTitleSize(0.035);
   ZSPEDNPVMN->GetXaxis()->SetTitleFont(42);
   ZSPEDNPVMN->GetYaxis()->SetTitle("Entries");
   ZSPEDNPVMN->GetYaxis()->SetLabelFont(42);
   ZSPEDNPVMN->GetYaxis()->SetLabelSize(0.035);
   ZSPEDNPVMN->GetYaxis()->SetTitleSize(0.035);
   ZSPEDNPVMN->GetYaxis()->SetTitleFont(42);
   ZSPEDNPVMN->GetZaxis()->SetLabelFont(42);
   ZSPEDNPVMN->GetZaxis()->SetLabelSize(0.035);
   ZSPEDNPVMN->GetZaxis()->SetTitleSize(0.035);
   ZSPEDNPVMN->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(ZSPEDNPVMN,"");
   
   TH1F *EUUYKHSVXG = new TH1F("EUUYKHSVXG","NumberOfIsolatedLeptons",5,0,5);
   EUUYKHSVXG->SetBinContent(1,5979160);
   EUUYKHSVXG->SetBinContent(2,8254.336);
   EUUYKHSVXG->SetBinContent(3,23.51668);
   EUUYKHSVXG->SetMinimum(0.1);
   EUUYKHSVXG->SetMaximum(1.195832e+07);
   EUUYKHSVXG->SetEntries(254762);
   EUUYKHSVXG->SetStats(0);

   ci = TColor::GetColor("#006633");
   EUUYKHSVXG->SetFillColor(ci);
   EUUYKHSVXG->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   EUUYKHSVXG->SetLineColor(ci);
   EUUYKHSVXG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EUUYKHSVXG->GetXaxis()->SetLabelFont(42);
   EUUYKHSVXG->GetXaxis()->SetLabelSize(0.035);
   EUUYKHSVXG->GetXaxis()->SetTitleSize(0.035);
   EUUYKHSVXG->GetXaxis()->SetTitleFont(42);
   EUUYKHSVXG->GetYaxis()->SetTitle("Entries");
   EUUYKHSVXG->GetYaxis()->SetLabelFont(42);
   EUUYKHSVXG->GetYaxis()->SetLabelSize(0.035);
   EUUYKHSVXG->GetYaxis()->SetTitleSize(0.035);
   EUUYKHSVXG->GetYaxis()->SetTitleFont(42);
   EUUYKHSVXG->GetZaxis()->SetLabelFont(42);
   EUUYKHSVXG->GetZaxis()->SetLabelSize(0.035);
   EUUYKHSVXG->GetZaxis()->SetTitleSize(0.035);
   EUUYKHSVXG->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(EUUYKHSVXG,"");
   
   TH1F *AOCJUOHWNO = new TH1F("AOCJUOHWNO","NumberOfIsolatedLeptons",5,0,5);
   AOCJUOHWNO->SetBinContent(1,275270.9);
   AOCJUOHWNO->SetBinContent(2,133841.2);
   AOCJUOHWNO->SetBinContent(3,21568.55);
   AOCJUOHWNO->SetBinContent(4,53.7037);
   AOCJUOHWNO->SetBinContent(5,6.712963);
   AOCJUOHWNO->SetMinimum(0.1);
   AOCJUOHWNO->SetMaximum(550541.8);
   AOCJUOHWNO->SetEntries(64150);
   AOCJUOHWNO->SetStats(0);
   AOCJUOHWNO->SetFillColor(3);
   AOCJUOHWNO->SetFillStyle(3001);
   AOCJUOHWNO->SetLineColor(3);
   AOCJUOHWNO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AOCJUOHWNO->GetXaxis()->SetLabelFont(42);
   AOCJUOHWNO->GetXaxis()->SetLabelSize(0.035);
   AOCJUOHWNO->GetXaxis()->SetTitleSize(0.035);
   AOCJUOHWNO->GetXaxis()->SetTitleFont(42);
   AOCJUOHWNO->GetYaxis()->SetTitle("Entries");
   AOCJUOHWNO->GetYaxis()->SetLabelFont(42);
   AOCJUOHWNO->GetYaxis()->SetLabelSize(0.035);
   AOCJUOHWNO->GetYaxis()->SetTitleSize(0.035);
   AOCJUOHWNO->GetYaxis()->SetTitleFont(42);
   AOCJUOHWNO->GetZaxis()->SetLabelFont(42);
   AOCJUOHWNO->GetZaxis()->SetLabelSize(0.035);
   AOCJUOHWNO->GetZaxis()->SetTitleSize(0.035);
   AOCJUOHWNO->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(AOCJUOHWNO,"");
   
   TH1F *DWSZRJWBSM = new TH1F("DWSZRJWBSM","NumberOfIsolatedLeptons",5,0,5);
   DWSZRJWBSM->SetBinContent(1,1507013);
   DWSZRJWBSM->SetBinContent(2,232475.3);
   DWSZRJWBSM->SetBinContent(3,1528.042);
   DWSZRJWBSM->SetMinimum(0.1);
   DWSZRJWBSM->SetMaximum(3014026);
   DWSZRJWBSM->SetEntries(62666);
   DWSZRJWBSM->SetStats(0);

   ci = TColor::GetColor("#990033");
   DWSZRJWBSM->SetFillColor(ci);
   DWSZRJWBSM->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   DWSZRJWBSM->SetLineColor(ci);
   DWSZRJWBSM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   DWSZRJWBSM->GetXaxis()->SetLabelFont(42);
   DWSZRJWBSM->GetXaxis()->SetLabelSize(0.035);
   DWSZRJWBSM->GetXaxis()->SetTitleSize(0.035);
   DWSZRJWBSM->GetXaxis()->SetTitleFont(42);
   DWSZRJWBSM->GetYaxis()->SetTitle("Entries");
   DWSZRJWBSM->GetYaxis()->SetLabelFont(42);
   DWSZRJWBSM->GetYaxis()->SetLabelSize(0.035);
   DWSZRJWBSM->GetYaxis()->SetTitleSize(0.035);
   DWSZRJWBSM->GetYaxis()->SetTitleFont(42);
   DWSZRJWBSM->GetZaxis()->SetLabelFont(42);
   DWSZRJWBSM->GetZaxis()->SetLabelSize(0.035);
   DWSZRJWBSM->GetZaxis()->SetTitleSize(0.035);
   DWSZRJWBSM->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(DWSZRJWBSM,"");
   
   TH1F *WHSQMGMENT = new TH1F("WHSQMGMENT","NumberOfIsolatedLeptons",5,0,5);
   WHSQMGMENT->SetBinContent(1,274398.2);
   WHSQMGMENT->SetBinContent(2,134432.4);
   WHSQMGMENT->SetBinContent(3,21344.63);
   WHSQMGMENT->SetBinContent(4,50.39965);
   WHSQMGMENT->SetMinimum(0.1);
   WHSQMGMENT->SetMaximum(548796.4);
   WHSQMGMENT->SetEntries(68305);
   WHSQMGMENT->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   WHSQMGMENT->SetFillColor(ci);
   WHSQMGMENT->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   WHSQMGMENT->SetLineColor(ci);
   WHSQMGMENT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   WHSQMGMENT->GetXaxis()->SetLabelFont(42);
   WHSQMGMENT->GetXaxis()->SetLabelSize(0.035);
   WHSQMGMENT->GetXaxis()->SetTitleSize(0.035);
   WHSQMGMENT->GetXaxis()->SetTitleFont(42);
   WHSQMGMENT->GetYaxis()->SetTitle("Entries");
   WHSQMGMENT->GetYaxis()->SetLabelFont(42);
   WHSQMGMENT->GetYaxis()->SetLabelSize(0.035);
   WHSQMGMENT->GetYaxis()->SetTitleSize(0.035);
   WHSQMGMENT->GetYaxis()->SetTitleFont(42);
   WHSQMGMENT->GetZaxis()->SetLabelFont(42);
   WHSQMGMENT->GetZaxis()->SetLabelSize(0.035);
   WHSQMGMENT->GetZaxis()->SetTitleSize(0.035);
   WHSQMGMENT->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(WHSQMGMENT,"");
   
   TH1F *QRLVXZTFYY = new TH1F("QRLVXZTFYY","NumberOfIsolatedLeptons",5,0,5);
   QRLVXZTFYY->SetBinContent(1,1498637);
   QRLVXZTFYY->SetBinContent(2,233396.2);
   QRLVXZTFYY->SetBinContent(3,2030.428);
   QRLVXZTFYY->SetBinContent(4,29.00612);
   QRLVXZTFYY->SetMinimum(0.1);
   QRLVXZTFYY->SetMaximum(2997274);
   QRLVXZTFYY->SetEntries(59794);
   QRLVXZTFYY->SetStats(0);

   ci = TColor::GetColor("#a42400");
   QRLVXZTFYY->SetFillColor(ci);
   QRLVXZTFYY->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   QRLVXZTFYY->SetLineColor(ci);
   QRLVXZTFYY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QRLVXZTFYY->GetXaxis()->SetLabelFont(42);
   QRLVXZTFYY->GetXaxis()->SetLabelSize(0.035);
   QRLVXZTFYY->GetXaxis()->SetTitleSize(0.035);
   QRLVXZTFYY->GetXaxis()->SetTitleFont(42);
   QRLVXZTFYY->GetYaxis()->SetTitle("Entries");
   QRLVXZTFYY->GetYaxis()->SetLabelFont(42);
   QRLVXZTFYY->GetYaxis()->SetLabelSize(0.035);
   QRLVXZTFYY->GetYaxis()->SetTitleSize(0.035);
   QRLVXZTFYY->GetYaxis()->SetTitleFont(42);
   QRLVXZTFYY->GetZaxis()->SetLabelFont(42);
   QRLVXZTFYY->GetZaxis()->SetLabelSize(0.035);
   QRLVXZTFYY->GetZaxis()->SetTitleSize(0.035);
   QRLVXZTFYY->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(QRLVXZTFYY,"");
   
   TH1F *TGHGHRSFVJ = new TH1F("TGHGHRSFVJ","NumberOfIsolatedLeptons",5,0,5);
   TGHGHRSFVJ->SetBinContent(1,35953.88);
   TGHGHRSFVJ->SetBinContent(2,12886.3);
   TGHGHRSFVJ->SetBinContent(3,45.85793);
   TGHGHRSFVJ->SetMinimum(0.1);
   TGHGHRSFVJ->SetMaximum(71907.76);
   TGHGHRSFVJ->SetEntries(88471);
   TGHGHRSFVJ->SetStats(0);

   ci = TColor::GetColor("#001544");
   TGHGHRSFVJ->SetFillColor(ci);
   TGHGHRSFVJ->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   TGHGHRSFVJ->SetLineColor(ci);
   TGHGHRSFVJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   TGHGHRSFVJ->GetXaxis()->SetLabelFont(42);
   TGHGHRSFVJ->GetXaxis()->SetLabelSize(0.035);
   TGHGHRSFVJ->GetXaxis()->SetTitleSize(0.035);
   TGHGHRSFVJ->GetXaxis()->SetTitleFont(42);
   TGHGHRSFVJ->GetYaxis()->SetTitle("Entries");
   TGHGHRSFVJ->GetYaxis()->SetLabelFont(42);
   TGHGHRSFVJ->GetYaxis()->SetLabelSize(0.035);
   TGHGHRSFVJ->GetYaxis()->SetTitleSize(0.035);
   TGHGHRSFVJ->GetYaxis()->SetTitleFont(42);
   TGHGHRSFVJ->GetZaxis()->SetLabelFont(42);
   TGHGHRSFVJ->GetZaxis()->SetLabelSize(0.035);
   TGHGHRSFVJ->GetZaxis()->SetTitleSize(0.035);
   TGHGHRSFVJ->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(TGHGHRSFVJ,"");
   
   TH1F *JLBJZWMTOU = new TH1F("JLBJZWMTOU","NumberOfIsolatedLeptons",5,0,5);
   JLBJZWMTOU->SetBinContent(1,203283);
   JLBJZWMTOU->SetBinContent(2,1960.965);
   JLBJZWMTOU->SetBinContent(3,9.4391);
   JLBJZWMTOU->SetMinimum(0.1);
   JLBJZWMTOU->SetMaximum(406566);
   JLBJZWMTOU->SetEntries(86994);
   JLBJZWMTOU->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   JLBJZWMTOU->SetFillColor(ci);
   JLBJZWMTOU->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   JLBJZWMTOU->SetLineColor(ci);
   JLBJZWMTOU->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JLBJZWMTOU->GetXaxis()->SetLabelFont(42);
   JLBJZWMTOU->GetXaxis()->SetLabelSize(0.035);
   JLBJZWMTOU->GetXaxis()->SetTitleSize(0.035);
   JLBJZWMTOU->GetXaxis()->SetTitleFont(42);
   JLBJZWMTOU->GetYaxis()->SetTitle("Entries");
   JLBJZWMTOU->GetYaxis()->SetLabelFont(42);
   JLBJZWMTOU->GetYaxis()->SetLabelSize(0.035);
   JLBJZWMTOU->GetYaxis()->SetTitleSize(0.035);
   JLBJZWMTOU->GetYaxis()->SetTitleFont(42);
   JLBJZWMTOU->GetZaxis()->SetLabelFont(42);
   JLBJZWMTOU->GetZaxis()->SetLabelSize(0.035);
   JLBJZWMTOU->GetZaxis()->SetTitleSize(0.035);
   JLBJZWMTOU->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(JLBJZWMTOU,"");
   
   TH1F *JTOGXLRXYW = new TH1F("JTOGXLRXYW","NumberOfIsolatedLeptons",5,0,5);
   JTOGXLRXYW->SetBinContent(1,35950.16);
   JTOGXLRXYW->SetBinContent(2,12884.96);
   JTOGXLRXYW->SetBinContent(3,35.95303);
   JTOGXLRXYW->SetMinimum(0.1);
   JTOGXLRXYW->SetMaximum(71900.33);
   JTOGXLRXYW->SetEntries(88372);
   JTOGXLRXYW->SetStats(0);

   ci = TColor::GetColor("#620e00");
   JTOGXLRXYW->SetFillColor(ci);
   JTOGXLRXYW->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   JTOGXLRXYW->SetLineColor(ci);
   JTOGXLRXYW->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JTOGXLRXYW->GetXaxis()->SetLabelFont(42);
   JTOGXLRXYW->GetXaxis()->SetLabelSize(0.035);
   JTOGXLRXYW->GetXaxis()->SetTitleSize(0.035);
   JTOGXLRXYW->GetXaxis()->SetTitleFont(42);
   JTOGXLRXYW->GetYaxis()->SetTitle("Entries");
   JTOGXLRXYW->GetYaxis()->SetLabelFont(42);
   JTOGXLRXYW->GetYaxis()->SetLabelSize(0.035);
   JTOGXLRXYW->GetYaxis()->SetTitleSize(0.035);
   JTOGXLRXYW->GetYaxis()->SetTitleFont(42);
   JTOGXLRXYW->GetZaxis()->SetLabelFont(42);
   JTOGXLRXYW->GetZaxis()->SetLabelSize(0.035);
   JTOGXLRXYW->GetZaxis()->SetTitleSize(0.035);
   JTOGXLRXYW->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(JTOGXLRXYW,"");
   
   TH1F *CIZDJLHPPM = new TH1F("CIZDJLHPPM","NumberOfIsolatedLeptons",5,0,5);
   CIZDJLHPPM->SetBinContent(1,202682.2);
   CIZDJLHPPM->SetBinContent(2,1903.126);
   CIZDJLHPPM->SetBinContent(3,7.110091);
   CIZDJLHPPM->SetMinimum(0.1);
   CIZDJLHPPM->SetMaximum(405364.5);
   CIZDJLHPPM->SetEntries(86291);
   CIZDJLHPPM->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   CIZDJLHPPM->SetFillColor(ci);
   CIZDJLHPPM->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   CIZDJLHPPM->SetLineColor(ci);
   CIZDJLHPPM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   CIZDJLHPPM->GetXaxis()->SetLabelFont(42);
   CIZDJLHPPM->GetXaxis()->SetLabelSize(0.035);
   CIZDJLHPPM->GetXaxis()->SetTitleSize(0.035);
   CIZDJLHPPM->GetXaxis()->SetTitleFont(42);
   CIZDJLHPPM->GetYaxis()->SetTitle("Entries");
   CIZDJLHPPM->GetYaxis()->SetLabelFont(42);
   CIZDJLHPPM->GetYaxis()->SetLabelSize(0.035);
   CIZDJLHPPM->GetYaxis()->SetTitleSize(0.035);
   CIZDJLHPPM->GetYaxis()->SetTitleFont(42);
   CIZDJLHPPM->GetZaxis()->SetLabelFont(42);
   CIZDJLHPPM->GetZaxis()->SetLabelSize(0.035);
   CIZDJLHPPM->GetZaxis()->SetTitleSize(0.035);
   CIZDJLHPPM->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(CIZDJLHPPM,"");
   
   TH1F *MWSGXEKQYX = new TH1F("MWSGXEKQYX","NumberOfIsolatedLeptons",5,0,5);
   MWSGXEKQYX->SetBinContent(1,859131.4);
   MWSGXEKQYX->SetBinContent(2,245147.3);
   MWSGXEKQYX->SetBinContent(3,24777.95);
   MWSGXEKQYX->SetBinContent(4,67.5894);
   MWSGXEKQYX->SetMinimum(0.1);
   MWSGXEKQYX->SetMaximum(1718263);
   MWSGXEKQYX->SetEntries(83546);
   MWSGXEKQYX->SetStats(0);
   MWSGXEKQYX->SetFillColor(4);
   MWSGXEKQYX->SetFillStyle(3001);
   MWSGXEKQYX->SetLineColor(4);
   MWSGXEKQYX->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   MWSGXEKQYX->GetXaxis()->SetLabelFont(42);
   MWSGXEKQYX->GetXaxis()->SetLabelSize(0.035);
   MWSGXEKQYX->GetXaxis()->SetTitleSize(0.035);
   MWSGXEKQYX->GetXaxis()->SetTitleFont(42);
   MWSGXEKQYX->GetYaxis()->SetTitle("Entries");
   MWSGXEKQYX->GetYaxis()->SetLabelFont(42);
   MWSGXEKQYX->GetYaxis()->SetLabelSize(0.035);
   MWSGXEKQYX->GetYaxis()->SetTitleSize(0.035);
   MWSGXEKQYX->GetYaxis()->SetTitleFont(42);
   MWSGXEKQYX->GetZaxis()->SetLabelFont(42);
   MWSGXEKQYX->GetZaxis()->SetLabelSize(0.035);
   MWSGXEKQYX->GetZaxis()->SetTitleSize(0.035);
   MWSGXEKQYX->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(MWSGXEKQYX,"");
   
   TH1F *SZKTSTKVAN = new TH1F("SZKTSTKVAN","NumberOfIsolatedLeptons",5,0,5);
   SZKTSTKVAN->SetBinContent(1,5212348);
   SZKTSTKVAN->SetBinContent(2,830967.1);
   SZKTSTKVAN->SetBinContent(3,8141.426);
   SZKTSTKVAN->SetMinimum(0.1);
   SZKTSTKVAN->SetMaximum(1.04247e+07);
   SZKTSTKVAN->SetEntries(83252);
   SZKTSTKVAN->SetStats(0);

   ci = TColor::GetColor("#007db5");
   SZKTSTKVAN->SetFillColor(ci);
   SZKTSTKVAN->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   SZKTSTKVAN->SetLineColor(ci);
   SZKTSTKVAN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SZKTSTKVAN->GetXaxis()->SetLabelFont(42);
   SZKTSTKVAN->GetXaxis()->SetLabelSize(0.035);
   SZKTSTKVAN->GetXaxis()->SetTitleSize(0.035);
   SZKTSTKVAN->GetXaxis()->SetTitleFont(42);
   SZKTSTKVAN->GetYaxis()->SetTitle("Entries");
   SZKTSTKVAN->GetYaxis()->SetLabelFont(42);
   SZKTSTKVAN->GetYaxis()->SetLabelSize(0.035);
   SZKTSTKVAN->GetYaxis()->SetTitleSize(0.035);
   SZKTSTKVAN->GetYaxis()->SetTitleFont(42);
   SZKTSTKVAN->GetZaxis()->SetLabelFont(42);
   SZKTSTKVAN->GetZaxis()->SetLabelSize(0.035);
   SZKTSTKVAN->GetZaxis()->SetTitleSize(0.035);
   SZKTSTKVAN->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(SZKTSTKVAN,"");
   
   TH1F *EIPPRCITOR = new TH1F("EIPPRCITOR","NumberOfIsolatedLeptons",5,0,5);
   EIPPRCITOR->SetBinContent(1,5188308);
   EIPPRCITOR->SetBinContent(2,833599.4);
   EIPPRCITOR->SetBinContent(3,6544.185);
   EIPPRCITOR->SetMinimum(0.1);
   EIPPRCITOR->SetMaximum(1.037662e+07);
   EIPPRCITOR->SetEntries(84731);
   EIPPRCITOR->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   EIPPRCITOR->SetFillColor(ci);
   EIPPRCITOR->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   EIPPRCITOR->SetLineColor(ci);
   EIPPRCITOR->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EIPPRCITOR->GetXaxis()->SetLabelFont(42);
   EIPPRCITOR->GetXaxis()->SetLabelSize(0.035);
   EIPPRCITOR->GetXaxis()->SetTitleSize(0.035);
   EIPPRCITOR->GetXaxis()->SetTitleFont(42);
   EIPPRCITOR->GetYaxis()->SetTitle("Entries");
   EIPPRCITOR->GetYaxis()->SetLabelFont(42);
   EIPPRCITOR->GetYaxis()->SetLabelSize(0.035);
   EIPPRCITOR->GetYaxis()->SetTitleSize(0.035);
   EIPPRCITOR->GetYaxis()->SetTitleFont(42);
   EIPPRCITOR->GetZaxis()->SetLabelFont(42);
   EIPPRCITOR->GetZaxis()->SetLabelSize(0.035);
   EIPPRCITOR->GetZaxis()->SetTitleSize(0.035);
   EIPPRCITOR->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(EIPPRCITOR,"");
   
   TH1F *AGNDTWODTW = new TH1F("AGNDTWODTW","NumberOfIsolatedLeptons",5,0,5);
   AGNDTWODTW->SetBinContent(1,5907166);
   AGNDTWODTW->SetBinContent(2,105823.8);
   AGNDTWODTW->SetBinContent(3,602.9776);
   AGNDTWODTW->SetMinimum(0.1);
   AGNDTWODTW->SetMaximum(1.181433e+07);
   AGNDTWODTW->SetEntries(79791);
   AGNDTWODTW->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   AGNDTWODTW->SetFillColor(ci);
   AGNDTWODTW->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   AGNDTWODTW->SetLineColor(ci);
   AGNDTWODTW->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AGNDTWODTW->GetXaxis()->SetLabelFont(42);
   AGNDTWODTW->GetXaxis()->SetLabelSize(0.035);
   AGNDTWODTW->GetXaxis()->SetTitleSize(0.035);
   AGNDTWODTW->GetXaxis()->SetTitleFont(42);
   AGNDTWODTW->GetYaxis()->SetTitle("Entries");
   AGNDTWODTW->GetYaxis()->SetLabelFont(42);
   AGNDTWODTW->GetYaxis()->SetLabelSize(0.035);
   AGNDTWODTW->GetYaxis()->SetTitleSize(0.035);
   AGNDTWODTW->GetYaxis()->SetTitleFont(42);
   AGNDTWODTW->GetZaxis()->SetLabelFont(42);
   AGNDTWODTW->GetZaxis()->SetLabelSize(0.035);
   AGNDTWODTW->GetZaxis()->SetTitleSize(0.035);
   AGNDTWODTW->GetZaxis()->SetTitleFont(42);
   INTWTJKEEB->Add(AGNDTWODTW,"");
   INTWTJKEEB->Draw("");
   
   TPaveText *pt = new TPaveText(0.2737644,0.9339831,0.7262356,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.8,0.1,0.95,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("FYILIUFOAS","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("WKQSRVCKCL","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("EOIKLRPMRF","ee_llqqqq","f");

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
   entry=leg->AddEntry("KYTVIDRBEM","ee_qqqq","f");

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
   entry=leg->AddEntry("MQOIAROKJN","ee_nunuqq","f");

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
   entry=leg->AddEntry("HHAYPHMTGO","ee_lnuqq","f");

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
   entry=leg->AddEntry("ZSPEDNPVMN","ee_qqll","f");

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
   entry=leg->AddEntry("EUUYKHSVXG","ee_qq","f");

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
   entry=leg->AddEntry("AOCJUOHWNO","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DWSZRJWBSM","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("WHSQMGMENT","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("QRLVXZTFYY","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("TGHGHRSFVJ","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("JLBJZWMTOU","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("JTOGXLRXYW","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("CIZDJLHPPM","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("MWSGXEKQYX","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SZKTSTKVAN","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("EIPPRCITOR","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("AGNDTWODTW","gammagamma_qqqq_BS_BS","f");

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
   DNGKZOZXBJ->Modified();
   DNGKZOZXBJ->cd();
   DNGKZOZXBJ->SetSelected(DNGKZOZXBJ);
}
