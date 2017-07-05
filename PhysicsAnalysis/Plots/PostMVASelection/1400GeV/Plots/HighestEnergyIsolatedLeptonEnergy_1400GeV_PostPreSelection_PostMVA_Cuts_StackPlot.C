{
//=========Macro generated from canvas: GQOOXZEFTB/HighestEnergyIsolatedLeptonEnergy
//=========  (Wed Apr 26 09:07:52 2017) by ROOT version5.34/30
   TCanvas *GQOOXZEFTB = new TCanvas("GQOOXZEFTB", "HighestEnergyIsolatedLeptonEnergy",0,0,700,500);
   gStyle->SetOptStat(0);
   GQOOXZEFTB->SetHighLightColor(2);
   GQOOXZEFTB->Range(0,0,1,1);
   GQOOXZEFTB->SetFillColor(0);
   GQOOXZEFTB->SetBorderMode(0);
   GQOOXZEFTB->SetBorderSize(2);
   GQOOXZEFTB->SetLogy();
   GQOOXZEFTB->SetFrameBorderMode(0);
   GQOOXZEFTB->SetFrameBorderMode(0);
   
   THStack *VOXSUTNNLB = new THStack();
   VOXSUTNNLB->SetName("VOXSUTNNLB");
   VOXSUTNNLB->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VOXSUTNNLB->SetMinimum(0.1);
   
   TH1F *VOXSUTNNLB_stack_18 = new TH1F("VOXSUTNNLB_stack_18","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   VOXSUTNNLB_stack_18->SetMinimum(-0);
   VOXSUTNNLB_stack_18->SetMaximum(-nan);
   VOXSUTNNLB_stack_18->SetDirectory(0);
   VOXSUTNNLB_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VOXSUTNNLB_stack_18->SetLineColor(ci);
   VOXSUTNNLB_stack_18->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VOXSUTNNLB_stack_18->GetXaxis()->SetLabelFont(42);
   VOXSUTNNLB_stack_18->GetXaxis()->SetLabelSize(0.035);
   VOXSUTNNLB_stack_18->GetXaxis()->SetTitleSize(0.035);
   VOXSUTNNLB_stack_18->GetXaxis()->SetTitleFont(42);
   VOXSUTNNLB_stack_18->GetYaxis()->SetTitle("Entries");
   VOXSUTNNLB_stack_18->GetYaxis()->SetLabelFont(42);
   VOXSUTNNLB_stack_18->GetYaxis()->SetLabelSize(0.035);
   VOXSUTNNLB_stack_18->GetYaxis()->SetTitleSize(0.035);
   VOXSUTNNLB_stack_18->GetYaxis()->SetTitleFont(42);
   VOXSUTNNLB_stack_18->GetZaxis()->SetLabelFont(42);
   VOXSUTNNLB_stack_18->GetZaxis()->SetLabelSize(0.035);
   VOXSUTNNLB_stack_18->GetZaxis()->SetTitleSize(0.035);
   VOXSUTNNLB_stack_18->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->SetHistogram(VOXSUTNNLB_stack_18);
   
   
   TH1F *RZKIPDPBDH = new TH1F("RZKIPDPBDH","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RZKIPDPBDH->SetBinContent(701,16417.49);
   RZKIPDPBDH->SetMinimum(0.1);
   RZKIPDPBDH->SetMaximum(0);
   RZKIPDPBDH->SetEntries(599399);
   RZKIPDPBDH->SetStats(0);
   RZKIPDPBDH->SetFillColor(1);
   RZKIPDPBDH->SetFillStyle(3001);
   RZKIPDPBDH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RZKIPDPBDH->GetXaxis()->SetLabelFont(42);
   RZKIPDPBDH->GetXaxis()->SetLabelSize(0.035);
   RZKIPDPBDH->GetXaxis()->SetTitleSize(0.035);
   RZKIPDPBDH->GetXaxis()->SetTitleFont(42);
   RZKIPDPBDH->GetYaxis()->SetTitle("Entries");
   RZKIPDPBDH->GetYaxis()->SetLabelFont(42);
   RZKIPDPBDH->GetYaxis()->SetLabelSize(0.035);
   RZKIPDPBDH->GetYaxis()->SetTitleSize(0.035);
   RZKIPDPBDH->GetYaxis()->SetTitleFont(42);
   RZKIPDPBDH->GetZaxis()->SetLabelFont(42);
   RZKIPDPBDH->GetZaxis()->SetLabelSize(0.035);
   RZKIPDPBDH->GetZaxis()->SetTitleSize(0.035);
   RZKIPDPBDH->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(RZKIPDPBDH,"");
   
   TH1F *VVYJHEHPWT = new TH1F("VVYJHEHPWT","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   VVYJHEHPWT->SetBinContent(701,8581.719);
   VVYJHEHPWT->SetMinimum(0.1);
   VVYJHEHPWT->SetMaximum(0);
   VVYJHEHPWT->SetEntries(19209);
   VVYJHEHPWT->SetStats(0);

   ci = TColor::GetColor("#000066");
   VVYJHEHPWT->SetFillColor(ci);
   VVYJHEHPWT->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   VVYJHEHPWT->SetLineColor(ci);
   VVYJHEHPWT->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VVYJHEHPWT->GetXaxis()->SetLabelFont(42);
   VVYJHEHPWT->GetXaxis()->SetLabelSize(0.035);
   VVYJHEHPWT->GetXaxis()->SetTitleSize(0.035);
   VVYJHEHPWT->GetXaxis()->SetTitleFont(42);
   VVYJHEHPWT->GetYaxis()->SetTitle("Entries");
   VVYJHEHPWT->GetYaxis()->SetLabelFont(42);
   VVYJHEHPWT->GetYaxis()->SetLabelSize(0.035);
   VVYJHEHPWT->GetYaxis()->SetTitleSize(0.035);
   VVYJHEHPWT->GetYaxis()->SetTitleFont(42);
   VVYJHEHPWT->GetZaxis()->SetLabelFont(42);
   VVYJHEHPWT->GetZaxis()->SetLabelSize(0.035);
   VVYJHEHPWT->GetZaxis()->SetTitleSize(0.035);
   VVYJHEHPWT->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(VVYJHEHPWT,"");
   
   TH1F *LPYPPBNCCN = new TH1F("LPYPPBNCCN","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   LPYPPBNCCN->SetBinContent(701,99.56946);
   LPYPPBNCCN->SetMinimum(0.1);
   LPYPPBNCCN->SetMaximum(0);
   LPYPPBNCCN->SetEntries(678);
   LPYPPBNCCN->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   LPYPPBNCCN->SetFillColor(ci);
   LPYPPBNCCN->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   LPYPPBNCCN->SetLineColor(ci);
   LPYPPBNCCN->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   LPYPPBNCCN->GetXaxis()->SetLabelFont(42);
   LPYPPBNCCN->GetXaxis()->SetLabelSize(0.035);
   LPYPPBNCCN->GetXaxis()->SetTitleSize(0.035);
   LPYPPBNCCN->GetXaxis()->SetTitleFont(42);
   LPYPPBNCCN->GetYaxis()->SetTitle("Entries");
   LPYPPBNCCN->GetYaxis()->SetLabelFont(42);
   LPYPPBNCCN->GetYaxis()->SetLabelSize(0.035);
   LPYPPBNCCN->GetYaxis()->SetTitleSize(0.035);
   LPYPPBNCCN->GetYaxis()->SetTitleFont(42);
   LPYPPBNCCN->GetZaxis()->SetLabelFont(42);
   LPYPPBNCCN->GetZaxis()->SetLabelSize(0.035);
   LPYPPBNCCN->GetZaxis()->SetTitleSize(0.035);
   LPYPPBNCCN->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(LPYPPBNCCN,"");
   
   TH1F *QHRUQKXLKA = new TH1F("QHRUQKXLKA","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   QHRUQKXLKA->SetBinContent(701,1698.274);
   QHRUQKXLKA->SetMinimum(0.1);
   QHRUQKXLKA->SetMaximum(0);
   QHRUQKXLKA->SetEntries(266);
   QHRUQKXLKA->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   QHRUQKXLKA->SetFillColor(ci);
   QHRUQKXLKA->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   QHRUQKXLKA->SetLineColor(ci);
   QHRUQKXLKA->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   QHRUQKXLKA->GetXaxis()->SetLabelFont(42);
   QHRUQKXLKA->GetXaxis()->SetLabelSize(0.035);
   QHRUQKXLKA->GetXaxis()->SetTitleSize(0.035);
   QHRUQKXLKA->GetXaxis()->SetTitleFont(42);
   QHRUQKXLKA->GetYaxis()->SetTitle("Entries");
   QHRUQKXLKA->GetYaxis()->SetLabelFont(42);
   QHRUQKXLKA->GetYaxis()->SetLabelSize(0.035);
   QHRUQKXLKA->GetYaxis()->SetTitleSize(0.035);
   QHRUQKXLKA->GetYaxis()->SetTitleFont(42);
   QHRUQKXLKA->GetZaxis()->SetLabelFont(42);
   QHRUQKXLKA->GetZaxis()->SetLabelSize(0.035);
   QHRUQKXLKA->GetZaxis()->SetTitleSize(0.035);
   QHRUQKXLKA->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(QHRUQKXLKA,"");
   
   TH1F *PHXKLBULDE = new TH1F("PHXKLBULDE","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   PHXKLBULDE->SetBinContent(701,5350.61);
   PHXKLBULDE->SetMinimum(0.1);
   PHXKLBULDE->SetMaximum(0);
   PHXKLBULDE->SetEntries(1322);
   PHXKLBULDE->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   PHXKLBULDE->SetFillColor(ci);
   PHXKLBULDE->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   PHXKLBULDE->SetLineColor(ci);
   PHXKLBULDE->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   PHXKLBULDE->GetXaxis()->SetLabelFont(42);
   PHXKLBULDE->GetXaxis()->SetLabelSize(0.035);
   PHXKLBULDE->GetXaxis()->SetTitleSize(0.035);
   PHXKLBULDE->GetXaxis()->SetTitleFont(42);
   PHXKLBULDE->GetYaxis()->SetTitle("Entries");
   PHXKLBULDE->GetYaxis()->SetLabelFont(42);
   PHXKLBULDE->GetYaxis()->SetLabelSize(0.035);
   PHXKLBULDE->GetYaxis()->SetTitleSize(0.035);
   PHXKLBULDE->GetYaxis()->SetTitleFont(42);
   PHXKLBULDE->GetZaxis()->SetLabelFont(42);
   PHXKLBULDE->GetZaxis()->SetLabelSize(0.035);
   PHXKLBULDE->GetZaxis()->SetTitleSize(0.035);
   PHXKLBULDE->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(PHXKLBULDE,"");
   
   TH1F *NLIABLQWKU = new TH1F("NLIABLQWKU","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   NLIABLQWKU->SetBinContent(701,9319.294);
   NLIABLQWKU->SetMinimum(0.1);
   NLIABLQWKU->SetMaximum(0);
   NLIABLQWKU->SetEntries(1509);
   NLIABLQWKU->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   NLIABLQWKU->SetFillColor(ci);
   NLIABLQWKU->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   NLIABLQWKU->SetLineColor(ci);
   NLIABLQWKU->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   NLIABLQWKU->GetXaxis()->SetLabelFont(42);
   NLIABLQWKU->GetXaxis()->SetLabelSize(0.035);
   NLIABLQWKU->GetXaxis()->SetTitleSize(0.035);
   NLIABLQWKU->GetXaxis()->SetTitleFont(42);
   NLIABLQWKU->GetYaxis()->SetTitle("Entries");
   NLIABLQWKU->GetYaxis()->SetLabelFont(42);
   NLIABLQWKU->GetYaxis()->SetLabelSize(0.035);
   NLIABLQWKU->GetYaxis()->SetTitleSize(0.035);
   NLIABLQWKU->GetYaxis()->SetTitleFont(42);
   NLIABLQWKU->GetZaxis()->SetLabelFont(42);
   NLIABLQWKU->GetZaxis()->SetLabelSize(0.035);
   NLIABLQWKU->GetZaxis()->SetTitleSize(0.035);
   NLIABLQWKU->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(NLIABLQWKU,"");
   
   TH1F *KMWGNHFEGH = new TH1F("KMWGNHFEGH","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   KMWGNHFEGH->SetBinContent(701,233.7012);
   KMWGNHFEGH->SetMinimum(0.1);
   KMWGNHFEGH->SetMaximum(0);
   KMWGNHFEGH->SetEntries(60);
   KMWGNHFEGH->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   KMWGNHFEGH->SetFillColor(ci);
   KMWGNHFEGH->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   KMWGNHFEGH->SetLineColor(ci);
   KMWGNHFEGH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   KMWGNHFEGH->GetXaxis()->SetLabelFont(42);
   KMWGNHFEGH->GetXaxis()->SetLabelSize(0.035);
   KMWGNHFEGH->GetXaxis()->SetTitleSize(0.035);
   KMWGNHFEGH->GetXaxis()->SetTitleFont(42);
   KMWGNHFEGH->GetYaxis()->SetTitle("Entries");
   KMWGNHFEGH->GetYaxis()->SetLabelFont(42);
   KMWGNHFEGH->GetYaxis()->SetLabelSize(0.035);
   KMWGNHFEGH->GetYaxis()->SetTitleSize(0.035);
   KMWGNHFEGH->GetYaxis()->SetTitleFont(42);
   KMWGNHFEGH->GetZaxis()->SetLabelFont(42);
   KMWGNHFEGH->GetZaxis()->SetLabelSize(0.035);
   KMWGNHFEGH->GetZaxis()->SetTitleSize(0.035);
   KMWGNHFEGH->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(KMWGNHFEGH,"");
   
   TH1F *EBRJCUNZMQ = new TH1F("EBRJCUNZMQ","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   EBRJCUNZMQ->SetBinContent(701,1585.586);
   EBRJCUNZMQ->SetMinimum(0.1);
   EBRJCUNZMQ->SetMaximum(0);
   EBRJCUNZMQ->SetEntries(64);
   EBRJCUNZMQ->SetStats(0);

   ci = TColor::GetColor("#006633");
   EBRJCUNZMQ->SetFillColor(ci);
   EBRJCUNZMQ->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   EBRJCUNZMQ->SetLineColor(ci);
   EBRJCUNZMQ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   EBRJCUNZMQ->GetXaxis()->SetLabelFont(42);
   EBRJCUNZMQ->GetXaxis()->SetLabelSize(0.035);
   EBRJCUNZMQ->GetXaxis()->SetTitleSize(0.035);
   EBRJCUNZMQ->GetXaxis()->SetTitleFont(42);
   EBRJCUNZMQ->GetYaxis()->SetTitle("Entries");
   EBRJCUNZMQ->GetYaxis()->SetLabelFont(42);
   EBRJCUNZMQ->GetYaxis()->SetLabelSize(0.035);
   EBRJCUNZMQ->GetYaxis()->SetTitleSize(0.035);
   EBRJCUNZMQ->GetYaxis()->SetTitleFont(42);
   EBRJCUNZMQ->GetZaxis()->SetLabelFont(42);
   EBRJCUNZMQ->GetZaxis()->SetLabelSize(0.035);
   EBRJCUNZMQ->GetZaxis()->SetTitleSize(0.035);
   EBRJCUNZMQ->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(EBRJCUNZMQ,"");
   
   TH1F *VOPLUPFWSO = new TH1F("VOPLUPFWSO","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   VOPLUPFWSO->SetBinContent(701,47.72728);
   VOPLUPFWSO->SetMinimum(0.1);
   VOPLUPFWSO->SetMaximum(0);
   VOPLUPFWSO->SetEntries(7);
   VOPLUPFWSO->SetStats(0);
   VOPLUPFWSO->SetFillColor(3);
   VOPLUPFWSO->SetFillStyle(3001);
   VOPLUPFWSO->SetLineColor(3);
   VOPLUPFWSO->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   VOPLUPFWSO->GetXaxis()->SetLabelFont(42);
   VOPLUPFWSO->GetXaxis()->SetLabelSize(0.035);
   VOPLUPFWSO->GetXaxis()->SetTitleSize(0.035);
   VOPLUPFWSO->GetXaxis()->SetTitleFont(42);
   VOPLUPFWSO->GetYaxis()->SetTitle("Entries");
   VOPLUPFWSO->GetYaxis()->SetLabelFont(42);
   VOPLUPFWSO->GetYaxis()->SetLabelSize(0.035);
   VOPLUPFWSO->GetYaxis()->SetTitleSize(0.035);
   VOPLUPFWSO->GetYaxis()->SetTitleFont(42);
   VOPLUPFWSO->GetZaxis()->SetLabelFont(42);
   VOPLUPFWSO->GetZaxis()->SetLabelSize(0.035);
   VOPLUPFWSO->GetZaxis()->SetTitleSize(0.035);
   VOPLUPFWSO->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(VOPLUPFWSO,"");
   
   TH1F *EWHORBCSYZ = new TH1F("EWHORBCSYZ","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   EWHORBCSYZ->SetBinContent(701,42.20727);
   EWHORBCSYZ->SetMinimum(0.1);
   EWHORBCSYZ->SetMaximum(0);
   EWHORBCSYZ->SetEntries(2);
   EWHORBCSYZ->SetStats(0);

   ci = TColor::GetColor("#990033");
   EWHORBCSYZ->SetFillColor(ci);
   EWHORBCSYZ->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   EWHORBCSYZ->SetLineColor(ci);
   EWHORBCSYZ->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   EWHORBCSYZ->GetXaxis()->SetLabelFont(42);
   EWHORBCSYZ->GetXaxis()->SetLabelSize(0.035);
   EWHORBCSYZ->GetXaxis()->SetTitleSize(0.035);
   EWHORBCSYZ->GetXaxis()->SetTitleFont(42);
   EWHORBCSYZ->GetYaxis()->SetTitle("Entries");
   EWHORBCSYZ->GetYaxis()->SetLabelFont(42);
   EWHORBCSYZ->GetYaxis()->SetLabelSize(0.035);
   EWHORBCSYZ->GetYaxis()->SetTitleSize(0.035);
   EWHORBCSYZ->GetYaxis()->SetTitleFont(42);
   EWHORBCSYZ->GetZaxis()->SetLabelFont(42);
   EWHORBCSYZ->GetZaxis()->SetLabelSize(0.035);
   EWHORBCSYZ->GetZaxis()->SetTitleSize(0.035);
   EWHORBCSYZ->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(EWHORBCSYZ,"");
   
   TH1F *RJCOEZSEFF = new TH1F("RJCOEZSEFF","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RJCOEZSEFF->SetBinContent(701,18.89987);
   RJCOEZSEFF->SetMinimum(0.1);
   RJCOEZSEFF->SetMaximum(0);
   RJCOEZSEFF->SetEntries(3);
   RJCOEZSEFF->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   RJCOEZSEFF->SetFillColor(ci);
   RJCOEZSEFF->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   RJCOEZSEFF->SetLineColor(ci);
   RJCOEZSEFF->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RJCOEZSEFF->GetXaxis()->SetLabelFont(42);
   RJCOEZSEFF->GetXaxis()->SetLabelSize(0.035);
   RJCOEZSEFF->GetXaxis()->SetTitleSize(0.035);
   RJCOEZSEFF->GetXaxis()->SetTitleFont(42);
   RJCOEZSEFF->GetYaxis()->SetTitle("Entries");
   RJCOEZSEFF->GetYaxis()->SetLabelFont(42);
   RJCOEZSEFF->GetYaxis()->SetLabelSize(0.035);
   RJCOEZSEFF->GetYaxis()->SetTitleSize(0.035);
   RJCOEZSEFF->GetYaxis()->SetTitleFont(42);
   RJCOEZSEFF->GetZaxis()->SetLabelFont(42);
   RJCOEZSEFF->GetZaxis()->SetLabelSize(0.035);
   RJCOEZSEFF->GetZaxis()->SetTitleSize(0.035);
   RJCOEZSEFF->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(RJCOEZSEFF,"");
   
   TH1F *BKSDYNNSGV = new TH1F("BKSDYNNSGV","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   BKSDYNNSGV->SetBinContent(701,65.37201);
   BKSDYNNSGV->SetMinimum(0.1);
   BKSDYNNSGV->SetMaximum(0);
   BKSDYNNSGV->SetEntries(3);
   BKSDYNNSGV->SetStats(0);

   ci = TColor::GetColor("#a42400");
   BKSDYNNSGV->SetFillColor(ci);
   BKSDYNNSGV->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   BKSDYNNSGV->SetLineColor(ci);
   BKSDYNNSGV->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   BKSDYNNSGV->GetXaxis()->SetLabelFont(42);
   BKSDYNNSGV->GetXaxis()->SetLabelSize(0.035);
   BKSDYNNSGV->GetXaxis()->SetTitleSize(0.035);
   BKSDYNNSGV->GetXaxis()->SetTitleFont(42);
   BKSDYNNSGV->GetYaxis()->SetTitle("Entries");
   BKSDYNNSGV->GetYaxis()->SetLabelFont(42);
   BKSDYNNSGV->GetYaxis()->SetLabelSize(0.035);
   BKSDYNNSGV->GetYaxis()->SetTitleSize(0.035);
   BKSDYNNSGV->GetYaxis()->SetTitleFont(42);
   BKSDYNNSGV->GetZaxis()->SetLabelFont(42);
   BKSDYNNSGV->GetZaxis()->SetLabelSize(0.035);
   BKSDYNNSGV->GetZaxis()->SetTitleSize(0.035);
   BKSDYNNSGV->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(BKSDYNNSGV,"");
   
   TH1F *KINUUOHVOD = new TH1F("KINUUOHVOD","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   KINUUOHVOD->SetBinContent(701,4420.359);
   KINUUOHVOD->SetMinimum(0.1);
   KINUUOHVOD->SetMaximum(0);
   KINUUOHVOD->SetEntries(7983);
   KINUUOHVOD->SetStats(0);

   ci = TColor::GetColor("#001544");
   KINUUOHVOD->SetFillColor(ci);
   KINUUOHVOD->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   KINUUOHVOD->SetLineColor(ci);
   KINUUOHVOD->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   KINUUOHVOD->GetXaxis()->SetLabelFont(42);
   KINUUOHVOD->GetXaxis()->SetLabelSize(0.035);
   KINUUOHVOD->GetXaxis()->SetTitleSize(0.035);
   KINUUOHVOD->GetXaxis()->SetTitleFont(42);
   KINUUOHVOD->GetYaxis()->SetTitle("Entries");
   KINUUOHVOD->GetYaxis()->SetLabelFont(42);
   KINUUOHVOD->GetYaxis()->SetLabelSize(0.035);
   KINUUOHVOD->GetYaxis()->SetTitleSize(0.035);
   KINUUOHVOD->GetYaxis()->SetTitleFont(42);
   KINUUOHVOD->GetZaxis()->SetLabelFont(42);
   KINUUOHVOD->GetZaxis()->SetLabelSize(0.035);
   KINUUOHVOD->GetZaxis()->SetTitleSize(0.035);
   KINUUOHVOD->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(KINUUOHVOD,"");
   
   TH1F *QKAZUXMYOH = new TH1F("QKAZUXMYOH","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   QKAZUXMYOH->SetBinContent(701,23148.97);
   QKAZUXMYOH->SetMinimum(0.1);
   QKAZUXMYOH->SetMaximum(0);
   QKAZUXMYOH->SetEntries(13081);
   QKAZUXMYOH->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   QKAZUXMYOH->SetFillColor(ci);
   QKAZUXMYOH->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   QKAZUXMYOH->SetLineColor(ci);
   QKAZUXMYOH->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   QKAZUXMYOH->GetXaxis()->SetLabelFont(42);
   QKAZUXMYOH->GetXaxis()->SetLabelSize(0.035);
   QKAZUXMYOH->GetXaxis()->SetTitleSize(0.035);
   QKAZUXMYOH->GetXaxis()->SetTitleFont(42);
   QKAZUXMYOH->GetYaxis()->SetTitle("Entries");
   QKAZUXMYOH->GetYaxis()->SetLabelFont(42);
   QKAZUXMYOH->GetYaxis()->SetLabelSize(0.035);
   QKAZUXMYOH->GetYaxis()->SetTitleSize(0.035);
   QKAZUXMYOH->GetYaxis()->SetTitleFont(42);
   QKAZUXMYOH->GetZaxis()->SetLabelFont(42);
   QKAZUXMYOH->GetZaxis()->SetLabelSize(0.035);
   QKAZUXMYOH->GetZaxis()->SetTitleSize(0.035);
   QKAZUXMYOH->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(QKAZUXMYOH,"");
   
   TH1F *LFQXUXFJVK = new TH1F("LFQXUXFJVK","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   LFQXUXFJVK->SetBinContent(701,4494.557);
   LFQXUXFJVK->SetMinimum(0.1);
   LFQXUXFJVK->SetMaximum(0);
   LFQXUXFJVK->SetEntries(8117);
   LFQXUXFJVK->SetStats(0);

   ci = TColor::GetColor("#620e00");
   LFQXUXFJVK->SetFillColor(ci);
   LFQXUXFJVK->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   LFQXUXFJVK->SetLineColor(ci);
   LFQXUXFJVK->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   LFQXUXFJVK->GetXaxis()->SetLabelFont(42);
   LFQXUXFJVK->GetXaxis()->SetLabelSize(0.035);
   LFQXUXFJVK->GetXaxis()->SetTitleSize(0.035);
   LFQXUXFJVK->GetXaxis()->SetTitleFont(42);
   LFQXUXFJVK->GetYaxis()->SetTitle("Entries");
   LFQXUXFJVK->GetYaxis()->SetLabelFont(42);
   LFQXUXFJVK->GetYaxis()->SetLabelSize(0.035);
   LFQXUXFJVK->GetYaxis()->SetTitleSize(0.035);
   LFQXUXFJVK->GetYaxis()->SetTitleFont(42);
   LFQXUXFJVK->GetZaxis()->SetLabelFont(42);
   LFQXUXFJVK->GetZaxis()->SetLabelSize(0.035);
   LFQXUXFJVK->GetZaxis()->SetTitleSize(0.035);
   LFQXUXFJVK->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(LFQXUXFJVK,"");
   
   TH1F *HOFJPMUXSW = new TH1F("HOFJPMUXSW","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   HOFJPMUXSW->SetBinContent(701,23408.07);
   HOFJPMUXSW->SetMinimum(0.1);
   HOFJPMUXSW->SetMaximum(0);
   HOFJPMUXSW->SetEntries(13170);
   HOFJPMUXSW->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   HOFJPMUXSW->SetFillColor(ci);
   HOFJPMUXSW->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   HOFJPMUXSW->SetLineColor(ci);
   HOFJPMUXSW->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   HOFJPMUXSW->GetXaxis()->SetLabelFont(42);
   HOFJPMUXSW->GetXaxis()->SetLabelSize(0.035);
   HOFJPMUXSW->GetXaxis()->SetTitleSize(0.035);
   HOFJPMUXSW->GetXaxis()->SetTitleFont(42);
   HOFJPMUXSW->GetYaxis()->SetTitle("Entries");
   HOFJPMUXSW->GetYaxis()->SetLabelFont(42);
   HOFJPMUXSW->GetYaxis()->SetLabelSize(0.035);
   HOFJPMUXSW->GetYaxis()->SetTitleSize(0.035);
   HOFJPMUXSW->GetYaxis()->SetTitleFont(42);
   HOFJPMUXSW->GetZaxis()->SetLabelFont(42);
   HOFJPMUXSW->GetZaxis()->SetLabelSize(0.035);
   HOFJPMUXSW->GetZaxis()->SetTitleSize(0.035);
   HOFJPMUXSW->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(HOFJPMUXSW,"");
   
   TH1F *SDYTSIBBEC = new TH1F("SDYTSIBBEC","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   SDYTSIBBEC->SetBinContent(701,81.20349);
   SDYTSIBBEC->SetMinimum(0.1);
   SDYTSIBBEC->SetMaximum(0);
   SDYTSIBBEC->SetEntries(6);
   SDYTSIBBEC->SetStats(0);
   SDYTSIBBEC->SetFillColor(4);
   SDYTSIBBEC->SetFillStyle(3001);
   SDYTSIBBEC->SetLineColor(4);
   SDYTSIBBEC->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   SDYTSIBBEC->GetXaxis()->SetLabelFont(42);
   SDYTSIBBEC->GetXaxis()->SetLabelSize(0.035);
   SDYTSIBBEC->GetXaxis()->SetTitleSize(0.035);
   SDYTSIBBEC->GetXaxis()->SetTitleFont(42);
   SDYTSIBBEC->GetYaxis()->SetTitle("Entries");
   SDYTSIBBEC->GetYaxis()->SetLabelFont(42);
   SDYTSIBBEC->GetYaxis()->SetLabelSize(0.035);
   SDYTSIBBEC->GetYaxis()->SetTitleSize(0.035);
   SDYTSIBBEC->GetYaxis()->SetTitleFont(42);
   SDYTSIBBEC->GetZaxis()->SetLabelFont(42);
   SDYTSIBBEC->GetZaxis()->SetLabelSize(0.035);
   SDYTSIBBEC->GetZaxis()->SetTitleSize(0.035);
   SDYTSIBBEC->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(SDYTSIBBEC,"");
   
   TH1F *RWJIRKSEMR = new TH1F("RWJIRKSEMR","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   RWJIRKSEMR->SetBinContent(701,54.64839);
   RWJIRKSEMR->SetMinimum(0.1);
   RWJIRKSEMR->SetMaximum(0);
   RWJIRKSEMR->SetEntries(1);
   RWJIRKSEMR->SetStats(0);

   ci = TColor::GetColor("#007db5");
   RWJIRKSEMR->SetFillColor(ci);
   RWJIRKSEMR->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   RWJIRKSEMR->SetLineColor(ci);
   RWJIRKSEMR->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   RWJIRKSEMR->GetXaxis()->SetLabelFont(42);
   RWJIRKSEMR->GetXaxis()->SetLabelSize(0.035);
   RWJIRKSEMR->GetXaxis()->SetTitleSize(0.035);
   RWJIRKSEMR->GetXaxis()->SetTitleFont(42);
   RWJIRKSEMR->GetYaxis()->SetTitle("Entries");
   RWJIRKSEMR->GetYaxis()->SetLabelFont(42);
   RWJIRKSEMR->GetYaxis()->SetLabelSize(0.035);
   RWJIRKSEMR->GetYaxis()->SetTitleSize(0.035);
   RWJIRKSEMR->GetYaxis()->SetTitleFont(42);
   RWJIRKSEMR->GetZaxis()->SetLabelFont(42);
   RWJIRKSEMR->GetZaxis()->SetLabelSize(0.035);
   RWJIRKSEMR->GetZaxis()->SetTitleSize(0.035);
   RWJIRKSEMR->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(RWJIRKSEMR,"");
   
   TH1F *PFSIGYKAOL = new TH1F("PFSIGYKAOL","HighestEnergyIsolatedLeptonEnergy",700,0,700);
   PFSIGYKAOL->SetBinContent(701,53.2871);
   PFSIGYKAOL->SetMinimum(0.1);
   PFSIGYKAOL->SetMaximum(0);
   PFSIGYKAOL->SetEntries(1);
   PFSIGYKAOL->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   PFSIGYKAOL->SetFillColor(ci);
   PFSIGYKAOL->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   PFSIGYKAOL->SetLineColor(ci);
   PFSIGYKAOL->GetXaxis()->SetTitle("HighestEnergyIsolatedLeptonEnergy");
   PFSIGYKAOL->GetXaxis()->SetLabelFont(42);
   PFSIGYKAOL->GetXaxis()->SetLabelSize(0.035);
   PFSIGYKAOL->GetXaxis()->SetTitleSize(0.035);
   PFSIGYKAOL->GetXaxis()->SetTitleFont(42);
   PFSIGYKAOL->GetYaxis()->SetTitle("Entries");
   PFSIGYKAOL->GetYaxis()->SetLabelFont(42);
   PFSIGYKAOL->GetYaxis()->SetLabelSize(0.035);
   PFSIGYKAOL->GetYaxis()->SetTitleSize(0.035);
   PFSIGYKAOL->GetYaxis()->SetTitleFont(42);
   PFSIGYKAOL->GetZaxis()->SetLabelFont(42);
   PFSIGYKAOL->GetZaxis()->SetLabelSize(0.035);
   PFSIGYKAOL->GetZaxis()->SetTitleSize(0.035);
   PFSIGYKAOL->GetZaxis()->SetTitleFont(42);
   VOXSUTNNLB->Add(PFSIGYKAOL,"");
   VOXSUTNNLB->Draw("");
   
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
   TLegendEntry *entry=leg->AddEntry("RZKIPDPBDH","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VVYJHEHPWT","ee_lnuqqqq","f");

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
   entry=leg->AddEntry("LPYPPBNCCN","ee_llqqqq","f");

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
   entry=leg->AddEntry("QHRUQKXLKA","ee_qqqq","f");

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
   entry=leg->AddEntry("PHXKLBULDE","ee_nunuqq","f");

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
   entry=leg->AddEntry("NLIABLQWKU","ee_lnuqq","f");

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
   entry=leg->AddEntry("KMWGNHFEGH","ee_qqll","f");

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
   entry=leg->AddEntry("EBRJCUNZMQ","ee_qq","f");

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
   entry=leg->AddEntry("VOPLUPFWSO","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("EWHORBCSYZ","egamma_qqqqe_BS","f");

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
   entry=leg->AddEntry("RJCOEZSEFF","gammae_qqqqe_EPA","f");

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
   entry=leg->AddEntry("BKSDYNNSGV","gammae_qqqqe_BS","f");

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
   entry=leg->AddEntry("KINUUOHVOD","egamma_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("QKAZUXMYOH","egamma_qqqqnu_BS","f");

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
   entry=leg->AddEntry("LFQXUXFJVK","gammae_qqqqnu_EPA","f");

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
   entry=leg->AddEntry("HOFJPMUXSW","gammae_qqqqnu_BS","f");

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
   entry=leg->AddEntry("SDYTSIBBEC","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RWJIRKSEMR","gammagamma_qqqq_EPA_BS","f");

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
   entry=leg->AddEntry("PFSIGYKAOL","gammagamma_qqqq_BS_EPA","f");

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
   GQOOXZEFTB->Modified();
   GQOOXZEFTB->cd();
   GQOOXZEFTB->SetSelected(GQOOXZEFTB);
}
