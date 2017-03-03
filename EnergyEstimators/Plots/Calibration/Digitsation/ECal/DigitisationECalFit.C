{
//=========Macro generated from canvas: c1/
//=========  (Fri Mar  3 15:24:35 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "",0,45,800,600);
   gStyle->SetOptStat(0);
   c1->Range(-2.762886,-3040.8,15.65635,17231.2);
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
   
   TH1F *CaloHitEnergyECal = new TH1F("CaloHitEnergyECal","",27,0,13.81443);
   CaloHitEnergyECal->SetBinContent(4,2);
   CaloHitEnergyECal->SetBinContent(6,1);
   CaloHitEnergyECal->SetBinContent(7,1);
   CaloHitEnergyECal->SetBinContent(8,2);
   CaloHitEnergyECal->SetBinContent(11,1);
   CaloHitEnergyECal->SetBinContent(12,3);
   CaloHitEnergyECal->SetBinContent(13,1);
   CaloHitEnergyECal->SetBinContent(14,3);
   CaloHitEnergyECal->SetBinContent(15,8);
   CaloHitEnergyECal->SetBinContent(16,59);
   CaloHitEnergyECal->SetBinContent(17,448);
   CaloHitEnergyECal->SetBinContent(18,2882);
   CaloHitEnergyECal->SetBinContent(19,9747);
   CaloHitEnergyECal->SetBinContent(20,14480);
   CaloHitEnergyECal->SetBinContent(21,10096);
   CaloHitEnergyECal->SetBinContent(22,3164);
   CaloHitEnergyECal->SetBinContent(23,619);
   CaloHitEnergyECal->SetBinContent(24,71);
   CaloHitEnergyECal->SetBinContent(25,12);
   CaloHitEnergyECal->SetBinContent(26,5);
   CaloHitEnergyECal->SetBinContent(28,1);
   CaloHitEnergyECal->SetEntries(41606);
   CaloHitEnergyECal->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   CaloHitEnergyECal->SetFillColor(ci);
   CaloHitEnergyECal->SetFillStyle(3004);

   ci = TColor::GetColor("#0000ff");
   CaloHitEnergyECal->SetLineColor(ci);
   CaloHitEnergyECal->SetLineWidth(2);
   CaloHitEnergyECal->GetXaxis()->SetTitle("ECal Calorimeter Hit Energy [GeV]");
   CaloHitEnergyECal->GetXaxis()->SetNdivisions(505);
   CaloHitEnergyECal->GetXaxis()->SetLabelFont(132);
   CaloHitEnergyECal->GetXaxis()->SetLabelSize(0.05);
   CaloHitEnergyECal->GetXaxis()->SetTitleSize(0.05);
   CaloHitEnergyECal->GetXaxis()->SetTitleFont(132);
   CaloHitEnergyECal->GetYaxis()->SetTitle("Entries");
   CaloHitEnergyECal->GetYaxis()->SetLabelFont(132);
   CaloHitEnergyECal->GetYaxis()->SetLabelSize(0.05);
   CaloHitEnergyECal->GetYaxis()->SetTitleSize(0.05);
   CaloHitEnergyECal->GetYaxis()->SetTitleOffset(1.3);
   CaloHitEnergyECal->GetYaxis()->SetTitleFont(132);
   CaloHitEnergyECal->GetZaxis()->SetLabelFont(42);
   CaloHitEnergyECal->GetZaxis()->SetLabelSize(0.035);
   CaloHitEnergyECal->GetZaxis()->SetTitleSize(0.035);
   CaloHitEnergyECal->GetZaxis()->SetTitleFont(42);
   CaloHitEnergyECal->Draw("");
   
   TF1 *GaussianFit = new TF1("GaussianFit","[0]*TMath::Exp(-0.5*[2]*TMath::Power(x-[1],2))",9.465441,11.00038);
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
   GaussianFit->SetParameter(0,14493.93);
   GaussianFit->SetParError(0,112.7447);
   GaussianFit->SetParLimits(0,0,0);
   GaussianFit->SetParameter(1,10.00217);
   GaussianFit->SetParError(1,0.01524883);
   GaussianFit->SetParLimits(1,0,0);
   GaussianFit->SetParameter(2,3.054739);
   GaussianFit->SetParError(2,0.1067793);
   GaussianFit->SetParLimits(2,0,100);
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
