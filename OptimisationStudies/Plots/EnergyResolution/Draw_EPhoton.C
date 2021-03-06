#include "Helper.C" 
#include <utility>

void Draw_EPhoton() 
{
    int detModel(85);
    int recoVar(71);
    std::string rootFile("EnergyResolution_PandoraSettingsDefault_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + "_Photon.root");

    TCanvas *pTCanvas = new TCanvas();
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);

//    TGraphErrors *pTGraphErrors = new TGraphErrors("ER_vs_EKaon0L","ER_vs_EKaon0L");

    std::map<int, int> numberToEnergy;
    numberToEnergy.insert(std::make_pair(4,100));

    TFile *pTFile = new TFile(rootFile.c_str());

    TH1F *pTH1F;
    TF1 *pGaussianFit;

    for (std::map<int, int>::iterator it = numberToEnergy.begin(); it != numberToEnergy.end(); it++) 
    {
        int number(it->first);
        int energy(it->second);

        std::string histogramName("Resolution_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + "/PFOEnergyHistogram_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + ";" + NumberToString(number));

        std::cout << histogramName << std::endl;
 
        pTH1F = (TH1F*)pTFile->Get(histogramName.c_str());
        double fitRangeLow(0.0), fitRangeHigh(0.0), fitPercentage(75.f);
        GetRMSFitPercentageRange(pTH1F, fitPercentage, fitRangeLow, fitRangeHigh);
        std::cout << "fitRangeLow " << fitRangeLow << std::endl;
        std::cout << "fitRangeHigh " << fitRangeHigh << std::endl;

        std::string fitTitle = "PFOEnergyHistogramGaussianFit_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + "_Energy" + NumberToString(energy) + "GeV";
        pGaussianFit = new TF1(fitTitle.c_str(),"gaus", fitRangeLow, fitRangeHigh);

        pTH1F->Fit(fitTitle.c_str(), "MLR");
        const float fitAmplitude(pGaussianFit->GetParameter(0));
        const float fitMean(pGaussianFit->GetParameter(1));
        const float fitStdDev(pGaussianFit->GetParameter(2));
        const float energyResolution(fitStdDev/fitMean);

        const float meanError(pGaussianFit->GetParError(1));
        const float meanFracError(meanError / fitMean);
        const float stdDevError(pGaussianFit->GetParError(2));
        const float stdDevFracError(stdDevError / fitStdDev);

        const float energyResolutionError = energyResolution * std::pow( (meanFracError*meanFracError) + (stdDevFracError*stdDevFracError) ,0.5);

//        pTGraphErrors->SetPoint(pTGraphErrors->GetN(),energy,energyResolution*100.f);
//        pTGraphErrors->SetPointError(pTGraphErrors->GetN()-1,0,energyResolutionError*100.f);

        std::cout << "For energy : " << energy << std::endl;
        std::cout << "Amplitude          : " << fitAmplitude << std::endl;
        std::cout << "Mean               : " << fitMean << std::endl;
        std::cout << "Standard Deviation : " << fitStdDev << std::endl;
        std::cout << "Det model " << detModel << std::endl;
        std::cout << "Energy Resolution  : " << energyResolution*100 << std::endl;
/*
TCanvas *pTCanvas = new TCanvas("name","");
pTCanvas->Draw();
pTCanvas->cd();
pTH1F->Draw();
pGaussianFit->SetLineColor(kRed);
pGaussianFit->Draw("same");
pTCanvas->Update();
cin.get();
*/
    }

    pTH1F->SetTitle("");
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->GetXaxis()->SetTitle("Reconstructed PFO Energy [GeV]");
    pTH1F->GetYaxis()->SetTitleSize(0.05);
    pTH1F->GetYaxis()->SetLabelSize(0.05);
    pTH1F->GetYaxis()->SetTitleOffset(1.0);
    pTH1F->GetXaxis()->SetTitleSize(0.05);
    pTH1F->GetXaxis()->SetLabelSize(0.05);
    pTH1F->GetXaxis()->SetTitleOffset(0.95);
    pTH1F->GetXaxis()->SetRangeUser(80,120);
    pTH1F->Draw();
    pGaussianFit->SetLineColor(kRed);
    pGaussianFit->Draw("same");

    const std::string name("EPhoton_100GeV.C");
    const std::string name2("EPhoton_100GeV.pdf");
    pTCanvas->SaveAs(name.c_str());
    pTCanvas->SaveAs(name2.c_str());
}

template <class T>
std::string NumberToString(T Number)
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

