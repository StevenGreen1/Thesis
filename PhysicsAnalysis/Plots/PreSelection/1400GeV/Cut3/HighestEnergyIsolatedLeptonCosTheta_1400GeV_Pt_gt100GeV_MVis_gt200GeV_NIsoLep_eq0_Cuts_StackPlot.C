{
//=========Macro generated from canvas: AGPQMRQPVN/HighestEnergyIsolatedLeptonCosTheta
//=========  (Thu Jan  5 10:54:47 2017) by ROOT version5.34/30
   TCanvas *AGPQMRQPVN = new TCanvas("AGPQMRQPVN", "HighestEnergyIsolatedLeptonCosTheta",0,0,700,500);
   gStyle->SetOptStat(0);
   AGPQMRQPVN->SetHighLightColor(2);
   AGPQMRQPVN->Range(0,0,1,1);
   AGPQMRQPVN->SetFillColor(0);
   AGPQMRQPVN->SetBorderMode(0);
   AGPQMRQPVN->SetBorderSize(2);
   AGPQMRQPVN->SetLogy();
   AGPQMRQPVN->SetFrameBorderMode(0);
   AGPQMRQPVN->SetFrameBorderMode(0);
   
   THStack *TVEJEDBMEU = new THStack();
   TVEJEDBMEU->SetName("TVEJEDBMEU");
   TVEJEDBMEU->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   TVEJEDBMEU->SetMinimum(0.1);
   
   TH1F *TVEJEDBMEU_stack_131 = new TH1F("TVEJEDBMEU_stack_131","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   TVEJEDBMEU_stack_131->SetMinimum(-0);
   TVEJEDBMEU_stack_131->SetMaximum(-nan);
   TVEJEDBMEU_stack_131->SetDirectory(0);
   TVEJEDBMEU_stack_131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   TVEJEDBMEU_stack_131->SetLineColor(ci);
   TVEJEDBMEU_stack_131->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   TVEJEDBMEU_stack_131->GetXaxis()->SetLabelFont(42);
   TVEJEDBMEU_stack_131->GetXaxis()->SetLabelSize(0.035);
   TVEJEDBMEU_stack_131->GetXaxis()->SetTitleSize(0.035);
   TVEJEDBMEU_stack_131->GetXaxis()->SetTitleFont(42);
   TVEJEDBMEU_stack_131->GetYaxis()->SetTitle("Entries");
   TVEJEDBMEU_stack_131->GetYaxis()->SetLabelFont(42);
   TVEJEDBMEU_stack_131->GetYaxis()->SetLabelSize(0.035);
   TVEJEDBMEU_stack_131->GetYaxis()->SetTitleSize(0.035);
   TVEJEDBMEU_stack_131->GetYaxis()->SetTitleFont(42);
   TVEJEDBMEU_stack_131->GetZaxis()->SetLabelFont(42);
   TVEJEDBMEU_stack_131->GetZaxis()->SetLabelSize(0.035);
   TVEJEDBMEU_stack_131->GetZaxis()->SetTitleSize(0.035);
   TVEJEDBMEU_stack_131->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->SetHistogram(TVEJEDBMEU_stack_131);
   
   
   TH1F *RIVRJHHXNU = new TH1F("RIVRJHHXNU","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   RIVRJHHXNU->SetBinContent(101,20934.6);
   RIVRJHHXNU->SetMinimum(0.1);
   RIVRJHHXNU->SetMaximum(0);
   RIVRJHHXNU->SetEntries(764596);
   RIVRJHHXNU->SetStats(0);
   RIVRJHHXNU->SetFillColor(1);
   RIVRJHHXNU->SetFillStyle(3001);
   RIVRJHHXNU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   RIVRJHHXNU->GetXaxis()->SetLabelFont(42);
   RIVRJHHXNU->GetXaxis()->SetLabelSize(0.035);
   RIVRJHHXNU->GetXaxis()->SetTitleSize(0.035);
   RIVRJHHXNU->GetXaxis()->SetTitleFont(42);
   RIVRJHHXNU->GetYaxis()->SetTitle("Entries");
   RIVRJHHXNU->GetYaxis()->SetLabelFont(42);
   RIVRJHHXNU->GetYaxis()->SetLabelSize(0.035);
   RIVRJHHXNU->GetYaxis()->SetTitleSize(0.035);
   RIVRJHHXNU->GetYaxis()->SetTitleFont(42);
   RIVRJHHXNU->GetZaxis()->SetLabelFont(42);
   RIVRJHHXNU->GetZaxis()->SetLabelSize(0.035);
   RIVRJHHXNU->GetZaxis()->SetTitleSize(0.035);
   RIVRJHHXNU->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(RIVRJHHXNU,"");
   
   TH1F *UFLCDNFRYO = new TH1F("UFLCDNFRYO","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   UFLCDNFRYO->SetBinContent(101,42473.12);
   UFLCDNFRYO->SetMinimum(0.1);
   UFLCDNFRYO->SetMaximum(0);
   UFLCDNFRYO->SetEntries(95117);
   UFLCDNFRYO->SetStats(0);

   ci = TColor::GetColor("#000066");
   UFLCDNFRYO->SetFillColor(ci);
   UFLCDNFRYO->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   UFLCDNFRYO->SetLineColor(ci);
   UFLCDNFRYO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   UFLCDNFRYO->GetXaxis()->SetLabelFont(42);
   UFLCDNFRYO->GetXaxis()->SetLabelSize(0.035);
   UFLCDNFRYO->GetXaxis()->SetTitleSize(0.035);
   UFLCDNFRYO->GetXaxis()->SetTitleFont(42);
   UFLCDNFRYO->GetYaxis()->SetTitle("Entries");
   UFLCDNFRYO->GetYaxis()->SetLabelFont(42);
   UFLCDNFRYO->GetYaxis()->SetLabelSize(0.035);
   UFLCDNFRYO->GetYaxis()->SetTitleSize(0.035);
   UFLCDNFRYO->GetYaxis()->SetTitleFont(42);
   UFLCDNFRYO->GetZaxis()->SetLabelFont(42);
   UFLCDNFRYO->GetZaxis()->SetLabelSize(0.035);
   UFLCDNFRYO->GetZaxis()->SetTitleSize(0.035);
   UFLCDNFRYO->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(UFLCDNFRYO,"");
   
   TH1F *MIDVCRFENL = new TH1F("MIDVCRFENL","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   MIDVCRFENL->SetBinContent(101,689.4698);
   MIDVCRFENL->SetMinimum(0.1);
   MIDVCRFENL->SetMaximum(0);
   MIDVCRFENL->SetEntries(4695);
   MIDVCRFENL->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   MIDVCRFENL->SetFillColor(ci);
   MIDVCRFENL->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   MIDVCRFENL->SetLineColor(ci);
   MIDVCRFENL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   MIDVCRFENL->GetXaxis()->SetLabelFont(42);
   MIDVCRFENL->GetXaxis()->SetLabelSize(0.035);
   MIDVCRFENL->GetXaxis()->SetTitleSize(0.035);
   MIDVCRFENL->GetXaxis()->SetTitleFont(42);
   MIDVCRFENL->GetYaxis()->SetTitle("Entries");
   MIDVCRFENL->GetYaxis()->SetLabelFont(42);
   MIDVCRFENL->GetYaxis()->SetLabelSize(0.035);
   MIDVCRFENL->GetYaxis()->SetTitleSize(0.035);
   MIDVCRFENL->GetYaxis()->SetTitleFont(42);
   MIDVCRFENL->GetZaxis()->SetLabelFont(42);
   MIDVCRFENL->GetZaxis()->SetLabelSize(0.035);
   MIDVCRFENL->GetZaxis()->SetTitleSize(0.035);
   MIDVCRFENL->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(MIDVCRFENL,"");
   
   TH1F *NMHERUARGW = new TH1F("NMHERUARGW","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   NMHERUARGW->SetBinContent(101,6160.975);
   NMHERUARGW->SetMinimum(0.1);
   NMHERUARGW->SetMaximum(0);
   NMHERUARGW->SetEntries(965);
   NMHERUARGW->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   NMHERUARGW->SetFillColor(ci);
   NMHERUARGW->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   NMHERUARGW->SetLineColor(ci);
   NMHERUARGW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   NMHERUARGW->GetXaxis()->SetLabelFont(42);
   NMHERUARGW->GetXaxis()->SetLabelSize(0.035);
   NMHERUARGW->GetXaxis()->SetTitleSize(0.035);
   NMHERUARGW->GetXaxis()->SetTitleFont(42);
   NMHERUARGW->GetYaxis()->SetTitle("Entries");
   NMHERUARGW->GetYaxis()->SetLabelFont(42);
   NMHERUARGW->GetYaxis()->SetLabelSize(0.035);
   NMHERUARGW->GetYaxis()->SetTitleSize(0.035);
   NMHERUARGW->GetYaxis()->SetTitleFont(42);
   NMHERUARGW->GetZaxis()->SetLabelFont(42);
   NMHERUARGW->GetZaxis()->SetLabelSize(0.035);
   NMHERUARGW->GetZaxis()->SetTitleSize(0.035);
   NMHERUARGW->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(NMHERUARGW,"");
   
   TH1F *FYBYZGVTPE = new TH1F("FYBYZGVTPE","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   FYBYZGVTPE->SetBinContent(101,50704.28);
   FYBYZGVTPE->SetMinimum(0.1);
   FYBYZGVTPE->SetMaximum(0);
   FYBYZGVTPE->SetEntries(12529);
   FYBYZGVTPE->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   FYBYZGVTPE->SetFillColor(ci);
   FYBYZGVTPE->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   FYBYZGVTPE->SetLineColor(ci);
   FYBYZGVTPE->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   FYBYZGVTPE->GetXaxis()->SetLabelFont(42);
   FYBYZGVTPE->GetXaxis()->SetLabelSize(0.035);
   FYBYZGVTPE->GetXaxis()->SetTitleSize(0.035);
   FYBYZGVTPE->GetXaxis()->SetTitleFont(42);
   FYBYZGVTPE->GetYaxis()->SetTitle("Entries");
   FYBYZGVTPE->GetYaxis()->SetLabelFont(42);
   FYBYZGVTPE->GetYaxis()->SetLabelSize(0.035);
   FYBYZGVTPE->GetYaxis()->SetTitleSize(0.035);
   FYBYZGVTPE->GetYaxis()->SetTitleFont(42);
   FYBYZGVTPE->GetZaxis()->SetLabelFont(42);
   FYBYZGVTPE->GetZaxis()->SetLabelSize(0.035);
   FYBYZGVTPE->GetZaxis()->SetTitleSize(0.035);
   FYBYZGVTPE->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(FYBYZGVTPE,"");
   
   TH1F *YMJXGOJEXL = new TH1F("YMJXGOJEXL","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   YMJXGOJEXL->SetBinContent(101,567250.8);
   YMJXGOJEXL->SetMinimum(0.1);
   YMJXGOJEXL->SetMaximum(0);
   YMJXGOJEXL->SetEntries(91764);
   YMJXGOJEXL->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   YMJXGOJEXL->SetFillColor(ci);
   YMJXGOJEXL->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   YMJXGOJEXL->SetLineColor(ci);
   YMJXGOJEXL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   YMJXGOJEXL->GetXaxis()->SetLabelFont(42);
   YMJXGOJEXL->GetXaxis()->SetLabelSize(0.035);
   YMJXGOJEXL->GetXaxis()->SetTitleSize(0.035);
   YMJXGOJEXL->GetXaxis()->SetTitleFont(42);
   YMJXGOJEXL->GetYaxis()->SetTitle("Entries");
   YMJXGOJEXL->GetYaxis()->SetLabelFont(42);
   YMJXGOJEXL->GetYaxis()->SetLabelSize(0.035);
   YMJXGOJEXL->GetYaxis()->SetTitleSize(0.035);
   YMJXGOJEXL->GetYaxis()->SetTitleFont(42);
   YMJXGOJEXL->GetZaxis()->SetLabelFont(42);
   YMJXGOJEXL->GetZaxis()->SetLabelSize(0.035);
   YMJXGOJEXL->GetZaxis()->SetTitleSize(0.035);
   YMJXGOJEXL->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(YMJXGOJEXL,"");
   
   TH1F *MRVPOWCODY = new TH1F("MRVPOWCODY","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   MRVPOWCODY->SetBinContent(101,5636.094);
   MRVPOWCODY->SetMinimum(0.1);
   MRVPOWCODY->SetMaximum(0);
   MRVPOWCODY->SetEntries(1447);
   MRVPOWCODY->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   MRVPOWCODY->SetFillColor(ci);
   MRVPOWCODY->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   MRVPOWCODY->SetLineColor(ci);
   MRVPOWCODY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   MRVPOWCODY->GetXaxis()->SetLabelFont(42);
   MRVPOWCODY->GetXaxis()->SetLabelSize(0.035);
   MRVPOWCODY->GetXaxis()->SetTitleSize(0.035);
   MRVPOWCODY->GetXaxis()->SetTitleFont(42);
   MRVPOWCODY->GetYaxis()->SetTitle("Entries");
   MRVPOWCODY->GetYaxis()->SetLabelFont(42);
   MRVPOWCODY->GetYaxis()->SetLabelSize(0.035);
   MRVPOWCODY->GetYaxis()->SetTitleSize(0.035);
   MRVPOWCODY->GetYaxis()->SetTitleFont(42);
   MRVPOWCODY->GetZaxis()->SetLabelFont(42);
   MRVPOWCODY->GetZaxis()->SetLabelSize(0.035);
   MRVPOWCODY->GetZaxis()->SetTitleSize(0.035);
   MRVPOWCODY->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(MRVPOWCODY,"");
   
   TH1F *ORYGTPLHSF = new TH1F("ORYGTPLHSF","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   ORYGTPLHSF->SetBinContent(101,34536.24);
   ORYGTPLHSF->SetMinimum(0.1);
   ORYGTPLHSF->SetMaximum(0);
   ORYGTPLHSF->SetEntries(1394);
   ORYGTPLHSF->SetStats(0);

   ci = TColor::GetColor("#006633");
   ORYGTPLHSF->SetFillColor(ci);
   ORYGTPLHSF->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   ORYGTPLHSF->SetLineColor(ci);
   ORYGTPLHSF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   ORYGTPLHSF->GetXaxis()->SetLabelFont(42);
   ORYGTPLHSF->GetXaxis()->SetLabelSize(0.035);
   ORYGTPLHSF->GetXaxis()->SetTitleSize(0.035);
   ORYGTPLHSF->GetXaxis()->SetTitleFont(42);
   ORYGTPLHSF->GetYaxis()->SetTitle("Entries");
   ORYGTPLHSF->GetYaxis()->SetLabelFont(42);
   ORYGTPLHSF->GetYaxis()->SetLabelSize(0.035);
   ORYGTPLHSF->GetYaxis()->SetTitleSize(0.035);
   ORYGTPLHSF->GetYaxis()->SetTitleFont(42);
   ORYGTPLHSF->GetZaxis()->SetLabelFont(42);
   ORYGTPLHSF->GetZaxis()->SetLabelSize(0.035);
   ORYGTPLHSF->GetZaxis()->SetTitleSize(0.035);
   ORYGTPLHSF->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(ORYGTPLHSF,"");
   
   TH1F *POGZOETYZP = new TH1F("POGZOETYZP","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   POGZOETYZP->SetBinContent(101,968.1812);
   POGZOETYZP->SetMinimum(0.1);
   POGZOETYZP->SetMaximum(0);
   POGZOETYZP->SetEntries(142);
   POGZOETYZP->SetStats(0);
   POGZOETYZP->SetFillColor(3);
   POGZOETYZP->SetFillStyle(3001);
   POGZOETYZP->SetLineColor(3);
   POGZOETYZP->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   POGZOETYZP->GetXaxis()->SetLabelFont(42);
   POGZOETYZP->GetXaxis()->SetLabelSize(0.035);
   POGZOETYZP->GetXaxis()->SetTitleSize(0.035);
   POGZOETYZP->GetXaxis()->SetTitleFont(42);
   POGZOETYZP->GetYaxis()->SetTitle("Entries");
   POGZOETYZP->GetYaxis()->SetLabelFont(42);
   POGZOETYZP->GetYaxis()->SetLabelSize(0.035);
   POGZOETYZP->GetYaxis()->SetTitleSize(0.035);
   POGZOETYZP->GetYaxis()->SetTitleFont(42);
   POGZOETYZP->GetZaxis()->SetLabelFont(42);
   POGZOETYZP->GetZaxis()->SetLabelSize(0.035);
   POGZOETYZP->GetZaxis()->SetTitleSize(0.035);
   POGZOETYZP->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(POGZOETYZP,"");
   
   TH1F *BXOIXZFMTB = new TH1F("BXOIXZFMTB","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   BXOIXZFMTB->SetBinContent(101,1378.771);
   BXOIXZFMTB->SetMinimum(0.1);
   BXOIXZFMTB->SetMaximum(0);
   BXOIXZFMTB->SetEntries(49);
   BXOIXZFMTB->SetStats(0);

   ci = TColor::GetColor("#990033");
   BXOIXZFMTB->SetFillColor(ci);
   BXOIXZFMTB->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   BXOIXZFMTB->SetLineColor(ci);
   BXOIXZFMTB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   BXOIXZFMTB->GetXaxis()->SetLabelFont(42);
   BXOIXZFMTB->GetXaxis()->SetLabelSize(0.035);
   BXOIXZFMTB->GetXaxis()->SetTitleSize(0.035);
   BXOIXZFMTB->GetXaxis()->SetTitleFont(42);
   BXOIXZFMTB->GetYaxis()->SetTitle("Entries");
   BXOIXZFMTB->GetYaxis()->SetLabelFont(42);
   BXOIXZFMTB->GetYaxis()->SetLabelSize(0.035);
   BXOIXZFMTB->GetYaxis()->SetTitleSize(0.035);
   BXOIXZFMTB->GetYaxis()->SetTitleFont(42);
   BXOIXZFMTB->GetZaxis()->SetLabelFont(42);
   BXOIXZFMTB->GetZaxis()->SetLabelSize(0.035);
   BXOIXZFMTB->GetZaxis()->SetTitleSize(0.035);
   BXOIXZFMTB->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(BXOIXZFMTB,"");
   
   TH1F *EPMFGKPMNO = new TH1F("EPMFGKPMNO","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   EPMFGKPMNO->SetBinContent(101,1184.389);
   EPMFGKPMNO->SetMinimum(0.1);
   EPMFGKPMNO->SetMaximum(0);
   EPMFGKPMNO->SetEntries(188);
   EPMFGKPMNO->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   EPMFGKPMNO->SetFillColor(ci);
   EPMFGKPMNO->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   EPMFGKPMNO->SetLineColor(ci);
   EPMFGKPMNO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   EPMFGKPMNO->GetXaxis()->SetLabelFont(42);
   EPMFGKPMNO->GetXaxis()->SetLabelSize(0.035);
   EPMFGKPMNO->GetXaxis()->SetTitleSize(0.035);
   EPMFGKPMNO->GetXaxis()->SetTitleFont(42);
   EPMFGKPMNO->GetYaxis()->SetTitle("Entries");
   EPMFGKPMNO->GetYaxis()->SetLabelFont(42);
   EPMFGKPMNO->GetYaxis()->SetLabelSize(0.035);
   EPMFGKPMNO->GetYaxis()->SetTitleSize(0.035);
   EPMFGKPMNO->GetYaxis()->SetTitleFont(42);
   EPMFGKPMNO->GetZaxis()->SetLabelFont(42);
   EPMFGKPMNO->GetZaxis()->SetLabelSize(0.035);
   EPMFGKPMNO->GetZaxis()->SetTitleSize(0.035);
   EPMFGKPMNO->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(EPMFGKPMNO,"");
   
   TH1F *XMPIKOCPFP = new TH1F("XMPIKOCPFP","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   XMPIKOCPFP->SetBinContent(101,697.3013);
   XMPIKOCPFP->SetMinimum(0.1);
   XMPIKOCPFP->SetMaximum(0);
   XMPIKOCPFP->SetEntries(24);
   XMPIKOCPFP->SetStats(0);

   ci = TColor::GetColor("#a42400");
   XMPIKOCPFP->SetFillColor(ci);
   XMPIKOCPFP->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   XMPIKOCPFP->SetLineColor(ci);
   XMPIKOCPFP->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   XMPIKOCPFP->GetXaxis()->SetLabelFont(42);
   XMPIKOCPFP->GetXaxis()->SetLabelSize(0.035);
   XMPIKOCPFP->GetXaxis()->SetTitleSize(0.035);
   XMPIKOCPFP->GetXaxis()->SetTitleFont(42);
   XMPIKOCPFP->GetYaxis()->SetTitle("Entries");
   XMPIKOCPFP->GetYaxis()->SetLabelFont(42);
   XMPIKOCPFP->GetYaxis()->SetLabelSize(0.035);
   XMPIKOCPFP->GetYaxis()->SetTitleSize(0.035);
   XMPIKOCPFP->GetYaxis()->SetTitleFont(42);
   XMPIKOCPFP->GetZaxis()->SetLabelFont(42);
   XMPIKOCPFP->GetZaxis()->SetLabelSize(0.035);
   XMPIKOCPFP->GetZaxis()->SetTitleSize(0.035);
   XMPIKOCPFP->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(XMPIKOCPFP,"");
   
   TH1F *LRLBXAHPFY = new TH1F("LRLBXAHPFY","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   LRLBXAHPFY->SetBinContent(101,8808.519);
   LRLBXAHPFY->SetMinimum(0.1);
   LRLBXAHPFY->SetMaximum(0);
   LRLBXAHPFY->SetEntries(15908);
   LRLBXAHPFY->SetStats(0);

   ci = TColor::GetColor("#001544");
   LRLBXAHPFY->SetFillColor(ci);
   LRLBXAHPFY->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   LRLBXAHPFY->SetLineColor(ci);
   LRLBXAHPFY->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   LRLBXAHPFY->GetXaxis()->SetLabelFont(42);
   LRLBXAHPFY->GetXaxis()->SetLabelSize(0.035);
   LRLBXAHPFY->GetXaxis()->SetTitleSize(0.035);
   LRLBXAHPFY->GetXaxis()->SetTitleFont(42);
   LRLBXAHPFY->GetYaxis()->SetTitle("Entries");
   LRLBXAHPFY->GetYaxis()->SetLabelFont(42);
   LRLBXAHPFY->GetYaxis()->SetLabelSize(0.035);
   LRLBXAHPFY->GetYaxis()->SetTitleSize(0.035);
   LRLBXAHPFY->GetYaxis()->SetTitleFont(42);
   LRLBXAHPFY->GetZaxis()->SetLabelFont(42);
   LRLBXAHPFY->GetZaxis()->SetLabelSize(0.035);
   LRLBXAHPFY->GetZaxis()->SetTitleSize(0.035);
   LRLBXAHPFY->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(LRLBXAHPFY,"");
   
   TH1F *AKLEDYLXEK = new TH1F("AKLEDYLXEK","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   AKLEDYLXEK->SetBinContent(101,47698.73);
   AKLEDYLXEK->SetMinimum(0.1);
   AKLEDYLXEK->SetMaximum(0);
   AKLEDYLXEK->SetEntries(20216);
   AKLEDYLXEK->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   AKLEDYLXEK->SetFillColor(ci);
   AKLEDYLXEK->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   AKLEDYLXEK->SetLineColor(ci);
   AKLEDYLXEK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   AKLEDYLXEK->GetXaxis()->SetLabelFont(42);
   AKLEDYLXEK->GetXaxis()->SetLabelSize(0.035);
   AKLEDYLXEK->GetXaxis()->SetTitleSize(0.035);
   AKLEDYLXEK->GetXaxis()->SetTitleFont(42);
   AKLEDYLXEK->GetYaxis()->SetTitle("Entries");
   AKLEDYLXEK->GetYaxis()->SetLabelFont(42);
   AKLEDYLXEK->GetYaxis()->SetLabelSize(0.035);
   AKLEDYLXEK->GetYaxis()->SetTitleSize(0.035);
   AKLEDYLXEK->GetYaxis()->SetTitleFont(42);
   AKLEDYLXEK->GetZaxis()->SetLabelFont(42);
   AKLEDYLXEK->GetZaxis()->SetLabelSize(0.035);
   AKLEDYLXEK->GetZaxis()->SetTitleSize(0.035);
   AKLEDYLXEK->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(AKLEDYLXEK,"");
   
   TH1F *BATUFQTUUO = new TH1F("BATUFQTUUO","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   BATUFQTUUO->SetBinContent(101,8904.864);
   BATUFQTUUO->SetMinimum(0.1);
   BATUFQTUUO->SetMaximum(0);
   BATUFQTUUO->SetEntries(16082);
   BATUFQTUUO->SetStats(0);

   ci = TColor::GetColor("#620e00");
   BATUFQTUUO->SetFillColor(ci);
   BATUFQTUUO->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   BATUFQTUUO->SetLineColor(ci);
   BATUFQTUUO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   BATUFQTUUO->GetXaxis()->SetLabelFont(42);
   BATUFQTUUO->GetXaxis()->SetLabelSize(0.035);
   BATUFQTUUO->GetXaxis()->SetTitleSize(0.035);
   BATUFQTUUO->GetXaxis()->SetTitleFont(42);
   BATUFQTUUO->GetYaxis()->SetTitle("Entries");
   BATUFQTUUO->GetYaxis()->SetLabelFont(42);
   BATUFQTUUO->GetYaxis()->SetLabelSize(0.035);
   BATUFQTUUO->GetYaxis()->SetTitleSize(0.035);
   BATUFQTUUO->GetYaxis()->SetTitleFont(42);
   BATUFQTUUO->GetZaxis()->SetLabelFont(42);
   BATUFQTUUO->GetZaxis()->SetLabelSize(0.035);
   BATUFQTUUO->GetZaxis()->SetTitleSize(0.035);
   BATUFQTUUO->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(BATUFQTUUO,"");
   
   TH1F *RNRZXMAKIJ = new TH1F("RNRZXMAKIJ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   RNRZXMAKIJ->SetBinContent(101,47835.44);
   RNRZXMAKIJ->SetMinimum(0.1);
   RNRZXMAKIJ->SetMaximum(0);
   RNRZXMAKIJ->SetEntries(20183);
   RNRZXMAKIJ->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   RNRZXMAKIJ->SetFillColor(ci);
   RNRZXMAKIJ->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   RNRZXMAKIJ->SetLineColor(ci);
   RNRZXMAKIJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   RNRZXMAKIJ->GetXaxis()->SetLabelFont(42);
   RNRZXMAKIJ->GetXaxis()->SetLabelSize(0.035);
   RNRZXMAKIJ->GetXaxis()->SetTitleSize(0.035);
   RNRZXMAKIJ->GetXaxis()->SetTitleFont(42);
   RNRZXMAKIJ->GetYaxis()->SetTitle("Entries");
   RNRZXMAKIJ->GetYaxis()->SetLabelFont(42);
   RNRZXMAKIJ->GetYaxis()->SetLabelSize(0.035);
   RNRZXMAKIJ->GetYaxis()->SetTitleSize(0.035);
   RNRZXMAKIJ->GetYaxis()->SetTitleFont(42);
   RNRZXMAKIJ->GetZaxis()->SetLabelFont(42);
   RNRZXMAKIJ->GetZaxis()->SetLabelSize(0.035);
   RNRZXMAKIJ->GetZaxis()->SetTitleSize(0.035);
   RNRZXMAKIJ->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(RNRZXMAKIJ,"");
   
   TH1F *MMBSTLMBSX = new TH1F("MMBSTLMBSX","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   MMBSTLMBSX->SetBinContent(101,1705.275);
   MMBSTLMBSX->SetMinimum(0.1);
   MMBSTLMBSX->SetMaximum(0);
   MMBSTLMBSX->SetEntries(126);
   MMBSTLMBSX->SetStats(0);
   MMBSTLMBSX->SetFillColor(4);
   MMBSTLMBSX->SetFillStyle(3001);
   MMBSTLMBSX->SetLineColor(4);
   MMBSTLMBSX->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   MMBSTLMBSX->GetXaxis()->SetLabelFont(42);
   MMBSTLMBSX->GetXaxis()->SetLabelSize(0.035);
   MMBSTLMBSX->GetXaxis()->SetTitleSize(0.035);
   MMBSTLMBSX->GetXaxis()->SetTitleFont(42);
   MMBSTLMBSX->GetYaxis()->SetTitle("Entries");
   MMBSTLMBSX->GetYaxis()->SetLabelFont(42);
   MMBSTLMBSX->GetYaxis()->SetLabelSize(0.035);
   MMBSTLMBSX->GetYaxis()->SetTitleSize(0.035);
   MMBSTLMBSX->GetYaxis()->SetTitleFont(42);
   MMBSTLMBSX->GetZaxis()->SetLabelFont(42);
   MMBSTLMBSX->GetZaxis()->SetLabelSize(0.035);
   MMBSTLMBSX->GetZaxis()->SetTitleSize(0.035);
   MMBSTLMBSX->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(MMBSTLMBSX,"");
   
   TH1F *DVRIZTZLRN = new TH1F("DVRIZTZLRN","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   DVRIZTZLRN->SetBinContent(101,5100.519);
   DVRIZTZLRN->SetMinimum(0.1);
   DVRIZTZLRN->SetMaximum(0);
   DVRIZTZLRN->SetEntries(70);
   DVRIZTZLRN->SetStats(0);

   ci = TColor::GetColor("#007db5");
   DVRIZTZLRN->SetFillColor(ci);
   DVRIZTZLRN->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   DVRIZTZLRN->SetLineColor(ci);
   DVRIZTZLRN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   DVRIZTZLRN->GetXaxis()->SetLabelFont(42);
   DVRIZTZLRN->GetXaxis()->SetLabelSize(0.035);
   DVRIZTZLRN->GetXaxis()->SetTitleSize(0.035);
   DVRIZTZLRN->GetXaxis()->SetTitleFont(42);
   DVRIZTZLRN->GetYaxis()->SetTitle("Entries");
   DVRIZTZLRN->GetYaxis()->SetLabelFont(42);
   DVRIZTZLRN->GetYaxis()->SetLabelSize(0.035);
   DVRIZTZLRN->GetYaxis()->SetTitleSize(0.035);
   DVRIZTZLRN->GetYaxis()->SetTitleFont(42);
   DVRIZTZLRN->GetZaxis()->SetLabelFont(42);
   DVRIZTZLRN->GetZaxis()->SetLabelSize(0.035);
   DVRIZTZLRN->GetZaxis()->SetTitleSize(0.035);
   DVRIZTZLRN->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(DVRIZTZLRN,"");
   
   TH1F *UQDXPYOZUF = new TH1F("UQDXPYOZUF","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   UQDXPYOZUF->SetBinContent(101,2984.078);
   UQDXPYOZUF->SetMinimum(0.1);
   UQDXPYOZUF->SetMaximum(0);
   UQDXPYOZUF->SetEntries(42);
   UQDXPYOZUF->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   UQDXPYOZUF->SetFillColor(ci);
   UQDXPYOZUF->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   UQDXPYOZUF->SetLineColor(ci);
   UQDXPYOZUF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   UQDXPYOZUF->GetXaxis()->SetLabelFont(42);
   UQDXPYOZUF->GetXaxis()->SetLabelSize(0.035);
   UQDXPYOZUF->GetXaxis()->SetTitleSize(0.035);
   UQDXPYOZUF->GetXaxis()->SetTitleFont(42);
   UQDXPYOZUF->GetYaxis()->SetTitle("Entries");
   UQDXPYOZUF->GetYaxis()->SetLabelFont(42);
   UQDXPYOZUF->GetYaxis()->SetLabelSize(0.035);
   UQDXPYOZUF->GetYaxis()->SetTitleSize(0.035);
   UQDXPYOZUF->GetYaxis()->SetTitleFont(42);
   UQDXPYOZUF->GetZaxis()->SetLabelFont(42);
   UQDXPYOZUF->GetZaxis()->SetLabelSize(0.035);
   UQDXPYOZUF->GetZaxis()->SetTitleSize(0.035);
   UQDXPYOZUF->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(UQDXPYOZUF,"");
   
   TH1F *ZDIUCABFUJ = new TH1F("ZDIUCABFUJ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   ZDIUCABFUJ->SetBinContent(101,1609.61);
   ZDIUCABFUJ->SetMinimum(0.1);
   ZDIUCABFUJ->SetMaximum(0);
   ZDIUCABFUJ->SetEntries(4);
   ZDIUCABFUJ->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   ZDIUCABFUJ->SetFillColor(ci);
   ZDIUCABFUJ->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   ZDIUCABFUJ->SetLineColor(ci);
   ZDIUCABFUJ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   ZDIUCABFUJ->GetXaxis()->SetLabelFont(42);
   ZDIUCABFUJ->GetXaxis()->SetLabelSize(0.035);
   ZDIUCABFUJ->GetXaxis()->SetTitleSize(0.035);
   ZDIUCABFUJ->GetXaxis()->SetTitleFont(42);
   ZDIUCABFUJ->GetYaxis()->SetTitle("Entries");
   ZDIUCABFUJ->GetYaxis()->SetLabelFont(42);
   ZDIUCABFUJ->GetYaxis()->SetLabelSize(0.035);
   ZDIUCABFUJ->GetYaxis()->SetTitleSize(0.035);
   ZDIUCABFUJ->GetYaxis()->SetTitleFont(42);
   ZDIUCABFUJ->GetZaxis()->SetLabelFont(42);
   ZDIUCABFUJ->GetZaxis()->SetLabelSize(0.035);
   ZDIUCABFUJ->GetZaxis()->SetTitleSize(0.035);
   ZDIUCABFUJ->GetZaxis()->SetTitleFont(42);
   TVEJEDBMEU->Add(ZDIUCABFUJ,"");
   TVEJEDBMEU->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("RIVRJHHXNU","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("UFLCDNFRYO","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("MIDVCRFENL","ee_llqqqq","f");

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
   entry=leg->AddEntry("NMHERUARGW","ee_qqqq","f");

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
   entry=leg->AddEntry("FYBYZGVTPE","ee_nunuqq","f");

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
   entry=leg->AddEntry("YMJXGOJEXL","ee_lnuqq","f");

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
   entry=leg->AddEntry("MRVPOWCODY","ee_qqll","f");

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
   entry=leg->AddEntry("ORYGTPLHSF","ee_qq","f");

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
   entry=leg->AddEntry("POGZOETYZP","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BXOIXZFMTB","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("EPMFGKPMNO","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("XMPIKOCPFP","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("LRLBXAHPFY","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("AKLEDYLXEK","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("BATUFQTUUO","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("RNRZXMAKIJ","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("MMBSTLMBSX","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DVRIZTZLRN","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("UQDXPYOZUF","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("ZDIUCABFUJ","gammagamma_qqqq_BS_BS","f");

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
   AGPQMRQPVN->Modified();
   AGPQMRQPVN->cd();
   AGPQMRQPVN->SetSelected(AGPQMRQPVN);
}
