void SensitiveDistributionsMass()
{
    TString energy("1400");

    TString name("MVVs");

    TString zeroFloat("0.0"); // 1400 GeV

    TString upperLimit("0.015");

    TFile *pTFile = new TFile("../Chi2ContoursOptimisation/" + energy + "GeV/SPFOs_kt_0p90_" + energy + "GeV_FitData.root");

    TH1F *pTH1F_0_0 = (TH1F*)pTFile->Get(name + "_Alpha4_" + zeroFloat + "_Alpha5_" + zeroFloat);
    pTH1F_0_0->Rebin(2);
    TH1F *pTH1F_0p02_0 = (TH1F*)pTFile->Get(name + "_Alpha4_" + upperLimit + "_Alpha5_" + zeroFloat);
    pTH1F_0p02_0->Rebin(2);
    TH1F *pTH1F_0_0p02 = (TH1F*)pTFile->Get(name + "_Alpha4_" + zeroFloat + "_Alpha5_" + upperLimit);
    pTH1F_0_0p02->Rebin(2);

    pTH1F_0_0->SetName("Reference");
    pTH1F_0p02_0->SetName("Alpha4Change");
    pTH1F_0_0p02->SetName("Alpha5Change");

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

    min = 0.f;

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

    TCanvas *pTCanvas = new TCanvas(name, "", 600, 600);
    pTCanvas->Draw();
    pTCanvas->SetRightMargin(0.05);
    pTCanvas->SetLeftMargin(0.2);
    pTCanvas->SetTopMargin(0.05);
    pTCanvas->SetBottomMargin(0.125);

    TLegend *pTLegend = new TLegend(0.4, 0.7, 0.75, 0.9);
    pTLegend->SetFillStyle(0);
    pTLegend->SetTextSize(0.05);
    pTLegend->AddEntry(pTH1F_0_0, "#alpha_{4} = #alpha_{5} = 0", "l");
    pTLegend->AddEntry(pTH1F_0p02_0, "#alpha_{4} = " + upperLimit + ", #alpha_{5} = 0", "l");
    pTLegend->AddEntry(pTH1F_0_0p02, "#alpha_{4} = 0, #alpha_{5} = " + upperLimit, "l");

    pTH1F_0_0p02->Draw("");
    pTH1F_0_0p02->SetTitle("");
    pTH1F_0_0p02->GetXaxis()->SetTitle("Invariant Mass of System [GeV]");
    pTH1F_0_0p02->GetXaxis()->SetTitleSize(0.05);
    pTH1F_0_0p02->GetXaxis()->SetLabelSize(0.05);
    pTH1F_0_0p02->GetYaxis()->SetTitleSize(0.05);
    pTH1F_0_0p02->GetYaxis()->SetLabelSize(0.05);
    pTH1F_0_0p02->GetYaxis()->SetTitleOffset(2);

    pTH1F_0p02_0->Draw("same");
    pTH1F_0_0->Draw("same");
    pTLegend->Draw();

    pTCanvas->SaveAs(name + "_SPFOs_kt_0p90_" + energy + "GeV.pdf");
    pTCanvas->SaveAs(name + "_SPFOs_kt_0p90_" + energy + "GeV.C");
}
