{
//=========Macro generated from canvas: BLFPQWSBOR/NumberOfIsolatedLeptons
//=========  (Wed Jan  4 14:57:13 2017) by ROOT version5.34/30
   TCanvas *BLFPQWSBOR = new TCanvas("BLFPQWSBOR", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   BLFPQWSBOR->SetHighLightColor(2);
   BLFPQWSBOR->Range(0,0,1,1);
   BLFPQWSBOR->SetFillColor(0);
   BLFPQWSBOR->SetBorderMode(0);
   BLFPQWSBOR->SetBorderSize(2);
   BLFPQWSBOR->SetLogy();
   BLFPQWSBOR->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: BLFPQWSBOR_1
   TPad *BLFPQWSBOR_1 = new TPad("BLFPQWSBOR_1", "BLFPQWSBOR_1",0.01,0.81,0.24,0.99);
   BLFPQWSBOR_1->Draw();
   BLFPQWSBOR_1->cd();
   BLFPQWSBOR_1->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_1->SetFillColor(0);
   BLFPQWSBOR_1->SetBorderMode(0);
   BLFPQWSBOR_1->SetBorderSize(2);
   BLFPQWSBOR_1->SetFrameBorderMode(0);
   BLFPQWSBOR_1->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetFillColor(1);
   ERNXCHDJZV->SetFillStyle(3001);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ERNXCHDJZV","ee_nunuqqqq","f");
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
   BLFPQWSBOR_1->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_2
   BLFPQWSBOR_2 = new TPad("BLFPQWSBOR_2", "BLFPQWSBOR_2",0.26,0.81,0.49,0.99);
   BLFPQWSBOR_2->Draw();
   BLFPQWSBOR_2->cd();
   BLFPQWSBOR_2->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_2->SetFillColor(0);
   BLFPQWSBOR_2->SetBorderMode(0);
   BLFPQWSBOR_2->SetBorderSize(2);
   BLFPQWSBOR_2->SetFrameBorderMode(0);
   BLFPQWSBOR_2->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *WQBOYXJRQG = new TH1F("WQBOYXJRQG","NumberOfIsolatedLeptons",5,0,5);
   WQBOYXJRQG->SetBinContent(1,0.489299);
   WQBOYXJRQG->SetBinContent(2,0.5090711);
   WQBOYXJRQG->SetBinContent(3,0.001624484);
   WQBOYXJRQG->SetBinContent(4,2.702958e-06);
   WQBOYXJRQG->SetBinContent(5,2.702958e-06);
   WQBOYXJRQG->SetEntries(370656);
   WQBOYXJRQG->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000066");
   WQBOYXJRQG->SetFillColor(ci);
   WQBOYXJRQG->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   WQBOYXJRQG->SetLineColor(ci);
   WQBOYXJRQG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   WQBOYXJRQG->GetXaxis()->SetLabelFont(42);
   WQBOYXJRQG->GetXaxis()->SetLabelSize(0.035);
   WQBOYXJRQG->GetXaxis()->SetTitleSize(0.035);
   WQBOYXJRQG->GetXaxis()->SetTitleFont(42);
   WQBOYXJRQG->GetYaxis()->SetTitle("Entries");
   WQBOYXJRQG->GetYaxis()->SetLabelFont(42);
   WQBOYXJRQG->GetYaxis()->SetLabelSize(0.035);
   WQBOYXJRQG->GetYaxis()->SetTitleSize(0.035);
   WQBOYXJRQG->GetYaxis()->SetTitleFont(42);
   WQBOYXJRQG->GetZaxis()->SetLabelFont(42);
   WQBOYXJRQG->GetZaxis()->SetLabelSize(0.035);
   WQBOYXJRQG->GetZaxis()->SetTitleSize(0.035);
   WQBOYXJRQG->GetZaxis()->SetTitleFont(42);
   WQBOYXJRQG->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("WQBOYXJRQG","ee_lnuqqqq","f");

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
   BLFPQWSBOR_2->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_3
   BLFPQWSBOR_3 = new TPad("BLFPQWSBOR_3", "BLFPQWSBOR_3",0.51,0.81,0.74,0.99);
   BLFPQWSBOR_3->Draw();
   BLFPQWSBOR_3->cd();
   BLFPQWSBOR_3->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_3->SetFillColor(0);
   BLFPQWSBOR_3->SetBorderMode(0);
   BLFPQWSBOR_3->SetBorderSize(2);
   BLFPQWSBOR_3->SetFrameBorderMode(0);
   BLFPQWSBOR_3->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *HZKGXXDEVP = new TH1F("HZKGXXDEVP","NumberOfIsolatedLeptons",5,0,5);
   HZKGXXDEVP->SetBinContent(1,0.5604534);
   HZKGXXDEVP->SetBinContent(2,0.3389324);
   HZKGXXDEVP->SetBinContent(3,0.1003197);
   HZKGXXDEVP->SetBinContent(4,0.0002945091);
   HZKGXXDEVP->SetEntries(634293);
   HZKGXXDEVP->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   HZKGXXDEVP->SetFillColor(ci);
   HZKGXXDEVP->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   HZKGXXDEVP->SetLineColor(ci);
   HZKGXXDEVP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HZKGXXDEVP->GetXaxis()->SetLabelFont(42);
   HZKGXXDEVP->GetXaxis()->SetLabelSize(0.035);
   HZKGXXDEVP->GetXaxis()->SetTitleSize(0.035);
   HZKGXXDEVP->GetXaxis()->SetTitleFont(42);
   HZKGXXDEVP->GetYaxis()->SetTitle("Entries");
   HZKGXXDEVP->GetYaxis()->SetLabelFont(42);
   HZKGXXDEVP->GetYaxis()->SetLabelSize(0.035);
   HZKGXXDEVP->GetYaxis()->SetTitleSize(0.035);
   HZKGXXDEVP->GetYaxis()->SetTitleFont(42);
   HZKGXXDEVP->GetZaxis()->SetLabelFont(42);
   HZKGXXDEVP->GetZaxis()->SetLabelSize(0.035);
   HZKGXXDEVP->GetZaxis()->SetTitleSize(0.035);
   HZKGXXDEVP->GetZaxis()->SetTitleFont(42);
   HZKGXXDEVP->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("HZKGXXDEVP","ee_llqqqq","f");

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
   BLFPQWSBOR_3->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_4
   BLFPQWSBOR_4 = new TPad("BLFPQWSBOR_4", "BLFPQWSBOR_4",0.76,0.81,0.99,0.99);
   BLFPQWSBOR_4->Draw();
   BLFPQWSBOR_4->cd();
   BLFPQWSBOR_4->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_4->SetFillColor(0);
   BLFPQWSBOR_4->SetBorderMode(0);
   BLFPQWSBOR_4->SetBorderSize(2);
   BLFPQWSBOR_4->SetFrameBorderMode(0);
   BLFPQWSBOR_4->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *RDSLFWBMAM = new TH1F("RDSLFWBMAM","NumberOfIsolatedLeptons",5,0,5);
   RDSLFWBMAM->SetBinContent(1,0.9982818);
   RDSLFWBMAM->SetBinContent(2,0.001714742);
   RDSLFWBMAM->SetBinContent(3,3.422624e-06);
   RDSLFWBMAM->SetEntries(292530);
   RDSLFWBMAM->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   RDSLFWBMAM->SetFillColor(ci);
   RDSLFWBMAM->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   RDSLFWBMAM->SetLineColor(ci);
   RDSLFWBMAM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RDSLFWBMAM->GetXaxis()->SetLabelFont(42);
   RDSLFWBMAM->GetXaxis()->SetLabelSize(0.035);
   RDSLFWBMAM->GetXaxis()->SetTitleSize(0.035);
   RDSLFWBMAM->GetXaxis()->SetTitleFont(42);
   RDSLFWBMAM->GetYaxis()->SetTitle("Entries");
   RDSLFWBMAM->GetYaxis()->SetLabelFont(42);
   RDSLFWBMAM->GetYaxis()->SetLabelSize(0.035);
   RDSLFWBMAM->GetYaxis()->SetTitleSize(0.035);
   RDSLFWBMAM->GetYaxis()->SetTitleFont(42);
   RDSLFWBMAM->GetZaxis()->SetLabelFont(42);
   RDSLFWBMAM->GetZaxis()->SetLabelSize(0.035);
   RDSLFWBMAM->GetZaxis()->SetTitleSize(0.035);
   RDSLFWBMAM->GetZaxis()->SetTitleFont(42);
   RDSLFWBMAM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("RDSLFWBMAM","ee_qqqq","f");

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
   BLFPQWSBOR_4->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_5
   BLFPQWSBOR_5 = new TPad("BLFPQWSBOR_5", "BLFPQWSBOR_5",0.01,0.61,0.24,0.79);
   BLFPQWSBOR_5->Draw();
   BLFPQWSBOR_5->cd();
   BLFPQWSBOR_5->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_5->SetFillColor(0);
   BLFPQWSBOR_5->SetBorderMode(0);
   BLFPQWSBOR_5->SetBorderSize(2);
   BLFPQWSBOR_5->SetFrameBorderMode(0);
   BLFPQWSBOR_5->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *KPMGPCTXOJ = new TH1F("KPMGPCTXOJ","NumberOfIsolatedLeptons",5,0,5);
   KPMGPCTXOJ->SetBinContent(1,0.9978479);
   KPMGPCTXOJ->SetBinContent(2,0.002152161);
   KPMGPCTXOJ->SetEntries(291933);
   KPMGPCTXOJ->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   KPMGPCTXOJ->SetFillColor(ci);
   KPMGPCTXOJ->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   KPMGPCTXOJ->SetLineColor(ci);
   KPMGPCTXOJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KPMGPCTXOJ->GetXaxis()->SetLabelFont(42);
   KPMGPCTXOJ->GetXaxis()->SetLabelSize(0.035);
   KPMGPCTXOJ->GetXaxis()->SetTitleSize(0.035);
   KPMGPCTXOJ->GetXaxis()->SetTitleFont(42);
   KPMGPCTXOJ->GetYaxis()->SetTitle("Entries");
   KPMGPCTXOJ->GetYaxis()->SetLabelFont(42);
   KPMGPCTXOJ->GetYaxis()->SetLabelSize(0.035);
   KPMGPCTXOJ->GetYaxis()->SetTitleSize(0.035);
   KPMGPCTXOJ->GetYaxis()->SetTitleFont(42);
   KPMGPCTXOJ->GetZaxis()->SetLabelFont(42);
   KPMGPCTXOJ->GetZaxis()->SetLabelSize(0.035);
   KPMGPCTXOJ->GetZaxis()->SetTitleSize(0.035);
   KPMGPCTXOJ->GetZaxis()->SetTitleFont(42);
   KPMGPCTXOJ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KPMGPCTXOJ","ee_nunuqq","f");

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
   BLFPQWSBOR_5->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_6
   BLFPQWSBOR_6 = new TPad("BLFPQWSBOR_6", "BLFPQWSBOR_6",0.26,0.61,0.49,0.79);
   BLFPQWSBOR_6->Draw();
   BLFPQWSBOR_6->cd();
   BLFPQWSBOR_6->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_6->SetFillColor(0);
   BLFPQWSBOR_6->SetBorderMode(0);
   BLFPQWSBOR_6->SetBorderSize(2);
   BLFPQWSBOR_6->SetFrameBorderMode(0);
   BLFPQWSBOR_6->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *EIDTNXEFET = new TH1F("EIDTNXEFET","NumberOfIsolatedLeptons",5,0,5);
   EIDTNXEFET->SetBinContent(1,0.7408053);
   EIDTNXEFET->SetBinContent(2,0.2588066);
   EIDTNXEFET->SetBinContent(3,0.0003880817);
   EIDTNXEFET->SetEntries(1046740);
   EIDTNXEFET->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   EIDTNXEFET->SetFillColor(ci);
   EIDTNXEFET->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   EIDTNXEFET->SetLineColor(ci);
   EIDTNXEFET->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EIDTNXEFET->GetXaxis()->SetLabelFont(42);
   EIDTNXEFET->GetXaxis()->SetLabelSize(0.035);
   EIDTNXEFET->GetXaxis()->SetTitleSize(0.035);
   EIDTNXEFET->GetXaxis()->SetTitleFont(42);
   EIDTNXEFET->GetYaxis()->SetTitle("Entries");
   EIDTNXEFET->GetYaxis()->SetLabelFont(42);
   EIDTNXEFET->GetYaxis()->SetLabelSize(0.035);
   EIDTNXEFET->GetYaxis()->SetTitleSize(0.035);
   EIDTNXEFET->GetYaxis()->SetTitleFont(42);
   EIDTNXEFET->GetZaxis()->SetLabelFont(42);
   EIDTNXEFET->GetZaxis()->SetLabelSize(0.035);
   EIDTNXEFET->GetZaxis()->SetTitleSize(0.035);
   EIDTNXEFET->GetZaxis()->SetTitleFont(42);
   EIDTNXEFET->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("EIDTNXEFET","ee_lnuqq","f");

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
   BLFPQWSBOR_6->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_7
   BLFPQWSBOR_7 = new TPad("BLFPQWSBOR_7", "BLFPQWSBOR_7",0.51,0.61,0.74,0.79);
   BLFPQWSBOR_7->Draw();
   BLFPQWSBOR_7->cd();
   BLFPQWSBOR_7->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_7->SetFillColor(0);
   BLFPQWSBOR_7->SetBorderMode(0);
   BLFPQWSBOR_7->SetBorderSize(2);
   BLFPQWSBOR_7->SetFrameBorderMode(0);
   BLFPQWSBOR_7->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *YADPJIUKGS = new TH1F("YADPJIUKGS","NumberOfIsolatedLeptons",5,0,5);
   YADPJIUKGS->SetBinContent(1,0.8408142);
   YADPJIUKGS->SetBinContent(2,0.1415447);
   YADPJIUKGS->SetBinContent(3,0.01761454);
   YADPJIUKGS->SetBinContent(4,2.648767e-05);
   YADPJIUKGS->SetEntries(1049725);
   YADPJIUKGS->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   YADPJIUKGS->SetFillColor(ci);
   YADPJIUKGS->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   YADPJIUKGS->SetLineColor(ci);
   YADPJIUKGS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YADPJIUKGS->GetXaxis()->SetLabelFont(42);
   YADPJIUKGS->GetXaxis()->SetLabelSize(0.035);
   YADPJIUKGS->GetXaxis()->SetTitleSize(0.035);
   YADPJIUKGS->GetXaxis()->SetTitleFont(42);
   YADPJIUKGS->GetYaxis()->SetTitle("Entries");
   YADPJIUKGS->GetYaxis()->SetLabelFont(42);
   YADPJIUKGS->GetYaxis()->SetLabelSize(0.035);
   YADPJIUKGS->GetYaxis()->SetTitleSize(0.035);
   YADPJIUKGS->GetYaxis()->SetTitleFont(42);
   YADPJIUKGS->GetZaxis()->SetLabelFont(42);
   YADPJIUKGS->GetZaxis()->SetLabelSize(0.035);
   YADPJIUKGS->GetZaxis()->SetTitleSize(0.035);
   YADPJIUKGS->GetZaxis()->SetTitleFont(42);
   YADPJIUKGS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("YADPJIUKGS","ee_qqll","f");

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
   BLFPQWSBOR_7->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_8
   BLFPQWSBOR_8 = new TPad("BLFPQWSBOR_8", "BLFPQWSBOR_8",0.76,0.61,0.99,0.79);
   BLFPQWSBOR_8->Draw();
   BLFPQWSBOR_8->cd();
   BLFPQWSBOR_8->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_8->SetFillColor(0);
   BLFPQWSBOR_8->SetBorderMode(0);
   BLFPQWSBOR_8->SetBorderSize(2);
   BLFPQWSBOR_8->SetFrameBorderMode(0);
   BLFPQWSBOR_8->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *VWZCWLXVPS = new TH1F("VWZCWLXVPS","NumberOfIsolatedLeptons",5,0,5);
   VWZCWLXVPS->SetBinContent(1,0.9986517);
   VWZCWLXVPS->SetBinContent(2,0.001348264);
   VWZCWLXVPS->SetEntries(242757);
   VWZCWLXVPS->SetStats(0);

   ci = TColor::GetColor("#006633");
   VWZCWLXVPS->SetFillColor(ci);
   VWZCWLXVPS->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   VWZCWLXVPS->SetLineColor(ci);
   VWZCWLXVPS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VWZCWLXVPS->GetXaxis()->SetLabelFont(42);
   VWZCWLXVPS->GetXaxis()->SetLabelSize(0.035);
   VWZCWLXVPS->GetXaxis()->SetTitleSize(0.035);
   VWZCWLXVPS->GetXaxis()->SetTitleFont(42);
   VWZCWLXVPS->GetYaxis()->SetTitle("Entries");
   VWZCWLXVPS->GetYaxis()->SetLabelFont(42);
   VWZCWLXVPS->GetYaxis()->SetLabelSize(0.035);
   VWZCWLXVPS->GetYaxis()->SetTitleSize(0.035);
   VWZCWLXVPS->GetYaxis()->SetTitleFont(42);
   VWZCWLXVPS->GetZaxis()->SetLabelFont(42);
   VWZCWLXVPS->GetZaxis()->SetLabelSize(0.035);
   VWZCWLXVPS->GetZaxis()->SetTitleSize(0.035);
   VWZCWLXVPS->GetZaxis()->SetTitleFont(42);
   VWZCWLXVPS->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("VWZCWLXVPS","ee_qq","f");

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
   BLFPQWSBOR_8->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_9
   BLFPQWSBOR_9 = new TPad("BLFPQWSBOR_9", "BLFPQWSBOR_9",0.01,0.41,0.24,0.59);
   BLFPQWSBOR_9->Draw();
   BLFPQWSBOR_9->cd();
   BLFPQWSBOR_9->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_9->SetFillColor(0);
   BLFPQWSBOR_9->SetBorderMode(0);
   BLFPQWSBOR_9->SetBorderSize(2);
   BLFPQWSBOR_9->SetFrameBorderMode(0);
   BLFPQWSBOR_9->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *MIDGZZRENT = new TH1F("MIDGZZRENT","NumberOfIsolatedLeptons",5,0,5);
   MIDGZZRENT->SetBinContent(1,0.6355625);
   MIDGZZRENT->SetBinContent(2,0.3134608);
   MIDGZZRENT->SetBinContent(3,0.05086579);
   MIDGZZRENT->SetBinContent(4,9.501509e-05);
   MIDGZZRENT->SetBinContent(5,1.583585e-05);
   MIDGZZRENT->SetEntries(63162);
   MIDGZZRENT->SetStats(0);
   MIDGZZRENT->SetFillColor(3);
   MIDGZZRENT->SetFillStyle(3001);
   MIDGZZRENT->SetLineColor(3);
   MIDGZZRENT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   MIDGZZRENT->GetXaxis()->SetLabelFont(42);
   MIDGZZRENT->GetXaxis()->SetLabelSize(0.035);
   MIDGZZRENT->GetXaxis()->SetTitleSize(0.035);
   MIDGZZRENT->GetXaxis()->SetTitleFont(42);
   MIDGZZRENT->GetYaxis()->SetTitle("Entries");
   MIDGZZRENT->GetYaxis()->SetLabelFont(42);
   MIDGZZRENT->GetYaxis()->SetLabelSize(0.035);
   MIDGZZRENT->GetYaxis()->SetTitleSize(0.035);
   MIDGZZRENT->GetYaxis()->SetTitleFont(42);
   MIDGZZRENT->GetZaxis()->SetLabelFont(42);
   MIDGZZRENT->GetZaxis()->SetLabelSize(0.035);
   MIDGZZRENT->GetZaxis()->SetTitleSize(0.035);
   MIDGZZRENT->GetZaxis()->SetTitleFont(42);
   MIDGZZRENT->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("MIDGZZRENT","egamma_qqqqe_EPA","f");
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
   BLFPQWSBOR_9->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_10
   BLFPQWSBOR_10 = new TPad("BLFPQWSBOR_10", "BLFPQWSBOR_10",0.26,0.41,0.49,0.59);
   BLFPQWSBOR_10->Draw();
   BLFPQWSBOR_10->cd();
   BLFPQWSBOR_10->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_10->SetFillColor(0);
   BLFPQWSBOR_10->SetBorderMode(0);
   BLFPQWSBOR_10->SetBorderSize(2);
   BLFPQWSBOR_10->SetFrameBorderMode(0);
   BLFPQWSBOR_10->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *YIYYCIKZVH = new TH1F("YIYYCIKZVH","NumberOfIsolatedLeptons",5,0,5);
   YIYYCIKZVH->SetBinContent(1,0.8646767);
   YIYYCIKZVH->SetBinContent(2,0.1343371);
   YIYYCIKZVH->SetBinContent(3,0.0009861724);
   YIYYCIKZVH->SetEntries(61875);
   YIYYCIKZVH->SetStats(0);

   ci = TColor::GetColor("#990033");
   YIYYCIKZVH->SetFillColor(ci);
   YIYYCIKZVH->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   YIYYCIKZVH->SetLineColor(ci);
   YIYYCIKZVH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YIYYCIKZVH->GetXaxis()->SetLabelFont(42);
   YIYYCIKZVH->GetXaxis()->SetLabelSize(0.035);
   YIYYCIKZVH->GetXaxis()->SetTitleSize(0.035);
   YIYYCIKZVH->GetXaxis()->SetTitleFont(42);
   YIYYCIKZVH->GetYaxis()->SetTitle("Entries");
   YIYYCIKZVH->GetYaxis()->SetLabelFont(42);
   YIYYCIKZVH->GetYaxis()->SetLabelSize(0.035);
   YIYYCIKZVH->GetYaxis()->SetTitleSize(0.035);
   YIYYCIKZVH->GetYaxis()->SetTitleFont(42);
   YIYYCIKZVH->GetZaxis()->SetLabelFont(42);
   YIYYCIKZVH->GetZaxis()->SetLabelSize(0.035);
   YIYYCIKZVH->GetZaxis()->SetTitleSize(0.035);
   YIYYCIKZVH->GetZaxis()->SetTitleFont(42);
   YIYYCIKZVH->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("YIYYCIKZVH","egamma_qqqqe_BS","f");

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
   BLFPQWSBOR_10->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_11
   BLFPQWSBOR_11 = new TPad("BLFPQWSBOR_11", "BLFPQWSBOR_11",0.51,0.41,0.74,0.59);
   BLFPQWSBOR_11->Draw();
   BLFPQWSBOR_11->cd();
   BLFPQWSBOR_11->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_11->SetFillColor(0);
   BLFPQWSBOR_11->SetBorderMode(0);
   BLFPQWSBOR_11->SetBorderSize(2);
   BLFPQWSBOR_11->SetFrameBorderMode(0);
   BLFPQWSBOR_11->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *RDHBLJUDAD = new TH1F("RDHBLJUDAD","NumberOfIsolatedLeptons",5,0,5);
   RDHBLJUDAD->SetBinContent(1,0.6378272);
   RDHBLJUDAD->SetBinContent(2,0.3124466);
   RDHBLJUDAD->SetBinContent(3,0.04960899);
   RDHBLJUDAD->SetBinContent(4,0.0001171384);
   RDHBLJUDAD->SetEntries(68310);
   RDHBLJUDAD->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   RDHBLJUDAD->SetFillColor(ci);
   RDHBLJUDAD->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   RDHBLJUDAD->SetLineColor(ci);
   RDHBLJUDAD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RDHBLJUDAD->GetXaxis()->SetLabelFont(42);
   RDHBLJUDAD->GetXaxis()->SetLabelSize(0.035);
   RDHBLJUDAD->GetXaxis()->SetTitleSize(0.035);
   RDHBLJUDAD->GetXaxis()->SetTitleFont(42);
   RDHBLJUDAD->GetYaxis()->SetTitle("Entries");
   RDHBLJUDAD->GetYaxis()->SetLabelFont(42);
   RDHBLJUDAD->GetYaxis()->SetLabelSize(0.035);
   RDHBLJUDAD->GetYaxis()->SetTitleSize(0.035);
   RDHBLJUDAD->GetYaxis()->SetTitleFont(42);
   RDHBLJUDAD->GetZaxis()->SetLabelFont(42);
   RDHBLJUDAD->GetZaxis()->SetLabelSize(0.035);
   RDHBLJUDAD->GetZaxis()->SetTitleSize(0.035);
   RDHBLJUDAD->GetZaxis()->SetTitleFont(42);
   RDHBLJUDAD->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("RDHBLJUDAD","gammae_qqqqe_EPA","f");

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
   BLFPQWSBOR_11->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_12
   BLFPQWSBOR_12 = new TPad("BLFPQWSBOR_12", "BLFPQWSBOR_12",0.76,0.41,0.99,0.59);
   BLFPQWSBOR_12->Draw();
   BLFPQWSBOR_12->cd();
   BLFPQWSBOR_12->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_12->SetFillColor(0);
   BLFPQWSBOR_12->SetBorderMode(0);
   BLFPQWSBOR_12->SetBorderSize(2);
   BLFPQWSBOR_12->SetFrameBorderMode(0);
   BLFPQWSBOR_12->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *CMUKFNTVCJ = new TH1F("CMUKFNTVCJ","NumberOfIsolatedLeptons",5,0,5);
   CMUKFNTVCJ->SetBinContent(1,0.8650129);
   CMUKFNTVCJ->SetBinContent(2,0.1338643);
   CMUKFNTVCJ->SetBinContent(3,0.001106013);
   CMUKFNTVCJ->SetBinContent(4,1.675778e-05);
   CMUKFNTVCJ->SetEntries(59697);
   CMUKFNTVCJ->SetStats(0);

   ci = TColor::GetColor("#a42400");
   CMUKFNTVCJ->SetFillColor(ci);
   CMUKFNTVCJ->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   CMUKFNTVCJ->SetLineColor(ci);
   CMUKFNTVCJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   CMUKFNTVCJ->GetXaxis()->SetLabelFont(42);
   CMUKFNTVCJ->GetXaxis()->SetLabelSize(0.035);
   CMUKFNTVCJ->GetXaxis()->SetTitleSize(0.035);
   CMUKFNTVCJ->GetXaxis()->SetTitleFont(42);
   CMUKFNTVCJ->GetYaxis()->SetTitle("Entries");
   CMUKFNTVCJ->GetYaxis()->SetLabelFont(42);
   CMUKFNTVCJ->GetYaxis()->SetLabelSize(0.035);
   CMUKFNTVCJ->GetYaxis()->SetTitleSize(0.035);
   CMUKFNTVCJ->GetYaxis()->SetTitleFont(42);
   CMUKFNTVCJ->GetZaxis()->SetLabelFont(42);
   CMUKFNTVCJ->GetZaxis()->SetLabelSize(0.035);
   CMUKFNTVCJ->GetZaxis()->SetTitleSize(0.035);
   CMUKFNTVCJ->GetZaxis()->SetTitleFont(42);
   CMUKFNTVCJ->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("CMUKFNTVCJ","gammae_qqqqe_BS","f");

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
   BLFPQWSBOR_12->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_13
   BLFPQWSBOR_13 = new TPad("BLFPQWSBOR_13", "BLFPQWSBOR_13",0.01,0.21,0.24,0.39);
   BLFPQWSBOR_13->Draw();
   BLFPQWSBOR_13->cd();
   BLFPQWSBOR_13->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_13->SetFillColor(0);
   BLFPQWSBOR_13->SetBorderMode(0);
   BLFPQWSBOR_13->SetBorderSize(2);
   BLFPQWSBOR_13->SetFrameBorderMode(0);
   BLFPQWSBOR_13->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *ZOUXLANXSM = new TH1F("ZOUXLANXSM","NumberOfIsolatedLeptons",5,0,5);
   ZOUXLANXSM->SetBinContent(1,0.7382723);
   ZOUXLANXSM->SetBinContent(2,0.2610261);
   ZOUXLANXSM->SetBinContent(3,0.0007016284);
   ZOUXLANXSM->SetEntries(88308);
   ZOUXLANXSM->SetStats(0);

   ci = TColor::GetColor("#001544");
   ZOUXLANXSM->SetFillColor(ci);
   ZOUXLANXSM->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   ZOUXLANXSM->SetLineColor(ci);
   ZOUXLANXSM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZOUXLANXSM->GetXaxis()->SetLabelFont(42);
   ZOUXLANXSM->GetXaxis()->SetLabelSize(0.035);
   ZOUXLANXSM->GetXaxis()->SetTitleSize(0.035);
   ZOUXLANXSM->GetXaxis()->SetTitleFont(42);
   ZOUXLANXSM->GetYaxis()->SetTitle("Entries");
   ZOUXLANXSM->GetYaxis()->SetLabelFont(42);
   ZOUXLANXSM->GetYaxis()->SetLabelSize(0.035);
   ZOUXLANXSM->GetYaxis()->SetTitleSize(0.035);
   ZOUXLANXSM->GetYaxis()->SetTitleFont(42);
   ZOUXLANXSM->GetZaxis()->SetLabelFont(42);
   ZOUXLANXSM->GetZaxis()->SetLabelSize(0.035);
   ZOUXLANXSM->GetZaxis()->SetTitleSize(0.035);
   ZOUXLANXSM->GetZaxis()->SetTitleFont(42);
   ZOUXLANXSM->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ZOUXLANXSM","egamma_qqqqnu_EPA","f");

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
   BLFPQWSBOR_13->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_14
   BLFPQWSBOR_14 = new TPad("BLFPQWSBOR_14", "BLFPQWSBOR_14",0.26,0.21,0.49,0.39);
   BLFPQWSBOR_14->Draw();
   BLFPQWSBOR_14->cd();
   BLFPQWSBOR_14->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_14->SetFillColor(0);
   BLFPQWSBOR_14->SetBorderMode(0);
   BLFPQWSBOR_14->SetBorderSize(2);
   BLFPQWSBOR_14->SetFrameBorderMode(0);
   BLFPQWSBOR_14->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *ZEUYPWBRRH = new TH1F("ZEUYPWBRRH","NumberOfIsolatedLeptons",5,0,5);
   ZEUYPWBRRH->SetBinContent(1,0.9904031);
   ZEUYPWBRRH->SetBinContent(2,0.009550909);
   ZEUYPWBRRH->SetBinContent(3,4.597328e-05);
   ZEUYPWBRRH->SetEntries(87021);
   ZEUYPWBRRH->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   ZEUYPWBRRH->SetFillColor(ci);
   ZEUYPWBRRH->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   ZEUYPWBRRH->SetLineColor(ci);
   ZEUYPWBRRH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZEUYPWBRRH->GetXaxis()->SetLabelFont(42);
   ZEUYPWBRRH->GetXaxis()->SetLabelSize(0.035);
   ZEUYPWBRRH->GetXaxis()->SetTitleSize(0.035);
   ZEUYPWBRRH->GetXaxis()->SetTitleFont(42);
   ZEUYPWBRRH->GetYaxis()->SetTitle("Entries");
   ZEUYPWBRRH->GetYaxis()->SetLabelFont(42);
   ZEUYPWBRRH->GetYaxis()->SetLabelSize(0.035);
   ZEUYPWBRRH->GetYaxis()->SetTitleSize(0.035);
   ZEUYPWBRRH->GetYaxis()->SetTitleFont(42);
   ZEUYPWBRRH->GetZaxis()->SetLabelFont(42);
   ZEUYPWBRRH->GetZaxis()->SetLabelSize(0.035);
   ZEUYPWBRRH->GetZaxis()->SetTitleSize(0.035);
   ZEUYPWBRRH->GetZaxis()->SetTitleFont(42);
   ZEUYPWBRRH->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ZEUYPWBRRH","egamma_qqqqnu_BS","f");

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
   BLFPQWSBOR_14->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_15
   BLFPQWSBOR_15 = new TPad("BLFPQWSBOR_15", "BLFPQWSBOR_15",0.51,0.21,0.74,0.39);
   BLFPQWSBOR_15->Draw();
   BLFPQWSBOR_15->cd();
   BLFPQWSBOR_15->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_15->SetFillColor(0);
   BLFPQWSBOR_15->SetBorderMode(0);
   BLFPQWSBOR_15->SetBorderSize(2);
   BLFPQWSBOR_15->SetFrameBorderMode(0);
   BLFPQWSBOR_15->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *KAFDKTMLCN = new TH1F("KAFDKTMLCN","NumberOfIsolatedLeptons",5,0,5);
   KAFDKTMLCN->SetBinContent(1,0.7363816);
   KAFDKTMLCN->SetBinContent(2,0.2629393);
   KAFDKTMLCN->SetBinContent(3,0.0006789974);
   KAFDKTMLCN->SetEntries(88308);
   KAFDKTMLCN->SetStats(0);

   ci = TColor::GetColor("#620e00");
   KAFDKTMLCN->SetFillColor(ci);
   KAFDKTMLCN->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   KAFDKTMLCN->SetLineColor(ci);
   KAFDKTMLCN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KAFDKTMLCN->GetXaxis()->SetLabelFont(42);
   KAFDKTMLCN->GetXaxis()->SetLabelSize(0.035);
   KAFDKTMLCN->GetXaxis()->SetTitleSize(0.035);
   KAFDKTMLCN->GetXaxis()->SetTitleFont(42);
   KAFDKTMLCN->GetYaxis()->SetTitle("Entries");
   KAFDKTMLCN->GetYaxis()->SetLabelFont(42);
   KAFDKTMLCN->GetYaxis()->SetLabelSize(0.035);
   KAFDKTMLCN->GetYaxis()->SetTitleSize(0.035);
   KAFDKTMLCN->GetYaxis()->SetTitleFont(42);
   KAFDKTMLCN->GetZaxis()->SetLabelFont(42);
   KAFDKTMLCN->GetZaxis()->SetLabelSize(0.035);
   KAFDKTMLCN->GetZaxis()->SetTitleSize(0.035);
   KAFDKTMLCN->GetZaxis()->SetTitleFont(42);
   KAFDKTMLCN->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("KAFDKTMLCN","gammae_qqqqnu_EPA","f");

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
   BLFPQWSBOR_15->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_16
   BLFPQWSBOR_16 = new TPad("BLFPQWSBOR_16", "BLFPQWSBOR_16",0.76,0.21,0.99,0.39);
   BLFPQWSBOR_16->Draw();
   BLFPQWSBOR_16->cd();
   BLFPQWSBOR_16->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_16->SetFillColor(0);
   BLFPQWSBOR_16->SetBorderMode(0);
   BLFPQWSBOR_16->SetBorderSize(2);
   BLFPQWSBOR_16->SetFrameBorderMode(0);
   BLFPQWSBOR_16->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *BPSYIWTUIO = new TH1F("BPSYIWTUIO","NumberOfIsolatedLeptons",5,0,5);
   BPSYIWTUIO->SetBinContent(1,0.9906672);
   BPSYIWTUIO->SetBinContent(2,0.009298041);
   BPSYIWTUIO->SetBinContent(3,3.473754e-05);
   BPSYIWTUIO->SetEntries(86328);
   BPSYIWTUIO->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   BPSYIWTUIO->SetFillColor(ci);
   BPSYIWTUIO->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   BPSYIWTUIO->SetLineColor(ci);
   BPSYIWTUIO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BPSYIWTUIO->GetXaxis()->SetLabelFont(42);
   BPSYIWTUIO->GetXaxis()->SetLabelSize(0.035);
   BPSYIWTUIO->GetXaxis()->SetTitleSize(0.035);
   BPSYIWTUIO->GetXaxis()->SetTitleFont(42);
   BPSYIWTUIO->GetYaxis()->SetTitle("Entries");
   BPSYIWTUIO->GetYaxis()->SetLabelFont(42);
   BPSYIWTUIO->GetYaxis()->SetLabelSize(0.035);
   BPSYIWTUIO->GetYaxis()->SetTitleSize(0.035);
   BPSYIWTUIO->GetYaxis()->SetTitleFont(42);
   BPSYIWTUIO->GetZaxis()->SetLabelFont(42);
   BPSYIWTUIO->GetZaxis()->SetLabelSize(0.035);
   BPSYIWTUIO->GetZaxis()->SetTitleSize(0.035);
   BPSYIWTUIO->GetZaxis()->SetTitleFont(42);
   BPSYIWTUIO->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("BPSYIWTUIO","gammae_qqqqnu_BS","f");

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
   BLFPQWSBOR_16->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_17
   BLFPQWSBOR_17 = new TPad("BLFPQWSBOR_17", "BLFPQWSBOR_17",0.01,0.01,0.24,0.19);
   BLFPQWSBOR_17->Draw();
   BLFPQWSBOR_17->cd();
   BLFPQWSBOR_17->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_17->SetFillColor(0);
   BLFPQWSBOR_17->SetBorderMode(0);
   BLFPQWSBOR_17->SetBorderSize(2);
   BLFPQWSBOR_17->SetFrameBorderMode(0);
   BLFPQWSBOR_17->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *JILWWIGGIV = new TH1F("JILWWIGGIV","NumberOfIsolatedLeptons",5,0,5);
   JILWWIGGIV->SetBinContent(1,0.7619709);
   JILWWIGGIV->SetBinContent(2,0.2159097);
   JILWWIGGIV->SetBinContent(3,0.02205944);
   JILWWIGGIV->SetBinContent(4,5.987989e-05);
   JILWWIGGIV->SetEntries(83457);
   JILWWIGGIV->SetStats(0);
   JILWWIGGIV->SetFillColor(4);
   JILWWIGGIV->SetFillStyle(3001);
   JILWWIGGIV->SetLineColor(4);
   JILWWIGGIV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JILWWIGGIV->GetXaxis()->SetLabelFont(42);
   JILWWIGGIV->GetXaxis()->SetLabelSize(0.035);
   JILWWIGGIV->GetXaxis()->SetTitleSize(0.035);
   JILWWIGGIV->GetXaxis()->SetTitleFont(42);
   JILWWIGGIV->GetYaxis()->SetTitle("Entries");
   JILWWIGGIV->GetYaxis()->SetLabelFont(42);
   JILWWIGGIV->GetYaxis()->SetLabelSize(0.035);
   JILWWIGGIV->GetYaxis()->SetTitleSize(0.035);
   JILWWIGGIV->GetYaxis()->SetTitleFont(42);
   JILWWIGGIV->GetZaxis()->SetLabelFont(42);
   JILWWIGGIV->GetZaxis()->SetLabelSize(0.035);
   JILWWIGGIV->GetZaxis()->SetTitleSize(0.035);
   JILWWIGGIV->GetZaxis()->SetTitleFont(42);
   JILWWIGGIV->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("JILWWIGGIV","gammagamma_qqqq_EPA_EPA","f");
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
   BLFPQWSBOR_17->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_18
   BLFPQWSBOR_18 = new TPad("BLFPQWSBOR_18", "BLFPQWSBOR_18",0.26,0.01,0.49,0.19);
   BLFPQWSBOR_18->Draw();
   BLFPQWSBOR_18->cd();
   BLFPQWSBOR_18->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_18->SetFillColor(0);
   BLFPQWSBOR_18->SetBorderMode(0);
   BLFPQWSBOR_18->SetBorderSize(2);
   BLFPQWSBOR_18->SetFrameBorderMode(0);
   BLFPQWSBOR_18->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *SQKPYPKRJD = new TH1F("SQKPYPKRJD","NumberOfIsolatedLeptons",5,0,5);
   SQKPYPKRJD->SetBinContent(1,0.8604384);
   SQKPYPKRJD->SetBinContent(2,0.1384778);
   SQKPYPKRJD->SetBinContent(3,0.001083737);
   SQKPYPKRJD->SetEntries(83061);
   SQKPYPKRJD->SetStats(0);

   ci = TColor::GetColor("#007db5");
   SQKPYPKRJD->SetFillColor(ci);
   SQKPYPKRJD->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   SQKPYPKRJD->SetLineColor(ci);
   SQKPYPKRJD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SQKPYPKRJD->GetXaxis()->SetLabelFont(42);
   SQKPYPKRJD->GetXaxis()->SetLabelSize(0.035);
   SQKPYPKRJD->GetXaxis()->SetTitleSize(0.035);
   SQKPYPKRJD->GetXaxis()->SetTitleFont(42);
   SQKPYPKRJD->GetYaxis()->SetTitle("Entries");
   SQKPYPKRJD->GetYaxis()->SetLabelFont(42);
   SQKPYPKRJD->GetYaxis()->SetLabelSize(0.035);
   SQKPYPKRJD->GetYaxis()->SetTitleSize(0.035);
   SQKPYPKRJD->GetYaxis()->SetTitleFont(42);
   SQKPYPKRJD->GetZaxis()->SetLabelFont(42);
   SQKPYPKRJD->GetZaxis()->SetLabelSize(0.035);
   SQKPYPKRJD->GetZaxis()->SetTitleSize(0.035);
   SQKPYPKRJD->GetZaxis()->SetTitleFont(42);
   SQKPYPKRJD->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("SQKPYPKRJD","gammagamma_qqqq_EPA_BS","f");

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
   BLFPQWSBOR_18->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_19
   BLFPQWSBOR_19 = new TPad("BLFPQWSBOR_19", "BLFPQWSBOR_19",0.51,0.01,0.74,0.19);
   BLFPQWSBOR_19->Draw();
   BLFPQWSBOR_19->cd();
   BLFPQWSBOR_19->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_19->SetFillColor(0);
   BLFPQWSBOR_19->SetBorderMode(0);
   BLFPQWSBOR_19->SetBorderSize(2);
   BLFPQWSBOR_19->SetFrameBorderMode(0);
   BLFPQWSBOR_19->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *BAWMFDUCGB = new TH1F("BAWMFDUCGB","NumberOfIsolatedLeptons",5,0,5);
   BAWMFDUCGB->SetBinContent(1,0.8610427);
   BAWMFDUCGB->SetBinContent(2,0.1379668);
   BAWMFDUCGB->SetBinContent(3,0.0009904989);
   BAWMFDUCGB->SetEntries(84843);
   BAWMFDUCGB->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   BAWMFDUCGB->SetFillColor(ci);
   BAWMFDUCGB->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   BAWMFDUCGB->SetLineColor(ci);
   BAWMFDUCGB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BAWMFDUCGB->GetXaxis()->SetLabelFont(42);
   BAWMFDUCGB->GetXaxis()->SetLabelSize(0.035);
   BAWMFDUCGB->GetXaxis()->SetTitleSize(0.035);
   BAWMFDUCGB->GetXaxis()->SetTitleFont(42);
   BAWMFDUCGB->GetYaxis()->SetTitle("Entries");
   BAWMFDUCGB->GetYaxis()->SetLabelFont(42);
   BAWMFDUCGB->GetYaxis()->SetLabelSize(0.035);
   BAWMFDUCGB->GetYaxis()->SetTitleSize(0.035);
   BAWMFDUCGB->GetYaxis()->SetTitleFont(42);
   BAWMFDUCGB->GetZaxis()->SetLabelFont(42);
   BAWMFDUCGB->GetZaxis()->SetLabelSize(0.035);
   BAWMFDUCGB->GetZaxis()->SetTitleSize(0.035);
   BAWMFDUCGB->GetZaxis()->SetTitleFont(42);
   BAWMFDUCGB->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("BAWMFDUCGB","gammagamma_qqqq_BS_EPA","f");

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
   BLFPQWSBOR_19->Modified();
   BLFPQWSBOR->cd();
  
// ------------>Primitives in pad: BLFPQWSBOR_20
   BLFPQWSBOR_20 = new TPad("BLFPQWSBOR_20", "BLFPQWSBOR_20",0.76,0.01,0.99,0.19);
   BLFPQWSBOR_20->Draw();
   BLFPQWSBOR_20->cd();
   BLFPQWSBOR_20->Range(-0.625,-0.1308352,5.625,1.177517);
   BLFPQWSBOR_20->SetFillColor(0);
   BLFPQWSBOR_20->SetBorderMode(0);
   BLFPQWSBOR_20->SetBorderSize(2);
   BLFPQWSBOR_20->SetFrameBorderMode(0);
   BLFPQWSBOR_20->SetFrameBorderMode(0);
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,0.9968398);
   ERNXCHDJZV->SetBinContent(2,0.003151961);
   ERNXCHDJZV->SetBinContent(3,7.451046e-06);
   ERNXCHDJZV->SetBinContent(4,7.451046e-07);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetLineStyle(2);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   ERNXCHDJZV->Draw("");
   
   TH1F *ORUNAEGDTL = new TH1F("ORUNAEGDTL","NumberOfIsolatedLeptons",5,0,5);
   ORUNAEGDTL->SetBinContent(1,0.9822924);
   ORUNAEGDTL->SetBinContent(2,0.01760727);
   ORUNAEGDTL->SetBinContent(3,0.0001003261);
   ORUNAEGDTL->SetEntries(79794);
   ORUNAEGDTL->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   ORUNAEGDTL->SetFillColor(ci);
   ORUNAEGDTL->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   ORUNAEGDTL->SetLineColor(ci);
   ORUNAEGDTL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ORUNAEGDTL->GetXaxis()->SetLabelFont(42);
   ORUNAEGDTL->GetXaxis()->SetLabelSize(0.035);
   ORUNAEGDTL->GetXaxis()->SetTitleSize(0.035);
   ORUNAEGDTL->GetXaxis()->SetTitleFont(42);
   ORUNAEGDTL->GetYaxis()->SetTitle("Entries");
   ORUNAEGDTL->GetYaxis()->SetLabelFont(42);
   ORUNAEGDTL->GetYaxis()->SetLabelSize(0.035);
   ORUNAEGDTL->GetYaxis()->SetTitleSize(0.035);
   ORUNAEGDTL->GetYaxis()->SetTitleFont(42);
   ORUNAEGDTL->GetZaxis()->SetLabelFont(42);
   ORUNAEGDTL->GetZaxis()->SetLabelSize(0.035);
   ORUNAEGDTL->GetZaxis()->SetTitleSize(0.035);
   ORUNAEGDTL->GetZaxis()->SetTitleFont(42);
   ORUNAEGDTL->Draw("same");
   
   leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ORUNAEGDTL","gammagamma_qqqq_BS_BS","f");

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
   BLFPQWSBOR_20->Modified();
   BLFPQWSBOR->cd();
   TBox *box = new TBox(0,0,1,1);
   box->Draw();
   BLFPQWSBOR->Modified();
   BLFPQWSBOR->cd();
   BLFPQWSBOR->SetSelected(BLFPQWSBOR);
}
