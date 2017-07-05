{
//=========Macro generated from canvas: ZDJDEUVBEM/NumberOfIsolatedLeptons
//=========  (Mon Jan 23 17:42:43 2017) by ROOT version5.34/30
   TCanvas *ZDJDEUVBEM = new TCanvas("ZDJDEUVBEM", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   ZDJDEUVBEM->SetHighLightColor(2);
   ZDJDEUVBEM->Range(0,0,1,1);
   ZDJDEUVBEM->SetFillColor(0);
   ZDJDEUVBEM->SetBorderMode(0);
   ZDJDEUVBEM->SetBorderSize(2);
   ZDJDEUVBEM->SetLogy();
   ZDJDEUVBEM->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: ZDJDEUVBEM_1
   TPad *ZDJDEUVBEM_1 = new TPad("ZDJDEUVBEM_1", "ZDJDEUVBEM_1",0.01,0.81,0.24,0.99);
   ZDJDEUVBEM_1->Draw();
   ZDJDEUVBEM_1->cd();
   ZDJDEUVBEM_1->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_1->SetFillColor(0);
   ZDJDEUVBEM_1->SetBorderMode(0);
   ZDJDEUVBEM_1->SetBorderSize(2);
   ZDJDEUVBEM_1->SetFrameBorderMode(0);
   ZDJDEUVBEM_1->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetFillColor(1);
   UXLBSCYONJ->SetFillStyle(3001);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("UXLBSCYONJ","ee_nunuqqqq","f");
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
   ZDJDEUVBEM_1->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_2
   ZDJDEUVBEM_2 = new TPad("ZDJDEUVBEM_2", "ZDJDEUVBEM_2",0.26,0.81,0.49,0.99);
   ZDJDEUVBEM_2->Draw();
   ZDJDEUVBEM_2->cd();
   ZDJDEUVBEM_2->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_2->SetFillColor(0);
   ZDJDEUVBEM_2->SetBorderMode(0);
   ZDJDEUVBEM_2->SetBorderSize(2);
   ZDJDEUVBEM_2->SetFrameBorderMode(0);
   ZDJDEUVBEM_2->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *FURKAUYLOS = new TH1F("FURKAUYLOS","NumberOfIsolatedLeptons",10,0,10);
   FURKAUYLOS->SetBinContent(1,0.5278477);
   FURKAUYLOS->SetBinContent(2,0.4705646);
   FURKAUYLOS->SetBinContent(3,0.001587672);
   FURKAUYLOS->SetEntries(365360);
   FURKAUYLOS->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000066");
   FURKAUYLOS->SetFillColor(ci);
   FURKAUYLOS->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   FURKAUYLOS->SetLineColor(ci);
   FURKAUYLOS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   FURKAUYLOS->GetXaxis()->SetLabelFont(42);
   FURKAUYLOS->GetXaxis()->SetLabelSize(0.035);
   FURKAUYLOS->GetXaxis()->SetTitleSize(0.035);
   FURKAUYLOS->GetXaxis()->SetTitleFont(42);
   FURKAUYLOS->GetYaxis()->SetTitle("Entries");
   FURKAUYLOS->GetYaxis()->SetLabelFont(42);
   FURKAUYLOS->GetYaxis()->SetLabelSize(0.035);
   FURKAUYLOS->GetYaxis()->SetTitleSize(0.035);
   FURKAUYLOS->GetYaxis()->SetTitleFont(42);
   FURKAUYLOS->GetZaxis()->SetLabelFont(42);
   FURKAUYLOS->GetZaxis()->SetLabelSize(0.035);
   FURKAUYLOS->GetZaxis()->SetTitleSize(0.035);
   FURKAUYLOS->GetZaxis()->SetTitleFont(42);
   FURKAUYLOS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("FURKAUYLOS","ee_lnuqqqq","f");

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
   ZDJDEUVBEM_2->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_3
   ZDJDEUVBEM_3 = new TPad("ZDJDEUVBEM_3", "ZDJDEUVBEM_3",0.51,0.81,0.74,0.99);
   ZDJDEUVBEM_3->Draw();
   ZDJDEUVBEM_3->cd();
   ZDJDEUVBEM_3->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_3->SetFillColor(0);
   ZDJDEUVBEM_3->SetBorderMode(0);
   ZDJDEUVBEM_3->SetBorderSize(2);
   ZDJDEUVBEM_3->SetFrameBorderMode(0);
   ZDJDEUVBEM_3->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *SKVSHOYLCY = new TH1F("SKVSHOYLCY","NumberOfIsolatedLeptons",10,0,10);
   SKVSHOYLCY->SetBinContent(1,0.6159171);
   SKVSHOYLCY->SetBinContent(2,0.2762298);
   SKVSHOYLCY->SetBinContent(3,0.1072791);
   SKVSHOYLCY->SetBinContent(4,0.0005740343);
   SKVSHOYLCY->SetEntries(15679);
   SKVSHOYLCY->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   SKVSHOYLCY->SetFillColor(ci);
   SKVSHOYLCY->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   SKVSHOYLCY->SetLineColor(ci);
   SKVSHOYLCY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SKVSHOYLCY->GetXaxis()->SetLabelFont(42);
   SKVSHOYLCY->GetXaxis()->SetLabelSize(0.035);
   SKVSHOYLCY->GetXaxis()->SetTitleSize(0.035);
   SKVSHOYLCY->GetXaxis()->SetTitleFont(42);
   SKVSHOYLCY->GetYaxis()->SetTitle("Entries");
   SKVSHOYLCY->GetYaxis()->SetLabelFont(42);
   SKVSHOYLCY->GetYaxis()->SetLabelSize(0.035);
   SKVSHOYLCY->GetYaxis()->SetTitleSize(0.035);
   SKVSHOYLCY->GetYaxis()->SetTitleFont(42);
   SKVSHOYLCY->GetZaxis()->SetLabelFont(42);
   SKVSHOYLCY->GetZaxis()->SetLabelSize(0.035);
   SKVSHOYLCY->GetZaxis()->SetTitleSize(0.035);
   SKVSHOYLCY->GetZaxis()->SetTitleFont(42);
   SKVSHOYLCY->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("SKVSHOYLCY","ee_llqqqq","f");

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
   ZDJDEUVBEM_3->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_4
   ZDJDEUVBEM_4 = new TPad("ZDJDEUVBEM_4", "ZDJDEUVBEM_4",0.76,0.81,0.99,0.99);
   ZDJDEUVBEM_4->Draw();
   ZDJDEUVBEM_4->cd();
   ZDJDEUVBEM_4->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_4->SetFillColor(0);
   ZDJDEUVBEM_4->SetBorderMode(0);
   ZDJDEUVBEM_4->SetBorderSize(2);
   ZDJDEUVBEM_4->SetFrameBorderMode(0);
   ZDJDEUVBEM_4->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *HDKZOTIXUB = new TH1F("HDKZOTIXUB","NumberOfIsolatedLeptons",10,0,10);
   HDKZOTIXUB->SetBinContent(1,0.9965551);
   HDKZOTIXUB->SetBinContent(2,0.003444852);
   HDKZOTIXUB->SetEntries(2032);
   HDKZOTIXUB->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   HDKZOTIXUB->SetFillColor(ci);
   HDKZOTIXUB->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   HDKZOTIXUB->SetLineColor(ci);
   HDKZOTIXUB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HDKZOTIXUB->GetXaxis()->SetLabelFont(42);
   HDKZOTIXUB->GetXaxis()->SetLabelSize(0.035);
   HDKZOTIXUB->GetXaxis()->SetTitleSize(0.035);
   HDKZOTIXUB->GetXaxis()->SetTitleFont(42);
   HDKZOTIXUB->GetYaxis()->SetTitle("Entries");
   HDKZOTIXUB->GetYaxis()->SetLabelFont(42);
   HDKZOTIXUB->GetYaxis()->SetLabelSize(0.035);
   HDKZOTIXUB->GetYaxis()->SetTitleSize(0.035);
   HDKZOTIXUB->GetYaxis()->SetTitleFont(42);
   HDKZOTIXUB->GetZaxis()->SetLabelFont(42);
   HDKZOTIXUB->GetZaxis()->SetLabelSize(0.035);
   HDKZOTIXUB->GetZaxis()->SetTitleSize(0.035);
   HDKZOTIXUB->GetZaxis()->SetTitleFont(42);
   HDKZOTIXUB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("HDKZOTIXUB","ee_qqqq","f");

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
   ZDJDEUVBEM_4->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_5
   ZDJDEUVBEM_5 = new TPad("ZDJDEUVBEM_5", "ZDJDEUVBEM_5",0.01,0.61,0.24,0.79);
   ZDJDEUVBEM_5->Draw();
   ZDJDEUVBEM_5->cd();
   ZDJDEUVBEM_5->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_5->SetFillColor(0);
   ZDJDEUVBEM_5->SetBorderMode(0);
   ZDJDEUVBEM_5->SetBorderSize(2);
   ZDJDEUVBEM_5->SetFrameBorderMode(0);
   ZDJDEUVBEM_5->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *JHQWNIMVED = new TH1F("JHQWNIMVED","NumberOfIsolatedLeptons",10,0,10);
   JHQWNIMVED->SetBinContent(1,0.998251);
   JHQWNIMVED->SetBinContent(2,0.001749053);
   JHQWNIMVED->SetEntries(254138);
   JHQWNIMVED->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   JHQWNIMVED->SetFillColor(ci);
   JHQWNIMVED->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   JHQWNIMVED->SetLineColor(ci);
   JHQWNIMVED->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JHQWNIMVED->GetXaxis()->SetLabelFont(42);
   JHQWNIMVED->GetXaxis()->SetLabelSize(0.035);
   JHQWNIMVED->GetXaxis()->SetTitleSize(0.035);
   JHQWNIMVED->GetXaxis()->SetTitleFont(42);
   JHQWNIMVED->GetYaxis()->SetTitle("Entries");
   JHQWNIMVED->GetYaxis()->SetLabelFont(42);
   JHQWNIMVED->GetYaxis()->SetLabelSize(0.035);
   JHQWNIMVED->GetYaxis()->SetTitleSize(0.035);
   JHQWNIMVED->GetYaxis()->SetTitleFont(42);
   JHQWNIMVED->GetZaxis()->SetLabelFont(42);
   JHQWNIMVED->GetZaxis()->SetLabelSize(0.035);
   JHQWNIMVED->GetZaxis()->SetTitleSize(0.035);
   JHQWNIMVED->GetZaxis()->SetTitleFont(42);
   JHQWNIMVED->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("JHQWNIMVED","ee_nunuqq","f");

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
   ZDJDEUVBEM_5->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_6
   ZDJDEUVBEM_6 = new TPad("ZDJDEUVBEM_6", "ZDJDEUVBEM_6",0.26,0.61,0.49,0.79);
   ZDJDEUVBEM_6->Draw();
   ZDJDEUVBEM_6->cd();
   ZDJDEUVBEM_6->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_6->SetFillColor(0);
   ZDJDEUVBEM_6->SetBorderMode(0);
   ZDJDEUVBEM_6->SetBorderSize(2);
   ZDJDEUVBEM_6->SetFrameBorderMode(0);
   ZDJDEUVBEM_6->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *MEWRTXCWTV = new TH1F("MEWRTXCWTV","NumberOfIsolatedLeptons",10,0,10);
   MEWRTXCWTV->SetBinContent(1,0.6175709);
   MEWRTXCWTV->SetBinContent(2,0.3818071);
   MEWRTXCWTV->SetBinContent(3,0.0006220705);
   MEWRTXCWTV->SetEntries(648676);
   MEWRTXCWTV->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   MEWRTXCWTV->SetFillColor(ci);
   MEWRTXCWTV->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   MEWRTXCWTV->SetLineColor(ci);
   MEWRTXCWTV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   MEWRTXCWTV->GetXaxis()->SetLabelFont(42);
   MEWRTXCWTV->GetXaxis()->SetLabelSize(0.035);
   MEWRTXCWTV->GetXaxis()->SetTitleSize(0.035);
   MEWRTXCWTV->GetXaxis()->SetTitleFont(42);
   MEWRTXCWTV->GetYaxis()->SetTitle("Entries");
   MEWRTXCWTV->GetYaxis()->SetLabelFont(42);
   MEWRTXCWTV->GetYaxis()->SetLabelSize(0.035);
   MEWRTXCWTV->GetYaxis()->SetTitleSize(0.035);
   MEWRTXCWTV->GetYaxis()->SetTitleFont(42);
   MEWRTXCWTV->GetZaxis()->SetLabelFont(42);
   MEWRTXCWTV->GetZaxis()->SetLabelSize(0.035);
   MEWRTXCWTV->GetZaxis()->SetTitleSize(0.035);
   MEWRTXCWTV->GetZaxis()->SetTitleFont(42);
   MEWRTXCWTV->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("MEWRTXCWTV","ee_lnuqq","f");

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
   ZDJDEUVBEM_6->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_7
   ZDJDEUVBEM_7 = new TPad("ZDJDEUVBEM_7", "ZDJDEUVBEM_7",0.51,0.61,0.74,0.79);
   ZDJDEUVBEM_7->Draw();
   ZDJDEUVBEM_7->cd();
   ZDJDEUVBEM_7->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_7->SetFillColor(0);
   ZDJDEUVBEM_7->SetBorderMode(0);
   ZDJDEUVBEM_7->SetBorderSize(2);
   ZDJDEUVBEM_7->SetFrameBorderMode(0);
   ZDJDEUVBEM_7->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *IEKKDGWATX = new TH1F("IEKKDGWATX","NumberOfIsolatedLeptons",10,0,10);
   IEKKDGWATX->SetBinContent(1,0.7719707);
   IEKKDGWATX->SetBinContent(2,0.1918657);
   IEKKDGWATX->SetBinContent(3,0.03616352);
   IEKKDGWATX->SetEntries(3982);
   IEKKDGWATX->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   IEKKDGWATX->SetFillColor(ci);
   IEKKDGWATX->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   IEKKDGWATX->SetLineColor(ci);
   IEKKDGWATX->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   IEKKDGWATX->GetXaxis()->SetLabelFont(42);
   IEKKDGWATX->GetXaxis()->SetLabelSize(0.035);
   IEKKDGWATX->GetXaxis()->SetTitleSize(0.035);
   IEKKDGWATX->GetXaxis()->SetTitleFont(42);
   IEKKDGWATX->GetYaxis()->SetTitle("Entries");
   IEKKDGWATX->GetYaxis()->SetLabelFont(42);
   IEKKDGWATX->GetYaxis()->SetLabelSize(0.035);
   IEKKDGWATX->GetYaxis()->SetTitleSize(0.035);
   IEKKDGWATX->GetYaxis()->SetTitleFont(42);
   IEKKDGWATX->GetZaxis()->SetLabelFont(42);
   IEKKDGWATX->GetZaxis()->SetLabelSize(0.035);
   IEKKDGWATX->GetZaxis()->SetTitleSize(0.035);
   IEKKDGWATX->GetZaxis()->SetTitleFont(42);
   IEKKDGWATX->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("IEKKDGWATX","ee_qqll","f");

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
   ZDJDEUVBEM_7->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_8
   ZDJDEUVBEM_8 = new TPad("ZDJDEUVBEM_8", "ZDJDEUVBEM_8",0.76,0.61,0.99,0.79);
   ZDJDEUVBEM_8->Draw();
   ZDJDEUVBEM_8->cd();
   ZDJDEUVBEM_8->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_8->SetFillColor(0);
   ZDJDEUVBEM_8->SetBorderMode(0);
   ZDJDEUVBEM_8->SetBorderSize(2);
   ZDJDEUVBEM_8->SetFrameBorderMode(0);
   ZDJDEUVBEM_8->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *JUWVLEYFAQ = new TH1F("JUWVLEYFAQ","NumberOfIsolatedLeptons",10,0,10);
   JUWVLEYFAQ->SetBinContent(1,0.9982142);
   JUWVLEYFAQ->SetBinContent(2,0.001785736);
   JUWVLEYFAQ->SetEntries(2800);
   JUWVLEYFAQ->SetStats(0);

   ci = TColor::GetColor("#006633");
   JUWVLEYFAQ->SetFillColor(ci);
   JUWVLEYFAQ->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   JUWVLEYFAQ->SetLineColor(ci);
   JUWVLEYFAQ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JUWVLEYFAQ->GetXaxis()->SetLabelFont(42);
   JUWVLEYFAQ->GetXaxis()->SetLabelSize(0.035);
   JUWVLEYFAQ->GetXaxis()->SetTitleSize(0.035);
   JUWVLEYFAQ->GetXaxis()->SetTitleFont(42);
   JUWVLEYFAQ->GetYaxis()->SetTitle("Entries");
   JUWVLEYFAQ->GetYaxis()->SetLabelFont(42);
   JUWVLEYFAQ->GetYaxis()->SetLabelSize(0.035);
   JUWVLEYFAQ->GetYaxis()->SetTitleSize(0.035);
   JUWVLEYFAQ->GetYaxis()->SetTitleFont(42);
   JUWVLEYFAQ->GetZaxis()->SetLabelFont(42);
   JUWVLEYFAQ->GetZaxis()->SetLabelSize(0.035);
   JUWVLEYFAQ->GetZaxis()->SetTitleSize(0.035);
   JUWVLEYFAQ->GetZaxis()->SetTitleFont(42);
   JUWVLEYFAQ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("JUWVLEYFAQ","ee_qq","f");

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
   ZDJDEUVBEM_8->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_9
   ZDJDEUVBEM_9 = new TPad("ZDJDEUVBEM_9", "ZDJDEUVBEM_9",0.01,0.41,0.24,0.59);
   ZDJDEUVBEM_9->Draw();
   ZDJDEUVBEM_9->cd();
   ZDJDEUVBEM_9->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_9->SetFillColor(0);
   ZDJDEUVBEM_9->SetBorderMode(0);
   ZDJDEUVBEM_9->SetBorderSize(2);
   ZDJDEUVBEM_9->SetFrameBorderMode(0);
   ZDJDEUVBEM_9->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *BVIMJLHJAG = new TH1F("BVIMJLHJAG","NumberOfIsolatedLeptons",10,0,10);
   BVIMJLHJAG->SetBinContent(1,0.356847);
   BVIMJLHJAG->SetBinContent(2,0.4910092);
   BVIMJLHJAG->SetBinContent(3,0.1521438);
   BVIMJLHJAG->SetEntries(723);
   BVIMJLHJAG->SetStats(0);
   BVIMJLHJAG->SetFillColor(3);
   BVIMJLHJAG->SetFillStyle(3001);
   BVIMJLHJAG->SetLineColor(3);
   BVIMJLHJAG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BVIMJLHJAG->GetXaxis()->SetLabelFont(42);
   BVIMJLHJAG->GetXaxis()->SetLabelSize(0.035);
   BVIMJLHJAG->GetXaxis()->SetTitleSize(0.035);
   BVIMJLHJAG->GetXaxis()->SetTitleFont(42);
   BVIMJLHJAG->GetYaxis()->SetTitle("Entries");
   BVIMJLHJAG->GetYaxis()->SetLabelFont(42);
   BVIMJLHJAG->GetYaxis()->SetLabelSize(0.035);
   BVIMJLHJAG->GetYaxis()->SetTitleSize(0.035);
   BVIMJLHJAG->GetYaxis()->SetTitleFont(42);
   BVIMJLHJAG->GetZaxis()->SetLabelFont(42);
   BVIMJLHJAG->GetZaxis()->SetLabelSize(0.035);
   BVIMJLHJAG->GetZaxis()->SetTitleSize(0.035);
   BVIMJLHJAG->GetZaxis()->SetTitleFont(42);
   BVIMJLHJAG->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("BVIMJLHJAG","egamma_qqqqe_EPA","f");
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
   ZDJDEUVBEM_9->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_10
   ZDJDEUVBEM_10 = new TPad("ZDJDEUVBEM_10", "ZDJDEUVBEM_10",0.26,0.41,0.49,0.59);
   ZDJDEUVBEM_10->Draw();
   ZDJDEUVBEM_10->cd();
   ZDJDEUVBEM_10->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_10->SetFillColor(0);
   ZDJDEUVBEM_10->SetBorderMode(0);
   ZDJDEUVBEM_10->SetBorderSize(2);
   ZDJDEUVBEM_10->SetFrameBorderMode(0);
   ZDJDEUVBEM_10->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *SJTTBTFDMO = new TH1F("SJTTBTFDMO","NumberOfIsolatedLeptons",10,0,10);
   SJTTBTFDMO->SetBinContent(1,0.7480916);
   SJTTBTFDMO->SetBinContent(2,0.1984733);
   SJTTBTFDMO->SetBinContent(3,0.05343512);
   SJTTBTFDMO->SetEntries(131);
   SJTTBTFDMO->SetStats(0);

   ci = TColor::GetColor("#990033");
   SJTTBTFDMO->SetFillColor(ci);
   SJTTBTFDMO->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   SJTTBTFDMO->SetLineColor(ci);
   SJTTBTFDMO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SJTTBTFDMO->GetXaxis()->SetLabelFont(42);
   SJTTBTFDMO->GetXaxis()->SetLabelSize(0.035);
   SJTTBTFDMO->GetXaxis()->SetTitleSize(0.035);
   SJTTBTFDMO->GetXaxis()->SetTitleFont(42);
   SJTTBTFDMO->GetYaxis()->SetTitle("Entries");
   SJTTBTFDMO->GetYaxis()->SetLabelFont(42);
   SJTTBTFDMO->GetYaxis()->SetLabelSize(0.035);
   SJTTBTFDMO->GetYaxis()->SetTitleSize(0.035);
   SJTTBTFDMO->GetYaxis()->SetTitleFont(42);
   SJTTBTFDMO->GetZaxis()->SetLabelFont(42);
   SJTTBTFDMO->GetZaxis()->SetLabelSize(0.035);
   SJTTBTFDMO->GetZaxis()->SetTitleSize(0.035);
   SJTTBTFDMO->GetZaxis()->SetTitleFont(42);
   SJTTBTFDMO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("SJTTBTFDMO","egamma_qqqqe_BS","f");

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
   ZDJDEUVBEM_10->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_11
   ZDJDEUVBEM_11 = new TPad("ZDJDEUVBEM_11", "ZDJDEUVBEM_11",0.51,0.41,0.74,0.59);
   ZDJDEUVBEM_11->Draw();
   ZDJDEUVBEM_11->cd();
   ZDJDEUVBEM_11->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_11->SetFillColor(0);
   ZDJDEUVBEM_11->SetBorderMode(0);
   ZDJDEUVBEM_11->SetBorderSize(2);
   ZDJDEUVBEM_11->SetFrameBorderMode(0);
   ZDJDEUVBEM_11->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *DJADRODVDG = new TH1F("DJADRODVDG","NumberOfIsolatedLeptons",10,0,10);
   DJADRODVDG->SetBinContent(1,0.4015487);
   DJADRODVDG->SetBinContent(2,0.4590709);
   DJADRODVDG->SetBinContent(3,0.1382741);
   DJADRODVDG->SetBinContent(4,0.001106193);
   DJADRODVDG->SetEntries(904);
   DJADRODVDG->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   DJADRODVDG->SetFillColor(ci);
   DJADRODVDG->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   DJADRODVDG->SetLineColor(ci);
   DJADRODVDG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   DJADRODVDG->GetXaxis()->SetLabelFont(42);
   DJADRODVDG->GetXaxis()->SetLabelSize(0.035);
   DJADRODVDG->GetXaxis()->SetTitleSize(0.035);
   DJADRODVDG->GetXaxis()->SetTitleFont(42);
   DJADRODVDG->GetYaxis()->SetTitle("Entries");
   DJADRODVDG->GetYaxis()->SetLabelFont(42);
   DJADRODVDG->GetYaxis()->SetLabelSize(0.035);
   DJADRODVDG->GetYaxis()->SetTitleSize(0.035);
   DJADRODVDG->GetYaxis()->SetTitleFont(42);
   DJADRODVDG->GetZaxis()->SetLabelFont(42);
   DJADRODVDG->GetZaxis()->SetLabelSize(0.035);
   DJADRODVDG->GetZaxis()->SetTitleSize(0.035);
   DJADRODVDG->GetZaxis()->SetTitleFont(42);
   DJADRODVDG->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("DJADRODVDG","gammae_qqqqe_EPA","f");

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
   ZDJDEUVBEM_11->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_12
   ZDJDEUVBEM_12 = new TPad("ZDJDEUVBEM_12", "ZDJDEUVBEM_12",0.76,0.41,0.99,0.59);
   ZDJDEUVBEM_12->Draw();
   ZDJDEUVBEM_12->cd();
   ZDJDEUVBEM_12->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_12->SetFillColor(0);
   ZDJDEUVBEM_12->SetBorderMode(0);
   ZDJDEUVBEM_12->SetBorderSize(2);
   ZDJDEUVBEM_12->SetFrameBorderMode(0);
   ZDJDEUVBEM_12->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *JUGZCPPVTB = new TH1F("JUGZCPPVTB","NumberOfIsolatedLeptons",10,0,10);
   JUGZCPPVTB->SetBinContent(1,0.7333333);
   JUGZCPPVTB->SetBinContent(2,0.2166667);
   JUGZCPPVTB->SetBinContent(3,0.05000002);
   JUGZCPPVTB->SetEntries(60);
   JUGZCPPVTB->SetStats(0);

   ci = TColor::GetColor("#a42400");
   JUGZCPPVTB->SetFillColor(ci);
   JUGZCPPVTB->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   JUGZCPPVTB->SetLineColor(ci);
   JUGZCPPVTB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JUGZCPPVTB->GetXaxis()->SetLabelFont(42);
   JUGZCPPVTB->GetXaxis()->SetLabelSize(0.035);
   JUGZCPPVTB->GetXaxis()->SetTitleSize(0.035);
   JUGZCPPVTB->GetXaxis()->SetTitleFont(42);
   JUGZCPPVTB->GetYaxis()->SetTitle("Entries");
   JUGZCPPVTB->GetYaxis()->SetLabelFont(42);
   JUGZCPPVTB->GetYaxis()->SetLabelSize(0.035);
   JUGZCPPVTB->GetYaxis()->SetTitleSize(0.035);
   JUGZCPPVTB->GetYaxis()->SetTitleFont(42);
   JUGZCPPVTB->GetZaxis()->SetLabelFont(42);
   JUGZCPPVTB->GetZaxis()->SetLabelSize(0.035);
   JUGZCPPVTB->GetZaxis()->SetTitleSize(0.035);
   JUGZCPPVTB->GetZaxis()->SetTitleFont(42);
   JUGZCPPVTB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("JUGZCPPVTB","gammae_qqqqe_BS","f");

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
   ZDJDEUVBEM_12->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_13
   ZDJDEUVBEM_13 = new TPad("ZDJDEUVBEM_13", "ZDJDEUVBEM_13",0.01,0.21,0.24,0.39);
   ZDJDEUVBEM_13->Draw();
   ZDJDEUVBEM_13->cd();
   ZDJDEUVBEM_13->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_13->SetFillColor(0);
   ZDJDEUVBEM_13->SetBorderMode(0);
   ZDJDEUVBEM_13->SetBorderSize(2);
   ZDJDEUVBEM_13->SetFrameBorderMode(0);
   ZDJDEUVBEM_13->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *BKBLEJNRAO = new TH1F("BKBLEJNRAO","NumberOfIsolatedLeptons",10,0,10);
   BKBLEJNRAO->SetBinContent(1,0.7281078);
   BKBLEJNRAO->SetBinContent(2,0.2709879);
   BKBLEJNRAO->SetBinContent(3,0.0009043191);
   BKBLEJNRAO->SetEntries(63048);
   BKBLEJNRAO->SetStats(0);

   ci = TColor::GetColor("#001544");
   BKBLEJNRAO->SetFillColor(ci);
   BKBLEJNRAO->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   BKBLEJNRAO->SetLineColor(ci);
   BKBLEJNRAO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BKBLEJNRAO->GetXaxis()->SetLabelFont(42);
   BKBLEJNRAO->GetXaxis()->SetLabelSize(0.035);
   BKBLEJNRAO->GetXaxis()->SetTitleSize(0.035);
   BKBLEJNRAO->GetXaxis()->SetTitleFont(42);
   BKBLEJNRAO->GetYaxis()->SetTitle("Entries");
   BKBLEJNRAO->GetYaxis()->SetLabelFont(42);
   BKBLEJNRAO->GetYaxis()->SetLabelSize(0.035);
   BKBLEJNRAO->GetYaxis()->SetTitleSize(0.035);
   BKBLEJNRAO->GetYaxis()->SetTitleFont(42);
   BKBLEJNRAO->GetZaxis()->SetLabelFont(42);
   BKBLEJNRAO->GetZaxis()->SetLabelSize(0.035);
   BKBLEJNRAO->GetZaxis()->SetTitleSize(0.035);
   BKBLEJNRAO->GetZaxis()->SetTitleFont(42);
   BKBLEJNRAO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("BKBLEJNRAO","egamma_qqqqnu_EPA","f");

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
   ZDJDEUVBEM_13->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_14
   ZDJDEUVBEM_14 = new TPad("ZDJDEUVBEM_14", "ZDJDEUVBEM_14",0.26,0.21,0.49,0.39);
   ZDJDEUVBEM_14->Draw();
   ZDJDEUVBEM_14->cd();
   ZDJDEUVBEM_14->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_14->SetFillColor(0);
   ZDJDEUVBEM_14->SetBorderMode(0);
   ZDJDEUVBEM_14->SetBorderSize(2);
   ZDJDEUVBEM_14->SetFrameBorderMode(0);
   ZDJDEUVBEM_14->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *AHTVITNCYF = new TH1F("AHTVITNCYF","NumberOfIsolatedLeptons",10,0,10);
   AHTVITNCYF->SetBinContent(1,0.9902844);
   AHTVITNCYF->SetBinContent(2,0.009715612);
   AHTVITNCYF->SetEntries(63748);
   AHTVITNCYF->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   AHTVITNCYF->SetFillColor(ci);
   AHTVITNCYF->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   AHTVITNCYF->SetLineColor(ci);
   AHTVITNCYF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AHTVITNCYF->GetXaxis()->SetLabelFont(42);
   AHTVITNCYF->GetXaxis()->SetLabelSize(0.035);
   AHTVITNCYF->GetXaxis()->SetTitleSize(0.035);
   AHTVITNCYF->GetXaxis()->SetTitleFont(42);
   AHTVITNCYF->GetYaxis()->SetTitle("Entries");
   AHTVITNCYF->GetYaxis()->SetLabelFont(42);
   AHTVITNCYF->GetYaxis()->SetLabelSize(0.035);
   AHTVITNCYF->GetYaxis()->SetTitleSize(0.035);
   AHTVITNCYF->GetYaxis()->SetTitleFont(42);
   AHTVITNCYF->GetZaxis()->SetLabelFont(42);
   AHTVITNCYF->GetZaxis()->SetLabelSize(0.035);
   AHTVITNCYF->GetZaxis()->SetTitleSize(0.035);
   AHTVITNCYF->GetZaxis()->SetTitleFont(42);
   AHTVITNCYF->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("AHTVITNCYF","egamma_qqqqnu_BS","f");

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
   ZDJDEUVBEM_14->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_15
   ZDJDEUVBEM_15 = new TPad("ZDJDEUVBEM_15", "ZDJDEUVBEM_15",0.51,0.21,0.74,0.39);
   ZDJDEUVBEM_15->Draw();
   ZDJDEUVBEM_15->cd();
   ZDJDEUVBEM_15->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_15->SetFillColor(0);
   ZDJDEUVBEM_15->SetBorderMode(0);
   ZDJDEUVBEM_15->SetBorderSize(2);
   ZDJDEUVBEM_15->SetFrameBorderMode(0);
   ZDJDEUVBEM_15->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *GBTLVNKDDA = new TH1F("GBTLVNKDDA","NumberOfIsolatedLeptons",10,0,10);
   GBTLVNKDDA->SetBinContent(1,0.7298133);
   GBTLVNKDDA->SetBinContent(2,0.2694441);
   GBTLVNKDDA->SetBinContent(3,0.0007425492);
   GBTLVNKDDA->SetEntries(63313);
   GBTLVNKDDA->SetStats(0);

   ci = TColor::GetColor("#620e00");
   GBTLVNKDDA->SetFillColor(ci);
   GBTLVNKDDA->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   GBTLVNKDDA->SetLineColor(ci);
   GBTLVNKDDA->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GBTLVNKDDA->GetXaxis()->SetLabelFont(42);
   GBTLVNKDDA->GetXaxis()->SetLabelSize(0.035);
   GBTLVNKDDA->GetXaxis()->SetTitleSize(0.035);
   GBTLVNKDDA->GetXaxis()->SetTitleFont(42);
   GBTLVNKDDA->GetYaxis()->SetTitle("Entries");
   GBTLVNKDDA->GetYaxis()->SetLabelFont(42);
   GBTLVNKDDA->GetYaxis()->SetLabelSize(0.035);
   GBTLVNKDDA->GetYaxis()->SetTitleSize(0.035);
   GBTLVNKDDA->GetYaxis()->SetTitleFont(42);
   GBTLVNKDDA->GetZaxis()->SetLabelFont(42);
   GBTLVNKDDA->GetZaxis()->SetLabelSize(0.035);
   GBTLVNKDDA->GetZaxis()->SetTitleSize(0.035);
   GBTLVNKDDA->GetZaxis()->SetTitleFont(42);
   GBTLVNKDDA->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("GBTLVNKDDA","gammae_qqqqnu_EPA","f");

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
   ZDJDEUVBEM_15->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_16
   ZDJDEUVBEM_16 = new TPad("ZDJDEUVBEM_16", "ZDJDEUVBEM_16",0.76,0.21,0.99,0.39);
   ZDJDEUVBEM_16->Draw();
   ZDJDEUVBEM_16->cd();
   ZDJDEUVBEM_16->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_16->SetFillColor(0);
   ZDJDEUVBEM_16->SetBorderMode(0);
   ZDJDEUVBEM_16->SetBorderSize(2);
   ZDJDEUVBEM_16->SetFrameBorderMode(0);
   ZDJDEUVBEM_16->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *KSIFXRJNZK = new TH1F("KSIFXRJNZK","NumberOfIsolatedLeptons",10,0,10);
   KSIFXRJNZK->SetBinContent(1,0.9907156);
   KSIFXRJNZK->SetBinContent(2,0.009236995);
   KSIFXRJNZK->SetBinContent(3,4.73695e-05);
   KSIFXRJNZK->SetEntries(63364);
   KSIFXRJNZK->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   KSIFXRJNZK->SetFillColor(ci);
   KSIFXRJNZK->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   KSIFXRJNZK->SetLineColor(ci);
   KSIFXRJNZK->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KSIFXRJNZK->GetXaxis()->SetLabelFont(42);
   KSIFXRJNZK->GetXaxis()->SetLabelSize(0.035);
   KSIFXRJNZK->GetXaxis()->SetTitleSize(0.035);
   KSIFXRJNZK->GetXaxis()->SetTitleFont(42);
   KSIFXRJNZK->GetYaxis()->SetTitle("Entries");
   KSIFXRJNZK->GetYaxis()->SetLabelFont(42);
   KSIFXRJNZK->GetYaxis()->SetLabelSize(0.035);
   KSIFXRJNZK->GetYaxis()->SetTitleSize(0.035);
   KSIFXRJNZK->GetYaxis()->SetTitleFont(42);
   KSIFXRJNZK->GetZaxis()->SetLabelFont(42);
   KSIFXRJNZK->GetZaxis()->SetLabelSize(0.035);
   KSIFXRJNZK->GetZaxis()->SetTitleSize(0.035);
   KSIFXRJNZK->GetZaxis()->SetTitleFont(42);
   KSIFXRJNZK->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KSIFXRJNZK","gammae_qqqqnu_BS","f");

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
   ZDJDEUVBEM_16->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_17
   ZDJDEUVBEM_17 = new TPad("ZDJDEUVBEM_17", "ZDJDEUVBEM_17",0.01,0.01,0.24,0.19);
   ZDJDEUVBEM_17->Draw();
   ZDJDEUVBEM_17->cd();
   ZDJDEUVBEM_17->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_17->SetFillColor(0);
   ZDJDEUVBEM_17->SetBorderMode(0);
   ZDJDEUVBEM_17->SetBorderSize(2);
   ZDJDEUVBEM_17->SetFrameBorderMode(0);
   ZDJDEUVBEM_17->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *GOFPVJYZEN = new TH1F("GOFPVJYZEN","NumberOfIsolatedLeptons",10,0,10);
   GOFPVJYZEN->SetBinContent(1,0.5182014);
   GOFPVJYZEN->SetBinContent(2,0.3875803);
   GOFPVJYZEN->SetBinContent(3,0.09421831);
   GOFPVJYZEN->SetEntries(467);
   GOFPVJYZEN->SetStats(0);
   GOFPVJYZEN->SetFillColor(4);
   GOFPVJYZEN->SetFillStyle(3001);
   GOFPVJYZEN->SetLineColor(4);
   GOFPVJYZEN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GOFPVJYZEN->GetXaxis()->SetLabelFont(42);
   GOFPVJYZEN->GetXaxis()->SetLabelSize(0.035);
   GOFPVJYZEN->GetXaxis()->SetTitleSize(0.035);
   GOFPVJYZEN->GetXaxis()->SetTitleFont(42);
   GOFPVJYZEN->GetYaxis()->SetTitle("Entries");
   GOFPVJYZEN->GetYaxis()->SetLabelFont(42);
   GOFPVJYZEN->GetYaxis()->SetLabelSize(0.035);
   GOFPVJYZEN->GetYaxis()->SetTitleSize(0.035);
   GOFPVJYZEN->GetYaxis()->SetTitleFont(42);
   GOFPVJYZEN->GetZaxis()->SetLabelFont(42);
   GOFPVJYZEN->GetZaxis()->SetLabelSize(0.035);
   GOFPVJYZEN->GetZaxis()->SetTitleSize(0.035);
   GOFPVJYZEN->GetZaxis()->SetTitleFont(42);
   GOFPVJYZEN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("GOFPVJYZEN","gammagamma_qqqq_EPA_EPA","f");
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
   ZDJDEUVBEM_17->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_18
   ZDJDEUVBEM_18 = new TPad("ZDJDEUVBEM_18", "ZDJDEUVBEM_18",0.26,0.01,0.49,0.19);
   ZDJDEUVBEM_18->Draw();
   ZDJDEUVBEM_18->cd();
   ZDJDEUVBEM_18->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_18->SetFillColor(0);
   ZDJDEUVBEM_18->SetBorderMode(0);
   ZDJDEUVBEM_18->SetBorderSize(2);
   ZDJDEUVBEM_18->SetFrameBorderMode(0);
   ZDJDEUVBEM_18->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *GFSGGSZYCS = new TH1F("GFSGGSZYCS","NumberOfIsolatedLeptons",10,0,10);
   GFSGGSZYCS->SetBinContent(1,0.7589741);
   GFSGGSZYCS->SetBinContent(2,0.2256413);
   GFSGGSZYCS->SetBinContent(3,0.01538463);
   GFSGGSZYCS->SetEntries(195);
   GFSGGSZYCS->SetStats(0);

   ci = TColor::GetColor("#007db5");
   GFSGGSZYCS->SetFillColor(ci);
   GFSGGSZYCS->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   GFSGGSZYCS->SetLineColor(ci);
   GFSGGSZYCS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GFSGGSZYCS->GetXaxis()->SetLabelFont(42);
   GFSGGSZYCS->GetXaxis()->SetLabelSize(0.035);
   GFSGGSZYCS->GetXaxis()->SetTitleSize(0.035);
   GFSGGSZYCS->GetXaxis()->SetTitleFont(42);
   GFSGGSZYCS->GetYaxis()->SetTitle("Entries");
   GFSGGSZYCS->GetYaxis()->SetLabelFont(42);
   GFSGGSZYCS->GetYaxis()->SetLabelSize(0.035);
   GFSGGSZYCS->GetYaxis()->SetTitleSize(0.035);
   GFSGGSZYCS->GetYaxis()->SetTitleFont(42);
   GFSGGSZYCS->GetZaxis()->SetLabelFont(42);
   GFSGGSZYCS->GetZaxis()->SetLabelSize(0.035);
   GFSGGSZYCS->GetZaxis()->SetTitleSize(0.035);
   GFSGGSZYCS->GetZaxis()->SetTitleFont(42);
   GFSGGSZYCS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("GFSGGSZYCS","gammagamma_qqqq_EPA_BS","f");

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
   ZDJDEUVBEM_18->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_19
   ZDJDEUVBEM_19 = new TPad("ZDJDEUVBEM_19", "ZDJDEUVBEM_19",0.51,0.01,0.74,0.19);
   ZDJDEUVBEM_19->Draw();
   ZDJDEUVBEM_19->cd();
   ZDJDEUVBEM_19->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_19->SetFillColor(0);
   ZDJDEUVBEM_19->SetBorderMode(0);
   ZDJDEUVBEM_19->SetBorderSize(2);
   ZDJDEUVBEM_19->SetFrameBorderMode(0);
   ZDJDEUVBEM_19->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *JSCSHLJVWY = new TH1F("JSCSHLJVWY","NumberOfIsolatedLeptons",10,0,10);
   JSCSHLJVWY->SetBinContent(1,0.6293706);
   JSCSHLJVWY->SetBinContent(2,0.3566433);
   JSCSHLJVWY->SetBinContent(3,0.01398601);
   JSCSHLJVWY->SetEntries(143);
   JSCSHLJVWY->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   JSCSHLJVWY->SetFillColor(ci);
   JSCSHLJVWY->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   JSCSHLJVWY->SetLineColor(ci);
   JSCSHLJVWY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JSCSHLJVWY->GetXaxis()->SetLabelFont(42);
   JSCSHLJVWY->GetXaxis()->SetLabelSize(0.035);
   JSCSHLJVWY->GetXaxis()->SetTitleSize(0.035);
   JSCSHLJVWY->GetXaxis()->SetTitleFont(42);
   JSCSHLJVWY->GetYaxis()->SetTitle("Entries");
   JSCSHLJVWY->GetYaxis()->SetLabelFont(42);
   JSCSHLJVWY->GetYaxis()->SetLabelSize(0.035);
   JSCSHLJVWY->GetYaxis()->SetTitleSize(0.035);
   JSCSHLJVWY->GetYaxis()->SetTitleFont(42);
   JSCSHLJVWY->GetZaxis()->SetLabelFont(42);
   JSCSHLJVWY->GetZaxis()->SetLabelSize(0.035);
   JSCSHLJVWY->GetZaxis()->SetTitleSize(0.035);
   JSCSHLJVWY->GetZaxis()->SetTitleFont(42);
   JSCSHLJVWY->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("JSCSHLJVWY","gammagamma_qqqq_BS_EPA","f");

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
   ZDJDEUVBEM_19->Modified();
   ZDJDEUVBEM->cd();
  
// ------------>Primitives in pad: ZDJDEUVBEM_20
   ZDJDEUVBEM_20 = new TPad("ZDJDEUVBEM_20", "ZDJDEUVBEM_20",0.76,0.01,0.99,0.19);
   ZDJDEUVBEM_20->Draw();
   ZDJDEUVBEM_20->cd();
   ZDJDEUVBEM_20->Range(-1.25,-0.1308656,11.25,1.17779);
   ZDJDEUVBEM_20->SetFillColor(0);
   ZDJDEUVBEM_20->SetBorderMode(0);
   ZDJDEUVBEM_20->SetBorderSize(2);
   ZDJDEUVBEM_20->SetFrameBorderMode(0);
   ZDJDEUVBEM_20->SetFrameBorderMode(0);
   
   TH1F *UXLBSCYONJ = new TH1F("UXLBSCYONJ","NumberOfIsolatedLeptons",10,0,10);
   UXLBSCYONJ->SetBinContent(1,0.9970712);
   UXLBSCYONJ->SetBinContent(2,0.002922995);
   UXLBSCYONJ->SetBinContent(3,5.221473e-06);
   UXLBSCYONJ->SetBinContent(4,5.801637e-07);
   UXLBSCYONJ->SetEntries(1731527);
   UXLBSCYONJ->SetStats(0);
   UXLBSCYONJ->SetLineStyle(2);
   UXLBSCYONJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   UXLBSCYONJ->GetXaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetXaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetXaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetYaxis()->SetTitle("Entries");
   UXLBSCYONJ->GetYaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetYaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetYaxis()->SetTitleFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelFont(42);
   UXLBSCYONJ->GetZaxis()->SetLabelSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleSize(0.035);
   UXLBSCYONJ->GetZaxis()->SetTitleFont(42);
   UXLBSCYONJ->Draw("");
   
   TH1F *BSWSOXIWZI = new TH1F("BSWSOXIWZI","NumberOfIsolatedLeptons",10,0,10);
   BSWSOXIWZI->SetBinContent(1,0.6842105);
   BSWSOXIWZI->SetBinContent(2,0.3157895);
   BSWSOXIWZI->SetEntries(19);
   BSWSOXIWZI->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   BSWSOXIWZI->SetFillColor(ci);
   BSWSOXIWZI->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   BSWSOXIWZI->SetLineColor(ci);
   BSWSOXIWZI->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BSWSOXIWZI->GetXaxis()->SetLabelFont(42);
   BSWSOXIWZI->GetXaxis()->SetLabelSize(0.035);
   BSWSOXIWZI->GetXaxis()->SetTitleSize(0.035);
   BSWSOXIWZI->GetXaxis()->SetTitleFont(42);
   BSWSOXIWZI->GetYaxis()->SetTitle("Entries");
   BSWSOXIWZI->GetYaxis()->SetLabelFont(42);
   BSWSOXIWZI->GetYaxis()->SetLabelSize(0.035);
   BSWSOXIWZI->GetYaxis()->SetTitleSize(0.035);
   BSWSOXIWZI->GetYaxis()->SetTitleFont(42);
   BSWSOXIWZI->GetZaxis()->SetLabelFont(42);
   BSWSOXIWZI->GetZaxis()->SetLabelSize(0.035);
   BSWSOXIWZI->GetZaxis()->SetTitleSize(0.035);
   BSWSOXIWZI->GetZaxis()->SetTitleFont(42);
   BSWSOXIWZI->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("BSWSOXIWZI","gammagamma_qqqq_BS_BS","f");

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
   ZDJDEUVBEM_20->Modified();
   ZDJDEUVBEM->cd();
   TBox *box = new TBox(0,0,1,1);
   box->Draw();
   ZDJDEUVBEM->Modified();
   ZDJDEUVBEM->cd();
   ZDJDEUVBEM->SetSelected(ZDJDEUVBEM);
}
