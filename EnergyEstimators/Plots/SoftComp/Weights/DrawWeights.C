#include <TGraph.h>
#include <TLegend.h>
#include <TAxis.h>

#include <iostream>
#include <fstream>

using namespace std;

void DrawWeights()
{
    const int nE = 4;
//    const int nE = 14;
    double Ebeam[nE] = {5, 10, 20,50};
//    double Ebeam[nE] = {1, 3, 5, 7, 10, 20, 30, 40, 50, 60, 70, 80, 90, 95};
    EColor rootColor[nE] = {kRed, kBlue, kMagenta, kBlack};
//    EColor rootColor[nE] = {kRed, kBlue, kGreen, kMagenta, kViolet, kYellow, kAzure, kBlack, kOrange, kCyan};

    const int nbinWei = 10;
    const float rho[nbinWei] = {1.f, 3.5f, 6.25f, 8.5f, 11.25f, 14.5f, 18.f, 21.25f, 25.75f, 30.f};

    TGraph *gWei[nE];

    const float weights[9] = {2.49632f, -0.0697302f, 0.000946986f, -0.112311f, 0.0028182f, -9.62602e-05f, 0.168614f, 0.224318f, -0.0872853f};

    TCanvas *pTCanvas = new TCanvas("c","");
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->Draw();

    TLegend *pTLegend = new TLegend(0.4,0.6,0.85,0.85);
    pTLegend->SetFillColor(0);
    pTLegend->SetLineColor(0);
    pTLegend->SetTextSize(0.05);

    for (int ie = 0; ie < nE; ie++)
    {
        gWei[ie] = new TGraph();
        gWei[ie]->SetMarkerStyle(4);
        gWei[ie]->SetMarkerSize(1);
    
        cout << "Ebeam " << Ebeam[ie] << endl;
    
        for (int ibin = 0; ibin < nbinWei; ibin++)
        {
            float p1 = 0, p2 = 0, p3 = 0;

            p1 = weights[0] + weights[1]*Ebeam[ie] + weights[2]*Ebeam[ie]*Ebeam[ie];
            p2 = weights[3] + weights[4]*Ebeam[ie] + weights[5]*Ebeam[ie]*Ebeam[ie];
            p3 = weights[6]/(weights[7]+exp(weights[8]*Ebeam[ie]));

            double weight = p1*exp(p2*rho[ibin]) + p3;
            cout << "ibin " << ibin << " weight " << weight << endl;           
      
            gWei[ie]->SetPoint(ibin,rho[ibin],weight);
        }

        TString pTLegendname = "#it{E}_{Raw} "; pTLegendname += Ebeam[ie]; pTLegendname += " GeV";
        pTLegend->AddEntry(gWei[ie],pTLegendname,"p");

        gWei[ie]->SetMarkerColor(rootColor[ie]);
        gWei[ie]->SetLineColor(rootColor[ie]);
        gWei[ie]->GetXaxis()->SetTitle("#rho [GeV/dm^{3}]");
        gWei[ie]->GetXaxis()->SetTitleSize(0.05);
        gWei[ie]->GetXaxis()->SetLabelSize(0.05);
        gWei[ie]->GetYaxis()->SetTitle("#omega");
        gWei[ie]->GetYaxis()->SetTitleSize(0.05);
        gWei[ie]->GetYaxis()->SetLabelSize(0.05);
        gWei[ie]->GetYaxis()->SetRangeUser(0,2.5);

        if (ie == 0)
        {
            gWei[ie]->Draw("AP");
        }
        else
        {
            gWei[ie]->Draw("PS");
        }
    }
    pTLegend->Draw();
    pTCanvas->SaveAs("SoftwareCompensationWeights.C");
    pTCanvas->SaveAs("SoftwareCompensationWeights.pdf");
}
