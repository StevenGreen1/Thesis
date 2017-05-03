{
//=========Macro generated from canvas: CosThetaStarSynJets/
//=========  (Wed May  3 15:24:34 2017) by ROOT version5.34/37
   TCanvas *CosThetaStarSynJets = new TCanvas("CosThetaStarSynJets", "",0,45,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarSynJets->Range(-0.2666667,-1839.793,1.066667,12878.55);
   CosThetaStarSynJets->SetFillColor(0);
   CosThetaStarSynJets->SetBorderMode(0);
   CosThetaStarSynJets->SetBorderSize(2);
   CosThetaStarSynJets->SetTickx(1);
   CosThetaStarSynJets->SetTicky(1);
   CosThetaStarSynJets->SetLeftMargin(0.2);
   CosThetaStarSynJets->SetRightMargin(0.05);
   CosThetaStarSynJets->SetTopMargin(0.05);
   CosThetaStarSynJets->SetBottomMargin(0.125);
   CosThetaStarSynJets->SetFrameLineWidth(2);
   CosThetaStarSynJets->SetFrameBorderMode(0);
   CosThetaStarSynJets->SetFrameLineWidth(2);
   CosThetaStarSynJets->SetFrameBorderMode(0);
   
   TH1D *Alpha5Change = new TH1D("Alpha5Change","",10,0,1);
   Alpha5Change->SetBinContent(1,7879.641);
   Alpha5Change->SetBinContent(2,7757.465);
   Alpha5Change->SetBinContent(3,7838.455);
   Alpha5Change->SetBinContent(4,7660.676);
   Alpha5Change->SetBinContent(5,7856.259);
   Alpha5Change->SetBinContent(6,7885.463);
   Alpha5Change->SetBinContent(7,7908.015);
   Alpha5Change->SetBinContent(8,8050.43);
   Alpha5Change->SetBinContent(9,8095.089);
   Alpha5Change->SetBinContent(10,7817.986);
   Alpha5Change->SetMinimum(0);
   Alpha5Change->SetMaximum(12142.63);
   Alpha5Change->SetEntries(2696000);
   Alpha5Change->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   Alpha5Change->SetFillColor(ci);
   Alpha5Change->SetFillStyle(3006);

   ci = TColor::GetColor("#009900");
   Alpha5Change->SetLineColor(ci);
   Alpha5Change->SetLineWidth(2);
   Alpha5Change->GetXaxis()->SetTitle("Cos(#theta^{*}_{Jets})");
   Alpha5Change->GetXaxis()->SetNdivisions(505);
   Alpha5Change->GetXaxis()->SetLabelFont(132);
   Alpha5Change->GetXaxis()->SetLabelSize(0.05);
   Alpha5Change->GetXaxis()->SetTitleSize(0.05);
   Alpha5Change->GetXaxis()->SetTitleFont(132);
   Alpha5Change->GetYaxis()->SetTitle("Entries");
   Alpha5Change->GetYaxis()->SetLabelFont(132);
   Alpha5Change->GetYaxis()->SetLabelSize(0.05);
   Alpha5Change->GetYaxis()->SetTitleSize(0.05);
   Alpha5Change->GetYaxis()->SetTitleOffset(2);
   Alpha5Change->GetYaxis()->SetTitleFont(132);
   Alpha5Change->GetZaxis()->SetLabelFont(132);
   Alpha5Change->GetZaxis()->SetLabelSize(0.05);
   Alpha5Change->GetZaxis()->SetTitleSize(0.05);
   Alpha5Change->GetZaxis()->SetTitleFont(132);
   Alpha5Change->Draw("");
   
   TH1D *Alpha4Change = new TH1D("Alpha4Change","CosThetaStarSynJets_Alpha4_0.015_Alpha5_0.0",10,0,1);
   Alpha4Change->SetBinContent(1,7518.802);
   Alpha4Change->SetBinContent(2,7428.43);
   Alpha4Change->SetBinContent(3,7479.261);
   Alpha4Change->SetBinContent(4,7417.822);
   Alpha4Change->SetBinContent(5,7555.956);
   Alpha4Change->SetBinContent(6,7689.449);
   Alpha4Change->SetBinContent(7,7757.628);
   Alpha4Change->SetBinContent(8,7928.7);
   Alpha4Change->SetBinContent(9,7978.89);
   Alpha4Change->SetBinContent(10,7728.721);
   Alpha4Change->SetMinimum(0);
   Alpha4Change->SetMaximum(12142.63);
   Alpha4Change->SetEntries(2696000);
   Alpha4Change->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetFillColor(ci);
   Alpha4Change->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetLineColor(ci);
   Alpha4Change->SetLineWidth(2);
   Alpha4Change->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   Alpha4Change->GetXaxis()->SetNdivisions(505);
   Alpha4Change->GetXaxis()->SetLabelFont(132);
   Alpha4Change->GetXaxis()->SetLabelSize(0.05);
   Alpha4Change->GetXaxis()->SetTitleSize(0.05);
   Alpha4Change->GetXaxis()->SetTitleFont(132);
   Alpha4Change->GetYaxis()->SetLabelFont(132);
   Alpha4Change->GetYaxis()->SetLabelSize(0.05);
   Alpha4Change->GetYaxis()->SetTitleSize(0.05);
   Alpha4Change->GetYaxis()->SetTitleFont(132);
   Alpha4Change->GetZaxis()->SetLabelFont(132);
   Alpha4Change->GetZaxis()->SetLabelSize(0.05);
   Alpha4Change->GetZaxis()->SetTitleSize(0.05);
   Alpha4Change->GetZaxis()->SetTitleFont(132);
   Alpha4Change->Draw("same");
   
   TH1D *Reference = new TH1D("Reference","CosThetaStarSynJets_Alpha4_0.0_Alpha5_0.0",10,0,1);
   Reference->SetBinContent(1,7159.744);
   Reference->SetBinContent(2,7126.872);
   Reference->SetBinContent(3,7119.643);
   Reference->SetBinContent(4,7160.376);
   Reference->SetBinContent(5,7273.944);
   Reference->SetBinContent(6,7429.868);
   Reference->SetBinContent(7,7568.421);
   Reference->SetBinContent(8,7793.222);
   Reference->SetBinContent(9,7862.54);
   Reference->SetBinContent(10,7605.333);
   Reference->SetMinimum(0);
   Reference->SetMaximum(12142.63);
   Reference->SetEntries(2696000);
   Reference->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Reference->SetFillColor(ci);
   Reference->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   Reference->SetLineColor(ci);
   Reference->SetLineWidth(2);
   Reference->GetXaxis()->SetTitle("Cos#theta_{Jets}^{*}");
   Reference->GetXaxis()->SetNdivisions(505);
   Reference->GetXaxis()->SetLabelFont(132);
   Reference->GetXaxis()->SetLabelSize(0.05);
   Reference->GetXaxis()->SetTitleSize(0.05);
   Reference->GetXaxis()->SetTitleFont(132);
   Reference->GetYaxis()->SetLabelFont(132);
   Reference->GetYaxis()->SetLabelSize(0.05);
   Reference->GetYaxis()->SetTitleSize(0.05);
   Reference->GetYaxis()->SetTitleFont(132);
   Reference->GetZaxis()->SetLabelFont(132);
   Reference->GetZaxis()->SetLabelSize(0.05);
   Reference->GetZaxis()->SetTitleSize(0.05);
   Reference->GetZaxis()->SetTitleFont(132);
   Reference->Draw("same");
   
   TLegend *leg = new TLegend(0.35,0.7,0.75,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
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
   entry=leg->AddEntry("Alpha4Change","#alpha_{4} = 0.015, #alpha_{5} = 0","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Alpha5Change","#alpha_{4} = 0, #alpha_{5} = 0.015","l");

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
