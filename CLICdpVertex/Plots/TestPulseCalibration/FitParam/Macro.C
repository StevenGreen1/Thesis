#include <iostream>
#include <fstream>
#include <iomanip>

void Macro()
{
    GetMean("9","A");
    GetMean("9","B");
    GetMean("9","C");
    GetMean("9","T");
    GetMean("10","A");
    GetMean("10","B");
    GetMean("10","C");
    GetMean("10","T");
    GetMean("12","A");
    GetMean("12","B");
    GetMean("12","C");
    GetMean("12","T");
    GetMean("13","A");
    GetMean("13","B");
    GetMean("13","C");
    GetMean("13","T");
    GetMean("14","A");
    GetMean("14","B");
    GetMean("14","C");
    GetMean("14","T");
    GetMean("15","A");
    GetMean("15","B");
    GetMean("15","C");
    GetMean("15","T");
    GetMean("16","A");
    GetMean("16","B");
    GetMean("16","C");
    GetMean("16","T");
}

void GetMean(TString setNumber, TString parameter)
{
    gROOT->ProcessLine(".x FitParam" + parameter + "_Set" + setNumber + ".C");
    
    TH2F *pTH2F = gROOT->FindObject("TH2FFitParam" + parameter); 
    std::cout << pTH2F->GetEntries() << std::endl;

    double nBinMaxPlot(100);

    if (parameter == "A")
        nBinMaxPlot = 0.2;
    else if (parameter == "B")
        nBinMaxPlot = 10;
    else if (parameter == "T")
        nBinMaxPlot = 20;

    TH1F *pTH1F = new TH1F("OneDHistFitParam" + parameter + "_Set" + setNumber,"",25,0,nBinMaxPlot);
    pTH1F->SetFillColor(kBlue);
    pTH1F->SetLineColor(kBlue);
    pTH1F->SetFillStyle(3005);
    pTH1F->GetXaxis()->SetRangeUser(0,200);
    pTH1F->GetXaxis()->SetTitle("Fit Parameter " + parameter);
    pTH1F->GetXaxis()->SetLabelSize(0.05);
    pTH1F->GetXaxis()->SetTitleSize(0.05);
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->GetYaxis()->SetTitleOffset(1.2);
    pTH1F->GetYaxis()->SetTitleSize(0.05);
    pTH1F->GetYaxis()->SetLabelSize(0.05);

    int nXBins = pTH2F->GetXaxis()->GetNbins();
    int nYBins = pTH2F->GetYaxis()->GetNbins();

    double sumEven(0.0);
    double sumOdd(0.0);
    int nBins(0);

    bool isEvenRow(true);

    for (unsigned int xBin = 0; xBin < nXBins; xBin++)
    {
        if (xBin % 2 == 0)
            isEvenRow = true;
        else
            isEvenRow = false;

        for (unsigned int yBin = 0; yBin < nYBins; yBin++)
        {
            if (isEvenRow)
                sumEven += pTH2F->GetBinContent(xBin, yBin);
            else
                sumOdd += pTH2F->GetBinContent(xBin, yBin);

            pTH1F->Fill(pTH2F->GetBinContent(xBin, yBin));
            nBins++;
//            std::cout << "Bin contend " << pTH2F->GetBinContent(xBin, yBin) << std::endl;
        }
    }

    double meanEven(sumEven/(double)(nBins * 0.5));
    double meanOdd(sumOdd/(double)(nBins * 0.5));
    double varianceSumEven(0.0);
    double varianceSumOdd(0.0);

    for (unsigned int xBin = 0; xBin < nXBins; xBin++)
    {
        if (xBin % 2 == 0)
            isEvenRow = true;
        else
            isEvenRow = false;

        for (unsigned int yBin = 0; yBin < nYBins; yBin++)
        {
            if (isEvenRow)
                varianceSumEven += TMath::Power(pTH2F->GetBinContent(xBin, yBin) - meanEven, 2);
            else
                varianceSumOdd += TMath::Power(pTH2F->GetBinContent(xBin, yBin) - meanOdd, 2);
        }
    }

    double varianceEven(varianceSumEven/(double)(nBins * 0.5));
    double varianceOdd(varianceSumOdd/(double)(nBins * 0.5));
    double stdDevEven = TMath::Power(varianceEven,0.5);
    double stdDevOdd = TMath::Power(varianceOdd,0.5);

    TCanvas *pTCanvas = new TCanvas("Canvas","",600,500);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->Draw();
    pTH1F->Draw();
    pTCanvas->SaveAs("OneDHistFitParam" + parameter + "_Set" + setNumber + ".C");
    pTCanvas->SaveAs("OneDHistFitParam" + parameter + "_Set" + setNumber + ".pdf");

    ofstream myfile;
    myfile.open("results.txt", ios::app);
    myfile << "==================================================" << std::endl;
    myfile << "Device : SET : " << setNumber << std::endl;
    myfile << "Parameter Even : " << parameter << std::endl;
    myfile << std::setprecision(4) << fixed << "$" << meanEven << " \\pm " << stdDevEven/(TMath::Power((double)(nBins * 0.5),0.5)) << "$" << std::endl;
    myfile << "Parameter Odd : " << parameter << std::endl;
    myfile << std::setprecision(4) << fixed << "$" << meanOdd << " \\pm " << stdDevOdd/(TMath::Power((double)(nBins * 0.5),0.5)) << "$" << std::endl;
    myfile.close();

    ofstream myfileLatexEven;
    myfileLatexEven.open("resultsLatexEven.txt", ios::app);
    myfileLatexEven << std::setprecision(4) << fixed << "$" << meanEven << " \\pm " << stdDevEven/(TMath::Power((double)(nBins * 0.5),0.5)) << "$ & ";
    myfileLatexEven.close();

    ofstream myfileLatexOdd;
    myfileLatexOdd.open("resultsLatexOdd.txt", ios::app);
    myfileLatexOdd << std::setprecision(4) << fixed << "$" << meanOdd << " \\pm " << stdDevOdd/(TMath::Power((double)(nBins * 0.5),0.5)) << "$ & ";
    myfileLatexOdd.close();

}
