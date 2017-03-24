TH1F* CumulativeHistogram(TH1F *pTH1F);

void HCalEnergyTimings()
{
    gStyle->SetOptStat(kFALSE); 
    gStyle->SetLegendBorderSize(0); 
    gStyle->SetStatBorderSize(0); 
    gStyle->SetTitleBorderSize(0); 

    // Let's open the TFile
    TFile* pTFile_Tungsten = new TFile("HCalEnergyTiming_TungstenHCal_25GeVKaonL_QGSP_BERT.root");
    TFile* pTFile_Tungsten_HP = new TFile("HCalEnergyTiming_TungstenHCal_25GeVKaonL_QGSP_BERT_HP.root");
    TFile* pTFile_Steel = new TFile("HCalEnergyTiming_SteelHCal_25GeVKaonL_QGSP_BERT.root");
    TFile* pTFile_Steel_HP = new TFile("HCalEnergyTiming_SteelHCal_25GeVKaonL_QGSP_BERT_HP.root");
    TFile* pTFile_Tungsten_DetShowerModeOff = new TFile("HCalEnergyTiming_TungstenHCal_25GeVKaonL_QGSP_BERT_DetShowerModeOff.root");
    TFile* pTFile_Tungsten_HP_DetShowerModeOff = new TFile("HCalEnergyTiming_TungstenHCal_25GeVKaonL_QGSP_BERT_HP_DetShowerModeOff.root");
    TFile* pTFile_Steel_DetShowerModeOff = new TFile("HCalEnergyTiming_SteelHCal_25GeVKaonL_QGSP_BERT_DetShowerModeOff.root");
    TFile* pTFile_Steel_HP_DetShowerModeOff = new TFile("HCalEnergyTiming_SteelHCal_25GeVKaonL_QGSP_BERT_HP_DetShowerModeOff.root");

    // Get the Histogram out
    TH2F* pTH2F_Tungsten = (TH2F*) pTFile_Tungsten->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Tungsten_HP = (TH2F*) pTFile_Tungsten_HP->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Steel = (TH2F*) pTFile_Steel->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Steel_HP = (TH2F*) pTFile_Steel_HP->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Tungsten_DetShowerModeOff = (TH2F*) pTFile_Tungsten_DetShowerModeOff->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Tungsten_HP_DetShowerModeOff = (TH2F*) pTFile_Tungsten_HP_DetShowerModeOff->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Steel_DetShowerModeOff = (TH2F*) pTFile_Steel_DetShowerModeOff->GetObjectChecked("fHCalEnergyTimings","TH2F");
    TH2F* pTH2F_Steel_HP_DetShowerModeOff = (TH2F*) pTFile_Steel_HP_DetShowerModeOff->GetObjectChecked("fHCalEnergyTimings","TH2F");

    // Make profile
    TProfile *pTProfile_Tungsten2 = pTH2F_Tungsten->ProfileX(); 
    TProfile *pTProfile_Tungsten = pTProfile_Tungsten2->Clone(); 
    pTProfile_Tungsten->SetTitle("");
    TProfile *pTProfile_Tungsten_HP2 = pTH2F_Tungsten_HP->ProfileX(); 
    TProfile *pTProfile_Tungsten_HP = pTProfile_Tungsten_HP2->Clone(); 
    pTProfile_Tungsten_HP->SetTitle(""); 
    TProfile *pTProfile_Steel2 = pTH2F_Steel->ProfileX(); 
    TProfile *pTProfile_Steel = pTProfile_Steel2->Clone(); 
    pTProfile_Steel->SetTitle("");
    TProfile *pTProfile_Steel_HP2 = pTH2F_Steel_HP->ProfileX(); 
    TProfile *pTProfile_Steel_HP = pTProfile_Steel_HP2->Clone(); 
    pTProfile_Steel_HP->SetTitle("");
    TProfile *pTProfile_Tungsten2_DetShowerModeOff = pTH2F_Tungsten_DetShowerModeOff->ProfileX(); 
    TProfile *pTProfile_Tungsten_DetShowerModeOff = pTProfile_Tungsten2_DetShowerModeOff->Clone(); 
    pTProfile_Tungsten_DetShowerModeOff->SetTitle("");
    TProfile *pTProfile_Tungsten_HP2_DetShowerModeOff = pTH2F_Tungsten_HP_DetShowerModeOff->ProfileX(); 
    TProfile *pTProfile_Tungsten_HP_DetShowerModeOff = pTProfile_Tungsten_HP2_DetShowerModeOff->Clone(); 
    pTProfile_Tungsten_HP_DetShowerModeOff->SetTitle(""); 
    TProfile *pTProfile_Steel2_DetShowerModeOff = pTH2F_Steel_DetShowerModeOff->ProfileX(); 
    TProfile *pTProfile_Steel_DetShowerModeOff = pTProfile_Steel2_DetShowerModeOff->Clone(); 
    pTProfile_Steel_DetShowerModeOff->SetTitle("");
    TProfile *pTProfile_Steel_HP2_DetShowerModeOff = pTH2F_Steel_HP_DetShowerModeOff->ProfileX(); 
    TProfile *pTProfile_Steel_HP_DetShowerModeOff = pTProfile_Steel_HP2_DetShowerModeOff->Clone(); 
    pTProfile_Steel_HP_DetShowerModeOff->SetTitle("");

    // Style Axes
    pTProfile_Tungsten->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Tungsten_HP->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Steel->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Steel_HP->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Tungsten_DetShowerModeOff->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Tungsten_HP_DetShowerModeOff->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Steel_DetShowerModeOff->GetXaxis()->SetTitle("Time [ns]");
    pTProfile_Steel_HP_DetShowerModeOff->GetXaxis()->SetTitle("Time [ns]");

    pTProfile_Tungsten->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Tungsten_HP->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Steel->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Steel_HP->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Tungsten_DetShowerModeOff->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Tungsten_HP_DetShowerModeOff->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Steel_DetShowerModeOff->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTProfile_Steel_HP_DetShowerModeOff->GetYaxis()->SetTitle("HCal Energy Fraction");

    pTProfile_Tungsten->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Tungsten_HP->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Steel->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Steel_HP->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Tungsten_DetShowerModeOff->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Tungsten_HP_DetShowerModeOff->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Steel_DetShowerModeOff->GetYaxis()->SetRangeUser(0.75,1.0);
    pTProfile_Steel_HP_DetShowerModeOff->GetYaxis()->SetRangeUser(0.75,1.0);
/*
    // Style
    pTProfile_Tungsten->SetLineColor(2);
    pTProfile_Tungsten->SetLineStyle(1);
    pTProfile_Tungsten_DetShowerModeOff->SetLineColor(2);
    pTProfile_Tungsten_DetShowerModeOff->SetLineStyle(2);
    pTProfile_Tungsten_HP->SetLineColor(1);
    pTProfile_Tungsten_HP->SetLineStyle(1);
    pTProfile_Tungsten_HP_DetShowerModeOff->SetLineColor(1);
    pTProfile_Tungsten_HP_DetShowerModeOff->SetLineStyle(2);

    pTProfile_Steel->SetLineColor(6);
    pTProfile_Steel->SetLineStyle(1);
    pTProfile_Steel_DetShowerModeOff->SetLineColor(6);
    pTProfile_Steel_DetShowerModeOff->SetLineStyle(2);
    pTProfile_Steel_HP->SetLineColor(4);
    pTProfile_Steel_HP->SetLineStyle(1);
    pTProfile_Steel_HP_DetShowerModeOff->SetLineColor(4);
    pTProfile_Steel_HP_DetShowerModeOff->SetLineStyle(2);

    // Draw it
    TCanvas *pCanvas = new TCanvas();
    pCanvas->cd();
    TLegend *pTLegend = new TLegend(0.25,0.15,0.85,0.65);
    pTLegend->SetHeader("25 GeV K_{L}");
    pTLegend->AddEntry(pTProfile_Steel,"Steel HCal - QGSP_BERT - Detailed Shower Mode","l");
    pTProfile_Steel->Draw("hist l");
    pTLegend->Draw("same");
    pCanvas->SaveAs("PresentationPlot.png");

    TCanvas *pCanvas2 = new TCanvas();
    pCanvas2->cd();
    TLegend *pTLegend2 = new TLegend(0.45,0.15,0.85,0.45);

    pTLegend2->SetHeader("25 GeV K_{L}");
    pTLegend2->AddEntry(pTProfile_Tungsten,"Tungsten HCal - QGSP_BERT","l");
    pTLegend2->AddEntry(pTProfile_Tungsten_HP,"Tungsten HCal - QGSP_BERT_HP","l");

    pTProfile_Tungsten->Draw();
    pTProfile_Tungsten_HP->Draw("same");
    pTLegend2->Draw("same");
    pCanvas2->SaveAs("Tungsten_HP.pdf");

    TCanvas *pCanvas3 = new TCanvas();
    pCanvas3->cd();
    TLegend *pTLegend3 = new TLegend(0.45,0.15,0.85,0.45);

    pTLegend3->SetHeader("25 GeV K_{L}");
    pTLegend3->AddEntry(pTProfile_Steel,"Steel HCal - QGSP_BERT","l");
    pTLegend3->AddEntry(pTProfile_Steel_HP,"Steel HCal - QGSP_BERT_HP","l");

    pTProfile_Steel->Draw();
    pTProfile_Steel_HP->Draw("same");
    pTLegend3->Draw("same");
    pCanvas3->SaveAs("Steel_HP.pdf");

    TCanvas *pCanvas4 = new TCanvas();
    pCanvas4->cd();
    TLegend *pTLegend4 = new TLegend(0.25,0.15,0.85,0.65);

    pTLegend->SetHeader("25 GeV K_{L}");
    pTLegend4->AddEntry(pTProfile_Tungsten_HP,"Tungsten HCal - QGSP_BERT_HP - Detailed Shower Mode","l");
    pTLegend4->AddEntry(pTProfile_Tungsten_HP_DetShowerModeOff,"Tungsten HCal - QGSP_BERT_HP - No Detailed Shower Mode","l");
    pTLegend4->AddEntry(pTProfile_Steel_HP,"Steel HCal - QGSP_BERT_HP - Detailed Shower Mode","l");
    pTLegend4->AddEntry(pTProfile_Steel_HP_DetShowerModeOff,"Steel HCal - QGSP_BERT_HP - No Detailed Shower Mode","l");

    pTProfile_Tungsten_HP->Draw("same");
    pTProfile_Tungsten_HP_DetShowerModeOff->Draw("same");
    pTProfile_Steel_HP->Draw("same");
    pTProfile_Steel_HP_DetShowerModeOff->Draw("same");
    pTLegend4->Draw("same");
    pCanvas4->SaveAs("Tungsten_Steel_HP.pdf");
*/
    // Marks Method
    // Load the histograms
    TH1F *pTH1F_Tungsten = (TH1F*) pTFile_Tungsten->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Tungsten_HP = (TH1F*) pTFile_Tungsten_HP->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Steel = (TH1F*) pTFile_Steel->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Steel_HP = (TH1F*) pTFile_Steel_HP->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Tungsten_DetShowerModeOff = (TH1F*) pTFile_Tungsten_DetShowerModeOff->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Tungsten_HP_DetShowerModeOff = (TH1F*) pTFile_Tungsten_HP_DetShowerModeOff->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Steel_DetShowerModeOff = (TH1F*) pTFile_Steel_DetShowerModeOff->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");
    TH1F *pTH1F_Steel_HP_DetShowerModeOff = (TH1F*) pTFile_Steel_HP_DetShowerModeOff->GetObjectChecked("fHCalTimingsEnergyWeighted","TH1F");

    TH1F *pTH1F_Tungsten_Cumulative = CumulativeHistogram(pTH1F_Tungsten);
    pTH1F_Tungsten_Cumulative->SetLineColor(kRed);
    TH1F *pTH1F_Tungsten_HP_Cumulative = CumulativeHistogram(pTH1F_Tungsten_HP);
    pTH1F_Tungsten_HP_Cumulative->SetLineColor(kMagenta);
    TH1F *pTH1F_Steel_Cumulative = CumulativeHistogram(pTH1F_Steel);
    pTH1F_Steel_Cumulative->SetLineColor(kBlack);
    TH1F *pTH1F_Steel_HP_Cumulative = CumulativeHistogram(pTH1F_Steel_HP);
    pTH1F_Steel_HP_Cumulative->SetLineColor(kBlue);
    TH1F *pTH1F_Tungsten_DetShowerModeOff_Cumulative = CumulativeHistogram(pTH1F_Tungsten_DetShowerModeOff);
    TH1F *pTH1F_Tungsten_HP_DetShowerModeOff_Cumulative = CumulativeHistogram(pTH1F_Tungsten_HP_DetShowerModeOff);
    TH1F *pTH1F_Steel_DetShowerModeOff_Cumulative = CumulativeHistogram(pTH1F_Steel_DetShowerModeOff);
    TH1F *pTH1F_Steel_HP_DetShowerModeOff_Cumulative = CumulativeHistogram(pTH1F_Steel_HP_DetShowerModeOff);
/*
    TCanvas *pCanvas = new TCanvas();
    pCanvas->cd();
    TLegend *pTLegend = new TLegend(0.25,0.15,0.85,0.65);
    pTLegend->SetHeader("25 GeV K_{L}");
    pTLegend->AddEntry(pTH1F_Steel_HP_Cumulative,"Steel HCal - QGSP_BERT - Detailed Shower Mode","l");
    pTH1F_Steel_HP_Cumulative->Draw("hist l");
    pTLegend->Draw("same");
    pCanvas->SaveAs("PresentationPlot.png");

    TCanvas *pCanvas6 = new TCanvas();
    pCanvas6->cd();
    pTH1F_Tungsten_Cumulative->SetLineColor(kGreen);
    pTH1F_Tungsten_Cumulative->Draw();
i//    pTH1F_Tungsten_DetShowerModeOff_Cumulative->SetLineColor(kBlue);
//    pTH1F_Tungsten_DetShowerModeOff_Cumulative->SetLineStyle(3);
//    pTH1F_Tungsten_DetShowerModeOff_Cumulative->Draw("same");
    pTH1F_Tungsten_HP_Cumulative->SetLineColor(kViolet);
    pTH1F_Tungsten_HP_Cumulative->Draw("same");
//    pTH1F_Tungsten_HP_DetShowerModeOff_Cumulative->SetLineColor(kRed);
//    pTH1F_Tungsten_HP_DetShowerModeOff_Cumulative->SetLineStyle(3);
//    pTH1F_Tungsten_HP_DetShowerModeOff_Cumulative->Draw("same");
*/
    TLegend *pTLegend = new TLegend(0.25,0.2,0.85,0.5);
//    pTLegend->SetHeader("25 GeV K_{L}");
    pTLegend->SetTextSize(0.05);
    pTLegend->AddEntry(pTH1F_Tungsten_Cumulative, "Tungsten - QGSP_BERT", "l");
    pTLegend->AddEntry(pTH1F_Tungsten_HP_Cumulative, "Tungsten - QGSP_BERT_HP", "l");
    pTLegend->AddEntry(pTH1F_Steel_Cumulative, "Stainless Steel - QGSP_BERT", "l");
    pTLegend->AddEntry(pTH1F_Steel_HP_Cumulative, "Stainless Steel - QGSP_BERT_HP", "l");

    TCanvas *pCanvas = new TCanvas();
    pCanvas->cd();
    pCanvas->SetBottomMargin(0.15);
    pCanvas->SetLeftMargin(0.15);
    pTH1F_Tungsten_Cumulative->Draw();
    pTH1F_Tungsten_HP_Cumulative->Draw("same");
    pTH1F_Steel_Cumulative->Draw("same");
    pTH1F_Steel_HP_Cumulative->Draw("same");
    pTLegend->Draw("same");
    pCanvas->SaveAs("HCalAbsorberMaterialTimings.pdf");
    pCanvas->SaveAs("HCalAbsorberMaterialTimings.C");
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TH1F* CumulativeHistogram(TH1F *pTH1F)
{
    pTH1F->Scale(1/pTH1F->Integral());
    TH1F *pTH1F_Cumulative = new TH1F(pTH1F->GetName(),"",2500,0,250);
    double total = 0;
    for (int i = 0; i < 2501; i++)
    {
        total += pTH1F->GetBinContent(i);
        pTH1F_Cumulative->AddBinContent(i,total);
    }
    pTH1F_Cumulative->GetYaxis()->SetDecimals();
    pTH1F_Cumulative->GetYaxis()->SetRangeUser(0.5,1.0);
    pTH1F_Cumulative->GetXaxis()->SetRangeUser(0.f,250.f);
    pTH1F_Cumulative->GetYaxis()->SetTitleSize(0.05);
    pTH1F_Cumulative->GetXaxis()->SetTitleSize(0.05);
    pTH1F_Cumulative->GetYaxis()->SetLabelSize(0.05);
    pTH1F_Cumulative->GetXaxis()->SetLabelSize(0.05);
    pTH1F_Cumulative->GetYaxis()->SetTitle("HCal Energy Fraction");
    pTH1F_Cumulative->GetXaxis()->SetTitle("Time [ns]");
    return pTH1F_Cumulative;
}
