void MakeAwesomePlotsInter(TString name)
{
   const Int_t NRGBs = 2;
   const Int_t NCont = 99;
   Double_t stops[NRGBs] = { 0.00, 1.00 };
   Double_t red2[NRGBs]   = { 0.40, 0.00 };
   Double_t green2[NRGBs] = { 0.70, 0.00 };
   Double_t blue2[NRGBs]  = { 1.00, 0.60 };
   TColor::CreateGradientColorTable(NRGBs, stops, red2, green2, blue2, NCont);

   LoadTGraph2D(name);
}

TGraph2D LoadTGraph2D(TString name)
{
    gROOT->ProcessLine(".x " + name + ".C");    
    std::string canvasName(name + "Canvas");
    TCanvas *pTCanvas = new TCanvas(canvasName.c_str(), canvasName.c_str(), 800, 600);
    pTCanvas->SetTopMargin(0.05);
    pTCanvas->SetBottomMargin(0.15);
    pTCanvas->SetLeftMargin(0.15);
    pTCanvas->SetRightMargin(0.05);

    gPad->SetTheta(30); // default is 30
    gPad->SetPhi(120); // default is 30
    gPad->Update();

    TH3F *pTH3F = new TH3F("AxisName","",100,-0.04,0.04,100,-0.04,0.04,100,0.75,1.25);
    pTH3F->GetXaxis()->SetTitle("#alpha_{4}");
    pTH3F->GetXaxis()->CenterTitle();
    pTH3F->GetXaxis()->SetLabelSize(0.05);
    pTH3F->GetXaxis()->SetTitleSize(0.05);
    pTH3F->GetXaxis()->SetTitleOffset(1.75);
    pTH3F->GetXaxis()->SetNdivisions(5);
    pTH3F->GetYaxis()->SetTitle("#alpha_{5}");
    pTH3F->GetYaxis()->CenterTitle();
    pTH3F->GetYaxis()->SetLabelSize(0.05);
    pTH3F->GetYaxis()->SetTitleSize(0.05);
    pTH3F->GetYaxis()->SetTitleOffset(1.75);
    pTH3F->GetYaxis()->SetNdivisions(5);
    pTH3F->GetZaxis()->SetTitle("w");
    pTH3F->GetZaxis()->CenterTitle();
    pTH3F->GetZaxis()->SetLabelSize(0.05);
    pTH3F->GetZaxis()->SetTitleSize(0.05);
    pTH3F->GetZaxis()->SetTitleOffset(1.5);
    pTH3F->GetZaxis()->SetNdivisions(5);
    pTH3F->Draw();

    Graph2D->SetMarkerStyle(20);
    Graph2D->SetMinimum(0.75);
    Graph2D->SetMaximum(1.25);
    Graph2D->Draw("surf1 same");

    Graph2DA->SetMarkerStyle(20);
    Graph2DA->SetMarkerColor(kBlack);
    Graph2DA->SetMinimum(0.75);
    Graph2DA->SetMaximum(1.25);
    Graph2DA->Draw("p same");

    pTCanvas->SaveAs(name + ".pdf");
}
