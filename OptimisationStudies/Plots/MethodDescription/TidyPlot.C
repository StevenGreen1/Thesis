void TidyPlot()
{
    TCanvas *pTCanvas = new TCanvas("name", "");
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->Draw();
    TFile *pTFile = new TFile("AnalysePerformance_PandoraSettingsDefault_DetectorModel_85_Reconstruction_Variant_71_Z_uds_200GeV.root");
    TH1F *pTH1F = (TH1F*)pTFile->Get("fPFA_L7A");
    pTH1F->Rebin(10);
    pTH1F->GetXaxis()->SetRangeUser(180,220);
    pTH1F->GetXaxis()->SetTitle("E_{jj} [GeV]");
    pTH1F->GetXaxis()->SetTitleSize(0.05);
    pTH1F->GetXaxis()->SetLabelSize(0.05);
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->GetYaxis()->SetTitleSize(0.05);
    pTH1F->GetYaxis()->SetLabelSize(0.05);
    pTH1F->SetTitle("");
//    pTH1F->SetLineStyle(2);
    pTH1F->Draw("P E1");

    TH1F *pTH1F90 = (TH1F*)(pTH1F->Clone());

    float sum = 0., total = 0.;
    double sx = 0., sxx = 0.;
    const unsigned int nbins(pTH1F->GetNbinsX());

    for (unsigned int i = 0; i <= nbins; ++i)
    {
        const float binx(pTH1F->GetBinLowEdge(i) + (0.5 * pTH1F->GetBinWidth(i)));
        const float yi(pTH1F->GetBinContent(i));
        sx += yi * binx;
        sxx += yi * binx * binx;
        total += yi;
    }

    const float rawMean(sx / total);
    const float rawMeanSquared(sxx / total);
    const float rawRms(std::sqrt(rawMeanSquared - rawMean * rawMean));

    sum = 0.;
    unsigned int is0 = 0;

    for (unsigned int i = 0; (i <= nbins) && (sum < total / 10.); ++i)
    {
        sum += pTH1F->GetBinContent(i);
        is0 = i;
    }

    // Calculate truncated properties
    float rmsmin(10000000.f), sigma(10000000.f), sigmasigma(10000000.f), frac(10000000.f), efrac(10000000.f), mean(10000000.f), low(10000000.f), rms(10000000.f);
    float high(0.f);
    int startbin(0);
    int endbin(0);

    for (unsigned int istart = 0; istart <= is0; ++istart)
    {
        double sumn = 0.;
        double csum = 0.;
        double sumx = 0.;
        double sumxx = 0.;
        unsigned int iend = 0;

        for (unsigned int i = istart; (i <= nbins) && (csum < 0.9 * total); ++i)
        {
            const float binx(pTH1F->GetBinLowEdge(i) + (0.5 * pTH1F->GetBinWidth(i)));
            const float yi(pTH1F->GetBinContent(i));
            csum += yi;

            if (sumn < 0.9 * total)
            {
                sumn += yi;
                sumx += yi * binx;
                sumxx+= yi * binx * binx;
                iend = i;
            }
        }

        const float localMean(sumx / sumn);
        const float localMeanSquared(sumxx / sumn);
        const float localRms(std::sqrt(localMeanSquared - localMean * localMean));

        if (localRms < rmsmin)
        {
            mean = localMean;
            rms = localRms;
            low = pTH1F->GetBinLowEdge(istart);
            high = pTH1F->GetBinLowEdge(iend);
            rmsmin = localRms;
            startbin = istart;
            endbin = iend;
        }
    }
 
    for (unsigned int i = 0; i <= nbins; ++i)
    {
        if (i < startbin || i > endbin)
            pTH1F90->SetBinContent(i, 0);
    } 

//    pTH1F90->SetLineColor(kRed);
//    pTH1F90->SetFillColor(kRed);
//    pTH1F90->SetLineStyle(1);
//    pTH1F90->SetFillStyle(3004);
//    pTH1F90->Draw("same");
/*
 26     const float rawMean(sx / total);
 28     const float rawRms(std::sqrt(rawMeanSquared - rawMean * rawMean));
 74             mean = localMean;
 75             rms = localRms;
*/
    pTCanvas->Update();
    TLine *pTLineRawMean = new TLine(rawMean,pTCanvas->GetUymin(),rawMean,pTCanvas->GetUymax());
    pTLineRawMean->SetLineColor(kRed);
    pTLineRawMean->Draw("same");
    TLine *pTLineMean = new TLine(mean,pTCanvas->GetUymin(),mean,pTCanvas->GetUymax());
    pTLineMean->SetLineColor(kBlue);
//    pTLineMean->SetLineStyle(2);
    pTLineMean->Draw("same");

    float leftRawRMS = rawMean - rawRms;
    float rightRawRMS = rawMean + rawRms;
    float leftRMS = mean - rmsmin;
    float rightRMS = mean + rmsmin;

    TArrow *pTArrowRawRMS = new TArrow(leftRawRMS,pTCanvas->GetUymax()*0.2,rightRawRMS,pTCanvas->GetUymax()*0.2,0.025,"<|>");
    pTArrowRawRMS->SetLineColor(kRed);
    pTArrowRawRMS->SetFillColor(kRed);
    pTArrowRawRMS->Draw();
    TArrow *pTArrowRMS = new TArrow(leftRMS,pTCanvas->GetUymax()*0.25,rightRMS,pTCanvas->GetUymax()*0.25,0.025,"<|>");
    pTArrowRMS->SetLineColor(kBlue);
    pTArrowRMS->SetFillColor(kBlue);
//    pTArrowRMS->SetLineStyle(2);
    pTArrowRMS->Draw();

    TLegend *pTLegend = new TLegend(0.6,0.6, 0.85, 0.85);
    pTLegend->SetHeader("#splitline{Mean and RMS}{Definition:}");
    pTLegend->AddEntry(pTLineRawMean,"Full Range","l");
    pTLegend->AddEntry(pTLineMean,"90\% Range","l");
    pTLegend->SetTextSize(0.05);
    pTLegend->Draw("same");

        std::cout << pTH1F->GetName() << " (" << pTH1F->GetEntries() << " entries), rawrms: " << rawRms << ", rms90: " << rmsmin
                  << " (" << low << "-" << high << "), rawMean: " << rawMean << ", mean: " << mean << ", sigma: " << sigma << "+-" << sigmasigma << std::endl;

    pTCanvas->SaveAs("RMS90Plot.C");
    pTCanvas->SaveAs("RMS90Plot.pdf");
}


