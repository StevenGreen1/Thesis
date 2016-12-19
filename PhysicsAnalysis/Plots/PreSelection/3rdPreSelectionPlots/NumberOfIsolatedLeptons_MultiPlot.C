{
//=========Macro generated from canvas: REKRDRTOXY/NumberOfIsolatedLeptons
//=========  (Wed Sep 28 10:50:36 2016) by ROOT version5.34/30
   TCanvas *REKRDRTOXY = new TCanvas("REKRDRTOXY", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   REKRDRTOXY->SetHighLightColor(2);
   REKRDRTOXY->Range(0,0,1,1);
   REKRDRTOXY->SetFillColor(0);
   REKRDRTOXY->SetBorderMode(0);
   REKRDRTOXY->SetBorderSize(2);
   REKRDRTOXY->SetLogy();
   REKRDRTOXY->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: REKRDRTOXY_1
   TPad *REKRDRTOXY_1 = new TPad("REKRDRTOXY_1", "REKRDRTOXY_1",0.01,0.81,0.24,0.99);
   REKRDRTOXY_1->Draw();
   REKRDRTOXY_1->cd();
   REKRDRTOXY_1->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_1->SetFillColor(0);
   REKRDRTOXY_1->SetBorderMode(0);
   REKRDRTOXY_1->SetBorderSize(2);
   REKRDRTOXY_1->SetFrameBorderMode(0);
   REKRDRTOXY_1->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetFillColor(1);
   RJCGXZMBFD->SetFillStyle(3001);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("RJCGXZMBFD","ee_nunuqqqq","f");
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
   REKRDRTOXY_1->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_2
   REKRDRTOXY_2 = new TPad("REKRDRTOXY_2", "REKRDRTOXY_2",0.26,0.81,0.49,0.99);
   REKRDRTOXY_2->Draw();
   REKRDRTOXY_2->cd();
   REKRDRTOXY_2->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_2->SetFillColor(0);
   REKRDRTOXY_2->SetBorderMode(0);
   REKRDRTOXY_2->SetBorderSize(2);
   REKRDRTOXY_2->SetFrameBorderMode(0);
   REKRDRTOXY_2->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *XIDBNLOMPM = new TH1F("XIDBNLOMPM","NumberOfIsolatedLeptons",5,0,5);
   XIDBNLOMPM->SetBinContent(1,1);
   XIDBNLOMPM->SetEntries(94165);
   XIDBNLOMPM->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000066");
   XIDBNLOMPM->SetFillColor(ci);
   XIDBNLOMPM->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   XIDBNLOMPM->SetLineColor(ci);
   XIDBNLOMPM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   XIDBNLOMPM->GetXaxis()->SetLabelFont(42);
   XIDBNLOMPM->GetXaxis()->SetLabelSize(0.035);
   XIDBNLOMPM->GetXaxis()->SetTitleSize(0.035);
   XIDBNLOMPM->GetXaxis()->SetTitleFont(42);
   XIDBNLOMPM->GetYaxis()->SetTitle("Entries");
   XIDBNLOMPM->GetYaxis()->SetLabelFont(42);
   XIDBNLOMPM->GetYaxis()->SetLabelSize(0.035);
   XIDBNLOMPM->GetYaxis()->SetTitleSize(0.035);
   XIDBNLOMPM->GetYaxis()->SetTitleFont(42);
   XIDBNLOMPM->GetZaxis()->SetLabelFont(42);
   XIDBNLOMPM->GetZaxis()->SetLabelSize(0.035);
   XIDBNLOMPM->GetZaxis()->SetTitleSize(0.035);
   XIDBNLOMPM->GetZaxis()->SetTitleFont(42);
   XIDBNLOMPM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("XIDBNLOMPM","ee_lnuqqqq","f");

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
   REKRDRTOXY_2->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_3
   REKRDRTOXY_3 = new TPad("REKRDRTOXY_3", "REKRDRTOXY_3",0.51,0.81,0.74,0.99);
   REKRDRTOXY_3->Draw();
   REKRDRTOXY_3->cd();
   REKRDRTOXY_3->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_3->SetFillColor(0);
   REKRDRTOXY_3->SetBorderMode(0);
   REKRDRTOXY_3->SetBorderSize(2);
   REKRDRTOXY_3->SetFrameBorderMode(0);
   REKRDRTOXY_3->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *PCMIMYRNXO = new TH1F("PCMIMYRNXO","NumberOfIsolatedLeptons",5,0,5);
   PCMIMYRNXO->SetBinContent(1,1);
   PCMIMYRNXO->SetEntries(5111);
   PCMIMYRNXO->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   PCMIMYRNXO->SetFillColor(ci);
   PCMIMYRNXO->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   PCMIMYRNXO->SetLineColor(ci);
   PCMIMYRNXO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PCMIMYRNXO->GetXaxis()->SetLabelFont(42);
   PCMIMYRNXO->GetXaxis()->SetLabelSize(0.035);
   PCMIMYRNXO->GetXaxis()->SetTitleSize(0.035);
   PCMIMYRNXO->GetXaxis()->SetTitleFont(42);
   PCMIMYRNXO->GetYaxis()->SetTitle("Entries");
   PCMIMYRNXO->GetYaxis()->SetLabelFont(42);
   PCMIMYRNXO->GetYaxis()->SetLabelSize(0.035);
   PCMIMYRNXO->GetYaxis()->SetTitleSize(0.035);
   PCMIMYRNXO->GetYaxis()->SetTitleFont(42);
   PCMIMYRNXO->GetZaxis()->SetLabelFont(42);
   PCMIMYRNXO->GetZaxis()->SetLabelSize(0.035);
   PCMIMYRNXO->GetZaxis()->SetTitleSize(0.035);
   PCMIMYRNXO->GetZaxis()->SetTitleFont(42);
   PCMIMYRNXO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("PCMIMYRNXO","ee_llqqqq","f");

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
   REKRDRTOXY_3->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_4
   REKRDRTOXY_4 = new TPad("REKRDRTOXY_4", "REKRDRTOXY_4",0.76,0.81,0.99,0.99);
   REKRDRTOXY_4->Draw();
   REKRDRTOXY_4->cd();
   REKRDRTOXY_4->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_4->SetFillColor(0);
   REKRDRTOXY_4->SetBorderMode(0);
   REKRDRTOXY_4->SetBorderSize(2);
   REKRDRTOXY_4->SetFrameBorderMode(0);
   REKRDRTOXY_4->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *XATXYOGDVR = new TH1F("XATXYOGDVR","NumberOfIsolatedLeptons",5,0,5);
   XATXYOGDVR->SetBinContent(1,1);
   XATXYOGDVR->SetEntries(1091);
   XATXYOGDVR->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   XATXYOGDVR->SetFillColor(ci);
   XATXYOGDVR->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   XATXYOGDVR->SetLineColor(ci);
   XATXYOGDVR->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   XATXYOGDVR->GetXaxis()->SetLabelFont(42);
   XATXYOGDVR->GetXaxis()->SetLabelSize(0.035);
   XATXYOGDVR->GetXaxis()->SetTitleSize(0.035);
   XATXYOGDVR->GetXaxis()->SetTitleFont(42);
   XATXYOGDVR->GetYaxis()->SetTitle("Entries");
   XATXYOGDVR->GetYaxis()->SetLabelFont(42);
   XATXYOGDVR->GetYaxis()->SetLabelSize(0.035);
   XATXYOGDVR->GetYaxis()->SetTitleSize(0.035);
   XATXYOGDVR->GetYaxis()->SetTitleFont(42);
   XATXYOGDVR->GetZaxis()->SetLabelFont(42);
   XATXYOGDVR->GetZaxis()->SetLabelSize(0.035);
   XATXYOGDVR->GetZaxis()->SetTitleSize(0.035);
   XATXYOGDVR->GetZaxis()->SetTitleFont(42);
   XATXYOGDVR->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("XATXYOGDVR","ee_qqqq","f");

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
   REKRDRTOXY_4->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_5
   REKRDRTOXY_5 = new TPad("REKRDRTOXY_5", "REKRDRTOXY_5",0.01,0.61,0.24,0.79);
   REKRDRTOXY_5->Draw();
   REKRDRTOXY_5->cd();
   REKRDRTOXY_5->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_5->SetFillColor(0);
   REKRDRTOXY_5->SetBorderMode(0);
   REKRDRTOXY_5->SetBorderSize(2);
   REKRDRTOXY_5->SetFrameBorderMode(0);
   REKRDRTOXY_5->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *HTWVTCSNCO = new TH1F("HTWVTCSNCO","NumberOfIsolatedLeptons",5,0,5);
   HTWVTCSNCO->SetBinContent(1,1);
   HTWVTCSNCO->SetEntries(9146);
   HTWVTCSNCO->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   HTWVTCSNCO->SetFillColor(ci);
   HTWVTCSNCO->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   HTWVTCSNCO->SetLineColor(ci);
   HTWVTCSNCO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HTWVTCSNCO->GetXaxis()->SetLabelFont(42);
   HTWVTCSNCO->GetXaxis()->SetLabelSize(0.035);
   HTWVTCSNCO->GetXaxis()->SetTitleSize(0.035);
   HTWVTCSNCO->GetXaxis()->SetTitleFont(42);
   HTWVTCSNCO->GetYaxis()->SetTitle("Entries");
   HTWVTCSNCO->GetYaxis()->SetLabelFont(42);
   HTWVTCSNCO->GetYaxis()->SetLabelSize(0.035);
   HTWVTCSNCO->GetYaxis()->SetTitleSize(0.035);
   HTWVTCSNCO->GetYaxis()->SetTitleFont(42);
   HTWVTCSNCO->GetZaxis()->SetLabelFont(42);
   HTWVTCSNCO->GetZaxis()->SetLabelSize(0.035);
   HTWVTCSNCO->GetZaxis()->SetTitleSize(0.035);
   HTWVTCSNCO->GetZaxis()->SetTitleFont(42);
   HTWVTCSNCO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("HTWVTCSNCO","ee_nunuqq","f");

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
   REKRDRTOXY_5->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_6
   REKRDRTOXY_6 = new TPad("REKRDRTOXY_6", "REKRDRTOXY_6",0.26,0.61,0.49,0.79);
   REKRDRTOXY_6->Draw();
   REKRDRTOXY_6->cd();
   REKRDRTOXY_6->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_6->SetFillColor(0);
   REKRDRTOXY_6->SetBorderMode(0);
   REKRDRTOXY_6->SetBorderSize(2);
   REKRDRTOXY_6->SetFrameBorderMode(0);
   REKRDRTOXY_6->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *LQRKJNLDVZ = new TH1F("LQRKJNLDVZ","NumberOfIsolatedLeptons",5,0,5);
   LQRKJNLDVZ->SetBinContent(1,1);
   LQRKJNLDVZ->SetEntries(87253);
   LQRKJNLDVZ->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   LQRKJNLDVZ->SetFillColor(ci);
   LQRKJNLDVZ->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   LQRKJNLDVZ->SetLineColor(ci);
   LQRKJNLDVZ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   LQRKJNLDVZ->GetXaxis()->SetLabelFont(42);
   LQRKJNLDVZ->GetXaxis()->SetLabelSize(0.035);
   LQRKJNLDVZ->GetXaxis()->SetTitleSize(0.035);
   LQRKJNLDVZ->GetXaxis()->SetTitleFont(42);
   LQRKJNLDVZ->GetYaxis()->SetTitle("Entries");
   LQRKJNLDVZ->GetYaxis()->SetLabelFont(42);
   LQRKJNLDVZ->GetYaxis()->SetLabelSize(0.035);
   LQRKJNLDVZ->GetYaxis()->SetTitleSize(0.035);
   LQRKJNLDVZ->GetYaxis()->SetTitleFont(42);
   LQRKJNLDVZ->GetZaxis()->SetLabelFont(42);
   LQRKJNLDVZ->GetZaxis()->SetLabelSize(0.035);
   LQRKJNLDVZ->GetZaxis()->SetTitleSize(0.035);
   LQRKJNLDVZ->GetZaxis()->SetTitleFont(42);
   LQRKJNLDVZ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LQRKJNLDVZ","ee_lnuqq","f");

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
   REKRDRTOXY_6->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_7
   REKRDRTOXY_7 = new TPad("REKRDRTOXY_7", "REKRDRTOXY_7",0.51,0.61,0.74,0.79);
   REKRDRTOXY_7->Draw();
   REKRDRTOXY_7->cd();
   REKRDRTOXY_7->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_7->SetFillColor(0);
   REKRDRTOXY_7->SetBorderMode(0);
   REKRDRTOXY_7->SetBorderSize(2);
   REKRDRTOXY_7->SetFrameBorderMode(0);
   REKRDRTOXY_7->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *LVEPQCNTOB = new TH1F("LVEPQCNTOB","NumberOfIsolatedLeptons",5,0,5);
   LVEPQCNTOB->SetBinContent(1,1);
   LVEPQCNTOB->SetEntries(1412);
   LVEPQCNTOB->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   LVEPQCNTOB->SetFillColor(ci);
   LVEPQCNTOB->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   LVEPQCNTOB->SetLineColor(ci);
   LVEPQCNTOB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   LVEPQCNTOB->GetXaxis()->SetLabelFont(42);
   LVEPQCNTOB->GetXaxis()->SetLabelSize(0.035);
   LVEPQCNTOB->GetXaxis()->SetTitleSize(0.035);
   LVEPQCNTOB->GetXaxis()->SetTitleFont(42);
   LVEPQCNTOB->GetYaxis()->SetTitle("Entries");
   LVEPQCNTOB->GetYaxis()->SetLabelFont(42);
   LVEPQCNTOB->GetYaxis()->SetLabelSize(0.035);
   LVEPQCNTOB->GetYaxis()->SetTitleSize(0.035);
   LVEPQCNTOB->GetYaxis()->SetTitleFont(42);
   LVEPQCNTOB->GetZaxis()->SetLabelFont(42);
   LVEPQCNTOB->GetZaxis()->SetLabelSize(0.035);
   LVEPQCNTOB->GetZaxis()->SetTitleSize(0.035);
   LVEPQCNTOB->GetZaxis()->SetTitleFont(42);
   LVEPQCNTOB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LVEPQCNTOB","ee_qqll","f");

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
   REKRDRTOXY_7->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_8
   REKRDRTOXY_8 = new TPad("REKRDRTOXY_8", "REKRDRTOXY_8",0.76,0.61,0.99,0.79);
   REKRDRTOXY_8->Draw();
   REKRDRTOXY_8->cd();
   REKRDRTOXY_8->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_8->SetFillColor(0);
   REKRDRTOXY_8->SetBorderMode(0);
   REKRDRTOXY_8->SetBorderSize(2);
   REKRDRTOXY_8->SetFrameBorderMode(0);
   REKRDRTOXY_8->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *ASQXTXJESA = new TH1F("ASQXTXJESA","NumberOfIsolatedLeptons",5,0,5);
   ASQXTXJESA->SetBinContent(1,1);
   ASQXTXJESA->SetEntries(1514);
   ASQXTXJESA->SetStats(0);

   ci = TColor::GetColor("#006633");
   ASQXTXJESA->SetFillColor(ci);
   ASQXTXJESA->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   ASQXTXJESA->SetLineColor(ci);
   ASQXTXJESA->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ASQXTXJESA->GetXaxis()->SetLabelFont(42);
   ASQXTXJESA->GetXaxis()->SetLabelSize(0.035);
   ASQXTXJESA->GetXaxis()->SetTitleSize(0.035);
   ASQXTXJESA->GetXaxis()->SetTitleFont(42);
   ASQXTXJESA->GetYaxis()->SetTitle("Entries");
   ASQXTXJESA->GetYaxis()->SetLabelFont(42);
   ASQXTXJESA->GetYaxis()->SetLabelSize(0.035);
   ASQXTXJESA->GetYaxis()->SetTitleSize(0.035);
   ASQXTXJESA->GetYaxis()->SetTitleFont(42);
   ASQXTXJESA->GetZaxis()->SetLabelFont(42);
   ASQXTXJESA->GetZaxis()->SetLabelSize(0.035);
   ASQXTXJESA->GetZaxis()->SetTitleSize(0.035);
   ASQXTXJESA->GetZaxis()->SetTitleFont(42);
   ASQXTXJESA->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ASQXTXJESA","ee_qq","f");

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
   REKRDRTOXY_8->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_9
   REKRDRTOXY_9 = new TPad("REKRDRTOXY_9", "REKRDRTOXY_9",0.01,0.41,0.24,0.59);
   REKRDRTOXY_9->Draw();
   REKRDRTOXY_9->cd();
   REKRDRTOXY_9->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_9->SetFillColor(0);
   REKRDRTOXY_9->SetBorderMode(0);
   REKRDRTOXY_9->SetBorderSize(2);
   REKRDRTOXY_9->SetFrameBorderMode(0);
   REKRDRTOXY_9->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *IRAAVOMSZT = new TH1F("IRAAVOMSZT","NumberOfIsolatedLeptons",5,0,5);
   IRAAVOMSZT->SetBinContent(1,1);
   IRAAVOMSZT->SetEntries(133);
   IRAAVOMSZT->SetStats(0);
   IRAAVOMSZT->SetFillColor(3);
   IRAAVOMSZT->SetFillStyle(3001);
   IRAAVOMSZT->SetLineColor(3);
   IRAAVOMSZT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   IRAAVOMSZT->GetXaxis()->SetLabelFont(42);
   IRAAVOMSZT->GetXaxis()->SetLabelSize(0.035);
   IRAAVOMSZT->GetXaxis()->SetTitleSize(0.035);
   IRAAVOMSZT->GetXaxis()->SetTitleFont(42);
   IRAAVOMSZT->GetYaxis()->SetTitle("Entries");
   IRAAVOMSZT->GetYaxis()->SetLabelFont(42);
   IRAAVOMSZT->GetYaxis()->SetLabelSize(0.035);
   IRAAVOMSZT->GetYaxis()->SetTitleSize(0.035);
   IRAAVOMSZT->GetYaxis()->SetTitleFont(42);
   IRAAVOMSZT->GetZaxis()->SetLabelFont(42);
   IRAAVOMSZT->GetZaxis()->SetLabelSize(0.035);
   IRAAVOMSZT->GetZaxis()->SetTitleSize(0.035);
   IRAAVOMSZT->GetZaxis()->SetTitleFont(42);
   IRAAVOMSZT->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("IRAAVOMSZT","egamma_qqqqe_EPA","f");
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
   REKRDRTOXY_9->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_10
   REKRDRTOXY_10 = new TPad("REKRDRTOXY_10", "REKRDRTOXY_10",0.26,0.41,0.49,0.59);
   REKRDRTOXY_10->Draw();
   REKRDRTOXY_10->cd();
   REKRDRTOXY_10->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_10->SetFillColor(0);
   REKRDRTOXY_10->SetBorderMode(0);
   REKRDRTOXY_10->SetBorderSize(2);
   REKRDRTOXY_10->SetFrameBorderMode(0);
   REKRDRTOXY_10->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *ERMOJWEPFV = new TH1F("ERMOJWEPFV","NumberOfIsolatedLeptons",5,0,5);
   ERMOJWEPFV->SetBinContent(1,1);
   ERMOJWEPFV->SetEntries(40);
   ERMOJWEPFV->SetStats(0);

   ci = TColor::GetColor("#990033");
   ERMOJWEPFV->SetFillColor(ci);
   ERMOJWEPFV->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   ERMOJWEPFV->SetLineColor(ci);
   ERMOJWEPFV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERMOJWEPFV->GetXaxis()->SetLabelFont(42);
   ERMOJWEPFV->GetXaxis()->SetLabelSize(0.035);
   ERMOJWEPFV->GetXaxis()->SetTitleSize(0.035);
   ERMOJWEPFV->GetXaxis()->SetTitleFont(42);
   ERMOJWEPFV->GetYaxis()->SetTitle("Entries");
   ERMOJWEPFV->GetYaxis()->SetLabelFont(42);
   ERMOJWEPFV->GetYaxis()->SetLabelSize(0.035);
   ERMOJWEPFV->GetYaxis()->SetTitleSize(0.035);
   ERMOJWEPFV->GetYaxis()->SetTitleFont(42);
   ERMOJWEPFV->GetZaxis()->SetLabelFont(42);
   ERMOJWEPFV->GetZaxis()->SetLabelSize(0.035);
   ERMOJWEPFV->GetZaxis()->SetTitleSize(0.035);
   ERMOJWEPFV->GetZaxis()->SetTitleFont(42);
   ERMOJWEPFV->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ERMOJWEPFV","egamma_qqqqe_BS","f");

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
   REKRDRTOXY_10->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_11
   REKRDRTOXY_11 = new TPad("REKRDRTOXY_11", "REKRDRTOXY_11",0.51,0.41,0.74,0.59);
   REKRDRTOXY_11->Draw();
   REKRDRTOXY_11->cd();
   REKRDRTOXY_11->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_11->SetFillColor(0);
   REKRDRTOXY_11->SetBorderMode(0);
   REKRDRTOXY_11->SetBorderSize(2);
   REKRDRTOXY_11->SetFrameBorderMode(0);
   REKRDRTOXY_11->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *FPKUXJKSQP = new TH1F("FPKUXJKSQP","NumberOfIsolatedLeptons",5,0,5);
   FPKUXJKSQP->SetBinContent(1,1);
   FPKUXJKSQP->SetEntries(207);
   FPKUXJKSQP->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   FPKUXJKSQP->SetFillColor(ci);
   FPKUXJKSQP->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   FPKUXJKSQP->SetLineColor(ci);
   FPKUXJKSQP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   FPKUXJKSQP->GetXaxis()->SetLabelFont(42);
   FPKUXJKSQP->GetXaxis()->SetLabelSize(0.035);
   FPKUXJKSQP->GetXaxis()->SetTitleSize(0.035);
   FPKUXJKSQP->GetXaxis()->SetTitleFont(42);
   FPKUXJKSQP->GetYaxis()->SetTitle("Entries");
   FPKUXJKSQP->GetYaxis()->SetLabelFont(42);
   FPKUXJKSQP->GetYaxis()->SetLabelSize(0.035);
   FPKUXJKSQP->GetYaxis()->SetTitleSize(0.035);
   FPKUXJKSQP->GetYaxis()->SetTitleFont(42);
   FPKUXJKSQP->GetZaxis()->SetLabelFont(42);
   FPKUXJKSQP->GetZaxis()->SetLabelSize(0.035);
   FPKUXJKSQP->GetZaxis()->SetTitleSize(0.035);
   FPKUXJKSQP->GetZaxis()->SetTitleFont(42);
   FPKUXJKSQP->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("FPKUXJKSQP","gammae_qqqqe_EPA","f");

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
   REKRDRTOXY_11->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_12
   REKRDRTOXY_12 = new TPad("REKRDRTOXY_12", "REKRDRTOXY_12",0.76,0.41,0.99,0.59);
   REKRDRTOXY_12->Draw();
   REKRDRTOXY_12->cd();
   REKRDRTOXY_12->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_12->SetFillColor(0);
   REKRDRTOXY_12->SetBorderMode(0);
   REKRDRTOXY_12->SetBorderSize(2);
   REKRDRTOXY_12->SetFrameBorderMode(0);
   REKRDRTOXY_12->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *ZBJIWMPPYF = new TH1F("ZBJIWMPPYF","NumberOfIsolatedLeptons",5,0,5);
   ZBJIWMPPYF->SetBinContent(1,1);
   ZBJIWMPPYF->SetEntries(23);
   ZBJIWMPPYF->SetStats(0);

   ci = TColor::GetColor("#a42400");
   ZBJIWMPPYF->SetFillColor(ci);
   ZBJIWMPPYF->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   ZBJIWMPPYF->SetLineColor(ci);
   ZBJIWMPPYF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZBJIWMPPYF->GetXaxis()->SetLabelFont(42);
   ZBJIWMPPYF->GetXaxis()->SetLabelSize(0.035);
   ZBJIWMPPYF->GetXaxis()->SetTitleSize(0.035);
   ZBJIWMPPYF->GetXaxis()->SetTitleFont(42);
   ZBJIWMPPYF->GetYaxis()->SetTitle("Entries");
   ZBJIWMPPYF->GetYaxis()->SetLabelFont(42);
   ZBJIWMPPYF->GetYaxis()->SetLabelSize(0.035);
   ZBJIWMPPYF->GetYaxis()->SetTitleSize(0.035);
   ZBJIWMPPYF->GetYaxis()->SetTitleFont(42);
   ZBJIWMPPYF->GetZaxis()->SetLabelFont(42);
   ZBJIWMPPYF->GetZaxis()->SetLabelSize(0.035);
   ZBJIWMPPYF->GetZaxis()->SetTitleSize(0.035);
   ZBJIWMPPYF->GetZaxis()->SetTitleFont(42);
   ZBJIWMPPYF->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ZBJIWMPPYF","gammae_qqqqe_BS","f");

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
   REKRDRTOXY_12->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_13
   REKRDRTOXY_13 = new TPad("REKRDRTOXY_13", "REKRDRTOXY_13",0.01,0.21,0.24,0.39);
   REKRDRTOXY_13->Draw();
   REKRDRTOXY_13->cd();
   REKRDRTOXY_13->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_13->SetFillColor(0);
   REKRDRTOXY_13->SetBorderMode(0);
   REKRDRTOXY_13->SetBorderSize(2);
   REKRDRTOXY_13->SetFrameBorderMode(0);
   REKRDRTOXY_13->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *PYIBGXZFHT = new TH1F("PYIBGXZFHT","NumberOfIsolatedLeptons",5,0,5);
   PYIBGXZFHT->SetBinContent(1,1);
   PYIBGXZFHT->SetEntries(15208);
   PYIBGXZFHT->SetStats(0);

   ci = TColor::GetColor("#001544");
   PYIBGXZFHT->SetFillColor(ci);
   PYIBGXZFHT->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   PYIBGXZFHT->SetLineColor(ci);
   PYIBGXZFHT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PYIBGXZFHT->GetXaxis()->SetLabelFont(42);
   PYIBGXZFHT->GetXaxis()->SetLabelSize(0.035);
   PYIBGXZFHT->GetXaxis()->SetTitleSize(0.035);
   PYIBGXZFHT->GetXaxis()->SetTitleFont(42);
   PYIBGXZFHT->GetYaxis()->SetTitle("Entries");
   PYIBGXZFHT->GetYaxis()->SetLabelFont(42);
   PYIBGXZFHT->GetYaxis()->SetLabelSize(0.035);
   PYIBGXZFHT->GetYaxis()->SetTitleSize(0.035);
   PYIBGXZFHT->GetYaxis()->SetTitleFont(42);
   PYIBGXZFHT->GetZaxis()->SetLabelFont(42);
   PYIBGXZFHT->GetZaxis()->SetLabelSize(0.035);
   PYIBGXZFHT->GetZaxis()->SetTitleSize(0.035);
   PYIBGXZFHT->GetZaxis()->SetTitleFont(42);
   PYIBGXZFHT->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("PYIBGXZFHT","egamma_qqqqnu_EPA","f");

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
   REKRDRTOXY_13->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_14
   REKRDRTOXY_14 = new TPad("REKRDRTOXY_14", "REKRDRTOXY_14",0.26,0.21,0.49,0.39);
   REKRDRTOXY_14->Draw();
   REKRDRTOXY_14->cd();
   REKRDRTOXY_14->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_14->SetFillColor(0);
   REKRDRTOXY_14->SetBorderMode(0);
   REKRDRTOXY_14->SetBorderSize(2);
   REKRDRTOXY_14->SetFrameBorderMode(0);
   REKRDRTOXY_14->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *AEKVAIHDUV = new TH1F("AEKVAIHDUV","NumberOfIsolatedLeptons",5,0,5);
   AEKVAIHDUV->SetBinContent(1,1);
   AEKVAIHDUV->SetEntries(18700);
   AEKVAIHDUV->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   AEKVAIHDUV->SetFillColor(ci);
   AEKVAIHDUV->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   AEKVAIHDUV->SetLineColor(ci);
   AEKVAIHDUV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AEKVAIHDUV->GetXaxis()->SetLabelFont(42);
   AEKVAIHDUV->GetXaxis()->SetLabelSize(0.035);
   AEKVAIHDUV->GetXaxis()->SetTitleSize(0.035);
   AEKVAIHDUV->GetXaxis()->SetTitleFont(42);
   AEKVAIHDUV->GetYaxis()->SetTitle("Entries");
   AEKVAIHDUV->GetYaxis()->SetLabelFont(42);
   AEKVAIHDUV->GetYaxis()->SetLabelSize(0.035);
   AEKVAIHDUV->GetYaxis()->SetTitleSize(0.035);
   AEKVAIHDUV->GetYaxis()->SetTitleFont(42);
   AEKVAIHDUV->GetZaxis()->SetLabelFont(42);
   AEKVAIHDUV->GetZaxis()->SetLabelSize(0.035);
   AEKVAIHDUV->GetZaxis()->SetTitleSize(0.035);
   AEKVAIHDUV->GetZaxis()->SetTitleFont(42);
   AEKVAIHDUV->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("AEKVAIHDUV","egamma_qqqqnu_BS","f");

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
   REKRDRTOXY_14->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_15
   REKRDRTOXY_15 = new TPad("REKRDRTOXY_15", "REKRDRTOXY_15",0.51,0.21,0.74,0.39);
   REKRDRTOXY_15->Draw();
   REKRDRTOXY_15->cd();
   REKRDRTOXY_15->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_15->SetFillColor(0);
   REKRDRTOXY_15->SetBorderMode(0);
   REKRDRTOXY_15->SetBorderSize(2);
   REKRDRTOXY_15->SetFrameBorderMode(0);
   REKRDRTOXY_15->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *QAFADHGHKW = new TH1F("QAFADHGHKW","NumberOfIsolatedLeptons",5,0,5);
   QAFADHGHKW->SetBinContent(1,1);
   QAFADHGHKW->SetEntries(15182);
   QAFADHGHKW->SetStats(0);

   ci = TColor::GetColor("#620e00");
   QAFADHGHKW->SetFillColor(ci);
   QAFADHGHKW->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   QAFADHGHKW->SetLineColor(ci);
   QAFADHGHKW->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QAFADHGHKW->GetXaxis()->SetLabelFont(42);
   QAFADHGHKW->GetXaxis()->SetLabelSize(0.035);
   QAFADHGHKW->GetXaxis()->SetTitleSize(0.035);
   QAFADHGHKW->GetXaxis()->SetTitleFont(42);
   QAFADHGHKW->GetYaxis()->SetTitle("Entries");
   QAFADHGHKW->GetYaxis()->SetLabelFont(42);
   QAFADHGHKW->GetYaxis()->SetLabelSize(0.035);
   QAFADHGHKW->GetYaxis()->SetTitleSize(0.035);
   QAFADHGHKW->GetYaxis()->SetTitleFont(42);
   QAFADHGHKW->GetZaxis()->SetLabelFont(42);
   QAFADHGHKW->GetZaxis()->SetLabelSize(0.035);
   QAFADHGHKW->GetZaxis()->SetTitleSize(0.035);
   QAFADHGHKW->GetZaxis()->SetTitleFont(42);
   QAFADHGHKW->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("QAFADHGHKW","gammae_qqqqnu_EPA","f");

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
   REKRDRTOXY_15->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_16
   REKRDRTOXY_16 = new TPad("REKRDRTOXY_16", "REKRDRTOXY_16",0.76,0.21,0.99,0.39);
   REKRDRTOXY_16->Draw();
   REKRDRTOXY_16->cd();
   REKRDRTOXY_16->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_16->SetFillColor(0);
   REKRDRTOXY_16->SetBorderMode(0);
   REKRDRTOXY_16->SetBorderSize(2);
   REKRDRTOXY_16->SetFrameBorderMode(0);
   REKRDRTOXY_16->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *KBMKEFQHLN = new TH1F("KBMKEFQHLN","NumberOfIsolatedLeptons",5,0,5);
   KBMKEFQHLN->SetBinContent(1,1);
   KBMKEFQHLN->SetEntries(18666);
   KBMKEFQHLN->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   KBMKEFQHLN->SetFillColor(ci);
   KBMKEFQHLN->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   KBMKEFQHLN->SetLineColor(ci);
   KBMKEFQHLN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KBMKEFQHLN->GetXaxis()->SetLabelFont(42);
   KBMKEFQHLN->GetXaxis()->SetLabelSize(0.035);
   KBMKEFQHLN->GetXaxis()->SetTitleSize(0.035);
   KBMKEFQHLN->GetXaxis()->SetTitleFont(42);
   KBMKEFQHLN->GetYaxis()->SetTitle("Entries");
   KBMKEFQHLN->GetYaxis()->SetLabelFont(42);
   KBMKEFQHLN->GetYaxis()->SetLabelSize(0.035);
   KBMKEFQHLN->GetYaxis()->SetTitleSize(0.035);
   KBMKEFQHLN->GetYaxis()->SetTitleFont(42);
   KBMKEFQHLN->GetZaxis()->SetLabelFont(42);
   KBMKEFQHLN->GetZaxis()->SetLabelSize(0.035);
   KBMKEFQHLN->GetZaxis()->SetTitleSize(0.035);
   KBMKEFQHLN->GetZaxis()->SetTitleFont(42);
   KBMKEFQHLN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KBMKEFQHLN","gammae_qqqqnu_BS","f");

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
   REKRDRTOXY_16->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_17
   REKRDRTOXY_17 = new TPad("REKRDRTOXY_17", "REKRDRTOXY_17",0.01,0.01,0.24,0.19);
   REKRDRTOXY_17->Draw();
   REKRDRTOXY_17->cd();
   REKRDRTOXY_17->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_17->SetFillColor(0);
   REKRDRTOXY_17->SetBorderMode(0);
   REKRDRTOXY_17->SetBorderSize(2);
   REKRDRTOXY_17->SetFrameBorderMode(0);
   REKRDRTOXY_17->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *KESXNHSXRB = new TH1F("KESXNHSXRB","NumberOfIsolatedLeptons",5,0,5);
   KESXNHSXRB->SetBinContent(1,1);
   KESXNHSXRB->SetEntries(112);
   KESXNHSXRB->SetStats(0);
   KESXNHSXRB->SetFillColor(4);
   KESXNHSXRB->SetFillStyle(3001);
   KESXNHSXRB->SetLineColor(4);
   KESXNHSXRB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KESXNHSXRB->GetXaxis()->SetLabelFont(42);
   KESXNHSXRB->GetXaxis()->SetLabelSize(0.035);
   KESXNHSXRB->GetXaxis()->SetTitleSize(0.035);
   KESXNHSXRB->GetXaxis()->SetTitleFont(42);
   KESXNHSXRB->GetYaxis()->SetTitle("Entries");
   KESXNHSXRB->GetYaxis()->SetLabelFont(42);
   KESXNHSXRB->GetYaxis()->SetLabelSize(0.035);
   KESXNHSXRB->GetYaxis()->SetTitleSize(0.035);
   KESXNHSXRB->GetYaxis()->SetTitleFont(42);
   KESXNHSXRB->GetZaxis()->SetLabelFont(42);
   KESXNHSXRB->GetZaxis()->SetLabelSize(0.035);
   KESXNHSXRB->GetZaxis()->SetTitleSize(0.035);
   KESXNHSXRB->GetZaxis()->SetTitleFont(42);
   KESXNHSXRB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KESXNHSXRB","gammagamma_qqqq_EPA_EPA","f");
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
   REKRDRTOXY_17->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_18
   REKRDRTOXY_18 = new TPad("REKRDRTOXY_18", "REKRDRTOXY_18",0.26,0.01,0.49,0.19);
   REKRDRTOXY_18->Draw();
   REKRDRTOXY_18->cd();
   REKRDRTOXY_18->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_18->SetFillColor(0);
   REKRDRTOXY_18->SetBorderMode(0);
   REKRDRTOXY_18->SetBorderSize(2);
   REKRDRTOXY_18->SetFrameBorderMode(0);
   REKRDRTOXY_18->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *RVQIIGBWMG = new TH1F("RVQIIGBWMG","NumberOfIsolatedLeptons",5,0,5);
   RVQIIGBWMG->SetBinContent(1,1);
   RVQIIGBWMG->SetEntries(77);
   RVQIIGBWMG->SetStats(0);

   ci = TColor::GetColor("#007db5");
   RVQIIGBWMG->SetFillColor(ci);
   RVQIIGBWMG->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   RVQIIGBWMG->SetLineColor(ci);
   RVQIIGBWMG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RVQIIGBWMG->GetXaxis()->SetLabelFont(42);
   RVQIIGBWMG->GetXaxis()->SetLabelSize(0.035);
   RVQIIGBWMG->GetXaxis()->SetTitleSize(0.035);
   RVQIIGBWMG->GetXaxis()->SetTitleFont(42);
   RVQIIGBWMG->GetYaxis()->SetTitle("Entries");
   RVQIIGBWMG->GetYaxis()->SetLabelFont(42);
   RVQIIGBWMG->GetYaxis()->SetLabelSize(0.035);
   RVQIIGBWMG->GetYaxis()->SetTitleSize(0.035);
   RVQIIGBWMG->GetYaxis()->SetTitleFont(42);
   RVQIIGBWMG->GetZaxis()->SetLabelFont(42);
   RVQIIGBWMG->GetZaxis()->SetLabelSize(0.035);
   RVQIIGBWMG->GetZaxis()->SetTitleSize(0.035);
   RVQIIGBWMG->GetZaxis()->SetTitleFont(42);
   RVQIIGBWMG->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("RVQIIGBWMG","gammagamma_qqqq_EPA_BS","f");

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
   REKRDRTOXY_18->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_19
   REKRDRTOXY_19 = new TPad("REKRDRTOXY_19", "REKRDRTOXY_19",0.51,0.01,0.74,0.19);
   REKRDRTOXY_19->Draw();
   REKRDRTOXY_19->cd();
   REKRDRTOXY_19->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_19->SetFillColor(0);
   REKRDRTOXY_19->SetBorderMode(0);
   REKRDRTOXY_19->SetBorderSize(2);
   REKRDRTOXY_19->SetFrameBorderMode(0);
   REKRDRTOXY_19->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *LFHWFXBIDR = new TH1F("LFHWFXBIDR","NumberOfIsolatedLeptons",5,0,5);
   LFHWFXBIDR->SetBinContent(1,1);
   LFHWFXBIDR->SetEntries(47);
   LFHWFXBIDR->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   LFHWFXBIDR->SetFillColor(ci);
   LFHWFXBIDR->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   LFHWFXBIDR->SetLineColor(ci);
   LFHWFXBIDR->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   LFHWFXBIDR->GetXaxis()->SetLabelFont(42);
   LFHWFXBIDR->GetXaxis()->SetLabelSize(0.035);
   LFHWFXBIDR->GetXaxis()->SetTitleSize(0.035);
   LFHWFXBIDR->GetXaxis()->SetTitleFont(42);
   LFHWFXBIDR->GetYaxis()->SetTitle("Entries");
   LFHWFXBIDR->GetYaxis()->SetLabelFont(42);
   LFHWFXBIDR->GetYaxis()->SetLabelSize(0.035);
   LFHWFXBIDR->GetYaxis()->SetTitleSize(0.035);
   LFHWFXBIDR->GetYaxis()->SetTitleFont(42);
   LFHWFXBIDR->GetZaxis()->SetLabelFont(42);
   LFHWFXBIDR->GetZaxis()->SetLabelSize(0.035);
   LFHWFXBIDR->GetZaxis()->SetTitleSize(0.035);
   LFHWFXBIDR->GetZaxis()->SetTitleFont(42);
   LFHWFXBIDR->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LFHWFXBIDR","gammagamma_qqqq_BS_EPA","f");

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
   REKRDRTOXY_19->Modified();
   REKRDRTOXY->cd();
  
// ------------>Primitives in pad: REKRDRTOXY_20
   REKRDRTOXY_20 = new TPad("REKRDRTOXY_20", "REKRDRTOXY_20",0.76,0.01,0.99,0.19);
   REKRDRTOXY_20->Draw();
   REKRDRTOXY_20->cd();
   REKRDRTOXY_20->Range(-0.625,-0.13125,5.625,1.18125);
   REKRDRTOXY_20->SetFillColor(0);
   REKRDRTOXY_20->SetBorderMode(0);
   REKRDRTOXY_20->SetBorderSize(2);
   REKRDRTOXY_20->SetFrameBorderMode(0);
   REKRDRTOXY_20->SetFrameBorderMode(0);
   
   TH1F *RJCGXZMBFD = new TH1F("RJCGXZMBFD","NumberOfIsolatedLeptons",5,0,5);
   RJCGXZMBFD->SetBinContent(1,1);
   RJCGXZMBFD->SetEntries(825376);
   RJCGXZMBFD->SetStats(0);
   RJCGXZMBFD->SetLineStyle(2);
   RJCGXZMBFD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RJCGXZMBFD->GetXaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetXaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetXaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetYaxis()->SetTitle("Entries");
   RJCGXZMBFD->GetYaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetYaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetYaxis()->SetTitleFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelFont(42);
   RJCGXZMBFD->GetZaxis()->SetLabelSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleSize(0.035);
   RJCGXZMBFD->GetZaxis()->SetTitleFont(42);
   RJCGXZMBFD->Draw("");
   
   TH1F *EULZQRCXGM = new TH1F("EULZQRCXGM","NumberOfIsolatedLeptons",5,0,5);
   EULZQRCXGM->SetBinContent(1,1);
   EULZQRCXGM->SetEntries(5);
   EULZQRCXGM->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   EULZQRCXGM->SetFillColor(ci);
   EULZQRCXGM->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   EULZQRCXGM->SetLineColor(ci);
   EULZQRCXGM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EULZQRCXGM->GetXaxis()->SetLabelFont(42);
   EULZQRCXGM->GetXaxis()->SetLabelSize(0.035);
   EULZQRCXGM->GetXaxis()->SetTitleSize(0.035);
   EULZQRCXGM->GetXaxis()->SetTitleFont(42);
   EULZQRCXGM->GetYaxis()->SetTitle("Entries");
   EULZQRCXGM->GetYaxis()->SetLabelFont(42);
   EULZQRCXGM->GetYaxis()->SetLabelSize(0.035);
   EULZQRCXGM->GetYaxis()->SetTitleSize(0.035);
   EULZQRCXGM->GetYaxis()->SetTitleFont(42);
   EULZQRCXGM->GetZaxis()->SetLabelFont(42);
   EULZQRCXGM->GetZaxis()->SetLabelSize(0.035);
   EULZQRCXGM->GetZaxis()->SetTitleSize(0.035);
   EULZQRCXGM->GetZaxis()->SetTitleFont(42);
   EULZQRCXGM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("EULZQRCXGM","gammagamma_qqqq_BS_BS","f");

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
   REKRDRTOXY_20->Modified();
   REKRDRTOXY->cd();
   TBox *box = new TBox(0,0,1,1);
   box->Draw();
   REKRDRTOXY->Modified();
   REKRDRTOXY->cd();
   REKRDRTOXY->SetSelected(REKRDRTOXY);
}
