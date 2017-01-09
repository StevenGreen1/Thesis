{
//=========Macro generated from canvas: CosThetaStarSynJets/
//=========  (Mon Jan  9 10:44:11 2017) by ROOT version5.34/30
   TCanvas *CosThetaStarSynJets = new TCanvas("CosThetaStarSynJets", "",2,77,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarSynJets->Range(-0.1875,6310.292,1.0625,9367.333);
   CosThetaStarSynJets->SetFillColor(0);
   CosThetaStarSynJets->SetBorderMode(0);
   CosThetaStarSynJets->SetBorderSize(2);
   CosThetaStarSynJets->SetTickx(1);
   CosThetaStarSynJets->SetTicky(1);
   CosThetaStarSynJets->SetLeftMargin(0.15);
   CosThetaStarSynJets->SetRightMargin(0.05);
   CosThetaStarSynJets->SetTopMargin(0.05);
   CosThetaStarSynJets->SetBottomMargin(0.15);
   CosThetaStarSynJets->SetFrameLineWidth(2);
   CosThetaStarSynJets->SetFrameBorderMode(0);
   CosThetaStarSynJets->SetFrameLineWidth(2);
   CosThetaStarSynJets->SetFrameBorderMode(0);
   
   TH1F *Alpha5Change = new TH1F("Alpha5Change","",10,0,1);
   Alpha5Change->SetBinContent(1,8376.801);
   Alpha5Change->SetBinContent(2,8223.704);
   Alpha5Change->SetBinContent(3,8117.529);
   Alpha5Change->SetBinContent(4,8050.449);
   Alpha5Change->SetBinContent(5,7971.758);
   Alpha5Change->SetBinContent(6,8125.896);
   Alpha5Change->SetBinContent(7,8268.437);
   Alpha5Change->SetBinContent(8,8330.716);
   Alpha5Change->SetBinContent(9,8244.836);
   Alpha5Change->SetBinContent(10,8063.526);
   Alpha5Change->SetMinimum(6768.848);
   Alpha5Change->SetMaximum(9214.481);
   Alpha5Change->SetEntries(2694000);
   Alpha5Change->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   Alpha5Change->SetFillColor(ci);
   Alpha5Change->SetFillStyle(3006);

   ci = TColor::GetColor("#009900");
   Alpha5Change->SetLineColor(ci);
   Alpha5Change->SetLineWidth(2);
   Alpha5Change->SetMarkerStyle(20);
   Alpha5Change->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   Alpha5Change->GetXaxis()->SetNdivisions(505);
   Alpha5Change->GetXaxis()->SetLabelFont(132);
   Alpha5Change->GetXaxis()->SetLabelSize(0.05);
   Alpha5Change->GetXaxis()->SetTitleSize(0.05);
   Alpha5Change->GetXaxis()->SetTitleFont(132);
   Alpha5Change->GetYaxis()->SetTitle("Entries");
   Alpha5Change->GetYaxis()->SetLabelFont(132);
   Alpha5Change->GetYaxis()->SetLabelSize(0.05);
   Alpha5Change->GetYaxis()->SetTitleSize(0.05);
   Alpha5Change->GetYaxis()->SetTitleOffset(1.6);
   Alpha5Change->GetYaxis()->SetTitleFont(132);
   Alpha5Change->GetZaxis()->SetLabelFont(132);
   Alpha5Change->GetZaxis()->SetLabelSize(0.03);
   Alpha5Change->GetZaxis()->SetTitleSize(0.036);
   Alpha5Change->GetZaxis()->SetTitleFont(132);
   Alpha5Change->Draw("");
   
   TH1F *Alpha4Change = new TH1F("Alpha4Change","CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17",10,0,1);
   Alpha4Change->SetBinContent(1,7770.667);
   Alpha4Change->SetBinContent(2,7714.93);
   Alpha4Change->SetBinContent(3,7619.103);
   Alpha4Change->SetBinContent(4,7659.505);
   Alpha4Change->SetBinContent(5,7674.772);
   Alpha4Change->SetBinContent(6,7824.512);
   Alpha4Change->SetBinContent(7,7938.075);
   Alpha4Change->SetBinContent(8,8037.91);
   Alpha4Change->SetBinContent(9,8029.604);
   Alpha4Change->SetBinContent(10,7894.257);
   Alpha4Change->SetMinimum(6768.848);
   Alpha4Change->SetMaximum(9214.481);
   Alpha4Change->SetEntries(2694000);
   Alpha4Change->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetFillColor(ci);
   Alpha4Change->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetLineColor(ci);
   Alpha4Change->SetLineWidth(2);
   Alpha4Change->SetMarkerStyle(20);
   Alpha4Change->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   Alpha4Change->GetXaxis()->SetNdivisions(505);
   Alpha4Change->GetXaxis()->SetLabelFont(132);
   Alpha4Change->GetXaxis()->SetLabelSize(0.03);
   Alpha4Change->GetXaxis()->SetTitleSize(0.036);
   Alpha4Change->GetXaxis()->SetTitleFont(132);
   Alpha4Change->GetYaxis()->SetTitle("Entries");
   Alpha4Change->GetYaxis()->SetLabelFont(132);
   Alpha4Change->GetYaxis()->SetLabelSize(0.03);
   Alpha4Change->GetYaxis()->SetTitleSize(0.036);
   Alpha4Change->GetYaxis()->SetTitleFont(132);
   Alpha4Change->GetZaxis()->SetLabelFont(132);
   Alpha4Change->GetZaxis()->SetLabelSize(0.03);
   Alpha4Change->GetZaxis()->SetTitleSize(0.036);
   Alpha4Change->GetZaxis()->SetTitleFont(132);
   Alpha4Change->Draw("same");
   
   TH1F *Reference = new TH1F("Reference","CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17",10,0,1);
   Reference->SetBinContent(1,7183.331);
   Reference->SetBinContent(2,7165.536);
   Reference->SetBinContent(3,7125.103);
   Reference->SetBinContent(4,7169.142);
   Reference->SetBinContent(5,7271.894);
   Reference->SetBinContent(6,7415.41);
   Reference->SetBinContent(7,7555.239);
   Reference->SetBinContent(8,7772.769);
   Reference->SetBinContent(9,7802.94);
   Reference->SetBinContent(10,7637.176);
   Reference->SetMinimum(6768.848);
   Reference->SetMaximum(9214.481);
   Reference->SetEntries(2694000);
   Reference->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Reference->SetFillColor(ci);
   Reference->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   Reference->SetLineColor(ci);
   Reference->SetLineWidth(2);
   Reference->SetMarkerStyle(20);
   Reference->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   Reference->GetXaxis()->SetNdivisions(505);
   Reference->GetXaxis()->SetLabelFont(132);
   Reference->GetXaxis()->SetLabelSize(0.03);
   Reference->GetXaxis()->SetTitleSize(0.036);
   Reference->GetXaxis()->SetTitleFont(132);
   Reference->GetYaxis()->SetTitle("Entries");
   Reference->GetYaxis()->SetLabelFont(132);
   Reference->GetYaxis()->SetLabelSize(0.03);
   Reference->GetYaxis()->SetTitleSize(0.036);
   Reference->GetYaxis()->SetTitleFont(132);
   Reference->GetZaxis()->SetLabelFont(132);
   Reference->GetZaxis()->SetLabelSize(0.03);
   Reference->GetZaxis()->SetTitleSize(0.036);
   Reference->GetZaxis()->SetTitleFont(132);
   Reference->Draw("same");
   
   TLegend *leg = new TLegend(0.2,0.7,0.6,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Reference","#alpha_{4} = #alpha_{5} = 0","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Alpha4Change","#alpha_{4} = 0.02, #alpha_{5} = 0","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Alpha5Change","#alpha_{4} = 0, #alpha_{5} = 0.02","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   CosThetaStarSynJets->Modified();
   CosThetaStarSynJets->cd();
   CosThetaStarSynJets->SetSelected(CosThetaStarSynJets);
}
