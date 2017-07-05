{
//=========Macro generated from canvas: OALGTQTNUR/NumberOfIsolatedLeptons
//=========  (Tue Apr 25 10:04:10 2017) by ROOT version5.34/30
   TCanvas *OALGTQTNUR = new TCanvas("OALGTQTNUR", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   OALGTQTNUR->SetHighLightColor(2);
   OALGTQTNUR->Range(0,0,1,1);
   OALGTQTNUR->SetFillColor(0);
   OALGTQTNUR->SetBorderMode(0);
   OALGTQTNUR->SetBorderSize(2);
   OALGTQTNUR->SetLogy();
   OALGTQTNUR->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: OALGTQTNUR_1
   TPad *OALGTQTNUR_1 = new TPad("OALGTQTNUR_1", "OALGTQTNUR_1",0.01,0.81,0.24,0.99);
   OALGTQTNUR_1->Draw();
   OALGTQTNUR_1->cd();
   OALGTQTNUR_1->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_1->SetFillColor(0);
   OALGTQTNUR_1->SetBorderMode(0);
   OALGTQTNUR_1->SetBorderSize(2);
   OALGTQTNUR_1->SetFrameBorderMode(0);
   OALGTQTNUR_1->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetFillColor(1);
   KZFBWDBJXY->SetFillStyle(3001);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("KZFBWDBJXY","ee_nunuqqqq","f");
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
   OALGTQTNUR_1->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_2
   OALGTQTNUR_2 = new TPad("OALGTQTNUR_2", "OALGTQTNUR_2",0.26,0.81,0.49,0.99);
   OALGTQTNUR_2->Draw();
   OALGTQTNUR_2->cd();
   OALGTQTNUR_2->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_2->SetFillColor(0);
   OALGTQTNUR_2->SetBorderMode(0);
   OALGTQTNUR_2->SetBorderSize(2);
   OALGTQTNUR_2->SetFrameBorderMode(0);
   OALGTQTNUR_2->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *KWVYGUUPYB = new TH1F("KWVYGUUPYB","NumberOfIsolatedLeptons",10,0,10);
   KWVYGUUPYB->SetBinContent(1,1);
   KWVYGUUPYB->SetEntries(192870);
   KWVYGUUPYB->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000066");
   KWVYGUUPYB->SetFillColor(ci);
   KWVYGUUPYB->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   KWVYGUUPYB->SetLineColor(ci);
   KWVYGUUPYB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KWVYGUUPYB->GetXaxis()->SetLabelFont(42);
   KWVYGUUPYB->GetXaxis()->SetLabelSize(0.035);
   KWVYGUUPYB->GetXaxis()->SetTitleSize(0.035);
   KWVYGUUPYB->GetXaxis()->SetTitleFont(42);
   KWVYGUUPYB->GetYaxis()->SetTitle("Entries");
   KWVYGUUPYB->GetYaxis()->SetLabelFont(42);
   KWVYGUUPYB->GetYaxis()->SetLabelSize(0.035);
   KWVYGUUPYB->GetYaxis()->SetTitleSize(0.035);
   KWVYGUUPYB->GetYaxis()->SetTitleFont(42);
   KWVYGUUPYB->GetZaxis()->SetLabelFont(42);
   KWVYGUUPYB->GetZaxis()->SetLabelSize(0.035);
   KWVYGUUPYB->GetZaxis()->SetTitleSize(0.035);
   KWVYGUUPYB->GetZaxis()->SetTitleFont(42);
   KWVYGUUPYB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KWVYGUUPYB","ee_lnuqqqq","f");

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
   OALGTQTNUR_2->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_3
   OALGTQTNUR_3 = new TPad("OALGTQTNUR_3", "OALGTQTNUR_3",0.51,0.81,0.74,0.99);
   OALGTQTNUR_3->Draw();
   OALGTQTNUR_3->cd();
   OALGTQTNUR_3->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_3->SetFillColor(0);
   OALGTQTNUR_3->SetBorderMode(0);
   OALGTQTNUR_3->SetBorderSize(2);
   OALGTQTNUR_3->SetFrameBorderMode(0);
   OALGTQTNUR_3->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *PYXQYZZAWA = new TH1F("PYXQYZZAWA","NumberOfIsolatedLeptons",10,0,10);
   PYXQYZZAWA->SetBinContent(1,1);
   PYXQYZZAWA->SetEntries(9657);
   PYXQYZZAWA->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   PYXQYZZAWA->SetFillColor(ci);
   PYXQYZZAWA->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   PYXQYZZAWA->SetLineColor(ci);
   PYXQYZZAWA->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   PYXQYZZAWA->GetXaxis()->SetLabelFont(42);
   PYXQYZZAWA->GetXaxis()->SetLabelSize(0.035);
   PYXQYZZAWA->GetXaxis()->SetTitleSize(0.035);
   PYXQYZZAWA->GetXaxis()->SetTitleFont(42);
   PYXQYZZAWA->GetYaxis()->SetTitle("Entries");
   PYXQYZZAWA->GetYaxis()->SetLabelFont(42);
   PYXQYZZAWA->GetYaxis()->SetLabelSize(0.035);
   PYXQYZZAWA->GetYaxis()->SetTitleSize(0.035);
   PYXQYZZAWA->GetYaxis()->SetTitleFont(42);
   PYXQYZZAWA->GetZaxis()->SetLabelFont(42);
   PYXQYZZAWA->GetZaxis()->SetLabelSize(0.035);
   PYXQYZZAWA->GetZaxis()->SetTitleSize(0.035);
   PYXQYZZAWA->GetZaxis()->SetTitleFont(42);
   PYXQYZZAWA->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("PYXQYZZAWA","ee_llqqqq","f");

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
   OALGTQTNUR_3->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_4
   OALGTQTNUR_4 = new TPad("OALGTQTNUR_4", "OALGTQTNUR_4",0.76,0.81,0.99,0.99);
   OALGTQTNUR_4->Draw();
   OALGTQTNUR_4->cd();
   OALGTQTNUR_4->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_4->SetFillColor(0);
   OALGTQTNUR_4->SetBorderMode(0);
   OALGTQTNUR_4->SetBorderSize(2);
   OALGTQTNUR_4->SetFrameBorderMode(0);
   OALGTQTNUR_4->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *YJLZTPJRDE = new TH1F("YJLZTPJRDE","NumberOfIsolatedLeptons",10,0,10);
   YJLZTPJRDE->SetBinContent(1,1);
   YJLZTPJRDE->SetEntries(2025);
   YJLZTPJRDE->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   YJLZTPJRDE->SetFillColor(ci);
   YJLZTPJRDE->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   YJLZTPJRDE->SetLineColor(ci);
   YJLZTPJRDE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YJLZTPJRDE->GetXaxis()->SetLabelFont(42);
   YJLZTPJRDE->GetXaxis()->SetLabelSize(0.035);
   YJLZTPJRDE->GetXaxis()->SetTitleSize(0.035);
   YJLZTPJRDE->GetXaxis()->SetTitleFont(42);
   YJLZTPJRDE->GetYaxis()->SetTitle("Entries");
   YJLZTPJRDE->GetYaxis()->SetLabelFont(42);
   YJLZTPJRDE->GetYaxis()->SetLabelSize(0.035);
   YJLZTPJRDE->GetYaxis()->SetTitleSize(0.035);
   YJLZTPJRDE->GetYaxis()->SetTitleFont(42);
   YJLZTPJRDE->GetZaxis()->SetLabelFont(42);
   YJLZTPJRDE->GetZaxis()->SetLabelSize(0.035);
   YJLZTPJRDE->GetZaxis()->SetTitleSize(0.035);
   YJLZTPJRDE->GetZaxis()->SetTitleFont(42);
   YJLZTPJRDE->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("YJLZTPJRDE","ee_qqqq","f");

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
   OALGTQTNUR_4->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_5
   OALGTQTNUR_5 = new TPad("OALGTQTNUR_5", "OALGTQTNUR_5",0.01,0.61,0.24,0.79);
   OALGTQTNUR_5->Draw();
   OALGTQTNUR_5->cd();
   OALGTQTNUR_5->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_5->SetFillColor(0);
   OALGTQTNUR_5->SetBorderMode(0);
   OALGTQTNUR_5->SetBorderSize(2);
   OALGTQTNUR_5->SetFrameBorderMode(0);
   OALGTQTNUR_5->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *EOWFMUKTBS = new TH1F("EOWFMUKTBS","NumberOfIsolatedLeptons",10,0,10);
   EOWFMUKTBS->SetBinContent(1,1);
   EOWFMUKTBS->SetEntries(253693);
   EOWFMUKTBS->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   EOWFMUKTBS->SetFillColor(ci);
   EOWFMUKTBS->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   EOWFMUKTBS->SetLineColor(ci);
   EOWFMUKTBS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EOWFMUKTBS->GetXaxis()->SetLabelFont(42);
   EOWFMUKTBS->GetXaxis()->SetLabelSize(0.035);
   EOWFMUKTBS->GetXaxis()->SetTitleSize(0.035);
   EOWFMUKTBS->GetXaxis()->SetTitleFont(42);
   EOWFMUKTBS->GetYaxis()->SetTitle("Entries");
   EOWFMUKTBS->GetYaxis()->SetLabelFont(42);
   EOWFMUKTBS->GetYaxis()->SetLabelSize(0.035);
   EOWFMUKTBS->GetYaxis()->SetTitleSize(0.035);
   EOWFMUKTBS->GetYaxis()->SetTitleFont(42);
   EOWFMUKTBS->GetZaxis()->SetLabelFont(42);
   EOWFMUKTBS->GetZaxis()->SetLabelSize(0.035);
   EOWFMUKTBS->GetZaxis()->SetTitleSize(0.035);
   EOWFMUKTBS->GetZaxis()->SetTitleFont(42);
   EOWFMUKTBS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("EOWFMUKTBS","ee_nunuqq","f");

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
   OALGTQTNUR_5->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_6
   OALGTQTNUR_6 = new TPad("OALGTQTNUR_6", "OALGTQTNUR_6",0.26,0.61,0.49,0.79);
   OALGTQTNUR_6->Draw();
   OALGTQTNUR_6->cd();
   OALGTQTNUR_6->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_6->SetFillColor(0);
   OALGTQTNUR_6->SetBorderMode(0);
   OALGTQTNUR_6->SetBorderSize(2);
   OALGTQTNUR_6->SetFrameBorderMode(0);
   OALGTQTNUR_6->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *OASUSKCFLS = new TH1F("OASUSKCFLS","NumberOfIsolatedLeptons",10,0,10);
   OASUSKCFLS->SetBinContent(1,1);
   OASUSKCFLS->SetEntries(400522);
   OASUSKCFLS->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   OASUSKCFLS->SetFillColor(ci);
   OASUSKCFLS->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   OASUSKCFLS->SetLineColor(ci);
   OASUSKCFLS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   OASUSKCFLS->GetXaxis()->SetLabelFont(42);
   OASUSKCFLS->GetXaxis()->SetLabelSize(0.035);
   OASUSKCFLS->GetXaxis()->SetTitleSize(0.035);
   OASUSKCFLS->GetXaxis()->SetTitleFont(42);
   OASUSKCFLS->GetYaxis()->SetTitle("Entries");
   OASUSKCFLS->GetYaxis()->SetLabelFont(42);
   OASUSKCFLS->GetYaxis()->SetLabelSize(0.035);
   OASUSKCFLS->GetYaxis()->SetTitleSize(0.035);
   OASUSKCFLS->GetYaxis()->SetTitleFont(42);
   OASUSKCFLS->GetZaxis()->SetLabelFont(42);
   OASUSKCFLS->GetZaxis()->SetLabelSize(0.035);
   OASUSKCFLS->GetZaxis()->SetTitleSize(0.035);
   OASUSKCFLS->GetZaxis()->SetTitleFont(42);
   OASUSKCFLS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("OASUSKCFLS","ee_lnuqq","f");

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
   OALGTQTNUR_6->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_7
   OALGTQTNUR_7 = new TPad("OALGTQTNUR_7", "OALGTQTNUR_7",0.51,0.61,0.74,0.79);
   OALGTQTNUR_7->Draw();
   OALGTQTNUR_7->cd();
   OALGTQTNUR_7->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_7->SetFillColor(0);
   OALGTQTNUR_7->SetBorderMode(0);
   OALGTQTNUR_7->SetBorderSize(2);
   OALGTQTNUR_7->SetFrameBorderMode(0);
   OALGTQTNUR_7->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *RCTXHOGDKN = new TH1F("RCTXHOGDKN","NumberOfIsolatedLeptons",10,0,10);
   RCTXHOGDKN->SetBinContent(1,1);
   RCTXHOGDKN->SetEntries(3074);
   RCTXHOGDKN->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   RCTXHOGDKN->SetFillColor(ci);
   RCTXHOGDKN->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   RCTXHOGDKN->SetLineColor(ci);
   RCTXHOGDKN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RCTXHOGDKN->GetXaxis()->SetLabelFont(42);
   RCTXHOGDKN->GetXaxis()->SetLabelSize(0.035);
   RCTXHOGDKN->GetXaxis()->SetTitleSize(0.035);
   RCTXHOGDKN->GetXaxis()->SetTitleFont(42);
   RCTXHOGDKN->GetYaxis()->SetTitle("Entries");
   RCTXHOGDKN->GetYaxis()->SetLabelFont(42);
   RCTXHOGDKN->GetYaxis()->SetLabelSize(0.035);
   RCTXHOGDKN->GetYaxis()->SetTitleSize(0.035);
   RCTXHOGDKN->GetYaxis()->SetTitleFont(42);
   RCTXHOGDKN->GetZaxis()->SetLabelFont(42);
   RCTXHOGDKN->GetZaxis()->SetLabelSize(0.035);
   RCTXHOGDKN->GetZaxis()->SetTitleSize(0.035);
   RCTXHOGDKN->GetZaxis()->SetTitleFont(42);
   RCTXHOGDKN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("RCTXHOGDKN","ee_qqll","f");

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
   OALGTQTNUR_7->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_8
   OALGTQTNUR_8 = new TPad("OALGTQTNUR_8", "OALGTQTNUR_8",0.76,0.61,0.99,0.79);
   OALGTQTNUR_8->Draw();
   OALGTQTNUR_8->cd();
   OALGTQTNUR_8->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_8->SetFillColor(0);
   OALGTQTNUR_8->SetBorderMode(0);
   OALGTQTNUR_8->SetBorderSize(2);
   OALGTQTNUR_8->SetFrameBorderMode(0);
   OALGTQTNUR_8->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *RABYNTXTBK = new TH1F("RABYNTXTBK","NumberOfIsolatedLeptons",10,0,10);
   RABYNTXTBK->SetBinContent(1,1);
   RABYNTXTBK->SetEntries(2795);
   RABYNTXTBK->SetStats(0);

   ci = TColor::GetColor("#006633");
   RABYNTXTBK->SetFillColor(ci);
   RABYNTXTBK->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   RABYNTXTBK->SetLineColor(ci);
   RABYNTXTBK->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RABYNTXTBK->GetXaxis()->SetLabelFont(42);
   RABYNTXTBK->GetXaxis()->SetLabelSize(0.035);
   RABYNTXTBK->GetXaxis()->SetTitleSize(0.035);
   RABYNTXTBK->GetXaxis()->SetTitleFont(42);
   RABYNTXTBK->GetYaxis()->SetTitle("Entries");
   RABYNTXTBK->GetYaxis()->SetLabelFont(42);
   RABYNTXTBK->GetYaxis()->SetLabelSize(0.035);
   RABYNTXTBK->GetYaxis()->SetTitleSize(0.035);
   RABYNTXTBK->GetYaxis()->SetTitleFont(42);
   RABYNTXTBK->GetZaxis()->SetLabelFont(42);
   RABYNTXTBK->GetZaxis()->SetLabelSize(0.035);
   RABYNTXTBK->GetZaxis()->SetTitleSize(0.035);
   RABYNTXTBK->GetZaxis()->SetTitleFont(42);
   RABYNTXTBK->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("RABYNTXTBK","ee_qq","f");

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
   OALGTQTNUR_8->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_9
   OALGTQTNUR_9 = new TPad("OALGTQTNUR_9", "OALGTQTNUR_9",0.01,0.41,0.24,0.59);
   OALGTQTNUR_9->Draw();
   OALGTQTNUR_9->cd();
   OALGTQTNUR_9->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_9->SetFillColor(0);
   OALGTQTNUR_9->SetBorderMode(0);
   OALGTQTNUR_9->SetBorderSize(2);
   OALGTQTNUR_9->SetFrameBorderMode(0);
   OALGTQTNUR_9->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *NGKCRFNUSE = new TH1F("NGKCRFNUSE","NumberOfIsolatedLeptons",10,0,10);
   NGKCRFNUSE->SetBinContent(1,1);
   NGKCRFNUSE->SetEntries(258);
   NGKCRFNUSE->SetStats(0);
   NGKCRFNUSE->SetFillColor(3);
   NGKCRFNUSE->SetFillStyle(3001);
   NGKCRFNUSE->SetLineColor(3);
   NGKCRFNUSE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NGKCRFNUSE->GetXaxis()->SetLabelFont(42);
   NGKCRFNUSE->GetXaxis()->SetLabelSize(0.035);
   NGKCRFNUSE->GetXaxis()->SetTitleSize(0.035);
   NGKCRFNUSE->GetXaxis()->SetTitleFont(42);
   NGKCRFNUSE->GetYaxis()->SetTitle("Entries");
   NGKCRFNUSE->GetYaxis()->SetLabelFont(42);
   NGKCRFNUSE->GetYaxis()->SetLabelSize(0.035);
   NGKCRFNUSE->GetYaxis()->SetTitleSize(0.035);
   NGKCRFNUSE->GetYaxis()->SetTitleFont(42);
   NGKCRFNUSE->GetZaxis()->SetLabelFont(42);
   NGKCRFNUSE->GetZaxis()->SetLabelSize(0.035);
   NGKCRFNUSE->GetZaxis()->SetTitleSize(0.035);
   NGKCRFNUSE->GetZaxis()->SetTitleFont(42);
   NGKCRFNUSE->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NGKCRFNUSE","egamma_qqqqe_EPA","f");
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
   OALGTQTNUR_9->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_10
   OALGTQTNUR_10 = new TPad("OALGTQTNUR_10", "OALGTQTNUR_10",0.26,0.41,0.49,0.59);
   OALGTQTNUR_10->Draw();
   OALGTQTNUR_10->cd();
   OALGTQTNUR_10->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_10->SetFillColor(0);
   OALGTQTNUR_10->SetBorderMode(0);
   OALGTQTNUR_10->SetBorderSize(2);
   OALGTQTNUR_10->SetFrameBorderMode(0);
   OALGTQTNUR_10->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *OTTTPCMSNH = new TH1F("OTTTPCMSNH","NumberOfIsolatedLeptons",10,0,10);
   OTTTPCMSNH->SetBinContent(1,1);
   OTTTPCMSNH->SetEntries(98);
   OTTTPCMSNH->SetStats(0);

   ci = TColor::GetColor("#990033");
   OTTTPCMSNH->SetFillColor(ci);
   OTTTPCMSNH->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   OTTTPCMSNH->SetLineColor(ci);
   OTTTPCMSNH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   OTTTPCMSNH->GetXaxis()->SetLabelFont(42);
   OTTTPCMSNH->GetXaxis()->SetLabelSize(0.035);
   OTTTPCMSNH->GetXaxis()->SetTitleSize(0.035);
   OTTTPCMSNH->GetXaxis()->SetTitleFont(42);
   OTTTPCMSNH->GetYaxis()->SetTitle("Entries");
   OTTTPCMSNH->GetYaxis()->SetLabelFont(42);
   OTTTPCMSNH->GetYaxis()->SetLabelSize(0.035);
   OTTTPCMSNH->GetYaxis()->SetTitleSize(0.035);
   OTTTPCMSNH->GetYaxis()->SetTitleFont(42);
   OTTTPCMSNH->GetZaxis()->SetLabelFont(42);
   OTTTPCMSNH->GetZaxis()->SetLabelSize(0.035);
   OTTTPCMSNH->GetZaxis()->SetTitleSize(0.035);
   OTTTPCMSNH->GetZaxis()->SetTitleFont(42);
   OTTTPCMSNH->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("OTTTPCMSNH","egamma_qqqqe_BS","f");

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
   OALGTQTNUR_10->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_11
   OALGTQTNUR_11 = new TPad("OALGTQTNUR_11", "OALGTQTNUR_11",0.51,0.41,0.74,0.59);
   OALGTQTNUR_11->Draw();
   OALGTQTNUR_11->cd();
   OALGTQTNUR_11->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_11->SetFillColor(0);
   OALGTQTNUR_11->SetBorderMode(0);
   OALGTQTNUR_11->SetBorderSize(2);
   OALGTQTNUR_11->SetFrameBorderMode(0);
   OALGTQTNUR_11->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *GPGKUJSWPE = new TH1F("GPGKUJSWPE","NumberOfIsolatedLeptons",10,0,10);
   GPGKUJSWPE->SetBinContent(1,1);
   GPGKUJSWPE->SetEntries(363);
   GPGKUJSWPE->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   GPGKUJSWPE->SetFillColor(ci);
   GPGKUJSWPE->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   GPGKUJSWPE->SetLineColor(ci);
   GPGKUJSWPE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GPGKUJSWPE->GetXaxis()->SetLabelFont(42);
   GPGKUJSWPE->GetXaxis()->SetLabelSize(0.035);
   GPGKUJSWPE->GetXaxis()->SetTitleSize(0.035);
   GPGKUJSWPE->GetXaxis()->SetTitleFont(42);
   GPGKUJSWPE->GetYaxis()->SetTitle("Entries");
   GPGKUJSWPE->GetYaxis()->SetLabelFont(42);
   GPGKUJSWPE->GetYaxis()->SetLabelSize(0.035);
   GPGKUJSWPE->GetYaxis()->SetTitleSize(0.035);
   GPGKUJSWPE->GetYaxis()->SetTitleFont(42);
   GPGKUJSWPE->GetZaxis()->SetLabelFont(42);
   GPGKUJSWPE->GetZaxis()->SetLabelSize(0.035);
   GPGKUJSWPE->GetZaxis()->SetTitleSize(0.035);
   GPGKUJSWPE->GetZaxis()->SetTitleFont(42);
   GPGKUJSWPE->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("GPGKUJSWPE","gammae_qqqqe_EPA","f");

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
   OALGTQTNUR_11->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_12
   OALGTQTNUR_12 = new TPad("OALGTQTNUR_12", "OALGTQTNUR_12",0.76,0.41,0.99,0.59);
   OALGTQTNUR_12->Draw();
   OALGTQTNUR_12->cd();
   OALGTQTNUR_12->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_12->SetFillColor(0);
   OALGTQTNUR_12->SetBorderMode(0);
   OALGTQTNUR_12->SetBorderSize(2);
   OALGTQTNUR_12->SetFrameBorderMode(0);
   OALGTQTNUR_12->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *ZLNRNBCPRE = new TH1F("ZLNRNBCPRE","NumberOfIsolatedLeptons",10,0,10);
   ZLNRNBCPRE->SetBinContent(1,1);
   ZLNRNBCPRE->SetEntries(44);
   ZLNRNBCPRE->SetStats(0);

   ci = TColor::GetColor("#a42400");
   ZLNRNBCPRE->SetFillColor(ci);
   ZLNRNBCPRE->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   ZLNRNBCPRE->SetLineColor(ci);
   ZLNRNBCPRE->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZLNRNBCPRE->GetXaxis()->SetLabelFont(42);
   ZLNRNBCPRE->GetXaxis()->SetLabelSize(0.035);
   ZLNRNBCPRE->GetXaxis()->SetTitleSize(0.035);
   ZLNRNBCPRE->GetXaxis()->SetTitleFont(42);
   ZLNRNBCPRE->GetYaxis()->SetTitle("Entries");
   ZLNRNBCPRE->GetYaxis()->SetLabelFont(42);
   ZLNRNBCPRE->GetYaxis()->SetLabelSize(0.035);
   ZLNRNBCPRE->GetYaxis()->SetTitleSize(0.035);
   ZLNRNBCPRE->GetYaxis()->SetTitleFont(42);
   ZLNRNBCPRE->GetZaxis()->SetLabelFont(42);
   ZLNRNBCPRE->GetZaxis()->SetLabelSize(0.035);
   ZLNRNBCPRE->GetZaxis()->SetTitleSize(0.035);
   ZLNRNBCPRE->GetZaxis()->SetTitleFont(42);
   ZLNRNBCPRE->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ZLNRNBCPRE","gammae_qqqqe_BS","f");

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
   OALGTQTNUR_12->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_13
   OALGTQTNUR_13 = new TPad("OALGTQTNUR_13", "OALGTQTNUR_13",0.01,0.21,0.24,0.39);
   OALGTQTNUR_13->Draw();
   OALGTQTNUR_13->cd();
   OALGTQTNUR_13->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_13->SetFillColor(0);
   OALGTQTNUR_13->SetBorderMode(0);
   OALGTQTNUR_13->SetBorderSize(2);
   OALGTQTNUR_13->SetFrameBorderMode(0);
   OALGTQTNUR_13->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *QWXQTPZTBM = new TH1F("QWXQTPZTBM","NumberOfIsolatedLeptons",10,0,10);
   QWXQTPZTBM->SetBinContent(1,1);
   QWXQTPZTBM->SetEntries(45909);
   QWXQTPZTBM->SetStats(0);

   ci = TColor::GetColor("#001544");
   QWXQTPZTBM->SetFillColor(ci);
   QWXQTPZTBM->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   QWXQTPZTBM->SetLineColor(ci);
   QWXQTPZTBM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   QWXQTPZTBM->GetXaxis()->SetLabelFont(42);
   QWXQTPZTBM->GetXaxis()->SetLabelSize(0.035);
   QWXQTPZTBM->GetXaxis()->SetTitleSize(0.035);
   QWXQTPZTBM->GetXaxis()->SetTitleFont(42);
   QWXQTPZTBM->GetYaxis()->SetTitle("Entries");
   QWXQTPZTBM->GetYaxis()->SetLabelFont(42);
   QWXQTPZTBM->GetYaxis()->SetLabelSize(0.035);
   QWXQTPZTBM->GetYaxis()->SetTitleSize(0.035);
   QWXQTPZTBM->GetYaxis()->SetTitleFont(42);
   QWXQTPZTBM->GetZaxis()->SetLabelFont(42);
   QWXQTPZTBM->GetZaxis()->SetLabelSize(0.035);
   QWXQTPZTBM->GetZaxis()->SetTitleSize(0.035);
   QWXQTPZTBM->GetZaxis()->SetTitleFont(42);
   QWXQTPZTBM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("QWXQTPZTBM","egamma_qqqqnu_EPA","f");

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
   OALGTQTNUR_13->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_14
   OALGTQTNUR_14 = new TPad("OALGTQTNUR_14", "OALGTQTNUR_14",0.26,0.21,0.49,0.39);
   OALGTQTNUR_14->Draw();
   OALGTQTNUR_14->cd();
   OALGTQTNUR_14->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_14->SetFillColor(0);
   OALGTQTNUR_14->SetBorderMode(0);
   OALGTQTNUR_14->SetBorderSize(2);
   OALGTQTNUR_14->SetFrameBorderMode(0);
   OALGTQTNUR_14->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *WXGXVBGRWJ = new TH1F("WXGXVBGRWJ","NumberOfIsolatedLeptons",10,0,10);
   WXGXVBGRWJ->SetBinContent(1,1);
   WXGXVBGRWJ->SetEntries(63129);
   WXGXVBGRWJ->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   WXGXVBGRWJ->SetFillColor(ci);
   WXGXVBGRWJ->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   WXGXVBGRWJ->SetLineColor(ci);
   WXGXVBGRWJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   WXGXVBGRWJ->GetXaxis()->SetLabelFont(42);
   WXGXVBGRWJ->GetXaxis()->SetLabelSize(0.035);
   WXGXVBGRWJ->GetXaxis()->SetTitleSize(0.035);
   WXGXVBGRWJ->GetXaxis()->SetTitleFont(42);
   WXGXVBGRWJ->GetYaxis()->SetTitle("Entries");
   WXGXVBGRWJ->GetYaxis()->SetLabelFont(42);
   WXGXVBGRWJ->GetYaxis()->SetLabelSize(0.035);
   WXGXVBGRWJ->GetYaxis()->SetTitleSize(0.035);
   WXGXVBGRWJ->GetYaxis()->SetTitleFont(42);
   WXGXVBGRWJ->GetZaxis()->SetLabelFont(42);
   WXGXVBGRWJ->GetZaxis()->SetLabelSize(0.035);
   WXGXVBGRWJ->GetZaxis()->SetTitleSize(0.035);
   WXGXVBGRWJ->GetZaxis()->SetTitleFont(42);
   WXGXVBGRWJ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("WXGXVBGRWJ","egamma_qqqqnu_BS","f");

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
   OALGTQTNUR_14->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_15
   OALGTQTNUR_15 = new TPad("OALGTQTNUR_15", "OALGTQTNUR_15",0.51,0.21,0.74,0.39);
   OALGTQTNUR_15->Draw();
   OALGTQTNUR_15->cd();
   OALGTQTNUR_15->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_15->SetFillColor(0);
   OALGTQTNUR_15->SetBorderMode(0);
   OALGTQTNUR_15->SetBorderSize(2);
   OALGTQTNUR_15->SetFrameBorderMode(0);
   OALGTQTNUR_15->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *RSTZOPUKVT = new TH1F("RSTZOPUKVT","NumberOfIsolatedLeptons",10,0,10);
   RSTZOPUKVT->SetBinContent(1,1);
   RSTZOPUKVT->SetEntries(46210);
   RSTZOPUKVT->SetStats(0);

   ci = TColor::GetColor("#620e00");
   RSTZOPUKVT->SetFillColor(ci);
   RSTZOPUKVT->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   RSTZOPUKVT->SetLineColor(ci);
   RSTZOPUKVT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RSTZOPUKVT->GetXaxis()->SetLabelFont(42);
   RSTZOPUKVT->GetXaxis()->SetLabelSize(0.035);
   RSTZOPUKVT->GetXaxis()->SetTitleSize(0.035);
   RSTZOPUKVT->GetXaxis()->SetTitleFont(42);
   RSTZOPUKVT->GetYaxis()->SetTitle("Entries");
   RSTZOPUKVT->GetYaxis()->SetLabelFont(42);
   RSTZOPUKVT->GetYaxis()->SetLabelSize(0.035);
   RSTZOPUKVT->GetYaxis()->SetTitleSize(0.035);
   RSTZOPUKVT->GetYaxis()->SetTitleFont(42);
   RSTZOPUKVT->GetZaxis()->SetLabelFont(42);
   RSTZOPUKVT->GetZaxis()->SetLabelSize(0.035);
   RSTZOPUKVT->GetZaxis()->SetTitleSize(0.035);
   RSTZOPUKVT->GetZaxis()->SetTitleFont(42);
   RSTZOPUKVT->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("RSTZOPUKVT","gammae_qqqqnu_EPA","f");

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
   OALGTQTNUR_15->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_16
   OALGTQTNUR_16 = new TPad("OALGTQTNUR_16", "OALGTQTNUR_16",0.76,0.21,0.99,0.39);
   OALGTQTNUR_16->Draw();
   OALGTQTNUR_16->cd();
   OALGTQTNUR_16->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_16->SetFillColor(0);
   OALGTQTNUR_16->SetBorderMode(0);
   OALGTQTNUR_16->SetBorderSize(2);
   OALGTQTNUR_16->SetFrameBorderMode(0);
   OALGTQTNUR_16->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *AJGUZIGFPI = new TH1F("AJGUZIGFPI","NumberOfIsolatedLeptons",10,0,10);
   AJGUZIGFPI->SetBinContent(1,1);
   AJGUZIGFPI->SetEntries(62776);
   AJGUZIGFPI->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   AJGUZIGFPI->SetFillColor(ci);
   AJGUZIGFPI->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   AJGUZIGFPI->SetLineColor(ci);
   AJGUZIGFPI->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AJGUZIGFPI->GetXaxis()->SetLabelFont(42);
   AJGUZIGFPI->GetXaxis()->SetLabelSize(0.035);
   AJGUZIGFPI->GetXaxis()->SetTitleSize(0.035);
   AJGUZIGFPI->GetXaxis()->SetTitleFont(42);
   AJGUZIGFPI->GetYaxis()->SetTitle("Entries");
   AJGUZIGFPI->GetYaxis()->SetLabelFont(42);
   AJGUZIGFPI->GetYaxis()->SetLabelSize(0.035);
   AJGUZIGFPI->GetYaxis()->SetTitleSize(0.035);
   AJGUZIGFPI->GetYaxis()->SetTitleFont(42);
   AJGUZIGFPI->GetZaxis()->SetLabelFont(42);
   AJGUZIGFPI->GetZaxis()->SetLabelSize(0.035);
   AJGUZIGFPI->GetZaxis()->SetTitleSize(0.035);
   AJGUZIGFPI->GetZaxis()->SetTitleFont(42);
   AJGUZIGFPI->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("AJGUZIGFPI","gammae_qqqqnu_BS","f");

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
   OALGTQTNUR_16->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_17
   OALGTQTNUR_17 = new TPad("OALGTQTNUR_17", "OALGTQTNUR_17",0.01,0.01,0.24,0.19);
   OALGTQTNUR_17->Draw();
   OALGTQTNUR_17->cd();
   OALGTQTNUR_17->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_17->SetFillColor(0);
   OALGTQTNUR_17->SetBorderMode(0);
   OALGTQTNUR_17->SetBorderSize(2);
   OALGTQTNUR_17->SetFrameBorderMode(0);
   OALGTQTNUR_17->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *GBWMILYPBB = new TH1F("GBWMILYPBB","NumberOfIsolatedLeptons",10,0,10);
   GBWMILYPBB->SetBinContent(1,1);
   GBWMILYPBB->SetEntries(242);
   GBWMILYPBB->SetStats(0);
   GBWMILYPBB->SetFillColor(4);
   GBWMILYPBB->SetFillStyle(3001);
   GBWMILYPBB->SetLineColor(4);
   GBWMILYPBB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   GBWMILYPBB->GetXaxis()->SetLabelFont(42);
   GBWMILYPBB->GetXaxis()->SetLabelSize(0.035);
   GBWMILYPBB->GetXaxis()->SetTitleSize(0.035);
   GBWMILYPBB->GetXaxis()->SetTitleFont(42);
   GBWMILYPBB->GetYaxis()->SetTitle("Entries");
   GBWMILYPBB->GetYaxis()->SetLabelFont(42);
   GBWMILYPBB->GetYaxis()->SetLabelSize(0.035);
   GBWMILYPBB->GetYaxis()->SetTitleSize(0.035);
   GBWMILYPBB->GetYaxis()->SetTitleFont(42);
   GBWMILYPBB->GetZaxis()->SetLabelFont(42);
   GBWMILYPBB->GetZaxis()->SetLabelSize(0.035);
   GBWMILYPBB->GetZaxis()->SetTitleSize(0.035);
   GBWMILYPBB->GetZaxis()->SetTitleFont(42);
   GBWMILYPBB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("GBWMILYPBB","gammagamma_qqqq_EPA_EPA","f");
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
   OALGTQTNUR_17->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_18
   OALGTQTNUR_18 = new TPad("OALGTQTNUR_18", "OALGTQTNUR_18",0.26,0.01,0.49,0.19);
   OALGTQTNUR_18->Draw();
   OALGTQTNUR_18->cd();
   OALGTQTNUR_18->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_18->SetFillColor(0);
   OALGTQTNUR_18->SetBorderMode(0);
   OALGTQTNUR_18->SetBorderSize(2);
   OALGTQTNUR_18->SetFrameBorderMode(0);
   OALGTQTNUR_18->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *ZMPOTEBFAF = new TH1F("ZMPOTEBFAF","NumberOfIsolatedLeptons",10,0,10);
   ZMPOTEBFAF->SetBinContent(1,1);
   ZMPOTEBFAF->SetEntries(148);
   ZMPOTEBFAF->SetStats(0);

   ci = TColor::GetColor("#007db5");
   ZMPOTEBFAF->SetFillColor(ci);
   ZMPOTEBFAF->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   ZMPOTEBFAF->SetLineColor(ci);
   ZMPOTEBFAF->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZMPOTEBFAF->GetXaxis()->SetLabelFont(42);
   ZMPOTEBFAF->GetXaxis()->SetLabelSize(0.035);
   ZMPOTEBFAF->GetXaxis()->SetTitleSize(0.035);
   ZMPOTEBFAF->GetXaxis()->SetTitleFont(42);
   ZMPOTEBFAF->GetYaxis()->SetTitle("Entries");
   ZMPOTEBFAF->GetYaxis()->SetLabelFont(42);
   ZMPOTEBFAF->GetYaxis()->SetLabelSize(0.035);
   ZMPOTEBFAF->GetYaxis()->SetTitleSize(0.035);
   ZMPOTEBFAF->GetYaxis()->SetTitleFont(42);
   ZMPOTEBFAF->GetZaxis()->SetLabelFont(42);
   ZMPOTEBFAF->GetZaxis()->SetLabelSize(0.035);
   ZMPOTEBFAF->GetZaxis()->SetTitleSize(0.035);
   ZMPOTEBFAF->GetZaxis()->SetTitleFont(42);
   ZMPOTEBFAF->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ZMPOTEBFAF","gammagamma_qqqq_EPA_BS","f");

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
   OALGTQTNUR_18->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_19
   OALGTQTNUR_19 = new TPad("OALGTQTNUR_19", "OALGTQTNUR_19",0.51,0.01,0.74,0.19);
   OALGTQTNUR_19->Draw();
   OALGTQTNUR_19->cd();
   OALGTQTNUR_19->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_19->SetFillColor(0);
   OALGTQTNUR_19->SetBorderMode(0);
   OALGTQTNUR_19->SetBorderSize(2);
   OALGTQTNUR_19->SetFrameBorderMode(0);
   OALGTQTNUR_19->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *AMPMUZCHEO = new TH1F("AMPMUZCHEO","NumberOfIsolatedLeptons",10,0,10);
   AMPMUZCHEO->SetBinContent(1,1);
   AMPMUZCHEO->SetEntries(90);
   AMPMUZCHEO->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   AMPMUZCHEO->SetFillColor(ci);
   AMPMUZCHEO->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   AMPMUZCHEO->SetLineColor(ci);
   AMPMUZCHEO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   AMPMUZCHEO->GetXaxis()->SetLabelFont(42);
   AMPMUZCHEO->GetXaxis()->SetLabelSize(0.035);
   AMPMUZCHEO->GetXaxis()->SetTitleSize(0.035);
   AMPMUZCHEO->GetXaxis()->SetTitleFont(42);
   AMPMUZCHEO->GetYaxis()->SetTitle("Entries");
   AMPMUZCHEO->GetYaxis()->SetLabelFont(42);
   AMPMUZCHEO->GetYaxis()->SetLabelSize(0.035);
   AMPMUZCHEO->GetYaxis()->SetTitleSize(0.035);
   AMPMUZCHEO->GetYaxis()->SetTitleFont(42);
   AMPMUZCHEO->GetZaxis()->SetLabelFont(42);
   AMPMUZCHEO->GetZaxis()->SetLabelSize(0.035);
   AMPMUZCHEO->GetZaxis()->SetTitleSize(0.035);
   AMPMUZCHEO->GetZaxis()->SetTitleFont(42);
   AMPMUZCHEO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("AMPMUZCHEO","gammagamma_qqqq_BS_EPA","f");

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
   OALGTQTNUR_19->Modified();
   OALGTQTNUR->cd();
  
// ------------>Primitives in pad: OALGTQTNUR_20
   OALGTQTNUR_20 = new TPad("OALGTQTNUR_20", "OALGTQTNUR_20",0.76,0.01,0.99,0.19);
   OALGTQTNUR_20->Draw();
   OALGTQTNUR_20->cd();
   OALGTQTNUR_20->Range(-1.25,-0.13125,11.25,1.18125);
   OALGTQTNUR_20->SetFillColor(0);
   OALGTQTNUR_20->SetBorderMode(0);
   OALGTQTNUR_20->SetBorderSize(2);
   OALGTQTNUR_20->SetFrameBorderMode(0);
   OALGTQTNUR_20->SetFrameBorderMode(0);
   
   TH1F *KZFBWDBJXY = new TH1F("KZFBWDBJXY","NumberOfIsolatedLeptons",10,0,10);
   KZFBWDBJXY->SetBinContent(1,1);
   KZFBWDBJXY->SetEntries(1726479);
   KZFBWDBJXY->SetStats(0);
   KZFBWDBJXY->SetLineStyle(2);
   KZFBWDBJXY->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KZFBWDBJXY->GetXaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetXaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetXaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetYaxis()->SetTitle("Entries");
   KZFBWDBJXY->GetYaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetYaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetYaxis()->SetTitleFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelFont(42);
   KZFBWDBJXY->GetZaxis()->SetLabelSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleSize(0.035);
   KZFBWDBJXY->GetZaxis()->SetTitleFont(42);
   KZFBWDBJXY->Draw("");
   
   TH1F *NXLIAYFWKO = new TH1F("NXLIAYFWKO","NumberOfIsolatedLeptons",10,0,10);
   NXLIAYFWKO->SetBinContent(1,1);
   NXLIAYFWKO->SetEntries(13);
   NXLIAYFWKO->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   NXLIAYFWKO->SetFillColor(ci);
   NXLIAYFWKO->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   NXLIAYFWKO->SetLineColor(ci);
   NXLIAYFWKO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   NXLIAYFWKO->GetXaxis()->SetLabelFont(42);
   NXLIAYFWKO->GetXaxis()->SetLabelSize(0.035);
   NXLIAYFWKO->GetXaxis()->SetTitleSize(0.035);
   NXLIAYFWKO->GetXaxis()->SetTitleFont(42);
   NXLIAYFWKO->GetYaxis()->SetTitle("Entries");
   NXLIAYFWKO->GetYaxis()->SetLabelFont(42);
   NXLIAYFWKO->GetYaxis()->SetLabelSize(0.035);
   NXLIAYFWKO->GetYaxis()->SetTitleSize(0.035);
   NXLIAYFWKO->GetYaxis()->SetTitleFont(42);
   NXLIAYFWKO->GetZaxis()->SetLabelFont(42);
   NXLIAYFWKO->GetZaxis()->SetLabelSize(0.035);
   NXLIAYFWKO->GetZaxis()->SetTitleSize(0.035);
   NXLIAYFWKO->GetZaxis()->SetTitleFont(42);
   NXLIAYFWKO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NXLIAYFWKO","gammagamma_qqqq_BS_BS","f");

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
   OALGTQTNUR_20->Modified();
   OALGTQTNUR->cd();
   TBox *box = new TBox(0,0,1,1);
   box->Draw();
   OALGTQTNUR->Modified();
   OALGTQTNUR->cd();
   OALGTQTNUR->SetSelected(OALGTQTNUR);
}
