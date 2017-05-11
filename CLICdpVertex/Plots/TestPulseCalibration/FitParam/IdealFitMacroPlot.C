void IdealFitMacroPlot()
{
    TF1 *pTF1_EvenSet9 = (TF1*)(GetFunction(0.0875, 2.41, 5.1, 12.79)->Clone());
    TF1 *pTF1_EvenSet10 = (TF1*)(GetFunction(0.0769, 2.58, 7.5, 8.02)->Clone());
    TF1 *pTF1_EvenSet12 = (TF1*)(GetFunction(0.0725, 2.87, 12.1, 7.86)->Clone());
    TF1 *pTF1_EvenSet13 = (TF1*)(GetFunction(0.0708, 2.69, 16.2, 6.65)->Clone());
    TF1 *pTF1_EvenSet14 = (TF1*)(GetFunction(0.0748, 2.57, 16, 9.89)->Clone());
    TF1 *pTF1_EvenSet15 = (TF1*)(GetFunction(0.0856, 2.34, 5.1, 12.51)->Clone());
    TF1 *pTF1_EvenSet16 = (TF1*)(GetFunction(0.0746, 2.32, 13.7, 6.65)->Clone());

    TF1 *pTF1_OddSet9 = (TF1*)(GetFunction(0.0834, 1.72, 61.0, 0.25)->Clone());
    TF1 *pTF1_OddSet10 = (TF1*)(GetFunction(0.0759, 1.63, 43.2, 0.10)->Clone());
    TF1 *pTF1_OddSet12 = (TF1*)(GetFunction(0.0731, 1.92, 51.5, 0.36)->Clone());
    TF1 *pTF1_OddSet13 = (TF1*)(GetFunction(0.0713, 1.72, 52.5, 0.18)->Clone());
    TF1 *pTF1_OddSet14 = (TF1*)(GetFunction(0.0754, 1.68, 57.3, 0.16)->Clone());
    TF1 *pTF1_OddSet15 = (TF1*)(GetFunction(0.0836, 1.52, 52.7, 0.42)->Clone());
    TF1 *pTF1_OddSet16 = (TF1*)(GetFunction(0.0727, 1.49, 50.7, 0.10)->Clone());

    pTF1_EvenSet9->SetLineColor(kGreen+2);
    pTF1_EvenSet10->SetLineColor(kRed);
    pTF1_EvenSet12->SetLineColor(kMagenta);
    pTF1_EvenSet13->SetLineColor(kBlue);
//    pTF1_EvenSet14->SetLineColor();
    pTF1_EvenSet15->SetLineColor(kCyan);
    pTF1_EvenSet16->SetLineColor(kBlack);

    pTF1_OddSet9->SetLineColor(kGreen+2);
    pTF1_OddSet9->SetLineStyle(2);
    pTF1_OddSet10->SetLineColor(kRed);
    pTF1_OddSet10->SetLineStyle(2);
    pTF1_OddSet12->SetLineColor(kMagenta);
    pTF1_OddSet12->SetLineStyle(2);
    pTF1_OddSet13->SetLineColor(kBlue);
    pTF1_OddSet13->SetLineStyle(2);
//    pTF1_OddSet14->SetLineColor(6);
//    pTF1_OddSet14->SetLineStyle(2);
    pTF1_OddSet15->SetLineColor(kCyan);
    pTF1_OddSet15->SetLineStyle(2);
    pTF1_OddSet16->SetLineColor(kBlack);
    pTF1_OddSet16->SetLineStyle(2);

    TCanvas *pTCanvas = new TCanvas("Name", "",0,0,3000,2500);
    pTCanvas->SetRightMargin(0.35);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->Draw();

    TLegend *pTLegend = new TLegend(0.7,0.1,0.95,0.9); 
    pTLegend->SetTextSize(0.05);
    pTLegend->AddEntry(pTF1_EvenSet9, "Set 9, Centred", "l");
    pTLegend->AddEntry(pTF1_EvenSet10, "Set 10, 1/4 Offset", "l");
    pTLegend->AddEntry(pTF1_EvenSet12, "Set 12, Centred", "l");
    pTLegend->AddEntry(pTF1_EvenSet13, "Set 13, Centred", "l");
//    pTLegend->AddEntry(pTF1_EvenSet14, "Set 14, 1/2 Offset", "l");
    pTLegend->AddEntry(pTF1_EvenSet15, "Set 15, Centred", "l");
    pTLegend->AddEntry(pTF1_EvenSet16, "Set 16, 1/2 Offset", "l");

    TLegend *pTLegend2 = new TLegend(0.15,0.65,0.4,0.85); 
    pTLegend2->SetTextSize(0.05);
    pTLegend2->AddEntry(pTF1_EvenSet16, "Even Columns", "l");
    pTLegend2->AddEntry(pTF1_OddSet16, "Odd Columns", "l");

    TH2F *pAxes = new TH2F("Axes","",180,0,180,200,0,20);
    pAxes->Draw();
    pAxes->GetXaxis()->SetRangeUser(0,200);
    pAxes->GetXaxis()->SetTitle("Pulse Height [mV]");
    pAxes->GetXaxis()->SetLabelSize(0.05);
    pAxes->GetXaxis()->SetTitleSize(0.05);
    pAxes->GetYaxis()->SetRangeUser(0,20);
    pAxes->GetYaxis()->SetTitle("ToT");
    pAxes->GetYaxis()->SetTitleSize(0.05);
    pAxes->GetYaxis()->SetLabelSize(0.05);
    pTF1_EvenSet9->Draw("same");
    pTF1_EvenSet10->Draw("same");
    pTF1_EvenSet12->Draw("same");
    pTF1_EvenSet13->Draw("same");
//    pTF1_EvenSet14->Draw("same");
    pTF1_EvenSet15->Draw("same");
    pTF1_EvenSet16->Draw("same");
    pTF1_OddSet9->Draw("same");
    pTF1_OddSet10->Draw("same");
    pTF1_OddSet12->Draw("same");
    pTF1_OddSet13->Draw("same");
//    pTF1_OddSet14->Draw("same");
    pTF1_OddSet15->Draw("same");
    pTF1_OddSet16->Draw("same");
    pTLegend->Draw();
    pTLegend2->Draw();
    pTCanvas->SaveAs("AverageToT_vs_InjectedPulseHeight.pdf");
    pTCanvas->SaveAs("AverageToT_vs_InjectedPulseHeight.C");
}

//===============================================================

TF1 *GetFunction(double a, double b, double c, double t)
{
    TF1 *pTF1 = new TF1("Set", "x*[0] + [1] - [2] / (x - [3])",t,180);
    pTF1->SetRange(t,0,180,15);
    pTF1->SetParameter(0,a);
    pTF1->SetParameter(1,b);
    pTF1->SetParameter(2,c);
    pTF1->SetParameter(3,t);
    return pTF1;
}
