void TidyHCalEndCapDigi()
{
    gROOT->ProcessLine(".x Calorimeter_Hit_Energies_HCal_EndCap_Digitisation.C");
    TH1F *pTH1F = CaloHitEnergyHCalEndCap;

    TF1 *pTF1 = new TF1("GaussianFit","[0]*TMath::Exp(-0.5*[2]*TMath::Power(x-[1],2))",16,25);
    pTF1->SetLineColor(kRed);
    pTF1->SetLineWidth(2);
    pTF1->FixParameter(0,190);
    pTF1->SetParError(0,0);
    pTF1->SetParLimits(0,0,0);
    pTF1->FixParameter(1,20);
    pTF1->SetParError(1,0.0);
    pTF1->SetParLimits(1,0,0);
    pTF1->FixParameter(2,1.20117e-1);
    pTF1->SetParError(2,0);

    TCanvas *pTCanvas = new TCanvas("c1","",800,600);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);

    TLegend *pTLegend = new TLegend(0.2,0.65,0.4,0.85);
    pTLegend->SetTextSize(0.05);

    pTH1F->SetTitle("");
    pTH1F->SetStats(kFALSE);
    pTH1F->GetXaxis()->SetTitle("HCal Calorimeter Hit Energy [GeV]");
    pTH1F->GetXaxis()->SetTitleSize(0.05);
    pTH1F->GetXaxis()->SetTitleFont(132);
    pTH1F->GetXaxis()->SetLabelFont(132);
    pTH1F->GetXaxis()->SetLabelSize(0.05);
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->GetYaxis()->SetTitleSize(0.05);
    pTH1F->GetYaxis()->SetTitleFont(132);
    pTH1F->GetYaxis()->SetLabelFont(132);
    pTH1F->GetYaxis()->SetTitleOffset(1.3);
    pTH1F->GetYaxis()->SetLabelSize(0.05);
    pTH1F->SetLineColor(kBlue);
    pTH1F->SetFillColor(kBlue);
    pTH1F->SetFillStyle(3004);

    pTLegend->AddEntry(pTF1, "Gaussian Fit","l");
    pTH1F->Draw();
    pTF1->Draw("same");
    pTLegend->Draw();
    pTCanvas->SaveAs("DigitisationHCalEndCapFit.pdf");
    pTCanvas->SaveAs("DigitisationHCalEndCapFit.C");
     
}
