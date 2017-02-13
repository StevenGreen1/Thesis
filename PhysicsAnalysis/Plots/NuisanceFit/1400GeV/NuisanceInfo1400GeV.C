{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Feb  6 14:13:25 2017) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,700,500);
   gStyle->SetOptStat(0);
   c1->Range(-0.125,-2000,1.125,18000);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH1F *CosThetaStarSynJetsFull = new TH1F("CosThetaStarSynJetsFull","",10,0,1);
   CosThetaStarSynJetsFull->SetBinContent(1,13159.9);
   CosThetaStarSynJetsFull->SetBinContent(2,13446.87);
   CosThetaStarSynJetsFull->SetBinContent(3,13372.47);
   CosThetaStarSynJetsFull->SetBinContent(4,13708.44);
   CosThetaStarSynJetsFull->SetBinContent(5,13893.36);
   CosThetaStarSynJetsFull->SetBinContent(6,14552.42);
   CosThetaStarSynJetsFull->SetBinContent(7,14534.33);
   CosThetaStarSynJetsFull->SetBinContent(8,15388.09);
   CosThetaStarSynJetsFull->SetBinContent(9,15045.98);
   CosThetaStarSynJetsFull->SetBinContent(10,11895.57);
   CosThetaStarSynJetsFull->SetMinimum(0);
   CosThetaStarSynJetsFull->SetMaximum(16000);
   CosThetaStarSynJetsFull->SetEntries(1123342);
   CosThetaStarSynJetsFull->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   CosThetaStarSynJetsFull->SetFillColor(ci);
   CosThetaStarSynJetsFull->SetFillStyle(3004);

   ci = TColor::GetColor("#0000ff");
   CosThetaStarSynJetsFull->SetLineColor(ci);
   CosThetaStarSynJetsFull->SetLineWidth(2);
   CosThetaStarSynJetsFull->SetMarkerStyle(20);
   CosThetaStarSynJetsFull->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   CosThetaStarSynJetsFull->GetXaxis()->SetNdivisions(505);
   CosThetaStarSynJetsFull->GetXaxis()->SetLabelFont(132);
   CosThetaStarSynJetsFull->GetXaxis()->SetLabelSize(0.03);
   CosThetaStarSynJetsFull->GetXaxis()->SetTitleSize(0.036);
   CosThetaStarSynJetsFull->GetXaxis()->SetTitleFont(132);
   CosThetaStarSynJetsFull->GetYaxis()->SetTitle("Entries");
   CosThetaStarSynJetsFull->GetYaxis()->SetLabelFont(132);
   CosThetaStarSynJetsFull->GetYaxis()->SetLabelSize(0.03);
   CosThetaStarSynJetsFull->GetYaxis()->SetTitleSize(0.036);
   CosThetaStarSynJetsFull->GetYaxis()->SetTitleFont(132);
   CosThetaStarSynJetsFull->GetZaxis()->SetLabelFont(132);
   CosThetaStarSynJetsFull->GetZaxis()->SetLabelSize(0.03);
   CosThetaStarSynJetsFull->GetZaxis()->SetTitleSize(0.036);
   CosThetaStarSynJetsFull->GetZaxis()->SetTitleFont(132);
   CosThetaStarSynJetsFull->Draw("");
   
   TH1F *CosThetaStarSynJetsBkg = new TH1F("CosThetaStarSynJetsBkg","CosThetaStarSynJetsBkg",10,0,1);
   CosThetaStarSynJetsBkg->SetBinContent(1,6321.14);
   CosThetaStarSynJetsBkg->SetBinContent(2,6390.81);
   CosThetaStarSynJetsBkg->SetBinContent(3,6516.837);
   CosThetaStarSynJetsBkg->SetBinContent(4,6410.301);
   CosThetaStarSynJetsBkg->SetBinContent(5,6631.576);
   CosThetaStarSynJetsBkg->SetBinContent(6,6711.78);
   CosThetaStarSynJetsBkg->SetBinContent(7,6997.347);
   CosThetaStarSynJetsBkg->SetBinContent(8,7084.131);
   CosThetaStarSynJetsBkg->SetBinContent(9,6538.014);
   CosThetaStarSynJetsBkg->SetBinContent(10,4357.84);
   CosThetaStarSynJetsBkg->SetEntries(36060);
   CosThetaStarSynJetsBkg->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   CosThetaStarSynJetsBkg->SetFillColor(ci);
   CosThetaStarSynJetsBkg->SetFillStyle(3005);

   ci = TColor::GetColor("#ff0000");
   CosThetaStarSynJetsBkg->SetLineColor(ci);
   CosThetaStarSynJetsBkg->SetLineWidth(2);
   CosThetaStarSynJetsBkg->SetMarkerStyle(20);
   CosThetaStarSynJetsBkg->GetXaxis()->SetNdivisions(505);
   CosThetaStarSynJetsBkg->GetXaxis()->SetLabelFont(132);
   CosThetaStarSynJetsBkg->GetXaxis()->SetLabelSize(0.03);
   CosThetaStarSynJetsBkg->GetXaxis()->SetTitleSize(0.036);
   CosThetaStarSynJetsBkg->GetXaxis()->SetTitleFont(132);
   CosThetaStarSynJetsBkg->GetYaxis()->SetLabelFont(132);
   CosThetaStarSynJetsBkg->GetYaxis()->SetLabelSize(0.03);
   CosThetaStarSynJetsBkg->GetYaxis()->SetTitleSize(0.036);
   CosThetaStarSynJetsBkg->GetYaxis()->SetTitleFont(132);
   CosThetaStarSynJetsBkg->GetZaxis()->SetLabelFont(132);
   CosThetaStarSynJetsBkg->GetZaxis()->SetLabelSize(0.03);
   CosThetaStarSynJetsBkg->GetZaxis()->SetTitleSize(0.036);
   CosThetaStarSynJetsBkg->GetZaxis()->SetTitleFont(132);
   CosThetaStarSynJetsBkg->Draw("same");
   
   TLegend *leg = new TLegend(0.15,0.15,0.65,0.35,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("CosThetaStarSynJetsFull","Signal and All Backgrounds","f");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("CosThetaStarSynJetsBkg","#gamma_{BS} e^{-} #rightarrow qqqq e^{-} and  #gamma_{BS} #rightarrow qqqq e^{+} Backgrounds","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
