#include "Helper.C"
#include <utility>

void Draw_ER_vs_EGamma_SiECal() 
{
    int detModel(85);
    int recoVar(71);
    std::string rootFile("EnergyResolution_PandoraSettingsDefault_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + "_Photon.root");

    TCanvas *pTCanvas = new TCanvas();
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);

    TGraphErrors *pTGraphErrors = new TGraphErrors("ER_vs_EGamma","ER_vs_EGamma");

    std::map<int, int> numberToEnergy;
    numberToEnergy.insert(std::make_pair(1,10));
    numberToEnergy.insert(std::make_pair(2,20));
    numberToEnergy.insert(std::make_pair(3,50));
    numberToEnergy.insert(std::make_pair(4,100));
    numberToEnergy.insert(std::make_pair(5,200));
    numberToEnergy.insert(std::make_pair(6,500));

    TFile *pTFile = new TFile(rootFile.c_str());

    for (std::map<int, int>::iterator it = numberToEnergy.begin(); it != numberToEnergy.end(); it++) 
    {
        int number(it->first);
        int energy(it->second);

        std::string histogramName("Resolution_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + "/PFOEnergyHistogram_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + ";" + NumberToString(number));

        std::cout << histogramName << std::endl;
 
        TH1F *pTH1F = (TH1F*)pTFile->Get(histogramName.c_str());
        double fitRangeLow(0.0), fitRangeHigh(0.0), fitPercentage(75.f);
        GetRMSFitPercentageRange(pTH1F, fitPercentage, fitRangeLow, fitRangeHigh);
        std::cout << "fitRangeLow " << fitRangeLow << std::endl;
        std::cout << "fitRangeHigh " << fitRangeHigh << std::endl;

        std::string fitTitle = "PFOEnergyHistogramGaussianFit_DetectorModel_" + NumberToString(detModel) + "_ReconstructionVariant_" + NumberToString(recoVar) + "_Energy" + NumberToString(energy) + "GeV";
        TF1 *pGaussianFit = new TF1(fitTitle.c_str(),"gaus", fitRangeLow, fitRangeHigh);

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

        pTGraphErrors->SetPoint(pTGraphErrors->GetN(),energy,energyResolution*100.f);
        pTGraphErrors->SetPointError(pTGraphErrors->GetN()-1,0,energyResolutionError*100.f);

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

    TH2F *pAxes = new TH2F("axesEj","",100,0,525,1000,0.5,6);
    //pAxes->SetTitle("100 GeV Photon Energy Resolution vs Cell Size in ECal (Si)");
    pAxes->GetYaxis()->SetTitle("#sigma_{Reco} / E_{Reco} [%]");
    pAxes->GetXaxis()->SetTitle("E_{#gamma} [GeV]");
    pAxes->GetYaxis()->SetTitleSize(0.05);
    pAxes->GetYaxis()->SetLabelSize(0.05);
    pAxes->GetYaxis()->SetTitleOffset(1.0);
    pAxes->GetXaxis()->SetTitleSize(0.05);
    pAxes->GetXaxis()->SetLabelSize(0.05);
    pAxes->GetXaxis()->SetTitleOffset(0.95);
    pAxes->Draw();

    TF1 *pTF1 = new TF1("Reported","TMath::Sqrt(([0]*[0] / x) + [1]*[1])",5,525);
    pTF1->SetParameter(0,16.5);
    pTF1->SetParameter(1,1.1);
    pTF1->SetLineColor(kRed);

    TF1 *pTF1_Mean = new TF1("Reported_Mean","TMath::Sqrt(([0]*[0] / x) + [1]*[1])",0,525);
    pTF1_Mean->SetParameter(0,16.5);
    pTF1_Mean->SetParameter(1,1.1);
    pTF1_Mean->SetLineColor(kRed);
    pTF1_Mean->SetFillColor(kBlue);
    pTF1_Mean->SetFillStyle(3001); 

    TF1 *pTF1_LowerLim = new TF1("LowerLim","TMath::Sqrt(([0]*[0] / x) + [1]*[1])",0,525);
    pTF1_LowerLim->SetParameter(0,16.0);
    pTF1_LowerLim->SetParameter(1,0.9);

    TF1 *pTF1_UpperLim = new TF1("UpperLim","TMath::Sqrt(([0]*[0] / x) + [1]*[1])",0,525);
    pTF1_UpperLim->SetParameter(0,17.0);
    pTF1_UpperLim->SetParameter(1,1.3);

    Shade(pTCanvas, pTF1_LowerLim, pTF1_UpperLim, pTF1_Mean);

    pTF1->Draw("l same");
    pTGraphErrors->Draw("same PL");

    TLegend *pTLegend = new TLegend(0.3,0.55,0.85,0.85);
    pTLegend->SetTextSize(0.05);
    pTLegend->SetHeader("Parameterisation : #frac{#it{a}}{#sqrt{E_{#gamma}}} #oplus #it{b}");
    pTLegend->AddEntry(pTF1_Mean,"#it{a} = 16.5 #pm 0.5\%, #it{b} = 1.1 #pm 0.2\%","lf");
    pTLegend->AddEntry(pTGraphErrors,"Full ILD Simulation","l");
    pTLegend->Draw();

    pTCanvas->Update();
    TLine *pTLine = new TLine(45,0.5,45,6);
    pTLine->SetLineStyle(2);
    pTLine->Draw();

    const std::string name("ER_vs_EGamma_SiECal.C");
    const std::string name2("ER_vs_EGamma_SiECal.pdf");
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

