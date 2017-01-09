{
//=========Macro generated from canvas: CosThetaStarSynBosons/
//=========  (Mon Jan  9 10:45:29 2017) by ROOT version5.34/30
   TCanvas *CosThetaStarSynBosons = new TCanvas("CosThetaStarSynBosons", "",2,77,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarSynBosons->Range(-0.1875,5886.566,1.0625,32627.69);
   CosThetaStarSynBosons->SetFillColor(0);
   CosThetaStarSynBosons->SetBorderMode(0);
   CosThetaStarSynBosons->SetBorderSize(2);
   CosThetaStarSynBosons->SetTickx(1);
   CosThetaStarSynBosons->SetTicky(1);
   CosThetaStarSynBosons->SetLeftMargin(0.15);
   CosThetaStarSynBosons->SetRightMargin(0.05);
   CosThetaStarSynBosons->SetTopMargin(0.05);
   CosThetaStarSynBosons->SetBottomMargin(0.15);
   CosThetaStarSynBosons->SetFrameLineWidth(2);
   CosThetaStarSynBosons->SetFrameBorderMode(0);
   CosThetaStarSynBosons->SetFrameLineWidth(2);
   CosThetaStarSynBosons->SetFrameBorderMode(0);
   
   TH1F *Alpha5Change = new TH1F("Alpha5Change","",10,0,1);
   Alpha5Change->SetBinContent(1,10811.52);
   Alpha5Change->SetBinContent(2,10748.22);
   Alpha5Change->SetBinContent(3,11271.33);
   Alpha5Change->SetBinContent(4,11555.31);
   Alpha5Change->SetBinContent(5,12153.97);
   Alpha5Change->SetBinContent(6,12756.21);
   Alpha5Change->SetBinContent(7,14123.95);
   Alpha5Change->SetBinContent(8,16255.78);
   Alpha5Change->SetBinContent(9,19328.81);
   Alpha5Change->SetBinContent(10,28446.03);
   Alpha5Change->SetBinContent(11,44.42678);
   Alpha5Change->SetMinimum(9897.735);
   Alpha5Change->SetMaximum(31290.64);
   Alpha5Change->SetEntries(1678699);
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
   Alpha5Change->GetXaxis()->SetTitle("Cos#theta_{Bosons}^{*}");
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
   
   TH1F *Alpha4Change = new TH1F("Alpha4Change","CosThetaStarSynBosons_Alpha4_0.002_Alpha5_6.23416e-19",10,0,1);
   Alpha4Change->SetBinContent(1,10613.89);
   Alpha4Change->SetBinContent(2,10572.48);
   Alpha4Change->SetBinContent(3,11104.41);
   Alpha4Change->SetBinContent(4,11332.48);
   Alpha4Change->SetBinContent(5,11936.44);
   Alpha4Change->SetBinContent(6,12654.68);
   Alpha4Change->SetBinContent(7,13965.32);
   Alpha4Change->SetBinContent(8,15899.62);
   Alpha4Change->SetBinContent(9,19182.14);
   Alpha4Change->SetBinContent(10,28411.46);
   Alpha4Change->SetBinContent(11,44.40903);
   Alpha4Change->SetMinimum(9897.735);
   Alpha4Change->SetMaximum(31290.64);
   Alpha4Change->SetEntries(1678699);
   Alpha4Change->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetFillColor(ci);
   Alpha4Change->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   Alpha4Change->SetLineColor(ci);
   Alpha4Change->SetLineWidth(2);
   Alpha4Change->SetMarkerStyle(20);
   Alpha4Change->GetXaxis()->SetTitle("Cos#theta_{Bosons}^{*}");
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
   
   TH1F *Reference = new TH1F("Reference","CosThetaStarSynBosons_Alpha4_6.23416e-19_Alpha5_6.23416e-19",10,0,1);
   Reference->SetBinContent(1,10418.67);
   Reference->SetBinContent(2,10419.35);
   Reference->SetBinContent(3,10725.25);
   Reference->SetBinContent(4,11083.01);
   Reference->SetBinContent(5,11693.09);
   Reference->SetBinContent(6,12433.5);
   Reference->SetBinContent(7,13730.74);
   Reference->SetBinContent(8,15544.01);
   Reference->SetBinContent(9,18840.39);
   Reference->SetBinContent(10,28067.07);
   Reference->SetBinContent(11,44.55172);
   Reference->SetMinimum(9897.735);
   Reference->SetMaximum(31290.64);
   Reference->SetEntries(1678699);
   Reference->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Reference->SetFillColor(ci);
   Reference->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   Reference->SetLineColor(ci);
   Reference->SetLineWidth(2);
   Reference->SetMarkerStyle(20);
   Reference->GetXaxis()->SetTitle("Cos#theta_{Bosons}^{*}");
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
   entry=leg->AddEntry("Alpha4Change","#alpha_{4} = 0.002, #alpha_{5} = 0","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("Alpha5Change","#alpha_{4} = 0, #alpha_{5} = 0.002","l");

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
