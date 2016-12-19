{
//=========Macro generated from canvas: CYQKOOVFJI/NumberOfIsolatedLeptons
//=========  (Wed Sep 28 11:48:13 2016) by ROOT version5.34/30
   TCanvas *CYQKOOVFJI = new TCanvas("CYQKOOVFJI", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   CYQKOOVFJI->SetHighLightColor(2);
   CYQKOOVFJI->Range(0,0,1,1);
   CYQKOOVFJI->SetFillColor(0);
   CYQKOOVFJI->SetBorderMode(0);
   CYQKOOVFJI->SetBorderSize(2);
   CYQKOOVFJI->SetLogy();
   CYQKOOVFJI->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: CYQKOOVFJI_1
   TPad *CYQKOOVFJI_1 = new TPad("CYQKOOVFJI_1", "CYQKOOVFJI_1",0.01,0.81,0.24,0.99);
   CYQKOOVFJI_1->Draw();
   CYQKOOVFJI_1->cd();
   CYQKOOVFJI_1->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_1->SetFillColor(0);
   CYQKOOVFJI_1->SetBorderMode(0);
   CYQKOOVFJI_1->SetBorderSize(2);
   CYQKOOVFJI_1->SetFrameBorderMode(0);
   CYQKOOVFJI_1->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
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
   FYILIUFOAS->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
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
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_1->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_2
   CYQKOOVFJI_2 = new TPad("CYQKOOVFJI_2", "CYQKOOVFJI_2",0.26,0.81,0.49,0.99);
   CYQKOOVFJI_2->Draw();
   CYQKOOVFJI_2->cd();
   CYQKOOVFJI_2->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_2->SetFillColor(0);
   CYQKOOVFJI_2->SetBorderMode(0);
   CYQKOOVFJI_2->SetBorderSize(2);
   CYQKOOVFJI_2->SetFrameBorderMode(0);
   CYQKOOVFJI_2->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *WKQSRVCKCL = new TH1F("WKQSRVCKCL","NumberOfIsolatedLeptons",5,0,5);
   WKQSRVCKCL->SetBinContent(1,0.4882123);
   WKQSRVCKCL->SetBinContent(2,0.5100055);
   WKQSRVCKCL->SetBinContent(3,0.001782156);
   WKQSRVCKCL->SetEntries(372437);
   WKQSRVCKCL->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
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
   WKQSRVCKCL->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_2->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_3
   CYQKOOVFJI_3 = new TPad("CYQKOOVFJI_3", "CYQKOOVFJI_3",0.51,0.81,0.74,0.99);
   CYQKOOVFJI_3->Draw();
   CYQKOOVFJI_3->cd();
   CYQKOOVFJI_3->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_3->SetFillColor(0);
   CYQKOOVFJI_3->SetBorderMode(0);
   CYQKOOVFJI_3->SetBorderSize(2);
   CYQKOOVFJI_3->SetFrameBorderMode(0);
   CYQKOOVFJI_3->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *EOIKLRPMRF = new TH1F("EOIKLRPMRF","NumberOfIsolatedLeptons",5,0,5);
   EOIKLRPMRF->SetBinContent(1,0.5588118);
   EOIKLRPMRF->SetBinContent(2,0.3407826);
   EOIKLRPMRF->SetBinContent(3,0.1001198);
   EOIKLRPMRF->SetBinContent(4,0.0002857972);
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
   EOIKLRPMRF->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_3->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_4
   CYQKOOVFJI_4 = new TPad("CYQKOOVFJI_4", "CYQKOOVFJI_4",0.76,0.81,0.99,0.99);
   CYQKOOVFJI_4->Draw();
   CYQKOOVFJI_4->cd();
   CYQKOOVFJI_4->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_4->SetFillColor(0);
   CYQKOOVFJI_4->SetBorderMode(0);
   CYQKOOVFJI_4->SetBorderSize(2);
   CYQKOOVFJI_4->SetFrameBorderMode(0);
   CYQKOOVFJI_4->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *KYTVIDRBEM = new TH1F("KYTVIDRBEM","NumberOfIsolatedLeptons",5,0,5);
   KYTVIDRBEM->SetBinContent(1,0.9982639);
   KYTVIDRBEM->SetBinContent(2,0.001736109);
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
   KYTVIDRBEM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_4->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_5
   CYQKOOVFJI_5 = new TPad("CYQKOOVFJI_5", "CYQKOOVFJI_5",0.01,0.61,0.24,0.79);
   CYQKOOVFJI_5->Draw();
   CYQKOOVFJI_5->cd();
   CYQKOOVFJI_5->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_5->SetFillColor(0);
   CYQKOOVFJI_5->SetBorderMode(0);
   CYQKOOVFJI_5->SetBorderSize(2);
   CYQKOOVFJI_5->SetFrameBorderMode(0);
   CYQKOOVFJI_5->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *MQOIAROKJN = new TH1F("MQOIAROKJN","NumberOfIsolatedLeptons",5,0,5);
   MQOIAROKJN->SetBinContent(1,0.9979492);
   MQOIAROKJN->SetBinContent(2,0.002050845);
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
   MQOIAROKJN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_5->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_6
   CYQKOOVFJI_6 = new TPad("CYQKOOVFJI_6", "CYQKOOVFJI_6",0.26,0.61,0.49,0.79);
   CYQKOOVFJI_6->Draw();
   CYQKOOVFJI_6->cd();
   CYQKOOVFJI_6->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_6->SetFillColor(0);
   CYQKOOVFJI_6->SetBorderMode(0);
   CYQKOOVFJI_6->SetBorderSize(2);
   CYQKOOVFJI_6->SetFrameBorderMode(0);
   CYQKOOVFJI_6->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *HHAYPHMTGO = new TH1F("HHAYPHMTGO","NumberOfIsolatedLeptons",5,0,5);
   HHAYPHMTGO->SetBinContent(1,0.7412897);
   HHAYPHMTGO->SetBinContent(2,0.2582896);
   HHAYPHMTGO->SetBinContent(3,0.000420657);
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
   HHAYPHMTGO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_6->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_7
   CYQKOOVFJI_7 = new TPad("CYQKOOVFJI_7", "CYQKOOVFJI_7",0.51,0.61,0.74,0.79);
   CYQKOOVFJI_7->Draw();
   CYQKOOVFJI_7->cd();
   CYQKOOVFJI_7->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_7->SetFillColor(0);
   CYQKOOVFJI_7->SetBorderMode(0);
   CYQKOOVFJI_7->SetBorderSize(2);
   CYQKOOVFJI_7->SetFrameBorderMode(0);
   CYQKOOVFJI_7->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *ZSPEDNPVMN = new TH1F("ZSPEDNPVMN","NumberOfIsolatedLeptons",5,0,5);
   ZSPEDNPVMN->SetBinContent(1,0.8385099);
   ZSPEDNPVMN->SetBinContent(2,0.1434147);
   ZSPEDNPVMN->SetBinContent(3,0.01804962);
   ZSPEDNPVMN->SetBinContent(4,2.575826e-05);
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
   ZSPEDNPVMN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_7->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_8
   CYQKOOVFJI_8 = new TPad("CYQKOOVFJI_8", "CYQKOOVFJI_8",0.76,0.61,0.99,0.79);
   CYQKOOVFJI_8->Draw();
   CYQKOOVFJI_8->cd();
   CYQKOOVFJI_8->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_8->SetFillColor(0);
   CYQKOOVFJI_8->SetBorderMode(0);
   CYQKOOVFJI_8->SetBorderSize(2);
   CYQKOOVFJI_8->SetFrameBorderMode(0);
   CYQKOOVFJI_8->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *EUUYKHSVXG = new TH1F("EUUYKHSVXG","NumberOfIsolatedLeptons",5,0,5);
   EUUYKHSVXG->SetBinContent(1,0.9986175);
   EUUYKHSVXG->SetBinContent(2,0.001378609);
   EUUYKHSVXG->SetBinContent(3,3.927671e-06);
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
   EUUYKHSVXG->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_8->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_9
   CYQKOOVFJI_9 = new TPad("CYQKOOVFJI_9", "CYQKOOVFJI_9",0.01,0.41,0.24,0.59);
   CYQKOOVFJI_9->Draw();
   CYQKOOVFJI_9->cd();
   CYQKOOVFJI_9->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_9->SetFillColor(0);
   CYQKOOVFJI_9->SetBorderMode(0);
   CYQKOOVFJI_9->SetBorderSize(2);
   CYQKOOVFJI_9->SetFrameBorderMode(0);
   CYQKOOVFJI_9->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *AOCJUOHWNO = new TH1F("AOCJUOHWNO","NumberOfIsolatedLeptons",5,0,5);
   AOCJUOHWNO->SetBinContent(1,0.6390635);
   AOCJUOHWNO->SetBinContent(2,0.3107232);
   AOCJUOHWNO->SetBinContent(3,0.05007311);
   AOCJUOHWNO->SetBinContent(4,0.0001246775);
   AOCJUOHWNO->SetBinContent(5,1.558468e-05);
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
   AOCJUOHWNO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_9->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_10
   CYQKOOVFJI_10 = new TPad("CYQKOOVFJI_10", "CYQKOOVFJI_10",0.26,0.41,0.49,0.59);
   CYQKOOVFJI_10->Draw();
   CYQKOOVFJI_10->cd();
   CYQKOOVFJI_10->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_10->SetFillColor(0);
   CYQKOOVFJI_10->SetBorderMode(0);
   CYQKOOVFJI_10->SetBorderSize(2);
   CYQKOOVFJI_10->SetFrameBorderMode(0);
   CYQKOOVFJI_10->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *DWSZRJWBSM = new TH1F("DWSZRJWBSM","NumberOfIsolatedLeptons",5,0,5);
   DWSZRJWBSM->SetBinContent(1,0.8655938);
   DWSZRJWBSM->SetBinContent(2,0.1335285);
   DWSZRJWBSM->SetBinContent(3,0.0008776724);
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
   DWSZRJWBSM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_10->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_11
   CYQKOOVFJI_11 = new TPad("CYQKOOVFJI_11", "CYQKOOVFJI_11",0.51,0.41,0.74,0.59);
   CYQKOOVFJI_11->Draw();
   CYQKOOVFJI_11->cd();
   CYQKOOVFJI_11->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_11->SetFillColor(0);
   CYQKOOVFJI_11->SetBorderMode(0);
   CYQKOOVFJI_11->SetBorderSize(2);
   CYQKOOVFJI_11->SetFrameBorderMode(0);
   CYQKOOVFJI_11->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *WHSQMGMENT = new TH1F("WHSQMGMENT","NumberOfIsolatedLeptons",5,0,5);
   WHSQMGMENT->SetBinContent(1,0.6378007);
   WHSQMGMENT->SetBinContent(2,0.3124695);
   WHSQMGMENT->SetBinContent(3,0.04961263);
   WHSQMGMENT->SetBinContent(4,0.000117147);
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
   WHSQMGMENT->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_11->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_12
   CYQKOOVFJI_12 = new TPad("CYQKOOVFJI_12", "CYQKOOVFJI_12",0.76,0.41,0.99,0.59);
   CYQKOOVFJI_12->Draw();
   CYQKOOVFJI_12->cd();
   CYQKOOVFJI_12->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_12->SetFillColor(0);
   CYQKOOVFJI_12->SetBorderMode(0);
   CYQKOOVFJI_12->SetBorderSize(2);
   CYQKOOVFJI_12->SetFrameBorderMode(0);
   CYQKOOVFJI_12->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *QRLVXZTFYY = new TH1F("QRLVXZTFYY","NumberOfIsolatedLeptons",5,0,5);
   QRLVXZTFYY->SetBinContent(1,0.8642197);
   QRLVXZTFYY->SetBinContent(2,0.1345927);
   QRLVXZTFYY->SetBinContent(3,0.001170887);
   QRLVXZTFYY->SetBinContent(4,1.672697e-05);
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
   QRLVXZTFYY->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_12->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_13
   CYQKOOVFJI_13 = new TPad("CYQKOOVFJI_13", "CYQKOOVFJI_13",0.01,0.21,0.24,0.39);
   CYQKOOVFJI_13->Draw();
   CYQKOOVFJI_13->cd();
   CYQKOOVFJI_13->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_13->SetFillColor(0);
   CYQKOOVFJI_13->SetBorderMode(0);
   CYQKOOVFJI_13->SetBorderSize(2);
   CYQKOOVFJI_13->SetFrameBorderMode(0);
   CYQKOOVFJI_13->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *TGHGHRSFVJ = new TH1F("TGHGHRSFVJ","NumberOfIsolatedLeptons",5,0,5);
   TGHGHRSFVJ->SetBinContent(1,0.7354631);
   TGHGHRSFVJ->SetBinContent(2,0.2635989);
   TGHGHRSFVJ->SetBinContent(3,0.0009380578);
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
   TGHGHRSFVJ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_13->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_14
   CYQKOOVFJI_14 = new TPad("CYQKOOVFJI_14", "CYQKOOVFJI_14",0.26,0.21,0.49,0.39);
   CYQKOOVFJI_14->Draw();
   CYQKOOVFJI_14->cd();
   CYQKOOVFJI_14->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_14->SetFillColor(0);
   CYQKOOVFJI_14->SetBorderMode(0);
   CYQKOOVFJI_14->SetBorderSize(2);
   CYQKOOVFJI_14->SetFrameBorderMode(0);
   CYQKOOVFJI_14->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *JLBJZWMTOU = new TH1F("JLBJZWMTOU","NumberOfIsolatedLeptons",5,0,5);
   JLBJZWMTOU->SetBinContent(1,0.9904001);
   JLBJZWMTOU->SetBinContent(2,0.009553873);
   JLBJZWMTOU->SetBinContent(3,4.598754e-05);
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
   JLBJZWMTOU->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_14->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_15
   CYQKOOVFJI_15 = new TPad("CYQKOOVFJI_15", "CYQKOOVFJI_15",0.51,0.21,0.74,0.39);
   CYQKOOVFJI_15->Draw();
   CYQKOOVFJI_15->cd();
   CYQKOOVFJI_15->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_15->SetFillColor(0);
   CYQKOOVFJI_15->SetBorderMode(0);
   CYQKOOVFJI_15->SetBorderSize(2);
   CYQKOOVFJI_15->SetFrameBorderMode(0);
   CYQKOOVFJI_15->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *JTOGXLRXYW = new TH1F("JTOGXLRXYW","NumberOfIsolatedLeptons",5,0,5);
   JTOGXLRXYW->SetBinContent(1,0.7356122);
   JTOGXLRXYW->SetBinContent(2,0.2636521);
   JTOGXLRXYW->SetBinContent(3,0.0007356709);
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
   JTOGXLRXYW->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_15->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_16
   CYQKOOVFJI_16 = new TPad("CYQKOOVFJI_16", "CYQKOOVFJI_16",0.76,0.21,0.99,0.39);
   CYQKOOVFJI_16->Draw();
   CYQKOOVFJI_16->cd();
   CYQKOOVFJI_16->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_16->SetFillColor(0);
   CYQKOOVFJI_16->SetBorderMode(0);
   CYQKOOVFJI_16->SetBorderSize(2);
   CYQKOOVFJI_16->SetFrameBorderMode(0);
   CYQKOOVFJI_16->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *CIZDJLHPPM = new TH1F("CIZDJLHPPM","NumberOfIsolatedLeptons",5,0,5);
   CIZDJLHPPM->SetBinContent(1,0.9906632);
   CIZDJLHPPM->SetBinContent(2,0.009302034);
   CIZDJLHPPM->SetBinContent(3,3.475246e-05);
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
   CIZDJLHPPM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_16->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_17
   CYQKOOVFJI_17 = new TPad("CYQKOOVFJI_17", "CYQKOOVFJI_17",0.01,0.01,0.24,0.19);
   CYQKOOVFJI_17->Draw();
   CYQKOOVFJI_17->cd();
   CYQKOOVFJI_17->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_17->SetFillColor(0);
   CYQKOOVFJI_17->SetBorderMode(0);
   CYQKOOVFJI_17->SetBorderSize(2);
   CYQKOOVFJI_17->SetFrameBorderMode(0);
   CYQKOOVFJI_17->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *MWSGXEKQYX = new TH1F("MWSGXEKQYX","NumberOfIsolatedLeptons",5,0,5);
   MWSGXEKQYX->SetBinContent(1,0.7608829);
   MWSGXEKQYX->SetBinContent(2,0.2171128);
   MWSGXEKQYX->SetBinContent(3,0.02194439);
   MWSGXEKQYX->SetBinContent(4,5.986002e-05);
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
   MWSGXEKQYX->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_17->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_18
   CYQKOOVFJI_18 = new TPad("CYQKOOVFJI_18", "CYQKOOVFJI_18",0.26,0.01,0.49,0.19);
   CYQKOOVFJI_18->Draw();
   CYQKOOVFJI_18->cd();
   CYQKOOVFJI_18->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_18->SetFillColor(0);
   CYQKOOVFJI_18->SetBorderMode(0);
   CYQKOOVFJI_18->SetBorderSize(2);
   CYQKOOVFJI_18->SetFrameBorderMode(0);
   CYQKOOVFJI_18->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *SZKTSTKVAN = new TH1F("SZKTSTKVAN","NumberOfIsolatedLeptons",5,0,5);
   SZKTSTKVAN->SetBinContent(1,0.8613378);
   SZKTSTKVAN->SetBinContent(2,0.1373169);
   SZKTSTKVAN->SetBinContent(3,0.001345366);
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
   SZKTSTKVAN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_18->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_19
   CYQKOOVFJI_19 = new TPad("CYQKOOVFJI_19", "CYQKOOVFJI_19",0.51,0.01,0.74,0.19);
   CYQKOOVFJI_19->Draw();
   CYQKOOVFJI_19->cd();
   CYQKOOVFJI_19->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_19->SetFillColor(0);
   CYQKOOVFJI_19->SetBorderMode(0);
   CYQKOOVFJI_19->SetBorderSize(2);
   CYQKOOVFJI_19->SetFrameBorderMode(0);
   CYQKOOVFJI_19->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *EIPPRCITOR = new TH1F("EIPPRCITOR","NumberOfIsolatedLeptons",5,0,5);
   EIPPRCITOR->SetBinContent(1,0.8606369);
   EIPPRCITOR->SetBinContent(2,0.1382775);
   EIPPRCITOR->SetBinContent(3,0.00108555);
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
   EIPPRCITOR->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   leg->Draw();
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_19->Modified();
   CYQKOOVFJI->cd();
  
// ------------>Primitives in pad: CYQKOOVFJI_20
   CYQKOOVFJI_20 = new TPad("CYQKOOVFJI_20", "CYQKOOVFJI_20",0.76,0.01,0.99,0.19);
   CYQKOOVFJI_20->Draw();
   CYQKOOVFJI_20->cd();
   CYQKOOVFJI_20->Range(-0.625,-0.1308457,5.625,1.177611);
   CYQKOOVFJI_20->SetFillColor(0);
   CYQKOOVFJI_20->SetBorderMode(0);
   CYQKOOVFJI_20->SetBorderSize(2);
   CYQKOOVFJI_20->SetFrameBorderMode(0);
   CYQKOOVFJI_20->SetFrameBorderMode(0);
   
   TH1F *FYILIUFOAS = new TH1F("FYILIUFOAS","NumberOfIsolatedLeptons",5,0,5);
   FYILIUFOAS->SetBinContent(1,0.9969193);
   FYILIUFOAS->SetBinContent(2,0.0030754);
   FYILIUFOAS->SetBinContent(3,5.322175e-06);
   FYILIUFOAS->SetEntries(1520976);
   FYILIUFOAS->SetStats(0);
   FYILIUFOAS->SetLineStyle(2);
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
   FYILIUFOAS->Draw("");
   
   TH1F *AGNDTWODTW = new TH1F("AGNDTWODTW","NumberOfIsolatedLeptons",5,0,5);
   AGNDTWODTW->SetBinContent(1,0.9823023);
   AGNDTWODTW->SetBinContent(2,0.01759742);
   AGNDTWODTW->SetBinContent(3,0.0001002691);
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
   AGNDTWODTW->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
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
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   CYQKOOVFJI_20->Modified();
   CYQKOOVFJI->cd();
   TBox *box = new TBox(0,0,1,1);
   box->Draw();
   CYQKOOVFJI->Modified();
   CYQKOOVFJI->cd();
   CYQKOOVFJI->SetSelected(CYQKOOVFJI);
}
