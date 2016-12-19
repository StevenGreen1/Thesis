{
//=========Macro generated from canvas: CosThetaStarSynJets/
//=========  (Wed Dec 14 14:06:19 2016) by ROOT version5.34/30
   TCanvas *CosThetaStarSynJets = new TCanvas("CosThetaStarSynJets", "",2,77,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarSynJets->Range(-0.1875,15459.32,1.0625,40840.94);
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
   
   TH1F *CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02 = new TH1F("CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02","",10,0,1);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(1,33579.96);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(2,32553.51);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(3,32091.61);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(4,35974.41);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(5,30278.95);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(6,29010.78);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(7,29121.09);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(8,28691.82);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(9,29073.88);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetBinContent(10,31467.32);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetMinimum(19266.56);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetMaximum(39571.86);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetEntries(3357398);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetFillColor(ci);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetFillStyle(3006);

   ci = TColor::GetColor("#009900");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetLineColor(ci);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetLineWidth(2);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->SetMarkerStyle(20);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetXaxis()->SetNdivisions(505);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetXaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetXaxis()->SetLabelSize(0.05);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetXaxis()->SetTitleSize(0.05);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetXaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetYaxis()->SetTitle("Entries");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetYaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetYaxis()->SetLabelSize(0.05);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetYaxis()->SetTitleSize(0.05);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetYaxis()->SetTitleOffset(1.6);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetYaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetZaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetZaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetZaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->GetZaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02->Draw("");
   
   TH1F *CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17 = new TH1F("CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17","CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17",10,0,1);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(1,31023.93);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(2,29324.7);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(3,28687.17);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(4,30694.18);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(5,27731.71);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(6,26949.21);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(7,27454.9);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(8,26893.79);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(9,27651.58);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetBinContent(10,30020.35);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetMinimum(19266.56);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetMaximum(39571.86);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetEntries(3357398);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetFillColor(ci);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetLineColor(ci);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetLineWidth(2);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->SetMarkerStyle(20);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetXaxis()->SetNdivisions(505);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetXaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetXaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetXaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetXaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetYaxis()->SetTitle("Entries");
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetYaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetYaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetYaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetYaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetZaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetZaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetZaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->GetZaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17->Draw("same");
   
   TH1F *CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17 = new TH1F("CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17","CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17",10,0,1);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(1,20417.7);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(2,20294.91);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(3,20280.59);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(4,20304.55);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(5,20556.27);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(6,20931.93);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(7,21433.4);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(8,22237.5);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(9,23191.17);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetBinContent(10,24851.18);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetMinimum(19266.56);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetMaximum(39571.86);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetEntries(3357398);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetFillColor(ci);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetLineColor(ci);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetLineWidth(2);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->SetMarkerStyle(20);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetXaxis()->SetNdivisions(505);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetXaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetXaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetXaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetXaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetYaxis()->SetTitle("Entries");
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetYaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetYaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetYaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetYaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetZaxis()->SetLabelFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetZaxis()->SetLabelSize(0.03);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetZaxis()->SetTitleSize(0.036);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->GetZaxis()->SetTitleFont(132);
   CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17->Draw("same");
   
   TLegend *leg = new TLegend(0.2,0.7,0.6,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_1.04083e-17","#alpha_{4} = #alpha_{5} = 0","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("CosThetaStarSynJets_Alpha4_0.02_Alpha5_1.04083e-17","#alpha_{4} = 0.02, #alpha_{5} = 0","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("CosThetaStarSynJets_Alpha4_1.04083e-17_Alpha5_0.02","#alpha_{4} = 0, #alpha_{5} = 0.02","l");

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
