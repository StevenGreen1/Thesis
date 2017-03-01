void IdealFitMacroPlot()
{
    TF1 *pTF1_Set9 = (TF1*)(GetFunction(0.0855, 2.01, 33, 6.5)->Clone());
    TF1 *pTF1_Set10 = (TF1*)(GetFunction(0.0764, 2.10, 25.3, 4.1)->Clone());
    TF1 *pTF1_Set12 = (TF1*)(GetFunction(0.0728, 2.40, 31.8, 4.1)->Clone());
    TF1 *pTF1_Set13 = (TF1*)(GetFunction(0.0711, 2.20, 34.4, 3.4)->Clone());
    TF1 *pTF1_Set14 = (TF1*)(GetFunction(0.0751, 2.12, 36.6, 5)->Clone());
    TF1 *pTF1_Set15 = (TF1*)(GetFunction(0.0846, 1.93, 28.9, 6.5)->Clone());
    TF1 *pTF1_Set16 = (TF1*)(GetFunction(0.0736, 1.90, 32.2, 3.4)->Clone());
    pTF1_Set9->SetLineColor(1);
    pTF1_Set10->SetLineColor(2);
    pTF1_Set12->SetLineColor(3);
    pTF1_Set13->SetLineColor(4);
    pTF1_Set14->SetLineColor(6);
    pTF1_Set15->SetLineColor(7);
    pTF1_Set16->SetLineColor(8);

    TCanvas *pTCanvas = new TCanvas("Name", "",0,0,3000,2500);
    pTCanvas->SetRightMargin(0.35);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->Draw();

    TLegend *pTLegend = new TLegend(0.7,0.1,0.95,0.9); 
    pTLegend->SetTextSize(0.05);
    pTLegend->AddEntry(pTF1_Set9, "Set 9, Centred", "l");
    pTLegend->AddEntry(pTF1_Set10, "Set 10, #frac{1}{4} Offset", "l");
    pTLegend->AddEntry(pTF1_Set12, "Set 12, Centred", "l");
    pTLegend->AddEntry(pTF1_Set13, "Set 13, Centred", "l");
    pTLegend->AddEntry(pTF1_Set14, "Set 14, #frac{1}{2} Offset", "l");
    pTLegend->AddEntry(pTF1_Set15, "Set 15, Centred", "l");
    pTLegend->AddEntry(pTF1_Set16, "Set 16, #frac{1}{2} Offset", "l");

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
    pTF1_Set9->Draw("same");
    pTF1_Set10->Draw("same");
    pTF1_Set12->Draw("same");
    pTF1_Set13->Draw("same");
    pTF1_Set14->Draw("same");
    pTF1_Set15->Draw("same");
    pTF1_Set16->Draw("same");
    pTLegend->Draw();
    pTCanvas->SaveAs("AverageToT_vs_InjectedPulseHeight.pdf");
    pTCanvas->SaveAs("AverageToT_vs_InjectedPulseHeight.C");
}

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
