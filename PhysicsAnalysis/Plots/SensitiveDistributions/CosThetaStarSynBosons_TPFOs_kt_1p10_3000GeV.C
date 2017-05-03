{
//=========Macro generated from canvas: CosThetaStarSynBosons/
//=========  (Wed May  3 15:22:32 2017) by ROOT version5.34/37
   TCanvas *CosThetaStarSynBosons = new TCanvas("CosThetaStarSynBosons", "",0,45,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarSynBosons->Range(-0.2666667,-4848.176,1.066667,33937.23);
   CosThetaStarSynBosons->SetFillColor(0);
   CosThetaStarSynBosons->SetBorderMode(0);
   CosThetaStarSynBosons->SetBorderSize(2);
   CosThetaStarSynBosons->SetTickx(1);
   CosThetaStarSynBosons->SetTicky(1);
   CosThetaStarSynBosons->SetLeftMargin(0.2);
   CosThetaStarSynBosons->SetRightMargin(0.05);
   CosThetaStarSynBosons->SetTopMargin(0.05);
   CosThetaStarSynBosons->SetBottomMargin(0.125);
   CosThetaStarSynBosons->SetFrameLineWidth(2);
   CosThetaStarSynBosons->SetFrameBorderMode(0);
   CosThetaStarSynBosons->SetFrameLineWidth(2);
   CosThetaStarSynBosons->SetFrameBorderMode(0);
   
   TH1F *Alpha5Change = new TH1F("Alpha5Change","",10,0,1);
   Alpha5Change->SetBinContent(1,10500.61);
   Alpha5Change->SetBinContent(2,10667.66);
   Alpha5Change->SetBinContent(3,10805.05);
   Alpha5Change->SetBinContent(4,11240.26);
   Alpha5Change->SetBinContent(5,11837.04);
   Alpha5Change->SetBinContent(6,12751.63);
   Alpha5Change->SetBinContent(7,13915.18);
   Alpha5Change->SetBinContent(8,15918.6);
   Alpha5Change->SetBinContent(9,19263.33);
   Alpha5Change->SetBinContent(10,29089.05);
   Alpha5Change->SetBinContent(11,6.190671);
   Alpha5Change->SetMinimum(0);
   Alpha5Change->SetMaximum(31997.96);
   Alpha5Change->SetEntries(2839398);
   Alpha5Change->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   Alpha5Change->SetFillColor(ci);
   Alpha5Change->SetFillStyle(3006);

   ci = TColor::GetColor("#009900");
   Alpha5Change->SetLineColor(ci);
   Alpha5Change->SetLineWidth(2);
   Alpha5Change->GetXaxis()->SetTitle("Cos(#theta^{*}_{Bosons})");
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
   
   TH1F *Alpha4Change = new TH1F("Alpha4Change","CosThetaStarSynBosons_Alpha4_0.0015_Alpha5_0.0",10,0,1);
   Alpha4Change->SetBinContent(1,10373.08);
   Alpha4Change->SetBinContent(2,10503.45);
   Alpha4Change->SetBinContent(3,10685.88);
   Alpha4Change->SetBinContent(4,11135.13);
   Alpha4Change->SetBinContent(5,11690.27);
   Alpha4Change->SetBinContent(6,12576.57);
   Alpha4Change->SetBinContent(7,13780.1);
   Alpha4Change->SetBinContent(8,15737.9);
   Alpha4Change->SetBinContent(9,19134.48);
   Alpha4Change->SetBinContent(10,28992.36);
   Alpha4Change->SetBinContent(11,6.181573);
   Alpha4Change->SetMinimum(0);
   Alpha4Change->SetMaximum(31997.96);
   Alpha4Change->SetEntries(2839398);
   Alpha4Change->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetFillColor(ci);
   Alpha4Change->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetLineColor(ci);
   Alpha4Change->SetLineWidth(2);
   Alpha4Change->GetXaxis()->SetTitle("Cos#theta_{Bosons}^{*}");
   Alpha4Change->GetXaxis()->SetNdivisions(505);
   Alpha4Change->GetXaxis()->SetLabelFont(132);
   Alpha4Change->GetXaxis()->SetLabelSize(0.05);
   Alpha4Change->GetXaxis()->SetTitleSize(0.05);
   Alpha4Change->GetXaxis()->SetTitleFont(132);
   Alpha4Change->GetYaxis()->SetTitle("Entries");
   Alpha4Change->GetYaxis()->SetLabelFont(132);
   Alpha4Change->GetYaxis()->SetLabelSize(0.05);
   Alpha4Change->GetYaxis()->SetTitleSize(0.05);
   Alpha4Change->GetYaxis()->SetTitleFont(132);
   Alpha4Change->GetZaxis()->SetLabelFont(132);
   Alpha4Change->GetZaxis()->SetLabelSize(0.05);
   Alpha4Change->GetZaxis()->SetTitleSize(0.05);
   Alpha4Change->GetZaxis()->SetTitleFont(132);
   Alpha4Change->Draw("same");
   
   TH1F *Reference = new TH1F("Reference","CosThetaStarSynBosons_Alpha4_0.0_Alpha5_0.0",10,0,1);
   Reference->SetBinContent(1,10284.46);
   Reference->SetBinContent(2,10348.37);
   Reference->SetBinContent(3,10580.18);
   Reference->SetBinContent(4,10990.64);
   Reference->SetBinContent(5,11532.57);
   Reference->SetBinContent(6,12407.41);
   Reference->SetBinContent(7,13612.85);
   Reference->SetBinContent(8,15554.96);
   Reference->SetBinContent(9,18936.79);
   Reference->SetBinContent(10,28744.83);
   Reference->SetBinContent(11,6.194618);
   Reference->SetMinimum(0);
   Reference->SetMaximum(31997.96);
   Reference->SetEntries(2839398);
   Reference->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Reference->SetFillColor(ci);
   Reference->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   Reference->SetLineColor(ci);
   Reference->SetLineWidth(2);
   Reference->GetXaxis()->SetTitle("Cos#theta_{Bosons}^{*}");
   Reference->GetXaxis()->SetNdivisions(505);
   Reference->GetXaxis()->SetLabelFont(132);
   Reference->GetXaxis()->SetLabelSize(0.05);
   Reference->GetXaxis()->SetTitleSize(0.05);
   Reference->GetXaxis()->SetTitleFont(132);
   Reference->GetYaxis()->SetTitle("Entries");
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
   entry=leg->AddEntry("Alpha4Change","#alpha_{4} = 0.0015, #alpha_{5} = 0","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Alpha5Change","#alpha_{4} = 0, #alpha_{5} = 0.0015","l");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   CosThetaStarSynBosons->Modified();
   CosThetaStarSynBosons->cd();
   CosThetaStarSynBosons->SetSelected(CosThetaStarSynBosons);
}
