{
//=========Macro generated from canvas: CosThetaStarSynBosons/
//=========  (Mon Jan  9 10:43:59 2017) by ROOT version5.34/30
   TCanvas *CosThetaStarSynBosons = new TCanvas("CosThetaStarSynBosons", "",2,77,600,600);
   gStyle->SetOptStat(0);
   CosThetaStarSynBosons->Range(-0.1875,1546.947,1.0625,8557.582);
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
   Alpha5Change->SetBinContent(1,3193.552);
   Alpha5Change->SetBinContent(2,3154.699);
   Alpha5Change->SetBinContent(3,3129.231);
   Alpha5Change->SetBinContent(4,3227.439);
   Alpha5Change->SetBinContent(5,3490.208);
   Alpha5Change->SetBinContent(6,3647.295);
   Alpha5Change->SetBinContent(7,3896.414);
   Alpha5Change->SetBinContent(8,4405.741);
   Alpha5Change->SetBinContent(9,5280.692);
   Alpha5Change->SetBinContent(10,7460.955);
   Alpha5Change->SetBinContent(11,0.6135832);
   Alpha5Change->SetMinimum(2598.542);
   Alpha5Change->SetMaximum(8207.051);
   Alpha5Change->SetEntries(1347000);
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
   
   TH1F *Alpha4Change = new TH1F("Alpha4Change","CosThetaStarSynBosons_Alpha4_0.02_Alpha5_1.04083e-17",10,0,1);
   Alpha4Change->SetBinContent(1,2939.048);
   Alpha4Change->SetBinContent(2,2944.695);
   Alpha4Change->SetBinContent(3,2997.768);
   Alpha4Change->SetBinContent(4,3064.278);
   Alpha4Change->SetBinContent(5,3262.875);
   Alpha4Change->SetBinContent(6,3461.365);
   Alpha4Change->SetBinContent(7,3743.072);
   Alpha4Change->SetBinContent(8,4270.007);
   Alpha4Change->SetBinContent(9,5094.667);
   Alpha4Change->SetBinContent(10,7303.291);
   Alpha4Change->SetBinContent(11,0.6161488);
   Alpha4Change->SetMinimum(2598.542);
   Alpha4Change->SetMaximum(8207.051);
   Alpha4Change->SetEntries(1347000);
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
   
   TH1F *Reference = new TH1F("Reference","CosThetaStarSynBosons_Alpha4_1.04083e-17_Alpha5_1.04083e-17",10,0,1);
   Reference->SetBinContent(1,2735.307);
   Reference->SetBinContent(2,2751.123);
   Reference->SetBinContent(3,2845.99);
   Reference->SetBinContent(4,2893.575);
   Reference->SetBinContent(5,3050.222);
   Reference->SetBinContent(6,3262.623);
   Reference->SetBinContent(7,3557.649);
   Reference->SetBinContent(8,4020.271);
   Reference->SetBinContent(9,4853.083);
   Reference->SetBinContent(10,7079.585);
   Reference->SetBinContent(11,0.6051226);
   Reference->SetMinimum(2598.542);
   Reference->SetMaximum(8207.051);
   Reference->SetEntries(1347000);
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
   CosThetaStarSynBosons->Modified();
   CosThetaStarSynBosons->cd();
   CosThetaStarSynBosons->SetSelected(CosThetaStarSynBosons);
}
