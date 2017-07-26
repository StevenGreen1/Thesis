#include <TGraph.h>
#include <TLegend.h>
#include <TAxis.h>

#include <iostream>
#include <fstream>

using namespace std;

void DrawParams()
{
    TF1 *pTF1_p1 = new TF1("p1","[0] + [1]*x + [2] *x * x",0,100);
    pTF1_p1->SetTitle("");
    pTF1_p1->FixParameter(0, 2.49632f);
    pTF1_p1->FixParameter(1, -0.0697302f);
    pTF1_p1->FixParameter(2, 0.000946986f);
    pTF1_p1->SetLineColor(kRed);
    pTF1_p1->GetXaxis()->SetTitle("#it{E}_{Raw} [GeV]");
    pTF1_p1->GetXaxis()->SetTitleSize(0.114);
    pTF1_p1->GetXaxis()->SetLabelSize(0.114);
    pTF1_p1->GetYaxis()->SetTitle("#it{p}_{1}");
    pTF1_p1->GetYaxis()->SetTitleSize(0.114);
    pTF1_p1->GetYaxis()->SetLabelSize(0.114);
    pTF1_p1->GetYaxis()->SetRangeUser(0.0,5.0);
    pTF1_p1->GetYaxis()->SetNdivisions(6);
    pTF1_p1->GetYaxis()->SetDecimals();

    TF1 *pTF1_p2 = new TF1("p2","[0] + [1]*x + [2] *x * x",0,100);
    pTF1_p2->SetTitle("");
    pTF1_p2->FixParameter(0, -0.112311f);
    pTF1_p2->FixParameter(1, 0.0028182f);
    pTF1_p2->FixParameter(2, -9.62602e-05f);
    pTF1_p2->SetLineColor(kRed);
    pTF1_p2->GetXaxis()->SetTitle("#it{E}_{Raw} [GeV]");
    pTF1_p2->GetXaxis()->SetTitleSize(0.114);
    pTF1_p2->GetXaxis()->SetLabelSize(0.114);
    pTF1_p2->GetYaxis()->SetTitle("#it{p}_{2}");
    pTF1_p2->GetYaxis()->SetTitleSize(0.114);
    pTF1_p2->GetYaxis()->SetLabelSize(0.114);
    pTF1_p2->GetYaxis()->SetRangeUser(-1.0,0.0);
    pTF1_p2->GetYaxis()->SetNdivisions(6);
    pTF1_p2->GetYaxis()->SetDecimals();

    TF1 *pTF1_p3 = new TF1("p3","[0] / ([1] + TMath::Exp([2] * x))",0,100);
    pTF1_p3->SetTitle("");
    pTF1_p3->FixParameter(0, 0.168614f);
    pTF1_p3->FixParameter(1, 0.224318f);
    pTF1_p3->FixParameter(2, -0.0872853f);
    pTF1_p3->SetLineColor(kRed);
    pTF1_p3->GetXaxis()->SetTitle("#it{E}_{Raw} [GeV]");
    pTF1_p3->GetXaxis()->SetTitleSize(0.114);
    pTF1_p3->GetXaxis()->SetLabelSize(0.114);
    pTF1_p3->GetYaxis()->SetTitle("#it{p}_{3}");
    pTF1_p3->GetYaxis()->SetTitleSize(0.114);
    pTF1_p3->GetYaxis()->SetLabelSize(0.114);
    pTF1_p3->GetYaxis()->SetRangeUser(0.0,0.8);
    pTF1_p3->GetYaxis()->SetNdivisions(5);
    pTF1_p3->GetYaxis()->SetDecimals();

    TCanvas *pTCanvas_p1 = new TCanvas("c1","");
    pTCanvas_p1->SetBottomMargin(0.25);
    pTCanvas_p1->SetLeftMargin(0.25);
    pTCanvas_p1->Draw();
    pTF1_p1->Draw();
    pTCanvas_p1->SaveAs("SoftwareCompensationParam1.C");
    pTCanvas_p1->SaveAs("SoftwareCompensationParam1.pdf");

    TCanvas *pTCanvas_p2 = new TCanvas("c2","");
    pTCanvas_p2->SetBottomMargin(0.25);
    pTCanvas_p2->SetLeftMargin(0.25);
    pTCanvas_p2->Draw();
    pTF1_p2->Draw();
    pTCanvas_p2->SaveAs("SoftwareCompensationParam2.C");
    pTCanvas_p2->SaveAs("SoftwareCompensationParam2.pdf");

    TCanvas *pTCanvas_p3 = new TCanvas("c3","");
    pTCanvas_p3->SetBottomMargin(0.25);
    pTCanvas_p3->SetLeftMargin(0.25);
    pTCanvas_p3->Draw();
    pTF1_p3->Draw();
    pTCanvas_p3->SaveAs("SoftwareCompensationParam3.C");
    pTCanvas_p3->SaveAs("SoftwareCompensationParam3.pdf");
}
