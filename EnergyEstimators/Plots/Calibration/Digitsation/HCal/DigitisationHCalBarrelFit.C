{
//=========Macro generated from canvas: c1/
//=========  (Mon Mar  6 09:51:42 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "",0,45,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-6.115068,-157.08,34.65205,890.12);
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
   
   TH1F *CaloHitEnergyHCalBarrel = new TH1F("CaloHitEnergyHCalBarrel","",30,0,30.57534);
   CaloHitEnergyHCalBarrel->SetBinContent(6,1);
   CaloHitEnergyHCalBarrel->SetBinContent(10,2);
   CaloHitEnergyHCalBarrel->SetBinContent(11,7);
   CaloHitEnergyHCalBarrel->SetBinContent(12,16);
   CaloHitEnergyHCalBarrel->SetBinContent(13,34);
   CaloHitEnergyHCalBarrel->SetBinContent(14,77);
   CaloHitEnergyHCalBarrel->SetBinContent(15,169);
   CaloHitEnergyHCalBarrel->SetBinContent(16,296);
   CaloHitEnergyHCalBarrel->SetBinContent(17,438);
   CaloHitEnergyHCalBarrel->SetBinContent(18,573);
   CaloHitEnergyHCalBarrel->SetBinContent(19,698);
   CaloHitEnergyHCalBarrel->SetBinContent(20,718);
   CaloHitEnergyHCalBarrel->SetBinContent(21,748);
   CaloHitEnergyHCalBarrel->SetBinContent(22,609);
   CaloHitEnergyHCalBarrel->SetBinContent(23,472);
   CaloHitEnergyHCalBarrel->SetBinContent(24,343);
   CaloHitEnergyHCalBarrel->SetBinContent(25,211);
   CaloHitEnergyHCalBarrel->SetBinContent(26,126);
   CaloHitEnergyHCalBarrel->SetBinContent(27,61);
   CaloHitEnergyHCalBarrel->SetBinContent(28,14);
   CaloHitEnergyHCalBarrel->SetBinContent(29,11);
   CaloHitEnergyHCalBarrel->SetBinContent(30,3);
   CaloHitEnergyHCalBarrel->SetBinContent(31,1);
   CaloHitEnergyHCalBarrel->SetEntries(5628);
   CaloHitEnergyHCalBarrel->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   CaloHitEnergyHCalBarrel->SetFillColor(ci);
   CaloHitEnergyHCalBarrel->SetFillStyle(3004);

   ci = TColor::GetColor("#0000ff");
   CaloHitEnergyHCalBarrel->SetLineColor(ci);
   CaloHitEnergyHCalBarrel->SetLineWidth(2);
   CaloHitEnergyHCalBarrel->GetXaxis()->SetTitle("HCal Calorimeter Hit Energy [GeV]");
   CaloHitEnergyHCalBarrel->GetXaxis()->SetNdivisions(505);
   CaloHitEnergyHCalBarrel->GetXaxis()->SetLabelFont(132);
   CaloHitEnergyHCalBarrel->GetXaxis()->SetLabelSize(0.05);
   CaloHitEnergyHCalBarrel->GetXaxis()->SetTitleSize(0.05);
   CaloHitEnergyHCalBarrel->GetXaxis()->SetTitleFont(132);
   CaloHitEnergyHCalBarrel->GetYaxis()->SetTitle("Entries");
   CaloHitEnergyHCalBarrel->GetYaxis()->SetLabelFont(132);
   CaloHitEnergyHCalBarrel->GetYaxis()->SetLabelSize(0.05);
   CaloHitEnergyHCalBarrel->GetYaxis()->SetTitleSize(0.05);
   CaloHitEnergyHCalBarrel->GetYaxis()->SetTitleOffset(1.3);
   CaloHitEnergyHCalBarrel->GetYaxis()->SetTitleFont(132);
   CaloHitEnergyHCalBarrel->GetZaxis()->SetLabelFont(42);
   CaloHitEnergyHCalBarrel->GetZaxis()->SetLabelSize(0.035);
   CaloHitEnergyHCalBarrel->GetZaxis()->SetTitleSize(0.035);
   CaloHitEnergyHCalBarrel->GetZaxis()->SetTitleFont(42);
   CaloHitEnergyHCalBarrel->Draw("");
   
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
   GaussianFit->SetParameter(0,700);
   GaussianFit->SetParError(0,0);
   GaussianFit->SetParLimits(0,0,0);
   GaussianFit->SetParameter(1,20);
   GaussianFit->SetParError(1,0);
   GaussianFit->SetParLimits(1,0,0);
   GaussianFit->SetParameter(2,0.104604);
   GaussianFit->SetParError(2,0);
   GaussianFit->SetParLimits(2,0,0);
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
