{
//=========Macro generated from canvas: c1/
//=========  (Mon Mar  6 09:58:54 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "",0,45,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-5.916394,-41.16,33.52623,233.24);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH1F *CaloHitEnergyHCalEndCap = new TH1F("CaloHitEnergyHCalEndCap","",29,0,29.58197);
   CaloHitEnergyHCalEndCap->SetBinContent(12,3);
   CaloHitEnergyHCalEndCap->SetBinContent(13,2);
   CaloHitEnergyHCalEndCap->SetBinContent(14,11);
   CaloHitEnergyHCalEndCap->SetBinContent(15,24);
   CaloHitEnergyHCalEndCap->SetBinContent(16,48);
   CaloHitEnergyHCalEndCap->SetBinContent(17,82);
   CaloHitEnergyHCalEndCap->SetBinContent(18,142);
   CaloHitEnergyHCalEndCap->SetBinContent(19,167);
   CaloHitEnergyHCalEndCap->SetBinContent(20,185);
   CaloHitEnergyHCalEndCap->SetBinContent(21,196);
   CaloHitEnergyHCalEndCap->SetBinContent(22,170);
   CaloHitEnergyHCalEndCap->SetBinContent(23,90);
   CaloHitEnergyHCalEndCap->SetBinContent(24,72);
   CaloHitEnergyHCalEndCap->SetBinContent(25,47);
   CaloHitEnergyHCalEndCap->SetBinContent(26,22);
   CaloHitEnergyHCalEndCap->SetBinContent(27,6);
   CaloHitEnergyHCalEndCap->SetBinContent(28,2);
   CaloHitEnergyHCalEndCap->SetBinContent(29,1);
   CaloHitEnergyHCalEndCap->SetBinContent(30,1);
   CaloHitEnergyHCalEndCap->SetEntries(1271);
   CaloHitEnergyHCalEndCap->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   CaloHitEnergyHCalEndCap->SetFillColor(ci);
   CaloHitEnergyHCalEndCap->SetFillStyle(3004);

   ci = TColor::GetColor("#0000ff");
   CaloHitEnergyHCalEndCap->SetLineColor(ci);
   CaloHitEnergyHCalEndCap->SetLineWidth(2);
   CaloHitEnergyHCalEndCap->GetXaxis()->SetTitle("HCal Calorimeter Hit Energy [GeV]");
   CaloHitEnergyHCalEndCap->GetXaxis()->SetNdivisions(505);
   CaloHitEnergyHCalEndCap->GetXaxis()->SetLabelFont(132);
   CaloHitEnergyHCalEndCap->GetXaxis()->SetLabelSize(0.05);
   CaloHitEnergyHCalEndCap->GetXaxis()->SetTitleSize(0.05);
   CaloHitEnergyHCalEndCap->GetXaxis()->SetTitleFont(132);
   CaloHitEnergyHCalEndCap->GetYaxis()->SetTitle("Entries");
   CaloHitEnergyHCalEndCap->GetYaxis()->SetLabelFont(132);
   CaloHitEnergyHCalEndCap->GetYaxis()->SetLabelSize(0.05);
   CaloHitEnergyHCalEndCap->GetYaxis()->SetTitleSize(0.05);
   CaloHitEnergyHCalEndCap->GetYaxis()->SetTitleOffset(1.3);
   CaloHitEnergyHCalEndCap->GetYaxis()->SetTitleFont(132);
   CaloHitEnergyHCalEndCap->GetZaxis()->SetLabelFont(42);
   CaloHitEnergyHCalEndCap->GetZaxis()->SetLabelSize(0.035);
   CaloHitEnergyHCalEndCap->GetZaxis()->SetTitleSize(0.035);
   CaloHitEnergyHCalEndCap->GetZaxis()->SetTitleFont(42);
   CaloHitEnergyHCalEndCap->Draw("");
   
   TF1 *GaussianFit = new TF1("GaussianFit","[0]*TMath::Exp(-0.5*[2]*TMath::Power(x-[1],2))",16,25);
   GaussianFit->SetFillColor(1);
   GaussianFit->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   GaussianFit->SetLineColor(ci);
   GaussianFit->SetLineWidth(2);
   GaussianFit->GetXaxis()->SetNdivisions(505);
   GaussianFit->GetXaxis()->SetLabelFont(132);
   GaussianFit->GetXaxis()->SetLabelSize(0.05);
   GaussianFit->GetXaxis()->SetTitleSize(0.05);
   GaussianFit->GetXaxis()->SetTitleFont(132);
   GaussianFit->GetYaxis()->SetLabelFont(132);
   GaussianFit->GetYaxis()->SetLabelSize(0.05);
   GaussianFit->GetYaxis()->SetTitleSize(0.05);
   GaussianFit->GetYaxis()->SetTitleFont(132);
   GaussianFit->SetParameter(0,190);
   GaussianFit->SetParError(0,0);
   GaussianFit->SetParLimits(0,0,0);
   GaussianFit->SetParameter(1,20);
   GaussianFit->SetParError(1,0);
   GaussianFit->SetParLimits(1,0,0);
   GaussianFit->SetParameter(2,0.120117);
   GaussianFit->SetParError(2,0);
   GaussianFit->SetParLimits(2,0.120117,0.120117);
   GaussianFit->Draw("same");
   
   TLegend *leg = new TLegend(0.2,0.65,0.4,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GaussianFit","Gaussian Fit","l");

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
