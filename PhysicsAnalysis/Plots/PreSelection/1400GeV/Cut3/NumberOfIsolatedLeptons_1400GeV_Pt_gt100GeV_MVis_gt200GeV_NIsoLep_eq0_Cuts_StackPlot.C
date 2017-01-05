{
//=========Macro generated from canvas: GTDHKYWUTH/NumberOfIsolatedLeptons
//=========  (Thu Jan  5 10:54:47 2017) by ROOT version5.34/30
   TCanvas *GTDHKYWUTH = new TCanvas("GTDHKYWUTH", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   GTDHKYWUTH->SetHighLightColor(2);
   GTDHKYWUTH->Range(-0.625,-2.645082,5.625,7.306006);
   GTDHKYWUTH->SetFillColor(0);
   GTDHKYWUTH->SetBorderMode(0);
   GTDHKYWUTH->SetBorderSize(2);
   GTDHKYWUTH->SetLogy();
   GTDHKYWUTH->SetFrameBorderMode(0);
   GTDHKYWUTH->SetFrameBorderMode(0);
   
   THStack *VGMDCNXZTG = new THStack();
   VGMDCNXZTG->SetName("VGMDCNXZTG");
   VGMDCNXZTG->SetTitle("NumberOfIsolatedLeptons");
   VGMDCNXZTG->SetMinimum(0.1);
   
   TH1F *VGMDCNXZTG_stack_127 = new TH1F("VGMDCNXZTG_stack_127","NumberOfIsolatedLeptons",5,0,5);
   VGMDCNXZTG_stack_127->SetMinimum(0.02238861);
   VGMDCNXZTG_stack_127->SetMaximum(2045959);
   VGMDCNXZTG_stack_127->SetDirectory(0);
   VGMDCNXZTG_stack_127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VGMDCNXZTG_stack_127->SetLineColor(ci);
   VGMDCNXZTG_stack_127->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VGMDCNXZTG_stack_127->GetXaxis()->SetLabelFont(42);
   VGMDCNXZTG_stack_127->GetXaxis()->SetLabelSize(0.035);
   VGMDCNXZTG_stack_127->GetXaxis()->SetTitleSize(0.035);
   VGMDCNXZTG_stack_127->GetXaxis()->SetTitleFont(42);
   VGMDCNXZTG_stack_127->GetYaxis()->SetTitle("Entries");
   VGMDCNXZTG_stack_127->GetYaxis()->SetLabelFont(42);
   VGMDCNXZTG_stack_127->GetYaxis()->SetLabelSize(0.035);
   VGMDCNXZTG_stack_127->GetYaxis()->SetTitleSize(0.035);
   VGMDCNXZTG_stack_127->GetYaxis()->SetTitleFont(42);
   VGMDCNXZTG_stack_127->GetZaxis()->SetLabelFont(42);
   VGMDCNXZTG_stack_127->GetZaxis()->SetLabelSize(0.035);
   VGMDCNXZTG_stack_127->GetZaxis()->SetTitleSize(0.035);
   VGMDCNXZTG_stack_127->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->SetHistogram(VGMDCNXZTG_stack_127);
   
   
   TH1F *QSNGDVYCYN = new TH1F("QSNGDVYCYN","NumberOfIsolatedLeptons",5,0,5);
   QSNGDVYCYN->SetBinContent(1,20934.6);
   QSNGDVYCYN->SetMinimum(0.1);
   QSNGDVYCYN->SetMaximum(41869.2);
   QSNGDVYCYN->SetEntries(764596);
   QSNGDVYCYN->SetStats(0);
   QSNGDVYCYN->SetFillColor(1);
   QSNGDVYCYN->SetFillStyle(3001);
   QSNGDVYCYN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QSNGDVYCYN->GetXaxis()->SetLabelFont(42);
   QSNGDVYCYN->GetXaxis()->SetLabelSize(0.035);
   QSNGDVYCYN->GetXaxis()->SetTitleSize(0.035);
   QSNGDVYCYN->GetXaxis()->SetTitleFont(42);
   QSNGDVYCYN->GetYaxis()->SetTitle("Entries");
   QSNGDVYCYN->GetYaxis()->SetLabelFont(42);
   QSNGDVYCYN->GetYaxis()->SetLabelSize(0.035);
   QSNGDVYCYN->GetYaxis()->SetTitleSize(0.035);
   QSNGDVYCYN->GetYaxis()->SetTitleFont(42);
   QSNGDVYCYN->GetZaxis()->SetLabelFont(42);
   QSNGDVYCYN->GetZaxis()->SetLabelSize(0.035);
   QSNGDVYCYN->GetZaxis()->SetTitleSize(0.035);
   QSNGDVYCYN->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(QSNGDVYCYN,"");
   
   TH1F *RAMWXIWHQB = new TH1F("RAMWXIWHQB","NumberOfIsolatedLeptons",5,0,5);
   RAMWXIWHQB->SetBinContent(1,42473.12);
   RAMWXIWHQB->SetMinimum(0.1);
   RAMWXIWHQB->SetMaximum(84946.24);
   RAMWXIWHQB->SetEntries(95117);
   RAMWXIWHQB->SetStats(0);

   ci = TColor::GetColor("#000066");
   RAMWXIWHQB->SetFillColor(ci);
   RAMWXIWHQB->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   RAMWXIWHQB->SetLineColor(ci);
   RAMWXIWHQB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RAMWXIWHQB->GetXaxis()->SetLabelFont(42);
   RAMWXIWHQB->GetXaxis()->SetLabelSize(0.035);
   RAMWXIWHQB->GetXaxis()->SetTitleSize(0.035);
   RAMWXIWHQB->GetXaxis()->SetTitleFont(42);
   RAMWXIWHQB->GetYaxis()->SetTitle("Entries");
   RAMWXIWHQB->GetYaxis()->SetLabelFont(42);
   RAMWXIWHQB->GetYaxis()->SetLabelSize(0.035);
   RAMWXIWHQB->GetYaxis()->SetTitleSize(0.035);
   RAMWXIWHQB->GetYaxis()->SetTitleFont(42);
   RAMWXIWHQB->GetZaxis()->SetLabelFont(42);
   RAMWXIWHQB->GetZaxis()->SetLabelSize(0.035);
   RAMWXIWHQB->GetZaxis()->SetTitleSize(0.035);
   RAMWXIWHQB->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(RAMWXIWHQB,"");
   
   TH1F *ZOBJSYOEFV = new TH1F("ZOBJSYOEFV","NumberOfIsolatedLeptons",5,0,5);
   ZOBJSYOEFV->SetBinContent(1,689.4698);
   ZOBJSYOEFV->SetMinimum(0.1);
   ZOBJSYOEFV->SetMaximum(1378.94);
   ZOBJSYOEFV->SetEntries(4695);
   ZOBJSYOEFV->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   ZOBJSYOEFV->SetFillColor(ci);
   ZOBJSYOEFV->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   ZOBJSYOEFV->SetLineColor(ci);
   ZOBJSYOEFV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZOBJSYOEFV->GetXaxis()->SetLabelFont(42);
   ZOBJSYOEFV->GetXaxis()->SetLabelSize(0.035);
   ZOBJSYOEFV->GetXaxis()->SetTitleSize(0.035);
   ZOBJSYOEFV->GetXaxis()->SetTitleFont(42);
   ZOBJSYOEFV->GetYaxis()->SetTitle("Entries");
   ZOBJSYOEFV->GetYaxis()->SetLabelFont(42);
   ZOBJSYOEFV->GetYaxis()->SetLabelSize(0.035);
   ZOBJSYOEFV->GetYaxis()->SetTitleSize(0.035);
   ZOBJSYOEFV->GetYaxis()->SetTitleFont(42);
   ZOBJSYOEFV->GetZaxis()->SetLabelFont(42);
   ZOBJSYOEFV->GetZaxis()->SetLabelSize(0.035);
   ZOBJSYOEFV->GetZaxis()->SetTitleSize(0.035);
   ZOBJSYOEFV->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(ZOBJSYOEFV,"");
   
   TH1F *VJTVPWAWNX = new TH1F("VJTVPWAWNX","NumberOfIsolatedLeptons",5,0,5);
   VJTVPWAWNX->SetBinContent(1,6160.975);
   VJTVPWAWNX->SetMinimum(0.1);
   VJTVPWAWNX->SetMaximum(12321.95);
   VJTVPWAWNX->SetEntries(965);
   VJTVPWAWNX->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   VJTVPWAWNX->SetFillColor(ci);
   VJTVPWAWNX->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   VJTVPWAWNX->SetLineColor(ci);
   VJTVPWAWNX->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VJTVPWAWNX->GetXaxis()->SetLabelFont(42);
   VJTVPWAWNX->GetXaxis()->SetLabelSize(0.035);
   VJTVPWAWNX->GetXaxis()->SetTitleSize(0.035);
   VJTVPWAWNX->GetXaxis()->SetTitleFont(42);
   VJTVPWAWNX->GetYaxis()->SetTitle("Entries");
   VJTVPWAWNX->GetYaxis()->SetLabelFont(42);
   VJTVPWAWNX->GetYaxis()->SetLabelSize(0.035);
   VJTVPWAWNX->GetYaxis()->SetTitleSize(0.035);
   VJTVPWAWNX->GetYaxis()->SetTitleFont(42);
   VJTVPWAWNX->GetZaxis()->SetLabelFont(42);
   VJTVPWAWNX->GetZaxis()->SetLabelSize(0.035);
   VJTVPWAWNX->GetZaxis()->SetTitleSize(0.035);
   VJTVPWAWNX->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(VJTVPWAWNX,"");
   
   TH1F *VCOHDTHJFS = new TH1F("VCOHDTHJFS","NumberOfIsolatedLeptons",5,0,5);
   VCOHDTHJFS->SetBinContent(1,50704.28);
   VCOHDTHJFS->SetMinimum(0.1);
   VCOHDTHJFS->SetMaximum(101408.6);
   VCOHDTHJFS->SetEntries(12529);
   VCOHDTHJFS->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   VCOHDTHJFS->SetFillColor(ci);
   VCOHDTHJFS->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   VCOHDTHJFS->SetLineColor(ci);
   VCOHDTHJFS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VCOHDTHJFS->GetXaxis()->SetLabelFont(42);
   VCOHDTHJFS->GetXaxis()->SetLabelSize(0.035);
   VCOHDTHJFS->GetXaxis()->SetTitleSize(0.035);
   VCOHDTHJFS->GetXaxis()->SetTitleFont(42);
   VCOHDTHJFS->GetYaxis()->SetTitle("Entries");
   VCOHDTHJFS->GetYaxis()->SetLabelFont(42);
   VCOHDTHJFS->GetYaxis()->SetLabelSize(0.035);
   VCOHDTHJFS->GetYaxis()->SetTitleSize(0.035);
   VCOHDTHJFS->GetYaxis()->SetTitleFont(42);
   VCOHDTHJFS->GetZaxis()->SetLabelFont(42);
   VCOHDTHJFS->GetZaxis()->SetLabelSize(0.035);
   VCOHDTHJFS->GetZaxis()->SetTitleSize(0.035);
   VCOHDTHJFS->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(VCOHDTHJFS,"");
   
   TH1F *IWVBOYAIGE = new TH1F("IWVBOYAIGE","NumberOfIsolatedLeptons",5,0,5);
   IWVBOYAIGE->SetBinContent(1,567250.8);
   IWVBOYAIGE->SetMinimum(0.1);
   IWVBOYAIGE->SetMaximum(1134502);
   IWVBOYAIGE->SetEntries(91764);
   IWVBOYAIGE->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   IWVBOYAIGE->SetFillColor(ci);
   IWVBOYAIGE->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   IWVBOYAIGE->SetLineColor(ci);
   IWVBOYAIGE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   IWVBOYAIGE->GetXaxis()->SetLabelFont(42);
   IWVBOYAIGE->GetXaxis()->SetLabelSize(0.035);
   IWVBOYAIGE->GetXaxis()->SetTitleSize(0.035);
   IWVBOYAIGE->GetXaxis()->SetTitleFont(42);
   IWVBOYAIGE->GetYaxis()->SetTitle("Entries");
   IWVBOYAIGE->GetYaxis()->SetLabelFont(42);
   IWVBOYAIGE->GetYaxis()->SetLabelSize(0.035);
   IWVBOYAIGE->GetYaxis()->SetTitleSize(0.035);
   IWVBOYAIGE->GetYaxis()->SetTitleFont(42);
   IWVBOYAIGE->GetZaxis()->SetLabelFont(42);
   IWVBOYAIGE->GetZaxis()->SetLabelSize(0.035);
   IWVBOYAIGE->GetZaxis()->SetTitleSize(0.035);
   IWVBOYAIGE->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(IWVBOYAIGE,"");
   
   TH1F *HCYIGCQHFY = new TH1F("HCYIGCQHFY","NumberOfIsolatedLeptons",5,0,5);
   HCYIGCQHFY->SetBinContent(1,5636.094);
   HCYIGCQHFY->SetMinimum(0.1);
   HCYIGCQHFY->SetMaximum(11272.19);
   HCYIGCQHFY->SetEntries(1447);
   HCYIGCQHFY->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   HCYIGCQHFY->SetFillColor(ci);
   HCYIGCQHFY->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   HCYIGCQHFY->SetLineColor(ci);
   HCYIGCQHFY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HCYIGCQHFY->GetXaxis()->SetLabelFont(42);
   HCYIGCQHFY->GetXaxis()->SetLabelSize(0.035);
   HCYIGCQHFY->GetXaxis()->SetTitleSize(0.035);
   HCYIGCQHFY->GetXaxis()->SetTitleFont(42);
   HCYIGCQHFY->GetYaxis()->SetTitle("Entries");
   HCYIGCQHFY->GetYaxis()->SetLabelFont(42);
   HCYIGCQHFY->GetYaxis()->SetLabelSize(0.035);
   HCYIGCQHFY->GetYaxis()->SetTitleSize(0.035);
   HCYIGCQHFY->GetYaxis()->SetTitleFont(42);
   HCYIGCQHFY->GetZaxis()->SetLabelFont(42);
   HCYIGCQHFY->GetZaxis()->SetLabelSize(0.035);
   HCYIGCQHFY->GetZaxis()->SetTitleSize(0.035);
   HCYIGCQHFY->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(HCYIGCQHFY,"");
   
   TH1F *QVUEMTCPGE = new TH1F("QVUEMTCPGE","NumberOfIsolatedLeptons",5,0,5);
   QVUEMTCPGE->SetBinContent(1,34536.24);
   QVUEMTCPGE->SetMinimum(0.1);
   QVUEMTCPGE->SetMaximum(69072.48);
   QVUEMTCPGE->SetEntries(1394);
   QVUEMTCPGE->SetStats(0);

   ci = TColor::GetColor("#006633");
   QVUEMTCPGE->SetFillColor(ci);
   QVUEMTCPGE->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   QVUEMTCPGE->SetLineColor(ci);
   QVUEMTCPGE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QVUEMTCPGE->GetXaxis()->SetLabelFont(42);
   QVUEMTCPGE->GetXaxis()->SetLabelSize(0.035);
   QVUEMTCPGE->GetXaxis()->SetTitleSize(0.035);
   QVUEMTCPGE->GetXaxis()->SetTitleFont(42);
   QVUEMTCPGE->GetYaxis()->SetTitle("Entries");
   QVUEMTCPGE->GetYaxis()->SetLabelFont(42);
   QVUEMTCPGE->GetYaxis()->SetLabelSize(0.035);
   QVUEMTCPGE->GetYaxis()->SetTitleSize(0.035);
   QVUEMTCPGE->GetYaxis()->SetTitleFont(42);
   QVUEMTCPGE->GetZaxis()->SetLabelFont(42);
   QVUEMTCPGE->GetZaxis()->SetLabelSize(0.035);
   QVUEMTCPGE->GetZaxis()->SetTitleSize(0.035);
   QVUEMTCPGE->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(QVUEMTCPGE,"");
   
   TH1F *CTBXFGCGLQ = new TH1F("CTBXFGCGLQ","NumberOfIsolatedLeptons",5,0,5);
   CTBXFGCGLQ->SetBinContent(1,968.1812);
   CTBXFGCGLQ->SetMinimum(0.1);
   CTBXFGCGLQ->SetMaximum(1936.362);
   CTBXFGCGLQ->SetEntries(142);
   CTBXFGCGLQ->SetStats(0);
   CTBXFGCGLQ->SetFillColor(3);
   CTBXFGCGLQ->SetFillStyle(3001);
   CTBXFGCGLQ->SetLineColor(3);
   CTBXFGCGLQ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   CTBXFGCGLQ->GetXaxis()->SetLabelFont(42);
   CTBXFGCGLQ->GetXaxis()->SetLabelSize(0.035);
   CTBXFGCGLQ->GetXaxis()->SetTitleSize(0.035);
   CTBXFGCGLQ->GetXaxis()->SetTitleFont(42);
   CTBXFGCGLQ->GetYaxis()->SetTitle("Entries");
   CTBXFGCGLQ->GetYaxis()->SetLabelFont(42);
   CTBXFGCGLQ->GetYaxis()->SetLabelSize(0.035);
   CTBXFGCGLQ->GetYaxis()->SetTitleSize(0.035);
   CTBXFGCGLQ->GetYaxis()->SetTitleFont(42);
   CTBXFGCGLQ->GetZaxis()->SetLabelFont(42);
   CTBXFGCGLQ->GetZaxis()->SetLabelSize(0.035);
   CTBXFGCGLQ->GetZaxis()->SetTitleSize(0.035);
   CTBXFGCGLQ->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(CTBXFGCGLQ,"");
   
   TH1F *KWAHITNDKJ = new TH1F("KWAHITNDKJ","NumberOfIsolatedLeptons",5,0,5);
   KWAHITNDKJ->SetBinContent(1,1378.771);
   KWAHITNDKJ->SetMinimum(0.1);
   KWAHITNDKJ->SetMaximum(2757.542);
   KWAHITNDKJ->SetEntries(49);
   KWAHITNDKJ->SetStats(0);

   ci = TColor::GetColor("#990033");
   KWAHITNDKJ->SetFillColor(ci);
   KWAHITNDKJ->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   KWAHITNDKJ->SetLineColor(ci);
   KWAHITNDKJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KWAHITNDKJ->GetXaxis()->SetLabelFont(42);
   KWAHITNDKJ->GetXaxis()->SetLabelSize(0.035);
   KWAHITNDKJ->GetXaxis()->SetTitleSize(0.035);
   KWAHITNDKJ->GetXaxis()->SetTitleFont(42);
   KWAHITNDKJ->GetYaxis()->SetTitle("Entries");
   KWAHITNDKJ->GetYaxis()->SetLabelFont(42);
   KWAHITNDKJ->GetYaxis()->SetLabelSize(0.035);
   KWAHITNDKJ->GetYaxis()->SetTitleSize(0.035);
   KWAHITNDKJ->GetYaxis()->SetTitleFont(42);
   KWAHITNDKJ->GetZaxis()->SetLabelFont(42);
   KWAHITNDKJ->GetZaxis()->SetLabelSize(0.035);
   KWAHITNDKJ->GetZaxis()->SetTitleSize(0.035);
   KWAHITNDKJ->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(KWAHITNDKJ,"");
   
   TH1F *YYLLVJVGHL = new TH1F("YYLLVJVGHL","NumberOfIsolatedLeptons",5,0,5);
   YYLLVJVGHL->SetBinContent(1,1184.389);
   YYLLVJVGHL->SetMinimum(0.1);
   YYLLVJVGHL->SetMaximum(2368.777);
   YYLLVJVGHL->SetEntries(188);
   YYLLVJVGHL->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   YYLLVJVGHL->SetFillColor(ci);
   YYLLVJVGHL->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   YYLLVJVGHL->SetLineColor(ci);
   YYLLVJVGHL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YYLLVJVGHL->GetXaxis()->SetLabelFont(42);
   YYLLVJVGHL->GetXaxis()->SetLabelSize(0.035);
   YYLLVJVGHL->GetXaxis()->SetTitleSize(0.035);
   YYLLVJVGHL->GetXaxis()->SetTitleFont(42);
   YYLLVJVGHL->GetYaxis()->SetTitle("Entries");
   YYLLVJVGHL->GetYaxis()->SetLabelFont(42);
   YYLLVJVGHL->GetYaxis()->SetLabelSize(0.035);
   YYLLVJVGHL->GetYaxis()->SetTitleSize(0.035);
   YYLLVJVGHL->GetYaxis()->SetTitleFont(42);
   YYLLVJVGHL->GetZaxis()->SetLabelFont(42);
   YYLLVJVGHL->GetZaxis()->SetLabelSize(0.035);
   YYLLVJVGHL->GetZaxis()->SetTitleSize(0.035);
   YYLLVJVGHL->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(YYLLVJVGHL,"");
   
   TH1F *ERCJUABBER = new TH1F("ERCJUABBER","NumberOfIsolatedLeptons",5,0,5);
   ERCJUABBER->SetBinContent(1,697.3013);
   ERCJUABBER->SetMinimum(0.1);
   ERCJUABBER->SetMaximum(1394.603);
   ERCJUABBER->SetEntries(24);
   ERCJUABBER->SetStats(0);

   ci = TColor::GetColor("#a42400");
   ERCJUABBER->SetFillColor(ci);
   ERCJUABBER->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   ERCJUABBER->SetLineColor(ci);
   ERCJUABBER->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERCJUABBER->GetXaxis()->SetLabelFont(42);
   ERCJUABBER->GetXaxis()->SetLabelSize(0.035);
   ERCJUABBER->GetXaxis()->SetTitleSize(0.035);
   ERCJUABBER->GetXaxis()->SetTitleFont(42);
   ERCJUABBER->GetYaxis()->SetTitle("Entries");
   ERCJUABBER->GetYaxis()->SetLabelFont(42);
   ERCJUABBER->GetYaxis()->SetLabelSize(0.035);
   ERCJUABBER->GetYaxis()->SetTitleSize(0.035);
   ERCJUABBER->GetYaxis()->SetTitleFont(42);
   ERCJUABBER->GetZaxis()->SetLabelFont(42);
   ERCJUABBER->GetZaxis()->SetLabelSize(0.035);
   ERCJUABBER->GetZaxis()->SetTitleSize(0.035);
   ERCJUABBER->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(ERCJUABBER,"");
   
   TH1F *XEGAUDFXBT = new TH1F("XEGAUDFXBT","NumberOfIsolatedLeptons",5,0,5);
   XEGAUDFXBT->SetBinContent(1,8808.519);
   XEGAUDFXBT->SetMinimum(0.1);
   XEGAUDFXBT->SetMaximum(17617.04);
   XEGAUDFXBT->SetEntries(15908);
   XEGAUDFXBT->SetStats(0);

   ci = TColor::GetColor("#001544");
   XEGAUDFXBT->SetFillColor(ci);
   XEGAUDFXBT->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   XEGAUDFXBT->SetLineColor(ci);
   XEGAUDFXBT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   XEGAUDFXBT->GetXaxis()->SetLabelFont(42);
   XEGAUDFXBT->GetXaxis()->SetLabelSize(0.035);
   XEGAUDFXBT->GetXaxis()->SetTitleSize(0.035);
   XEGAUDFXBT->GetXaxis()->SetTitleFont(42);
   XEGAUDFXBT->GetYaxis()->SetTitle("Entries");
   XEGAUDFXBT->GetYaxis()->SetLabelFont(42);
   XEGAUDFXBT->GetYaxis()->SetLabelSize(0.035);
   XEGAUDFXBT->GetYaxis()->SetTitleSize(0.035);
   XEGAUDFXBT->GetYaxis()->SetTitleFont(42);
   XEGAUDFXBT->GetZaxis()->SetLabelFont(42);
   XEGAUDFXBT->GetZaxis()->SetLabelSize(0.035);
   XEGAUDFXBT->GetZaxis()->SetTitleSize(0.035);
   XEGAUDFXBT->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(XEGAUDFXBT,"");
   
   TH1F *SCKUCJQWWE = new TH1F("SCKUCJQWWE","NumberOfIsolatedLeptons",5,0,5);
   SCKUCJQWWE->SetBinContent(1,47698.73);
   SCKUCJQWWE->SetMinimum(0.1);
   SCKUCJQWWE->SetMaximum(95397.47);
   SCKUCJQWWE->SetEntries(20216);
   SCKUCJQWWE->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   SCKUCJQWWE->SetFillColor(ci);
   SCKUCJQWWE->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   SCKUCJQWWE->SetLineColor(ci);
   SCKUCJQWWE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SCKUCJQWWE->GetXaxis()->SetLabelFont(42);
   SCKUCJQWWE->GetXaxis()->SetLabelSize(0.035);
   SCKUCJQWWE->GetXaxis()->SetTitleSize(0.035);
   SCKUCJQWWE->GetXaxis()->SetTitleFont(42);
   SCKUCJQWWE->GetYaxis()->SetTitle("Entries");
   SCKUCJQWWE->GetYaxis()->SetLabelFont(42);
   SCKUCJQWWE->GetYaxis()->SetLabelSize(0.035);
   SCKUCJQWWE->GetYaxis()->SetTitleSize(0.035);
   SCKUCJQWWE->GetYaxis()->SetTitleFont(42);
   SCKUCJQWWE->GetZaxis()->SetLabelFont(42);
   SCKUCJQWWE->GetZaxis()->SetLabelSize(0.035);
   SCKUCJQWWE->GetZaxis()->SetTitleSize(0.035);
   SCKUCJQWWE->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(SCKUCJQWWE,"");
   
   TH1F *UEEVXQDUMI = new TH1F("UEEVXQDUMI","NumberOfIsolatedLeptons",5,0,5);
   UEEVXQDUMI->SetBinContent(1,8904.864);
   UEEVXQDUMI->SetMinimum(0.1);
   UEEVXQDUMI->SetMaximum(17809.73);
   UEEVXQDUMI->SetEntries(16082);
   UEEVXQDUMI->SetStats(0);

   ci = TColor::GetColor("#620e00");
   UEEVXQDUMI->SetFillColor(ci);
   UEEVXQDUMI->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   UEEVXQDUMI->SetLineColor(ci);
   UEEVXQDUMI->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UEEVXQDUMI->GetXaxis()->SetLabelFont(42);
   UEEVXQDUMI->GetXaxis()->SetLabelSize(0.035);
   UEEVXQDUMI->GetXaxis()->SetTitleSize(0.035);
   UEEVXQDUMI->GetXaxis()->SetTitleFont(42);
   UEEVXQDUMI->GetYaxis()->SetTitle("Entries");
   UEEVXQDUMI->GetYaxis()->SetLabelFont(42);
   UEEVXQDUMI->GetYaxis()->SetLabelSize(0.035);
   UEEVXQDUMI->GetYaxis()->SetTitleSize(0.035);
   UEEVXQDUMI->GetYaxis()->SetTitleFont(42);
   UEEVXQDUMI->GetZaxis()->SetLabelFont(42);
   UEEVXQDUMI->GetZaxis()->SetLabelSize(0.035);
   UEEVXQDUMI->GetZaxis()->SetTitleSize(0.035);
   UEEVXQDUMI->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(UEEVXQDUMI,"");
   
   TH1F *BYOUTCYLNO = new TH1F("BYOUTCYLNO","NumberOfIsolatedLeptons",5,0,5);
   BYOUTCYLNO->SetBinContent(1,47835.44);
   BYOUTCYLNO->SetMinimum(0.1);
   BYOUTCYLNO->SetMaximum(95670.88);
   BYOUTCYLNO->SetEntries(20183);
   BYOUTCYLNO->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   BYOUTCYLNO->SetFillColor(ci);
   BYOUTCYLNO->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   BYOUTCYLNO->SetLineColor(ci);
   BYOUTCYLNO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BYOUTCYLNO->GetXaxis()->SetLabelFont(42);
   BYOUTCYLNO->GetXaxis()->SetLabelSize(0.035);
   BYOUTCYLNO->GetXaxis()->SetTitleSize(0.035);
   BYOUTCYLNO->GetXaxis()->SetTitleFont(42);
   BYOUTCYLNO->GetYaxis()->SetTitle("Entries");
   BYOUTCYLNO->GetYaxis()->SetLabelFont(42);
   BYOUTCYLNO->GetYaxis()->SetLabelSize(0.035);
   BYOUTCYLNO->GetYaxis()->SetTitleSize(0.035);
   BYOUTCYLNO->GetYaxis()->SetTitleFont(42);
   BYOUTCYLNO->GetZaxis()->SetLabelFont(42);
   BYOUTCYLNO->GetZaxis()->SetLabelSize(0.035);
   BYOUTCYLNO->GetZaxis()->SetTitleSize(0.035);
   BYOUTCYLNO->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(BYOUTCYLNO,"");
   
   TH1F *ZSHLMFWSZC = new TH1F("ZSHLMFWSZC","NumberOfIsolatedLeptons",5,0,5);
   ZSHLMFWSZC->SetBinContent(1,1705.275);
   ZSHLMFWSZC->SetMinimum(0.1);
   ZSHLMFWSZC->SetMaximum(3410.55);
   ZSHLMFWSZC->SetEntries(126);
   ZSHLMFWSZC->SetStats(0);
   ZSHLMFWSZC->SetFillColor(4);
   ZSHLMFWSZC->SetFillStyle(3001);
   ZSHLMFWSZC->SetLineColor(4);
   ZSHLMFWSZC->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZSHLMFWSZC->GetXaxis()->SetLabelFont(42);
   ZSHLMFWSZC->GetXaxis()->SetLabelSize(0.035);
   ZSHLMFWSZC->GetXaxis()->SetTitleSize(0.035);
   ZSHLMFWSZC->GetXaxis()->SetTitleFont(42);
   ZSHLMFWSZC->GetYaxis()->SetTitle("Entries");
   ZSHLMFWSZC->GetYaxis()->SetLabelFont(42);
   ZSHLMFWSZC->GetYaxis()->SetLabelSize(0.035);
   ZSHLMFWSZC->GetYaxis()->SetTitleSize(0.035);
   ZSHLMFWSZC->GetYaxis()->SetTitleFont(42);
   ZSHLMFWSZC->GetZaxis()->SetLabelFont(42);
   ZSHLMFWSZC->GetZaxis()->SetLabelSize(0.035);
   ZSHLMFWSZC->GetZaxis()->SetTitleSize(0.035);
   ZSHLMFWSZC->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(ZSHLMFWSZC,"");
   
   TH1F *ZCMDMKDHVC = new TH1F("ZCMDMKDHVC","NumberOfIsolatedLeptons",5,0,5);
   ZCMDMKDHVC->SetBinContent(1,5100.519);
   ZCMDMKDHVC->SetMinimum(0.1);
   ZCMDMKDHVC->SetMaximum(10201.04);
   ZCMDMKDHVC->SetEntries(70);
   ZCMDMKDHVC->SetStats(0);

   ci = TColor::GetColor("#007db5");
   ZCMDMKDHVC->SetFillColor(ci);
   ZCMDMKDHVC->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   ZCMDMKDHVC->SetLineColor(ci);
   ZCMDMKDHVC->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZCMDMKDHVC->GetXaxis()->SetLabelFont(42);
   ZCMDMKDHVC->GetXaxis()->SetLabelSize(0.035);
   ZCMDMKDHVC->GetXaxis()->SetTitleSize(0.035);
   ZCMDMKDHVC->GetXaxis()->SetTitleFont(42);
   ZCMDMKDHVC->GetYaxis()->SetTitle("Entries");
   ZCMDMKDHVC->GetYaxis()->SetLabelFont(42);
   ZCMDMKDHVC->GetYaxis()->SetLabelSize(0.035);
   ZCMDMKDHVC->GetYaxis()->SetTitleSize(0.035);
   ZCMDMKDHVC->GetYaxis()->SetTitleFont(42);
   ZCMDMKDHVC->GetZaxis()->SetLabelFont(42);
   ZCMDMKDHVC->GetZaxis()->SetLabelSize(0.035);
   ZCMDMKDHVC->GetZaxis()->SetTitleSize(0.035);
   ZCMDMKDHVC->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(ZCMDMKDHVC,"");
   
   TH1F *KLPDTNNNTW = new TH1F("KLPDTNNNTW","NumberOfIsolatedLeptons",5,0,5);
   KLPDTNNNTW->SetBinContent(1,2984.078);
   KLPDTNNNTW->SetMinimum(0.1);
   KLPDTNNNTW->SetMaximum(5968.157);
   KLPDTNNNTW->SetEntries(42);
   KLPDTNNNTW->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   KLPDTNNNTW->SetFillColor(ci);
   KLPDTNNNTW->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   KLPDTNNNTW->SetLineColor(ci);
   KLPDTNNNTW->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KLPDTNNNTW->GetXaxis()->SetLabelFont(42);
   KLPDTNNNTW->GetXaxis()->SetLabelSize(0.035);
   KLPDTNNNTW->GetXaxis()->SetTitleSize(0.035);
   KLPDTNNNTW->GetXaxis()->SetTitleFont(42);
   KLPDTNNNTW->GetYaxis()->SetTitle("Entries");
   KLPDTNNNTW->GetYaxis()->SetLabelFont(42);
   KLPDTNNNTW->GetYaxis()->SetLabelSize(0.035);
   KLPDTNNNTW->GetYaxis()->SetTitleSize(0.035);
   KLPDTNNNTW->GetYaxis()->SetTitleFont(42);
   KLPDTNNNTW->GetZaxis()->SetLabelFont(42);
   KLPDTNNNTW->GetZaxis()->SetLabelSize(0.035);
   KLPDTNNNTW->GetZaxis()->SetTitleSize(0.035);
   KLPDTNNNTW->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(KLPDTNNNTW,"");
   
   TH1F *JUDHPSLIGW = new TH1F("JUDHPSLIGW","NumberOfIsolatedLeptons",5,0,5);
   JUDHPSLIGW->SetBinContent(1,1609.61);
   JUDHPSLIGW->SetMinimum(0.1);
   JUDHPSLIGW->SetMaximum(3219.219);
   JUDHPSLIGW->SetEntries(4);
   JUDHPSLIGW->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   JUDHPSLIGW->SetFillColor(ci);
   JUDHPSLIGW->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   JUDHPSLIGW->SetLineColor(ci);
   JUDHPSLIGW->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JUDHPSLIGW->GetXaxis()->SetLabelFont(42);
   JUDHPSLIGW->GetXaxis()->SetLabelSize(0.035);
   JUDHPSLIGW->GetXaxis()->SetTitleSize(0.035);
   JUDHPSLIGW->GetXaxis()->SetTitleFont(42);
   JUDHPSLIGW->GetYaxis()->SetTitle("Entries");
   JUDHPSLIGW->GetYaxis()->SetLabelFont(42);
   JUDHPSLIGW->GetYaxis()->SetLabelSize(0.035);
   JUDHPSLIGW->GetYaxis()->SetTitleSize(0.035);
   JUDHPSLIGW->GetYaxis()->SetTitleFont(42);
   JUDHPSLIGW->GetZaxis()->SetLabelFont(42);
   JUDHPSLIGW->GetZaxis()->SetLabelSize(0.035);
   JUDHPSLIGW->GetZaxis()->SetTitleSize(0.035);
   JUDHPSLIGW->GetZaxis()->SetTitleFont(42);
   VGMDCNXZTG->Add(JUDHPSLIGW,"");
   VGMDCNXZTG->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("QSNGDVYCYN","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RAMWXIWHQB","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("ZOBJSYOEFV","ee_llqqqq","f");

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
   entry=leg->AddEntry("VJTVPWAWNX","ee_qqqq","f");

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
   entry=leg->AddEntry("VCOHDTHJFS","ee_nunuqq","f");

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
   entry=leg->AddEntry("IWVBOYAIGE","ee_lnuqq","f");

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
   entry=leg->AddEntry("HCYIGCQHFY","ee_qqll","f");

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
   entry=leg->AddEntry("QVUEMTCPGE","ee_qq","f");

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
   entry=leg->AddEntry("CTBXFGCGLQ","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("KWAHITNDKJ","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("YYLLVJVGHL","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("ERCJUABBER","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("XEGAUDFXBT","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("SCKUCJQWWE","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("UEEVXQDUMI","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("BYOUTCYLNO","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("ZSHLMFWSZC","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZCMDMKDHVC","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("KLPDTNNNTW","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("JUDHPSLIGW","gammagamma_qqqq_BS_BS","f");

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
   GTDHKYWUTH->Modified();
   GTDHKYWUTH->cd();
   GTDHKYWUTH->SetSelected(GTDHKYWUTH);
}
