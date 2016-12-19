{
//=========Macro generated from canvas: YONZDPNECW/HighestEnergyIsolatedLeptonCosTheta
//=========  (Wed Sep 28 10:50:39 2016) by ROOT version5.34/30
   TCanvas *YONZDPNECW = new TCanvas("YONZDPNECW", "HighestEnergyIsolatedLeptonCosTheta",0,0,700,500);
   gStyle->SetOptStat(0);
   YONZDPNECW->SetHighLightColor(2);
   YONZDPNECW->Range(0,0,1,1);
   YONZDPNECW->SetFillColor(0);
   YONZDPNECW->SetBorderMode(0);
   YONZDPNECW->SetBorderSize(2);
   YONZDPNECW->SetLogy();
   YONZDPNECW->SetFrameBorderMode(0);
   YONZDPNECW->SetFrameBorderMode(0);
   
   THStack *ZELVZDUYEL = new THStack();
   ZELVZDUYEL->SetName("ZELVZDUYEL");
   ZELVZDUYEL->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   ZELVZDUYEL->SetMinimum(0.1);
   
   TH1F *ZELVZDUYEL_stack_34 = new TH1F("ZELVZDUYEL_stack_34","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   ZELVZDUYEL_stack_34->SetMinimum(-0);
   ZELVZDUYEL_stack_34->SetMaximum(-nan);
   ZELVZDUYEL_stack_34->SetDirectory(0);
   ZELVZDUYEL_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   ZELVZDUYEL_stack_34->SetLineColor(ci);
   ZELVZDUYEL_stack_34->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   ZELVZDUYEL_stack_34->GetXaxis()->SetLabelFont(42);
   ZELVZDUYEL_stack_34->GetXaxis()->SetLabelSize(0.035);
   ZELVZDUYEL_stack_34->GetXaxis()->SetTitleSize(0.035);
   ZELVZDUYEL_stack_34->GetXaxis()->SetTitleFont(42);
   ZELVZDUYEL_stack_34->GetYaxis()->SetTitle("Entries");
   ZELVZDUYEL_stack_34->GetYaxis()->SetLabelFont(42);
   ZELVZDUYEL_stack_34->GetYaxis()->SetLabelSize(0.035);
   ZELVZDUYEL_stack_34->GetYaxis()->SetTitleSize(0.035);
   ZELVZDUYEL_stack_34->GetYaxis()->SetTitleFont(42);
   ZELVZDUYEL_stack_34->GetZaxis()->SetLabelFont(42);
   ZELVZDUYEL_stack_34->GetZaxis()->SetLabelSize(0.035);
   ZELVZDUYEL_stack_34->GetZaxis()->SetTitleSize(0.035);
   ZELVZDUYEL_stack_34->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->SetHistogram(ZELVZDUYEL_stack_34);
   
   
   TH1F *DZWSIMSUFR = new TH1F("DZWSIMSUFR","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   DZWSIMSUFR->SetBinContent(101,17903.56);
   DZWSIMSUFR->SetMinimum(0.1);
   DZWSIMSUFR->SetMaximum(0);
   DZWSIMSUFR->SetEntries(825376);
   DZWSIMSUFR->SetStats(0);
   DZWSIMSUFR->SetFillColor(1);
   DZWSIMSUFR->SetFillStyle(3001);
   DZWSIMSUFR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   DZWSIMSUFR->GetXaxis()->SetLabelFont(42);
   DZWSIMSUFR->GetXaxis()->SetLabelSize(0.035);
   DZWSIMSUFR->GetXaxis()->SetTitleSize(0.035);
   DZWSIMSUFR->GetXaxis()->SetTitleFont(42);
   DZWSIMSUFR->GetYaxis()->SetTitle("Entries");
   DZWSIMSUFR->GetYaxis()->SetLabelFont(42);
   DZWSIMSUFR->GetYaxis()->SetLabelSize(0.035);
   DZWSIMSUFR->GetYaxis()->SetTitleSize(0.035);
   DZWSIMSUFR->GetYaxis()->SetTitleFont(42);
   DZWSIMSUFR->GetZaxis()->SetLabelFont(42);
   DZWSIMSUFR->GetZaxis()->SetLabelSize(0.035);
   DZWSIMSUFR->GetZaxis()->SetTitleSize(0.035);
   DZWSIMSUFR->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(DZWSIMSUFR,"");
   
   TH1F *EZTENPQHEQ = new TH1F("EZTENPQHEQ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   EZTENPQHEQ->SetBinContent(101,43763.42);
   EZTENPQHEQ->SetMinimum(0.1);
   EZTENPQHEQ->SetMaximum(0);
   EZTENPQHEQ->SetEntries(94165);
   EZTENPQHEQ->SetStats(0);

   ci = TColor::GetColor("#000066");
   EZTENPQHEQ->SetFillColor(ci);
   EZTENPQHEQ->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   EZTENPQHEQ->SetLineColor(ci);
   EZTENPQHEQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   EZTENPQHEQ->GetXaxis()->SetLabelFont(42);
   EZTENPQHEQ->GetXaxis()->SetLabelSize(0.035);
   EZTENPQHEQ->GetXaxis()->SetTitleSize(0.035);
   EZTENPQHEQ->GetXaxis()->SetTitleFont(42);
   EZTENPQHEQ->GetYaxis()->SetTitle("Entries");
   EZTENPQHEQ->GetYaxis()->SetLabelFont(42);
   EZTENPQHEQ->GetYaxis()->SetLabelSize(0.035);
   EZTENPQHEQ->GetYaxis()->SetTitleSize(0.035);
   EZTENPQHEQ->GetYaxis()->SetTitleFont(42);
   EZTENPQHEQ->GetZaxis()->SetLabelFont(42);
   EZTENPQHEQ->GetZaxis()->SetLabelSize(0.035);
   EZTENPQHEQ->GetZaxis()->SetTitleSize(0.035);
   EZTENPQHEQ->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(EZTENPQHEQ,"");
   
   TH1F *RFWZIVGPRG = new TH1F("RFWZIVGPRG","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   RFWZIVGPRG->SetBinContent(101,866.5126);
   RFWZIVGPRG->SetMinimum(0.1);
   RFWZIVGPRG->SetMaximum(0);
   RFWZIVGPRG->SetEntries(5111);
   RFWZIVGPRG->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   RFWZIVGPRG->SetFillColor(ci);
   RFWZIVGPRG->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   RFWZIVGPRG->SetLineColor(ci);
   RFWZIVGPRG->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   RFWZIVGPRG->GetXaxis()->SetLabelFont(42);
   RFWZIVGPRG->GetXaxis()->SetLabelSize(0.035);
   RFWZIVGPRG->GetXaxis()->SetTitleSize(0.035);
   RFWZIVGPRG->GetXaxis()->SetTitleFont(42);
   RFWZIVGPRG->GetYaxis()->SetTitle("Entries");
   RFWZIVGPRG->GetYaxis()->SetLabelFont(42);
   RFWZIVGPRG->GetYaxis()->SetLabelSize(0.035);
   RFWZIVGPRG->GetYaxis()->SetTitleSize(0.035);
   RFWZIVGPRG->GetYaxis()->SetTitleFont(42);
   RFWZIVGPRG->GetZaxis()->SetLabelFont(42);
   RFWZIVGPRG->GetZaxis()->SetLabelSize(0.035);
   RFWZIVGPRG->GetZaxis()->SetTitleSize(0.035);
   RFWZIVGPRG->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(RFWZIVGPRG,"");
   
   TH1F *YWSETCCKFC = new TH1F("YWSETCCKFC","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   YWSETCCKFC->SetBinContent(101,7384.521);
   YWSETCCKFC->SetMinimum(0.1);
   YWSETCCKFC->SetMaximum(0);
   YWSETCCKFC->SetEntries(1091);
   YWSETCCKFC->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   YWSETCCKFC->SetFillColor(ci);
   YWSETCCKFC->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   YWSETCCKFC->SetLineColor(ci);
   YWSETCCKFC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   YWSETCCKFC->GetXaxis()->SetLabelFont(42);
   YWSETCCKFC->GetXaxis()->SetLabelSize(0.035);
   YWSETCCKFC->GetXaxis()->SetTitleSize(0.035);
   YWSETCCKFC->GetXaxis()->SetTitleFont(42);
   YWSETCCKFC->GetYaxis()->SetTitle("Entries");
   YWSETCCKFC->GetYaxis()->SetLabelFont(42);
   YWSETCCKFC->GetYaxis()->SetLabelSize(0.035);
   YWSETCCKFC->GetYaxis()->SetTitleSize(0.035);
   YWSETCCKFC->GetYaxis()->SetTitleFont(42);
   YWSETCCKFC->GetZaxis()->SetLabelFont(42);
   YWSETCCKFC->GetZaxis()->SetLabelSize(0.035);
   YWSETCCKFC->GetZaxis()->SetTitleSize(0.035);
   YWSETCCKFC->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(YWSETCCKFC,"");
   
   TH1F *SMZJRKESYK = new TH1F("SMZJRKESYK","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   SMZJRKESYK->SetBinContent(101,43706.31);
   SMZJRKESYK->SetMinimum(0.1);
   SMZJRKESYK->SetMaximum(0);
   SMZJRKESYK->SetEntries(9146);
   SMZJRKESYK->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   SMZJRKESYK->SetFillColor(ci);
   SMZJRKESYK->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   SMZJRKESYK->SetLineColor(ci);
   SMZJRKESYK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   SMZJRKESYK->GetXaxis()->SetLabelFont(42);
   SMZJRKESYK->GetXaxis()->SetLabelSize(0.035);
   SMZJRKESYK->GetXaxis()->SetTitleSize(0.035);
   SMZJRKESYK->GetXaxis()->SetTitleFont(42);
   SMZJRKESYK->GetYaxis()->SetTitle("Entries");
   SMZJRKESYK->GetYaxis()->SetLabelFont(42);
   SMZJRKESYK->GetYaxis()->SetLabelSize(0.035);
   SMZJRKESYK->GetYaxis()->SetTitleSize(0.035);
   SMZJRKESYK->GetYaxis()->SetTitleFont(42);
   SMZJRKESYK->GetZaxis()->SetLabelFont(42);
   SMZJRKESYK->GetZaxis()->SetLabelSize(0.035);
   SMZJRKESYK->GetZaxis()->SetTitleSize(0.035);
   SMZJRKESYK->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(SMZJRKESYK,"");
   
   TH1F *JEXIMUJBNW = new TH1F("JEXIMUJBNW","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   JEXIMUJBNW->SetBinContent(101,537750.2);
   JEXIMUJBNW->SetMinimum(0.1);
   JEXIMUJBNW->SetMaximum(0);
   JEXIMUJBNW->SetEntries(87253);
   JEXIMUJBNW->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   JEXIMUJBNW->SetFillColor(ci);
   JEXIMUJBNW->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   JEXIMUJBNW->SetLineColor(ci);
   JEXIMUJBNW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   JEXIMUJBNW->GetXaxis()->SetLabelFont(42);
   JEXIMUJBNW->GetXaxis()->SetLabelSize(0.035);
   JEXIMUJBNW->GetXaxis()->SetTitleSize(0.035);
   JEXIMUJBNW->GetXaxis()->SetTitleFont(42);
   JEXIMUJBNW->GetYaxis()->SetTitle("Entries");
   JEXIMUJBNW->GetYaxis()->SetLabelFont(42);
   JEXIMUJBNW->GetYaxis()->SetLabelSize(0.035);
   JEXIMUJBNW->GetYaxis()->SetTitleSize(0.035);
   JEXIMUJBNW->GetYaxis()->SetTitleFont(42);
   JEXIMUJBNW->GetZaxis()->SetLabelFont(42);
   JEXIMUJBNW->GetZaxis()->SetLabelSize(0.035);
   JEXIMUJBNW->GetZaxis()->SetTitleSize(0.035);
   JEXIMUJBNW->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(JEXIMUJBNW,"");
   
   TH1F *OVIQLVUHAZ = new TH1F("OVIQLVUHAZ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   OVIQLVUHAZ->SetBinContent(101,5457.279);
   OVIQLVUHAZ->SetMinimum(0.1);
   OVIQLVUHAZ->SetMaximum(0);
   OVIQLVUHAZ->SetEntries(1412);
   OVIQLVUHAZ->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   OVIQLVUHAZ->SetFillColor(ci);
   OVIQLVUHAZ->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   OVIQLVUHAZ->SetLineColor(ci);
   OVIQLVUHAZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   OVIQLVUHAZ->GetXaxis()->SetLabelFont(42);
   OVIQLVUHAZ->GetXaxis()->SetLabelSize(0.035);
   OVIQLVUHAZ->GetXaxis()->SetTitleSize(0.035);
   OVIQLVUHAZ->GetXaxis()->SetTitleFont(42);
   OVIQLVUHAZ->GetYaxis()->SetTitle("Entries");
   OVIQLVUHAZ->GetYaxis()->SetLabelFont(42);
   OVIQLVUHAZ->GetYaxis()->SetLabelSize(0.035);
   OVIQLVUHAZ->GetYaxis()->SetTitleSize(0.035);
   OVIQLVUHAZ->GetYaxis()->SetTitleFont(42);
   OVIQLVUHAZ->GetZaxis()->SetLabelFont(42);
   OVIQLVUHAZ->GetZaxis()->SetLabelSize(0.035);
   OVIQLVUHAZ->GetZaxis()->SetTitleSize(0.035);
   OVIQLVUHAZ->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(OVIQLVUHAZ,"");
   
   TH1F *UQDZZCOQOC = new TH1F("UQDZZCOQOC","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   UQDZZCOQOC->SetBinContent(101,35604.71);
   UQDZZCOQOC->SetMinimum(0.1);
   UQDZZCOQOC->SetMaximum(0);
   UQDZZCOQOC->SetEntries(1514);
   UQDZZCOQOC->SetStats(0);

   ci = TColor::GetColor("#006633");
   UQDZZCOQOC->SetFillColor(ci);
   UQDZZCOQOC->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   UQDZZCOQOC->SetLineColor(ci);
   UQDZZCOQOC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   UQDZZCOQOC->GetXaxis()->SetLabelFont(42);
   UQDZZCOQOC->GetXaxis()->SetLabelSize(0.035);
   UQDZZCOQOC->GetXaxis()->SetTitleSize(0.035);
   UQDZZCOQOC->GetXaxis()->SetTitleFont(42);
   UQDZZCOQOC->GetYaxis()->SetTitle("Entries");
   UQDZZCOQOC->GetYaxis()->SetLabelFont(42);
   UQDZZCOQOC->GetYaxis()->SetLabelSize(0.035);
   UQDZZCOQOC->GetYaxis()->SetTitleSize(0.035);
   UQDZZCOQOC->GetYaxis()->SetTitleFont(42);
   UQDZZCOQOC->GetZaxis()->SetLabelFont(42);
   UQDZZCOQOC->GetZaxis()->SetLabelSize(0.035);
   UQDZZCOQOC->GetZaxis()->SetTitleSize(0.035);
   UQDZZCOQOC->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(UQDZZCOQOC,"");
   
   TH1F *EHVRQNAELV = new TH1F("EHVRQNAELV","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   EHVRQNAELV->SetBinContent(101,892.8231);
   EHVRQNAELV->SetMinimum(0.1);
   EHVRQNAELV->SetMaximum(0);
   EHVRQNAELV->SetEntries(133);
   EHVRQNAELV->SetStats(0);
   EHVRQNAELV->SetFillColor(3);
   EHVRQNAELV->SetFillStyle(3001);
   EHVRQNAELV->SetLineColor(3);
   EHVRQNAELV->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   EHVRQNAELV->GetXaxis()->SetLabelFont(42);
   EHVRQNAELV->GetXaxis()->SetLabelSize(0.035);
   EHVRQNAELV->GetXaxis()->SetTitleSize(0.035);
   EHVRQNAELV->GetXaxis()->SetTitleFont(42);
   EHVRQNAELV->GetYaxis()->SetTitle("Entries");
   EHVRQNAELV->GetYaxis()->SetLabelFont(42);
   EHVRQNAELV->GetYaxis()->SetLabelSize(0.035);
   EHVRQNAELV->GetYaxis()->SetTitleSize(0.035);
   EHVRQNAELV->GetYaxis()->SetTitleFont(42);
   EHVRQNAELV->GetZaxis()->SetLabelFont(42);
   EHVRQNAELV->GetZaxis()->SetLabelSize(0.035);
   EHVRQNAELV->GetZaxis()->SetTitleSize(0.035);
   EHVRQNAELV->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(EHVRQNAELV,"");
   
   TH1F *CRLJUBSIZO = new TH1F("CRLJUBSIZO","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   CRLJUBSIZO->SetBinContent(101,1111.303);
   CRLJUBSIZO->SetMinimum(0.1);
   CRLJUBSIZO->SetMaximum(0);
   CRLJUBSIZO->SetEntries(40);
   CRLJUBSIZO->SetStats(0);

   ci = TColor::GetColor("#990033");
   CRLJUBSIZO->SetFillColor(ci);
   CRLJUBSIZO->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   CRLJUBSIZO->SetLineColor(ci);
   CRLJUBSIZO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   CRLJUBSIZO->GetXaxis()->SetLabelFont(42);
   CRLJUBSIZO->GetXaxis()->SetLabelSize(0.035);
   CRLJUBSIZO->GetXaxis()->SetTitleSize(0.035);
   CRLJUBSIZO->GetXaxis()->SetTitleFont(42);
   CRLJUBSIZO->GetYaxis()->SetTitle("Entries");
   CRLJUBSIZO->GetYaxis()->SetLabelFont(42);
   CRLJUBSIZO->GetYaxis()->SetLabelSize(0.035);
   CRLJUBSIZO->GetYaxis()->SetTitleSize(0.035);
   CRLJUBSIZO->GetYaxis()->SetTitleFont(42);
   CRLJUBSIZO->GetZaxis()->SetLabelFont(42);
   CRLJUBSIZO->GetZaxis()->SetLabelSize(0.035);
   CRLJUBSIZO->GetZaxis()->SetTitleSize(0.035);
   CRLJUBSIZO->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(CRLJUBSIZO,"");
   
   TH1F *XKYNRCHSCP = new TH1F("XKYNRCHSCP","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   XKYNRCHSCP->SetBinContent(101,1304.087);
   XKYNRCHSCP->SetMinimum(0.1);
   XKYNRCHSCP->SetMaximum(0);
   XKYNRCHSCP->SetEntries(207);
   XKYNRCHSCP->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   XKYNRCHSCP->SetFillColor(ci);
   XKYNRCHSCP->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   XKYNRCHSCP->SetLineColor(ci);
   XKYNRCHSCP->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   XKYNRCHSCP->GetXaxis()->SetLabelFont(42);
   XKYNRCHSCP->GetXaxis()->SetLabelSize(0.035);
   XKYNRCHSCP->GetXaxis()->SetTitleSize(0.035);
   XKYNRCHSCP->GetXaxis()->SetTitleFont(42);
   XKYNRCHSCP->GetYaxis()->SetTitle("Entries");
   XKYNRCHSCP->GetYaxis()->SetLabelFont(42);
   XKYNRCHSCP->GetYaxis()->SetLabelSize(0.035);
   XKYNRCHSCP->GetYaxis()->SetTitleSize(0.035);
   XKYNRCHSCP->GetYaxis()->SetTitleFont(42);
   XKYNRCHSCP->GetZaxis()->SetLabelFont(42);
   XKYNRCHSCP->GetZaxis()->SetLabelSize(0.035);
   XKYNRCHSCP->GetZaxis()->SetTitleSize(0.035);
   XKYNRCHSCP->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(XKYNRCHSCP,"");
   
   TH1F *ZYZUSUAPTT = new TH1F("ZYZUSUAPTT","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   ZYZUSUAPTT->SetBinContent(101,667.1408);
   ZYZUSUAPTT->SetMinimum(0.1);
   ZYZUSUAPTT->SetMaximum(0);
   ZYZUSUAPTT->SetEntries(23);
   ZYZUSUAPTT->SetStats(0);

   ci = TColor::GetColor("#a42400");
   ZYZUSUAPTT->SetFillColor(ci);
   ZYZUSUAPTT->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   ZYZUSUAPTT->SetLineColor(ci);
   ZYZUSUAPTT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   ZYZUSUAPTT->GetXaxis()->SetLabelFont(42);
   ZYZUSUAPTT->GetXaxis()->SetLabelSize(0.035);
   ZYZUSUAPTT->GetXaxis()->SetTitleSize(0.035);
   ZYZUSUAPTT->GetXaxis()->SetTitleFont(42);
   ZYZUSUAPTT->GetYaxis()->SetTitle("Entries");
   ZYZUSUAPTT->GetYaxis()->SetLabelFont(42);
   ZYZUSUAPTT->GetYaxis()->SetLabelSize(0.035);
   ZYZUSUAPTT->GetYaxis()->SetTitleSize(0.035);
   ZYZUSUAPTT->GetYaxis()->SetTitleFont(42);
   ZYZUSUAPTT->GetZaxis()->SetLabelFont(42);
   ZYZUSUAPTT->GetZaxis()->SetLabelSize(0.035);
   ZYZUSUAPTT->GetZaxis()->SetTitleSize(0.035);
   ZYZUSUAPTT->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(ZYZUSUAPTT,"");
   
   TH1F *AJVVBBKCSN = new TH1F("AJVVBBKCSN","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   AJVVBBKCSN->SetBinContent(101,8404.182);
   AJVVBBKCSN->SetMinimum(0.1);
   AJVVBBKCSN->SetMaximum(0);
   AJVVBBKCSN->SetEntries(15208);
   AJVVBBKCSN->SetStats(0);

   ci = TColor::GetColor("#001544");
   AJVVBBKCSN->SetFillColor(ci);
   AJVVBBKCSN->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   AJVVBBKCSN->SetLineColor(ci);
   AJVVBBKCSN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   AJVVBBKCSN->GetXaxis()->SetLabelFont(42);
   AJVVBBKCSN->GetXaxis()->SetLabelSize(0.035);
   AJVVBBKCSN->GetXaxis()->SetTitleSize(0.035);
   AJVVBBKCSN->GetXaxis()->SetTitleFont(42);
   AJVVBBKCSN->GetYaxis()->SetTitle("Entries");
   AJVVBBKCSN->GetYaxis()->SetLabelFont(42);
   AJVVBBKCSN->GetYaxis()->SetLabelSize(0.035);
   AJVVBBKCSN->GetYaxis()->SetTitleSize(0.035);
   AJVVBBKCSN->GetYaxis()->SetTitleFont(42);
   AJVVBBKCSN->GetZaxis()->SetLabelFont(42);
   AJVVBBKCSN->GetZaxis()->SetLabelSize(0.035);
   AJVVBBKCSN->GetZaxis()->SetTitleSize(0.035);
   AJVVBBKCSN->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(AJVVBBKCSN,"");
   
   TH1F *KQLGYYBFLB = new TH1F("KQLGYYBFLB","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   KQLGYYBFLB->SetBinContent(101,44121.92);
   KQLGYYBFLB->SetMinimum(0.1);
   KQLGYYBFLB->SetMaximum(0);
   KQLGYYBFLB->SetEntries(18700);
   KQLGYYBFLB->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   KQLGYYBFLB->SetFillColor(ci);
   KQLGYYBFLB->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   KQLGYYBFLB->SetLineColor(ci);
   KQLGYYBFLB->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   KQLGYYBFLB->GetXaxis()->SetLabelFont(42);
   KQLGYYBFLB->GetXaxis()->SetLabelSize(0.035);
   KQLGYYBFLB->GetXaxis()->SetTitleSize(0.035);
   KQLGYYBFLB->GetXaxis()->SetTitleFont(42);
   KQLGYYBFLB->GetYaxis()->SetTitle("Entries");
   KQLGYYBFLB->GetYaxis()->SetLabelFont(42);
   KQLGYYBFLB->GetYaxis()->SetLabelSize(0.035);
   KQLGYYBFLB->GetYaxis()->SetTitleSize(0.035);
   KQLGYYBFLB->GetYaxis()->SetTitleFont(42);
   KQLGYYBFLB->GetZaxis()->SetLabelFont(42);
   KQLGYYBFLB->GetZaxis()->SetLabelSize(0.035);
   KQLGYYBFLB->GetZaxis()->SetTitleSize(0.035);
   KQLGYYBFLB->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(KQLGYYBFLB,"");
   
   TH1F *IGSXKTCNPH = new TH1F("IGSXKTCNPH","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   IGSXKTCNPH->SetBinContent(101,8398.418);
   IGSXKTCNPH->SetMinimum(0.1);
   IGSXKTCNPH->SetMaximum(0);
   IGSXKTCNPH->SetEntries(15182);
   IGSXKTCNPH->SetStats(0);

   ci = TColor::GetColor("#620e00");
   IGSXKTCNPH->SetFillColor(ci);
   IGSXKTCNPH->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   IGSXKTCNPH->SetLineColor(ci);
   IGSXKTCNPH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   IGSXKTCNPH->GetXaxis()->SetLabelFont(42);
   IGSXKTCNPH->GetXaxis()->SetLabelSize(0.035);
   IGSXKTCNPH->GetXaxis()->SetTitleSize(0.035);
   IGSXKTCNPH->GetXaxis()->SetTitleFont(42);
   IGSXKTCNPH->GetYaxis()->SetTitle("Entries");
   IGSXKTCNPH->GetYaxis()->SetLabelFont(42);
   IGSXKTCNPH->GetYaxis()->SetLabelSize(0.035);
   IGSXKTCNPH->GetYaxis()->SetTitleSize(0.035);
   IGSXKTCNPH->GetYaxis()->SetTitleFont(42);
   IGSXKTCNPH->GetZaxis()->SetLabelFont(42);
   IGSXKTCNPH->GetZaxis()->SetLabelSize(0.035);
   IGSXKTCNPH->GetZaxis()->SetTitleSize(0.035);
   IGSXKTCNPH->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(IGSXKTCNPH,"");
   
   TH1F *UHDMDGZNKM = new TH1F("UHDMDGZNKM","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   UHDMDGZNKM->SetBinContent(101,44238.49);
   UHDMDGZNKM->SetMinimum(0.1);
   UHDMDGZNKM->SetMaximum(0);
   UHDMDGZNKM->SetEntries(18666);
   UHDMDGZNKM->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   UHDMDGZNKM->SetFillColor(ci);
   UHDMDGZNKM->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   UHDMDGZNKM->SetLineColor(ci);
   UHDMDGZNKM->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   UHDMDGZNKM->GetXaxis()->SetLabelFont(42);
   UHDMDGZNKM->GetXaxis()->SetLabelSize(0.035);
   UHDMDGZNKM->GetXaxis()->SetTitleSize(0.035);
   UHDMDGZNKM->GetXaxis()->SetTitleFont(42);
   UHDMDGZNKM->GetYaxis()->SetTitle("Entries");
   UHDMDGZNKM->GetYaxis()->SetLabelFont(42);
   UHDMDGZNKM->GetYaxis()->SetLabelSize(0.035);
   UHDMDGZNKM->GetYaxis()->SetTitleSize(0.035);
   UHDMDGZNKM->GetYaxis()->SetTitleFont(42);
   UHDMDGZNKM->GetZaxis()->SetLabelFont(42);
   UHDMDGZNKM->GetZaxis()->SetLabelSize(0.035);
   UHDMDGZNKM->GetZaxis()->SetTitleSize(0.035);
   UHDMDGZNKM->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(UHDMDGZNKM,"");
   
   TH1F *SYJKSZVCYL = new TH1F("SYJKSZVCYL","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   SYJKSZVCYL->SetBinContent(101,1514.001);
   SYJKSZVCYL->SetMinimum(0.1);
   SYJKSZVCYL->SetMaximum(0);
   SYJKSZVCYL->SetEntries(112);
   SYJKSZVCYL->SetStats(0);
   SYJKSZVCYL->SetFillColor(4);
   SYJKSZVCYL->SetFillStyle(3001);
   SYJKSZVCYL->SetLineColor(4);
   SYJKSZVCYL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   SYJKSZVCYL->GetXaxis()->SetLabelFont(42);
   SYJKSZVCYL->GetXaxis()->SetLabelSize(0.035);
   SYJKSZVCYL->GetXaxis()->SetTitleSize(0.035);
   SYJKSZVCYL->GetXaxis()->SetTitleFont(42);
   SYJKSZVCYL->GetYaxis()->SetTitle("Entries");
   SYJKSZVCYL->GetYaxis()->SetLabelFont(42);
   SYJKSZVCYL->GetYaxis()->SetLabelSize(0.035);
   SYJKSZVCYL->GetYaxis()->SetTitleSize(0.035);
   SYJKSZVCYL->GetYaxis()->SetTitleFont(42);
   SYJKSZVCYL->GetZaxis()->SetLabelFont(42);
   SYJKSZVCYL->GetZaxis()->SetLabelSize(0.035);
   SYJKSZVCYL->GetZaxis()->SetTitleSize(0.035);
   SYJKSZVCYL->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(SYJKSZVCYL,"");
   
   TH1F *FTAESOVCMW = new TH1F("FTAESOVCMW","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   FTAESOVCMW->SetBinContent(101,5597.227);
   FTAESOVCMW->SetMinimum(0.1);
   FTAESOVCMW->SetMaximum(0);
   FTAESOVCMW->SetEntries(77);
   FTAESOVCMW->SetStats(0);

   ci = TColor::GetColor("#007db5");
   FTAESOVCMW->SetFillColor(ci);
   FTAESOVCMW->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   FTAESOVCMW->SetLineColor(ci);
   FTAESOVCMW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   FTAESOVCMW->GetXaxis()->SetLabelFont(42);
   FTAESOVCMW->GetXaxis()->SetLabelSize(0.035);
   FTAESOVCMW->GetXaxis()->SetTitleSize(0.035);
   FTAESOVCMW->GetXaxis()->SetTitleFont(42);
   FTAESOVCMW->GetYaxis()->SetTitle("Entries");
   FTAESOVCMW->GetYaxis()->SetLabelFont(42);
   FTAESOVCMW->GetYaxis()->SetLabelSize(0.035);
   FTAESOVCMW->GetYaxis()->SetTitleSize(0.035);
   FTAESOVCMW->GetYaxis()->SetTitleFont(42);
   FTAESOVCMW->GetZaxis()->SetLabelFont(42);
   FTAESOVCMW->GetZaxis()->SetLabelSize(0.035);
   FTAESOVCMW->GetZaxis()->SetTitleSize(0.035);
   FTAESOVCMW->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(FTAESOVCMW,"");
   
   TH1F *XVREYJSKZR = new TH1F("XVREYJSKZR","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   XVREYJSKZR->SetBinContent(101,3343.228);
   XVREYJSKZR->SetMinimum(0.1);
   XVREYJSKZR->SetMaximum(0);
   XVREYJSKZR->SetEntries(47);
   XVREYJSKZR->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   XVREYJSKZR->SetFillColor(ci);
   XVREYJSKZR->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   XVREYJSKZR->SetLineColor(ci);
   XVREYJSKZR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   XVREYJSKZR->GetXaxis()->SetLabelFont(42);
   XVREYJSKZR->GetXaxis()->SetLabelSize(0.035);
   XVREYJSKZR->GetXaxis()->SetTitleSize(0.035);
   XVREYJSKZR->GetXaxis()->SetTitleFont(42);
   XVREYJSKZR->GetYaxis()->SetTitle("Entries");
   XVREYJSKZR->GetYaxis()->SetLabelFont(42);
   XVREYJSKZR->GetYaxis()->SetLabelSize(0.035);
   XVREYJSKZR->GetYaxis()->SetTitleSize(0.035);
   XVREYJSKZR->GetYaxis()->SetTitleFont(42);
   XVREYJSKZR->GetZaxis()->SetLabelFont(42);
   XVREYJSKZR->GetZaxis()->SetLabelSize(0.035);
   XVREYJSKZR->GetZaxis()->SetTitleSize(0.035);
   XVREYJSKZR->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(XVREYJSKZR,"");
   
   TH1F *MSZRCHBZCZ = new TH1F("MSZRCHBZCZ","HighestEnergyIsolatedLeptonCosTheta",100,0,1);
   MSZRCHBZCZ->SetBinContent(101,376.861);
   MSZRCHBZCZ->SetMinimum(0.1);
   MSZRCHBZCZ->SetMaximum(0);
   MSZRCHBZCZ->SetEntries(5);
   MSZRCHBZCZ->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   MSZRCHBZCZ->SetFillColor(ci);
   MSZRCHBZCZ->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   MSZRCHBZCZ->SetLineColor(ci);
   MSZRCHBZCZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonCosTheta");
   MSZRCHBZCZ->GetXaxis()->SetLabelFont(42);
   MSZRCHBZCZ->GetXaxis()->SetLabelSize(0.035);
   MSZRCHBZCZ->GetXaxis()->SetTitleSize(0.035);
   MSZRCHBZCZ->GetXaxis()->SetTitleFont(42);
   MSZRCHBZCZ->GetYaxis()->SetTitle("Entries");
   MSZRCHBZCZ->GetYaxis()->SetLabelFont(42);
   MSZRCHBZCZ->GetYaxis()->SetLabelSize(0.035);
   MSZRCHBZCZ->GetYaxis()->SetTitleSize(0.035);
   MSZRCHBZCZ->GetYaxis()->SetTitleFont(42);
   MSZRCHBZCZ->GetZaxis()->SetLabelFont(42);
   MSZRCHBZCZ->GetZaxis()->SetLabelSize(0.035);
   MSZRCHBZCZ->GetZaxis()->SetTitleSize(0.035);
   MSZRCHBZCZ->GetZaxis()->SetTitleFont(42);
   ZELVZDUYEL->Add(MSZRCHBZCZ,"");
   ZELVZDUYEL->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("DZWSIMSUFR","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("EZTENPQHEQ","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("RFWZIVGPRG","ee_llqqqq","f");

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
   entry=leg->AddEntry("YWSETCCKFC","ee_qqqq","f");

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
   entry=leg->AddEntry("SMZJRKESYK","ee_nunuqq","f");

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
   entry=leg->AddEntry("JEXIMUJBNW","ee_lnuqq","f");

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
   entry=leg->AddEntry("OVIQLVUHAZ","ee_qqll","f");

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
   entry=leg->AddEntry("UQDZZCOQOC","ee_qq","f");

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
   entry=leg->AddEntry("EHVRQNAELV","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CRLJUBSIZO","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("XKYNRCHSCP","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("ZYZUSUAPTT","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("AJVVBBKCSN","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("KQLGYYBFLB","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("IGSXKTCNPH","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("UHDMDGZNKM","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("SYJKSZVCYL","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("FTAESOVCMW","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("XVREYJSKZR","gammagamma_qqqq_BS_EPA","f");

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
   entry=leg->AddEntry("MSZRCHBZCZ","gammagamma_qqqq_BS_BS","f");

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
   YONZDPNECW->Modified();
   YONZDPNECW->cd();
   YONZDPNECW->SetSelected(YONZDPNECW);
}
