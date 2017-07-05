{
//=========Macro generated from canvas: UMVGUVTRLA/NumberOfIsolatedLeptons
//=========  (Wed Apr 26 09:07:52 2017) by ROOT version5.34/30
   TCanvas *UMVGUVTRLA = new TCanvas("UMVGUVTRLA", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   UMVGUVTRLA->SetHighLightColor(2);
   UMVGUVTRLA->Range(0,0,1,1);
   UMVGUVTRLA->SetFillColor(0);
   UMVGUVTRLA->SetBorderMode(0);
   UMVGUVTRLA->SetBorderSize(2);
   UMVGUVTRLA->SetLogy();
   UMVGUVTRLA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: UMVGUVTRLA_1
   TPad *UMVGUVTRLA_1 = new TPad("UMVGUVTRLA_1", "UMVGUVTRLA_1",0.01,0.81,0.24,0.99);
   UMVGUVTRLA_1->Draw();
   UMVGUVTRLA_1->cd();
   UMVGUVTRLA_1->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_1->SetFillColor(0);
   UMVGUVTRLA_1->SetBorderMode(0);
   UMVGUVTRLA_1->SetBorderSize(2);
   UMVGUVTRLA_1->SetFrameBorderMode(0);
   UMVGUVTRLA_1->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetFillColor(1);
   NQVJKQJKRV->SetFillStyle(3001);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NQVJKQJKRV","ee_nunuqqqq","f");
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
   UMVGUVTRLA_1->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_2
   UMVGUVTRLA_2 = new TPad("UMVGUVTRLA_2", "UMVGUVTRLA_2",0.26,0.81,0.49,0.99);
   UMVGUVTRLA_2->Draw();
   UMVGUVTRLA_2->cd();
   UMVGUVTRLA_2->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_2->SetFillColor(0);
   UMVGUVTRLA_2->SetBorderMode(0);
   UMVGUVTRLA_2->SetBorderSize(2);
   UMVGUVTRLA_2->SetFrameBorderMode(0);
   UMVGUVTRLA_2->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *HWFODKTDIT = new TH1F("HWFODKTDIT","NumberOfIsolatedLeptons",10,0,10);
   HWFODKTDIT->SetBinContent(1,1);
   HWFODKTDIT->SetEntries(19209);
   HWFODKTDIT->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000066");
   HWFODKTDIT->SetFillColor(ci);
   HWFODKTDIT->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   HWFODKTDIT->SetLineColor(ci);
   HWFODKTDIT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HWFODKTDIT->GetXaxis()->SetLabelFont(42);
   HWFODKTDIT->GetXaxis()->SetLabelSize(0.035);
   HWFODKTDIT->GetXaxis()->SetTitleSize(0.035);
   HWFODKTDIT->GetXaxis()->SetTitleFont(42);
   HWFODKTDIT->GetYaxis()->SetTitle("Entries");
   HWFODKTDIT->GetYaxis()->SetLabelFont(42);
   HWFODKTDIT->GetYaxis()->SetLabelSize(0.035);
   HWFODKTDIT->GetYaxis()->SetTitleSize(0.035);
   HWFODKTDIT->GetYaxis()->SetTitleFont(42);
   HWFODKTDIT->GetZaxis()->SetLabelFont(42);
   HWFODKTDIT->GetZaxis()->SetLabelSize(0.035);
   HWFODKTDIT->GetZaxis()->SetTitleSize(0.035);
   HWFODKTDIT->GetZaxis()->SetTitleFont(42);
   HWFODKTDIT->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("HWFODKTDIT","ee_lnuqqqq","f");

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
   UMVGUVTRLA_2->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_3
   UMVGUVTRLA_3 = new TPad("UMVGUVTRLA_3", "UMVGUVTRLA_3",0.51,0.81,0.74,0.99);
   UMVGUVTRLA_3->Draw();
   UMVGUVTRLA_3->cd();
   UMVGUVTRLA_3->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_3->SetFillColor(0);
   UMVGUVTRLA_3->SetBorderMode(0);
   UMVGUVTRLA_3->SetBorderSize(2);
   UMVGUVTRLA_3->SetFrameBorderMode(0);
   UMVGUVTRLA_3->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *QORXUKHNMJ = new TH1F("QORXUKHNMJ","NumberOfIsolatedLeptons",10,0,10);
   QORXUKHNMJ->SetBinContent(1,1);
   QORXUKHNMJ->SetEntries(678);
   QORXUKHNMJ->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   QORXUKHNMJ->SetFillColor(ci);
   QORXUKHNMJ->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   QORXUKHNMJ->SetLineColor(ci);
   QORXUKHNMJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QORXUKHNMJ->GetXaxis()->SetLabelFont(42);
   QORXUKHNMJ->GetXaxis()->SetLabelSize(0.035);
   QORXUKHNMJ->GetXaxis()->SetTitleSize(0.035);
   QORXUKHNMJ->GetXaxis()->SetTitleFont(42);
   QORXUKHNMJ->GetYaxis()->SetTitle("Entries");
   QORXUKHNMJ->GetYaxis()->SetLabelFont(42);
   QORXUKHNMJ->GetYaxis()->SetLabelSize(0.035);
   QORXUKHNMJ->GetYaxis()->SetTitleSize(0.035);
   QORXUKHNMJ->GetYaxis()->SetTitleFont(42);
   QORXUKHNMJ->GetZaxis()->SetLabelFont(42);
   QORXUKHNMJ->GetZaxis()->SetLabelSize(0.035);
   QORXUKHNMJ->GetZaxis()->SetTitleSize(0.035);
   QORXUKHNMJ->GetZaxis()->SetTitleFont(42);
   QORXUKHNMJ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("QORXUKHNMJ","ee_llqqqq","f");

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
   UMVGUVTRLA_3->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_4
   UMVGUVTRLA_4 = new TPad("UMVGUVTRLA_4", "UMVGUVTRLA_4",0.76,0.81,0.99,0.99);
   UMVGUVTRLA_4->Draw();
   UMVGUVTRLA_4->cd();
   UMVGUVTRLA_4->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_4->SetFillColor(0);
   UMVGUVTRLA_4->SetBorderMode(0);
   UMVGUVTRLA_4->SetBorderSize(2);
   UMVGUVTRLA_4->SetFrameBorderMode(0);
   UMVGUVTRLA_4->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *QJQTEKOUYV = new TH1F("QJQTEKOUYV","NumberOfIsolatedLeptons",10,0,10);
   QJQTEKOUYV->SetBinContent(1,1);
   QJQTEKOUYV->SetEntries(266);
   QJQTEKOUYV->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   QJQTEKOUYV->SetFillColor(ci);
   QJQTEKOUYV->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   QJQTEKOUYV->SetLineColor(ci);
   QJQTEKOUYV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QJQTEKOUYV->GetXaxis()->SetLabelFont(42);
   QJQTEKOUYV->GetXaxis()->SetLabelSize(0.035);
   QJQTEKOUYV->GetXaxis()->SetTitleSize(0.035);
   QJQTEKOUYV->GetXaxis()->SetTitleFont(42);
   QJQTEKOUYV->GetYaxis()->SetTitle("Entries");
   QJQTEKOUYV->GetYaxis()->SetLabelFont(42);
   QJQTEKOUYV->GetYaxis()->SetLabelSize(0.035);
   QJQTEKOUYV->GetYaxis()->SetTitleSize(0.035);
   QJQTEKOUYV->GetYaxis()->SetTitleFont(42);
   QJQTEKOUYV->GetZaxis()->SetLabelFont(42);
   QJQTEKOUYV->GetZaxis()->SetLabelSize(0.035);
   QJQTEKOUYV->GetZaxis()->SetTitleSize(0.035);
   QJQTEKOUYV->GetZaxis()->SetTitleFont(42);
   QJQTEKOUYV->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("QJQTEKOUYV","ee_qqqq","f");

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
   UMVGUVTRLA_4->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_5
   UMVGUVTRLA_5 = new TPad("UMVGUVTRLA_5", "UMVGUVTRLA_5",0.01,0.61,0.24,0.79);
   UMVGUVTRLA_5->Draw();
   UMVGUVTRLA_5->cd();
   UMVGUVTRLA_5->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_5->SetFillColor(0);
   UMVGUVTRLA_5->SetBorderMode(0);
   UMVGUVTRLA_5->SetBorderSize(2);
   UMVGUVTRLA_5->SetFrameBorderMode(0);
   UMVGUVTRLA_5->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *CTZREZXJQL = new TH1F("CTZREZXJQL","NumberOfIsolatedLeptons",10,0,10);
   CTZREZXJQL->SetBinContent(1,1);
   CTZREZXJQL->SetEntries(1322);
   CTZREZXJQL->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   CTZREZXJQL->SetFillColor(ci);
   CTZREZXJQL->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   CTZREZXJQL->SetLineColor(ci);
   CTZREZXJQL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   CTZREZXJQL->GetXaxis()->SetLabelFont(42);
   CTZREZXJQL->GetXaxis()->SetLabelSize(0.035);
   CTZREZXJQL->GetXaxis()->SetTitleSize(0.035);
   CTZREZXJQL->GetXaxis()->SetTitleFont(42);
   CTZREZXJQL->GetYaxis()->SetTitle("Entries");
   CTZREZXJQL->GetYaxis()->SetLabelFont(42);
   CTZREZXJQL->GetYaxis()->SetLabelSize(0.035);
   CTZREZXJQL->GetYaxis()->SetTitleSize(0.035);
   CTZREZXJQL->GetYaxis()->SetTitleFont(42);
   CTZREZXJQL->GetZaxis()->SetLabelFont(42);
   CTZREZXJQL->GetZaxis()->SetLabelSize(0.035);
   CTZREZXJQL->GetZaxis()->SetTitleSize(0.035);
   CTZREZXJQL->GetZaxis()->SetTitleFont(42);
   CTZREZXJQL->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("CTZREZXJQL","ee_nunuqq","f");

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
   UMVGUVTRLA_5->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_6
   UMVGUVTRLA_6 = new TPad("UMVGUVTRLA_6", "UMVGUVTRLA_6",0.26,0.61,0.49,0.79);
   UMVGUVTRLA_6->Draw();
   UMVGUVTRLA_6->cd();
   UMVGUVTRLA_6->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_6->SetFillColor(0);
   UMVGUVTRLA_6->SetBorderMode(0);
   UMVGUVTRLA_6->SetBorderSize(2);
   UMVGUVTRLA_6->SetFrameBorderMode(0);
   UMVGUVTRLA_6->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *PDNRXURVOY = new TH1F("PDNRXURVOY","NumberOfIsolatedLeptons",10,0,10);
   PDNRXURVOY->SetBinContent(1,1);
   PDNRXURVOY->SetEntries(1509);
   PDNRXURVOY->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   PDNRXURVOY->SetFillColor(ci);
   PDNRXURVOY->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   PDNRXURVOY->SetLineColor(ci);
   PDNRXURVOY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PDNRXURVOY->GetXaxis()->SetLabelFont(42);
   PDNRXURVOY->GetXaxis()->SetLabelSize(0.035);
   PDNRXURVOY->GetXaxis()->SetTitleSize(0.035);
   PDNRXURVOY->GetXaxis()->SetTitleFont(42);
   PDNRXURVOY->GetYaxis()->SetTitle("Entries");
   PDNRXURVOY->GetYaxis()->SetLabelFont(42);
   PDNRXURVOY->GetYaxis()->SetLabelSize(0.035);
   PDNRXURVOY->GetYaxis()->SetTitleSize(0.035);
   PDNRXURVOY->GetYaxis()->SetTitleFont(42);
   PDNRXURVOY->GetZaxis()->SetLabelFont(42);
   PDNRXURVOY->GetZaxis()->SetLabelSize(0.035);
   PDNRXURVOY->GetZaxis()->SetTitleSize(0.035);
   PDNRXURVOY->GetZaxis()->SetTitleFont(42);
   PDNRXURVOY->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("PDNRXURVOY","ee_lnuqq","f");

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
   UMVGUVTRLA_6->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_7
   UMVGUVTRLA_7 = new TPad("UMVGUVTRLA_7", "UMVGUVTRLA_7",0.51,0.61,0.74,0.79);
   UMVGUVTRLA_7->Draw();
   UMVGUVTRLA_7->cd();
   UMVGUVTRLA_7->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_7->SetFillColor(0);
   UMVGUVTRLA_7->SetBorderMode(0);
   UMVGUVTRLA_7->SetBorderSize(2);
   UMVGUVTRLA_7->SetFrameBorderMode(0);
   UMVGUVTRLA_7->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *IFGNQSKMYJ = new TH1F("IFGNQSKMYJ","NumberOfIsolatedLeptons",10,0,10);
   IFGNQSKMYJ->SetBinContent(1,1);
   IFGNQSKMYJ->SetEntries(60);
   IFGNQSKMYJ->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   IFGNQSKMYJ->SetFillColor(ci);
   IFGNQSKMYJ->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   IFGNQSKMYJ->SetLineColor(ci);
   IFGNQSKMYJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   IFGNQSKMYJ->GetXaxis()->SetLabelFont(42);
   IFGNQSKMYJ->GetXaxis()->SetLabelSize(0.035);
   IFGNQSKMYJ->GetXaxis()->SetTitleSize(0.035);
   IFGNQSKMYJ->GetXaxis()->SetTitleFont(42);
   IFGNQSKMYJ->GetYaxis()->SetTitle("Entries");
   IFGNQSKMYJ->GetYaxis()->SetLabelFont(42);
   IFGNQSKMYJ->GetYaxis()->SetLabelSize(0.035);
   IFGNQSKMYJ->GetYaxis()->SetTitleSize(0.035);
   IFGNQSKMYJ->GetYaxis()->SetTitleFont(42);
   IFGNQSKMYJ->GetZaxis()->SetLabelFont(42);
   IFGNQSKMYJ->GetZaxis()->SetLabelSize(0.035);
   IFGNQSKMYJ->GetZaxis()->SetTitleSize(0.035);
   IFGNQSKMYJ->GetZaxis()->SetTitleFont(42);
   IFGNQSKMYJ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("IFGNQSKMYJ","ee_qqll","f");

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
   UMVGUVTRLA_7->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_8
   UMVGUVTRLA_8 = new TPad("UMVGUVTRLA_8", "UMVGUVTRLA_8",0.76,0.61,0.99,0.79);
   UMVGUVTRLA_8->Draw();
   UMVGUVTRLA_8->cd();
   UMVGUVTRLA_8->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_8->SetFillColor(0);
   UMVGUVTRLA_8->SetBorderMode(0);
   UMVGUVTRLA_8->SetBorderSize(2);
   UMVGUVTRLA_8->SetFrameBorderMode(0);
   UMVGUVTRLA_8->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *ABFCLRUBND = new TH1F("ABFCLRUBND","NumberOfIsolatedLeptons",10,0,10);
   ABFCLRUBND->SetBinContent(1,1);
   ABFCLRUBND->SetEntries(64);
   ABFCLRUBND->SetStats(0);

   ci = TColor::GetColor("#006633");
   ABFCLRUBND->SetFillColor(ci);
   ABFCLRUBND->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   ABFCLRUBND->SetLineColor(ci);
   ABFCLRUBND->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ABFCLRUBND->GetXaxis()->SetLabelFont(42);
   ABFCLRUBND->GetXaxis()->SetLabelSize(0.035);
   ABFCLRUBND->GetXaxis()->SetTitleSize(0.035);
   ABFCLRUBND->GetXaxis()->SetTitleFont(42);
   ABFCLRUBND->GetYaxis()->SetTitle("Entries");
   ABFCLRUBND->GetYaxis()->SetLabelFont(42);
   ABFCLRUBND->GetYaxis()->SetLabelSize(0.035);
   ABFCLRUBND->GetYaxis()->SetTitleSize(0.035);
   ABFCLRUBND->GetYaxis()->SetTitleFont(42);
   ABFCLRUBND->GetZaxis()->SetLabelFont(42);
   ABFCLRUBND->GetZaxis()->SetLabelSize(0.035);
   ABFCLRUBND->GetZaxis()->SetTitleSize(0.035);
   ABFCLRUBND->GetZaxis()->SetTitleFont(42);
   ABFCLRUBND->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ABFCLRUBND","ee_qq","f");

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
   UMVGUVTRLA_8->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_9
   UMVGUVTRLA_9 = new TPad("UMVGUVTRLA_9", "UMVGUVTRLA_9",0.01,0.41,0.24,0.59);
   UMVGUVTRLA_9->Draw();
   UMVGUVTRLA_9->cd();
   UMVGUVTRLA_9->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_9->SetFillColor(0);
   UMVGUVTRLA_9->SetBorderMode(0);
   UMVGUVTRLA_9->SetBorderSize(2);
   UMVGUVTRLA_9->SetFrameBorderMode(0);
   UMVGUVTRLA_9->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *ABJVCYQYQR = new TH1F("ABJVCYQYQR","NumberOfIsolatedLeptons",10,0,10);
   ABJVCYQYQR->SetBinContent(1,1);
   ABJVCYQYQR->SetEntries(7);
   ABJVCYQYQR->SetStats(0);
   ABJVCYQYQR->SetFillColor(3);
   ABJVCYQYQR->SetFillStyle(3001);
   ABJVCYQYQR->SetLineColor(3);
   ABJVCYQYQR->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ABJVCYQYQR->GetXaxis()->SetLabelFont(42);
   ABJVCYQYQR->GetXaxis()->SetLabelSize(0.035);
   ABJVCYQYQR->GetXaxis()->SetTitleSize(0.035);
   ABJVCYQYQR->GetXaxis()->SetTitleFont(42);
   ABJVCYQYQR->GetYaxis()->SetTitle("Entries");
   ABJVCYQYQR->GetYaxis()->SetLabelFont(42);
   ABJVCYQYQR->GetYaxis()->SetLabelSize(0.035);
   ABJVCYQYQR->GetYaxis()->SetTitleSize(0.035);
   ABJVCYQYQR->GetYaxis()->SetTitleFont(42);
   ABJVCYQYQR->GetZaxis()->SetLabelFont(42);
   ABJVCYQYQR->GetZaxis()->SetLabelSize(0.035);
   ABJVCYQYQR->GetZaxis()->SetTitleSize(0.035);
   ABJVCYQYQR->GetZaxis()->SetTitleFont(42);
   ABJVCYQYQR->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ABJVCYQYQR","egamma_qqqqe_EPA","f");
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
   UMVGUVTRLA_9->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_10
   UMVGUVTRLA_10 = new TPad("UMVGUVTRLA_10", "UMVGUVTRLA_10",0.26,0.41,0.49,0.59);
   UMVGUVTRLA_10->Draw();
   UMVGUVTRLA_10->cd();
   UMVGUVTRLA_10->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_10->SetFillColor(0);
   UMVGUVTRLA_10->SetBorderMode(0);
   UMVGUVTRLA_10->SetBorderSize(2);
   UMVGUVTRLA_10->SetFrameBorderMode(0);
   UMVGUVTRLA_10->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *YNBSTBQAOS = new TH1F("YNBSTBQAOS","NumberOfIsolatedLeptons",10,0,10);
   YNBSTBQAOS->SetBinContent(1,1);
   YNBSTBQAOS->SetEntries(2);
   YNBSTBQAOS->SetStats(0);

   ci = TColor::GetColor("#990033");
   YNBSTBQAOS->SetFillColor(ci);
   YNBSTBQAOS->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   YNBSTBQAOS->SetLineColor(ci);
   YNBSTBQAOS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YNBSTBQAOS->GetXaxis()->SetLabelFont(42);
   YNBSTBQAOS->GetXaxis()->SetLabelSize(0.035);
   YNBSTBQAOS->GetXaxis()->SetTitleSize(0.035);
   YNBSTBQAOS->GetXaxis()->SetTitleFont(42);
   YNBSTBQAOS->GetYaxis()->SetTitle("Entries");
   YNBSTBQAOS->GetYaxis()->SetLabelFont(42);
   YNBSTBQAOS->GetYaxis()->SetLabelSize(0.035);
   YNBSTBQAOS->GetYaxis()->SetTitleSize(0.035);
   YNBSTBQAOS->GetYaxis()->SetTitleFont(42);
   YNBSTBQAOS->GetZaxis()->SetLabelFont(42);
   YNBSTBQAOS->GetZaxis()->SetLabelSize(0.035);
   YNBSTBQAOS->GetZaxis()->SetTitleSize(0.035);
   YNBSTBQAOS->GetZaxis()->SetTitleFont(42);
   YNBSTBQAOS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("YNBSTBQAOS","egamma_qqqqe_BS","f");

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
   UMVGUVTRLA_10->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_11
   UMVGUVTRLA_11 = new TPad("UMVGUVTRLA_11", "UMVGUVTRLA_11",0.51,0.41,0.74,0.59);
   UMVGUVTRLA_11->Draw();
   UMVGUVTRLA_11->cd();
   UMVGUVTRLA_11->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_11->SetFillColor(0);
   UMVGUVTRLA_11->SetBorderMode(0);
   UMVGUVTRLA_11->SetBorderSize(2);
   UMVGUVTRLA_11->SetFrameBorderMode(0);
   UMVGUVTRLA_11->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *KDQISQLISO = new TH1F("KDQISQLISO","NumberOfIsolatedLeptons",10,0,10);
   KDQISQLISO->SetBinContent(1,1);
   KDQISQLISO->SetEntries(3);
   KDQISQLISO->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   KDQISQLISO->SetFillColor(ci);
   KDQISQLISO->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   KDQISQLISO->SetLineColor(ci);
   KDQISQLISO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KDQISQLISO->GetXaxis()->SetLabelFont(42);
   KDQISQLISO->GetXaxis()->SetLabelSize(0.035);
   KDQISQLISO->GetXaxis()->SetTitleSize(0.035);
   KDQISQLISO->GetXaxis()->SetTitleFont(42);
   KDQISQLISO->GetYaxis()->SetTitle("Entries");
   KDQISQLISO->GetYaxis()->SetLabelFont(42);
   KDQISQLISO->GetYaxis()->SetLabelSize(0.035);
   KDQISQLISO->GetYaxis()->SetTitleSize(0.035);
   KDQISQLISO->GetYaxis()->SetTitleFont(42);
   KDQISQLISO->GetZaxis()->SetLabelFont(42);
   KDQISQLISO->GetZaxis()->SetLabelSize(0.035);
   KDQISQLISO->GetZaxis()->SetTitleSize(0.035);
   KDQISQLISO->GetZaxis()->SetTitleFont(42);
   KDQISQLISO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KDQISQLISO","gammae_qqqqe_EPA","f");

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
   UMVGUVTRLA_11->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_12
   UMVGUVTRLA_12 = new TPad("UMVGUVTRLA_12", "UMVGUVTRLA_12",0.76,0.41,0.99,0.59);
   UMVGUVTRLA_12->Draw();
   UMVGUVTRLA_12->cd();
   UMVGUVTRLA_12->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_12->SetFillColor(0);
   UMVGUVTRLA_12->SetBorderMode(0);
   UMVGUVTRLA_12->SetBorderSize(2);
   UMVGUVTRLA_12->SetFrameBorderMode(0);
   UMVGUVTRLA_12->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *PJDPKTMQXO = new TH1F("PJDPKTMQXO","NumberOfIsolatedLeptons",10,0,10);
   PJDPKTMQXO->SetBinContent(1,1);
   PJDPKTMQXO->SetEntries(3);
   PJDPKTMQXO->SetStats(0);

   ci = TColor::GetColor("#a42400");
   PJDPKTMQXO->SetFillColor(ci);
   PJDPKTMQXO->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   PJDPKTMQXO->SetLineColor(ci);
   PJDPKTMQXO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PJDPKTMQXO->GetXaxis()->SetLabelFont(42);
   PJDPKTMQXO->GetXaxis()->SetLabelSize(0.035);
   PJDPKTMQXO->GetXaxis()->SetTitleSize(0.035);
   PJDPKTMQXO->GetXaxis()->SetTitleFont(42);
   PJDPKTMQXO->GetYaxis()->SetTitle("Entries");
   PJDPKTMQXO->GetYaxis()->SetLabelFont(42);
   PJDPKTMQXO->GetYaxis()->SetLabelSize(0.035);
   PJDPKTMQXO->GetYaxis()->SetTitleSize(0.035);
   PJDPKTMQXO->GetYaxis()->SetTitleFont(42);
   PJDPKTMQXO->GetZaxis()->SetLabelFont(42);
   PJDPKTMQXO->GetZaxis()->SetLabelSize(0.035);
   PJDPKTMQXO->GetZaxis()->SetTitleSize(0.035);
   PJDPKTMQXO->GetZaxis()->SetTitleFont(42);
   PJDPKTMQXO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("PJDPKTMQXO","gammae_qqqqe_BS","f");

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
   UMVGUVTRLA_12->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_13
   UMVGUVTRLA_13 = new TPad("UMVGUVTRLA_13", "UMVGUVTRLA_13",0.01,0.21,0.24,0.39);
   UMVGUVTRLA_13->Draw();
   UMVGUVTRLA_13->cd();
   UMVGUVTRLA_13->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_13->SetFillColor(0);
   UMVGUVTRLA_13->SetBorderMode(0);
   UMVGUVTRLA_13->SetBorderSize(2);
   UMVGUVTRLA_13->SetFrameBorderMode(0);
   UMVGUVTRLA_13->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *ZAVAFMYUKL = new TH1F("ZAVAFMYUKL","NumberOfIsolatedLeptons",10,0,10);
   ZAVAFMYUKL->SetBinContent(1,1);
   ZAVAFMYUKL->SetEntries(7983);
   ZAVAFMYUKL->SetStats(0);

   ci = TColor::GetColor("#001544");
   ZAVAFMYUKL->SetFillColor(ci);
   ZAVAFMYUKL->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   ZAVAFMYUKL->SetLineColor(ci);
   ZAVAFMYUKL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZAVAFMYUKL->GetXaxis()->SetLabelFont(42);
   ZAVAFMYUKL->GetXaxis()->SetLabelSize(0.035);
   ZAVAFMYUKL->GetXaxis()->SetTitleSize(0.035);
   ZAVAFMYUKL->GetXaxis()->SetTitleFont(42);
   ZAVAFMYUKL->GetYaxis()->SetTitle("Entries");
   ZAVAFMYUKL->GetYaxis()->SetLabelFont(42);
   ZAVAFMYUKL->GetYaxis()->SetLabelSize(0.035);
   ZAVAFMYUKL->GetYaxis()->SetTitleSize(0.035);
   ZAVAFMYUKL->GetYaxis()->SetTitleFont(42);
   ZAVAFMYUKL->GetZaxis()->SetLabelFont(42);
   ZAVAFMYUKL->GetZaxis()->SetLabelSize(0.035);
   ZAVAFMYUKL->GetZaxis()->SetTitleSize(0.035);
   ZAVAFMYUKL->GetZaxis()->SetTitleFont(42);
   ZAVAFMYUKL->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ZAVAFMYUKL","egamma_qqqqnu_EPA","f");

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
   UMVGUVTRLA_13->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_14
   UMVGUVTRLA_14 = new TPad("UMVGUVTRLA_14", "UMVGUVTRLA_14",0.26,0.21,0.49,0.39);
   UMVGUVTRLA_14->Draw();
   UMVGUVTRLA_14->cd();
   UMVGUVTRLA_14->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_14->SetFillColor(0);
   UMVGUVTRLA_14->SetBorderMode(0);
   UMVGUVTRLA_14->SetBorderSize(2);
   UMVGUVTRLA_14->SetFrameBorderMode(0);
   UMVGUVTRLA_14->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *UKIHORQOPV = new TH1F("UKIHORQOPV","NumberOfIsolatedLeptons",10,0,10);
   UKIHORQOPV->SetBinContent(1,1);
   UKIHORQOPV->SetEntries(13081);
   UKIHORQOPV->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   UKIHORQOPV->SetFillColor(ci);
   UKIHORQOPV->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   UKIHORQOPV->SetLineColor(ci);
   UKIHORQOPV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UKIHORQOPV->GetXaxis()->SetLabelFont(42);
   UKIHORQOPV->GetXaxis()->SetLabelSize(0.035);
   UKIHORQOPV->GetXaxis()->SetTitleSize(0.035);
   UKIHORQOPV->GetXaxis()->SetTitleFont(42);
   UKIHORQOPV->GetYaxis()->SetTitle("Entries");
   UKIHORQOPV->GetYaxis()->SetLabelFont(42);
   UKIHORQOPV->GetYaxis()->SetLabelSize(0.035);
   UKIHORQOPV->GetYaxis()->SetTitleSize(0.035);
   UKIHORQOPV->GetYaxis()->SetTitleFont(42);
   UKIHORQOPV->GetZaxis()->SetLabelFont(42);
   UKIHORQOPV->GetZaxis()->SetLabelSize(0.035);
   UKIHORQOPV->GetZaxis()->SetTitleSize(0.035);
   UKIHORQOPV->GetZaxis()->SetTitleFont(42);
   UKIHORQOPV->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("UKIHORQOPV","egamma_qqqqnu_BS","f");

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
   UMVGUVTRLA_14->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_15
   UMVGUVTRLA_15 = new TPad("UMVGUVTRLA_15", "UMVGUVTRLA_15",0.51,0.21,0.74,0.39);
   UMVGUVTRLA_15->Draw();
   UMVGUVTRLA_15->cd();
   UMVGUVTRLA_15->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_15->SetFillColor(0);
   UMVGUVTRLA_15->SetBorderMode(0);
   UMVGUVTRLA_15->SetBorderSize(2);
   UMVGUVTRLA_15->SetFrameBorderMode(0);
   UMVGUVTRLA_15->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *UEPQCLEITP = new TH1F("UEPQCLEITP","NumberOfIsolatedLeptons",10,0,10);
   UEPQCLEITP->SetBinContent(1,1);
   UEPQCLEITP->SetEntries(8117);
   UEPQCLEITP->SetStats(0);

   ci = TColor::GetColor("#620e00");
   UEPQCLEITP->SetFillColor(ci);
   UEPQCLEITP->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   UEPQCLEITP->SetLineColor(ci);
   UEPQCLEITP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UEPQCLEITP->GetXaxis()->SetLabelFont(42);
   UEPQCLEITP->GetXaxis()->SetLabelSize(0.035);
   UEPQCLEITP->GetXaxis()->SetTitleSize(0.035);
   UEPQCLEITP->GetXaxis()->SetTitleFont(42);
   UEPQCLEITP->GetYaxis()->SetTitle("Entries");
   UEPQCLEITP->GetYaxis()->SetLabelFont(42);
   UEPQCLEITP->GetYaxis()->SetLabelSize(0.035);
   UEPQCLEITP->GetYaxis()->SetTitleSize(0.035);
   UEPQCLEITP->GetYaxis()->SetTitleFont(42);
   UEPQCLEITP->GetZaxis()->SetLabelFont(42);
   UEPQCLEITP->GetZaxis()->SetLabelSize(0.035);
   UEPQCLEITP->GetZaxis()->SetTitleSize(0.035);
   UEPQCLEITP->GetZaxis()->SetTitleFont(42);
   UEPQCLEITP->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("UEPQCLEITP","gammae_qqqqnu_EPA","f");

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
   UMVGUVTRLA_15->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_16
   UMVGUVTRLA_16 = new TPad("UMVGUVTRLA_16", "UMVGUVTRLA_16",0.76,0.21,0.99,0.39);
   UMVGUVTRLA_16->Draw();
   UMVGUVTRLA_16->cd();
   UMVGUVTRLA_16->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_16->SetFillColor(0);
   UMVGUVTRLA_16->SetBorderMode(0);
   UMVGUVTRLA_16->SetBorderSize(2);
   UMVGUVTRLA_16->SetFrameBorderMode(0);
   UMVGUVTRLA_16->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *UKHOCRRDHH = new TH1F("UKHOCRRDHH","NumberOfIsolatedLeptons",10,0,10);
   UKHOCRRDHH->SetBinContent(1,1);
   UKHOCRRDHH->SetEntries(13170);
   UKHOCRRDHH->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   UKHOCRRDHH->SetFillColor(ci);
   UKHOCRRDHH->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   UKHOCRRDHH->SetLineColor(ci);
   UKHOCRRDHH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UKHOCRRDHH->GetXaxis()->SetLabelFont(42);
   UKHOCRRDHH->GetXaxis()->SetLabelSize(0.035);
   UKHOCRRDHH->GetXaxis()->SetTitleSize(0.035);
   UKHOCRRDHH->GetXaxis()->SetTitleFont(42);
   UKHOCRRDHH->GetYaxis()->SetTitle("Entries");
   UKHOCRRDHH->GetYaxis()->SetLabelFont(42);
   UKHOCRRDHH->GetYaxis()->SetLabelSize(0.035);
   UKHOCRRDHH->GetYaxis()->SetTitleSize(0.035);
   UKHOCRRDHH->GetYaxis()->SetTitleFont(42);
   UKHOCRRDHH->GetZaxis()->SetLabelFont(42);
   UKHOCRRDHH->GetZaxis()->SetLabelSize(0.035);
   UKHOCRRDHH->GetZaxis()->SetTitleSize(0.035);
   UKHOCRRDHH->GetZaxis()->SetTitleFont(42);
   UKHOCRRDHH->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("UKHOCRRDHH","gammae_qqqqnu_BS","f");

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
   UMVGUVTRLA_16->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_17
   UMVGUVTRLA_17 = new TPad("UMVGUVTRLA_17", "UMVGUVTRLA_17",0.01,0.01,0.24,0.19);
   UMVGUVTRLA_17->Draw();
   UMVGUVTRLA_17->cd();
   UMVGUVTRLA_17->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_17->SetFillColor(0);
   UMVGUVTRLA_17->SetBorderMode(0);
   UMVGUVTRLA_17->SetBorderSize(2);
   UMVGUVTRLA_17->SetFrameBorderMode(0);
   UMVGUVTRLA_17->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *BKUFHYXYCO = new TH1F("BKUFHYXYCO","NumberOfIsolatedLeptons",10,0,10);
   BKUFHYXYCO->SetBinContent(1,1);
   BKUFHYXYCO->SetEntries(6);
   BKUFHYXYCO->SetStats(0);
   BKUFHYXYCO->SetFillColor(4);
   BKUFHYXYCO->SetFillStyle(3001);
   BKUFHYXYCO->SetLineColor(4);
   BKUFHYXYCO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BKUFHYXYCO->GetXaxis()->SetLabelFont(42);
   BKUFHYXYCO->GetXaxis()->SetLabelSize(0.035);
   BKUFHYXYCO->GetXaxis()->SetTitleSize(0.035);
   BKUFHYXYCO->GetXaxis()->SetTitleFont(42);
   BKUFHYXYCO->GetYaxis()->SetTitle("Entries");
   BKUFHYXYCO->GetYaxis()->SetLabelFont(42);
   BKUFHYXYCO->GetYaxis()->SetLabelSize(0.035);
   BKUFHYXYCO->GetYaxis()->SetTitleSize(0.035);
   BKUFHYXYCO->GetYaxis()->SetTitleFont(42);
   BKUFHYXYCO->GetZaxis()->SetLabelFont(42);
   BKUFHYXYCO->GetZaxis()->SetLabelSize(0.035);
   BKUFHYXYCO->GetZaxis()->SetTitleSize(0.035);
   BKUFHYXYCO->GetZaxis()->SetTitleFont(42);
   BKUFHYXYCO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("BKUFHYXYCO","gammagamma_qqqq_EPA_EPA","f");
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
   UMVGUVTRLA_17->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_18
   UMVGUVTRLA_18 = new TPad("UMVGUVTRLA_18", "UMVGUVTRLA_18",0.26,0.01,0.49,0.19);
   UMVGUVTRLA_18->Draw();
   UMVGUVTRLA_18->cd();
   UMVGUVTRLA_18->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_18->SetFillColor(0);
   UMVGUVTRLA_18->SetBorderMode(0);
   UMVGUVTRLA_18->SetBorderSize(2);
   UMVGUVTRLA_18->SetFrameBorderMode(0);
   UMVGUVTRLA_18->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *ATFHBYNNZP = new TH1F("ATFHBYNNZP","NumberOfIsolatedLeptons",10,0,10);
   ATFHBYNNZP->SetBinContent(1,1);
   ATFHBYNNZP->SetEntries(1);
   ATFHBYNNZP->SetStats(0);

   ci = TColor::GetColor("#007db5");
   ATFHBYNNZP->SetFillColor(ci);
   ATFHBYNNZP->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   ATFHBYNNZP->SetLineColor(ci);
   ATFHBYNNZP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ATFHBYNNZP->GetXaxis()->SetLabelFont(42);
   ATFHBYNNZP->GetXaxis()->SetLabelSize(0.035);
   ATFHBYNNZP->GetXaxis()->SetTitleSize(0.035);
   ATFHBYNNZP->GetXaxis()->SetTitleFont(42);
   ATFHBYNNZP->GetYaxis()->SetTitle("Entries");
   ATFHBYNNZP->GetYaxis()->SetLabelFont(42);
   ATFHBYNNZP->GetYaxis()->SetLabelSize(0.035);
   ATFHBYNNZP->GetYaxis()->SetTitleSize(0.035);
   ATFHBYNNZP->GetYaxis()->SetTitleFont(42);
   ATFHBYNNZP->GetZaxis()->SetLabelFont(42);
   ATFHBYNNZP->GetZaxis()->SetLabelSize(0.035);
   ATFHBYNNZP->GetZaxis()->SetTitleSize(0.035);
   ATFHBYNNZP->GetZaxis()->SetTitleFont(42);
   ATFHBYNNZP->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ATFHBYNNZP","gammagamma_qqqq_EPA_BS","f");

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
   UMVGUVTRLA_18->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_19
   UMVGUVTRLA_19 = new TPad("UMVGUVTRLA_19", "UMVGUVTRLA_19",0.51,0.01,0.74,0.19);
   UMVGUVTRLA_19->Draw();
   UMVGUVTRLA_19->cd();
   UMVGUVTRLA_19->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_19->SetFillColor(0);
   UMVGUVTRLA_19->SetBorderMode(0);
   UMVGUVTRLA_19->SetBorderSize(2);
   UMVGUVTRLA_19->SetFrameBorderMode(0);
   UMVGUVTRLA_19->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   TH1F *NDRXJITWTF = new TH1F("NDRXJITWTF","NumberOfIsolatedLeptons",10,0,10);
   NDRXJITWTF->SetBinContent(1,1);
   NDRXJITWTF->SetEntries(1);
   NDRXJITWTF->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   NDRXJITWTF->SetFillColor(ci);
   NDRXJITWTF->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   NDRXJITWTF->SetLineColor(ci);
   NDRXJITWTF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NDRXJITWTF->GetXaxis()->SetLabelFont(42);
   NDRXJITWTF->GetXaxis()->SetLabelSize(0.035);
   NDRXJITWTF->GetXaxis()->SetTitleSize(0.035);
   NDRXJITWTF->GetXaxis()->SetTitleFont(42);
   NDRXJITWTF->GetYaxis()->SetTitle("Entries");
   NDRXJITWTF->GetYaxis()->SetLabelFont(42);
   NDRXJITWTF->GetYaxis()->SetLabelSize(0.035);
   NDRXJITWTF->GetYaxis()->SetTitleSize(0.035);
   NDRXJITWTF->GetYaxis()->SetTitleFont(42);
   NDRXJITWTF->GetZaxis()->SetLabelFont(42);
   NDRXJITWTF->GetZaxis()->SetLabelSize(0.035);
   NDRXJITWTF->GetZaxis()->SetTitleSize(0.035);
   NDRXJITWTF->GetZaxis()->SetTitleFont(42);
   NDRXJITWTF->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NDRXJITWTF","gammagamma_qqqq_BS_EPA","f");

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
   UMVGUVTRLA_19->Modified();
   UMVGUVTRLA->cd();
  
// ------------>Primitives in pad: UMVGUVTRLA_20
   UMVGUVTRLA_20 = new TPad("UMVGUVTRLA_20", "UMVGUVTRLA_20",0.76,0.01,0.99,0.19);
   UMVGUVTRLA_20->Draw();
   UMVGUVTRLA_20->cd();
   UMVGUVTRLA_20->Range(-1.25,-0.13125,11.25,1.18125);
   UMVGUVTRLA_20->SetFillColor(0);
   UMVGUVTRLA_20->SetBorderMode(0);
   UMVGUVTRLA_20->SetBorderSize(2);
   UMVGUVTRLA_20->SetFrameBorderMode(0);
   UMVGUVTRLA_20->SetFrameBorderMode(0);
   
   TH1F *NQVJKQJKRV = new TH1F("NQVJKQJKRV","NumberOfIsolatedLeptons",10,0,10);
   NQVJKQJKRV->SetBinContent(1,1);
   NQVJKQJKRV->SetEntries(599399);
   NQVJKQJKRV->SetStats(0);
   NQVJKQJKRV->SetLineStyle(2);
   NQVJKQJKRV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NQVJKQJKRV->GetXaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetXaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetXaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetYaxis()->SetTitle("Entries");
   NQVJKQJKRV->GetYaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetYaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetYaxis()->SetTitleFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelFont(42);
   NQVJKQJKRV->GetZaxis()->SetLabelSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleSize(0.035);
   NQVJKQJKRV->GetZaxis()->SetTitleFont(42);
   NQVJKQJKRV->Draw("");
   
   pt = new TPaveText(0.3338281,0.9385028,0.6661719,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   UMVGUVTRLA_20->Modified();
   UMVGUVTRLA->cd();
   TBox *box = new TBox(0,0,1,1);
   box->Draw();
   UMVGUVTRLA->Modified();
   UMVGUVTRLA->cd();
   UMVGUVTRLA->SetSelected(UMVGUVTRLA);
}
