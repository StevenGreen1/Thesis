void SensitiveDistributions()
{
    TFile *pTFile = new TFile("../SPFOs_kt_0p70_3000GeV_FitData.root"); 

    TH1F *pTH1F_0_0 = (TH1F*)pTFile->Get("CosThetaStarSynBosons_Alpha4_1.04083e-17_Alpha5_1.04083e-17");
    TH1F *pTH1F_0p02_0 = (TH1F*)pTFile->Get("CosThetaStarSynBosons_Alpha4_0.02_Alpha5_1.04083e-17");
    TH1F *pTH1F_0_0p02 = (TH1F*)pTFile->Get("CosThetaStarSynBosons_Alpha4_1.04083e-17_Alpha5_0.02");

    int binmax1 = pTH1F_0_0->GetMaximumBin();
    double content1 = pTH1F_0_0->GetBinContent(binmax1);

    int binmax2 = pTH1F_0p02_0->GetMaximumBin();
    double content2 = pTH1F_0p02_0->GetBinContent(binmax2);

    int binmax3 = pTH1F_0_0p02->GetMaximumBin();
    double content3 = pTH1F_0_0p02->GetBinContent(binmax3);

    double max(0.0);
    if (content1 > content2 && content1 > content3)
        max = content1;
    else if (content2 > content1 && content2 > content3)
        max = content2;
    else if (content3 > content1 && content3 > content2)
        max = content3;

    max = 1.1 * max;

    int binmin1 = pTH1F_0_0->GetMinimumBin();
    double content1a = pTH1F_0_0->GetBinContent(binmin1);

    int binmin2 = pTH1F_0p02_0->GetMinimumBin();
    double content2a = pTH1F_0p02_0->GetBinContent(binmin2);

    int binmin3 = pTH1F_0_0p02->GetMinimumBin();
    double content3a = pTH1F_0_0p02->GetBinContent(binmin3);

    double min(0.0);
    if (content1a < content2a && content1a < content3a)
        min = content1a;
    else if (content2a < content1a && content2a < content3a)
        min = content2a;
    else if (content3a < content1a && content3a < content2a)
        min = content3a;

    double min = 0.95 * min;

    pTH1F_0_0->GetYaxis()->SetRangeUser(min, max);
    pTH1F_0_0->SetLineColor(kRed);
    pTH1F_0_0->SetFillColor(kRed);
    pTH1F_0_0->SetFillStyle(3004);

    pTH1F_0p02_0->GetYaxis()->SetRangeUser(min, max);
    pTH1F_0p02_0->SetLineColor(kBlue);
    pTH1F_0p02_0->SetFillColor(kBlue);
    pTH1F_0p02_0->SetFillStyle(3005);

    pTH1F_0_0p02->GetYaxis()->SetRangeUser(min, max);
    pTH1F_0_0p02->SetLineColor(kGreen+2);
    pTH1F_0_0p02->SetFillColor(kGreen+2);
    pTH1F_0_0p02->SetFillStyle(3006);

    TCanvas *pTCanvas = new TCanvas("CosThetaStarSynBosons", "", 600, 600);
    pTCanvas->Draw();
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetTopMargin(0.05);
    pTCanvas->SetBottomMargin(0.15);

    TLegend *pTLegend = new TLegend(0.2, 0.7, 0.6, 0.9);
    pTLegend->SetFillStyle(0);
    pTLegend->AddEntry(pTH1F_0_0, "#alpha_{4} = #alpha_{5} = 0", "l");
    pTLegend->AddEntry(pTH1F_0p02_0, "#alpha_{4} = 0.02, #alpha_{5} = 0", "l");
    pTLegend->AddEntry(pTH1F_0_0p02, "#alpha_{4} = 0, #alpha_{5} = 0.02", "l");

    pTH1F_0_0p02->Draw("");
    pTH1F_0_0p02->SetTitle("");
    pTH1F_0_0p02->GetXaxis()->SetTitleSize(0.05);
    pTH1F_0_0p02->GetYaxis()->SetTitleSize(0.05);
    pTH1F_0_0p02->GetYaxis()->SetTitleOffset(1.6);
    pTH1F_0_0p02->GetXaxis()->SetLabelSize(0.05);
    pTH1F_0_0p02->GetYaxis()->SetLabelSize(0.05);

    pTH1F_0p02_0->Draw("same");
    pTH1F_0_0->Draw("same");
    pTLegend->Draw();

    pTCanvas->SaveAs("CosThetaStarSynBosons_SPFOs_kt_0p70_3000GeV.pdf");
    pTCanvas->SaveAs("CosThetaStarSynBosons_SPFOs_kt_0p70_3000GeV.C");
}
