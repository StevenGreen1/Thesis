//===========================================================================

void GetRMSFitPercentageRange(TH1F *pTH1F, double fitPercentage, double &fitRangeLow, double &fitRangeHigh)
{
    float FLOAT_MAX(1000000);

    if (NULL == pTH1F)
        return;

    if (5 > pTH1F->GetEntries())
    {
        std::cout << pTH1F->GetName() << " (" << pTH1F->GetEntries() << " entries) - skipped" << std::endl;
        return;
    }

    // Calculate raw properties of distribution (ie rms100)
    float sum = 0., total = 0.;
    double sx = 0., sxx = 0.;
    int nbins(pTH1F->GetNbinsX());

    for (int i = 0; i <= nbins; ++i)
    {
        float binx(pTH1F->GetBinLowEdge(i) + (0.5 * pTH1F->GetBinWidth(i)));
        float yi(pTH1F->GetBinContent(i));
        sx += yi * binx;
        sxx += yi * binx * binx;
        total += yi;
    }

    float rawMean(sx / total);
    float rawMeanSquared(sxx / total);
    float rawRms(std::sqrt(rawMeanSquared - rawMean * rawMean));

    sum = 0.;
    int is0 = 0;

    //  The /10 comes from the fact that for rms 90 the start point for the fit must occur in the first 10% of the data.
    float frac = (1 - (fitPercentage/100.0));
    for (int j = 0; (j <= nbins) && (sum < total * frac); ++j)
    {
        sum += pTH1F->GetBinContent(j);
        is0 = j;
    }

    // Calculate truncated properties
    float rmsmin(FLOAT_MAX), mean(FLOAT_MAX), low(FLOAT_MAX);
    float high(0.f);

    for (int istart = 0; istart <= is0; ++istart)
    {
        double sumn = 0.;
        double csum = 0.;
        double sumx = 0.;
        double sumxx = 0.;
        int iend = 0;

        for (int i = istart; (i <= nbins) && (csum < (fitPercentage/100) * total); ++i)
        {
            float binx(pTH1F->GetBinLowEdge(i) + (0.5 * pTH1F->GetBinWidth(i)));
            float yi(pTH1F->GetBinContent(i));
            //csum is the sum of yi from istart and is used to stop the sum when this exceeds X% of data.
            csum += yi;

            if (sumn < (fitPercentage/100) * total)
            {
                // These variables define the final sums required once we have considered X% of data, anything else is 
                // continuously overwritten.
                sumn += yi;
                sumx += yi * binx;
                sumxx+= yi * binx * binx;
                iend = i;
            }
        }

        float localMean(sumx / sumn);
        float localMeanSquared(sumxx / sumn);
        // Standard deviation formula
        float localRms(std::sqrt(localMeanSquared - localMean * localMean));

        if (localRms < rmsmin)
        {
            mean = localMean;

            if (istart == 0)
            {
                low = 0;
                fitRangeLow = 0;
            }
            else
            {
                low = pTH1F->GetBinLowEdge(istart);
                fitRangeLow = pTH1F->GetBinLowEdge(istart) + (0.5 * pTH1F->GetBinWidth(istart));
            }
            
            high = pTH1F->GetBinLowEdge(iend);
            rmsmin = localRms;
            fitRangeHigh = pTH1F->GetBinLowEdge(iend) + (0.5 * pTH1F->GetBinWidth(iend));
        }
    }
    
    std::cout << pTH1F->GetName() << " (" << pTH1F->GetEntries() << " entries), rawrms: " << rawRms << ", rmsx: " << rmsmin
              << " (" << low << "-" << high << "), low_fit and high_fit " << " (" << fitRangeLow << "-" << fitRangeHigh 
              << "), << mean: " << mean << std::endl;
}

//===========================================================================
