TH1F* Histogram(std::string energy, std::string particle);

void MakePlots()
{
    std::vector<std::string> energyVector;
    energyVector.push_back("10");
//    energyVector.push_back("20");
    energyVector.push_back("30");
//    energyVector.push_back("40");
    energyVector.push_back("50");
//    energyVector.push_back("60");
    energyVector.push_back("70");
//    energyVector.push_back("80");
//    energyVector.push_back("90");
    energyVector.push_back("100");

    TCanvas *pCanvas = new TCanvas();
    pCanvas->cd();

    TH2F *pAxes = new TH2F("axes","axes",500,0,120,500,0,0.06);
    pAxes->GetXaxis()->SetTitle("Pfo Energy [GeV]");
    pAxes->GetYaxis()->SetTitle("Normalised Entries");
    pAxes->Draw();

    TLegend *pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    pLegend->SetFillStyle(0);

    const float redArray[] = {0.0, 1.0, 0.619607843137, 0.0549019607843, 1.0, 0.0, 0.0, 0.58431372549, 1.0, 0.643137254902, 0.0, 0.56862745098, 0.38431372549, 0.419607843137, 0.0, 0.0, 0.41568627451, 0.0, 0.760784313725, 0.745098039216, 0.0, 0.372549019608, 1.0, 1.0, 1.0, 0.407843137255, 1.0, 0.588235294118, 0.596078431373, 0.654901960784, 0.00392156862745, 1.0, 0.996078431373, 0.741176470588, 0.00392156862745, 0.733333333333, 0.458823529412, 0.647058823529, 1.0, 0.466666666667, 0.478431372549, 0.149019607843, 0.0, 0.262745098039, 0.709803921569, 1.0, 1.0, 0.564705882353, 0.494117647059, 0.741176470588, 0.898039215686, 0.870588235294, 0.0, 0.0, 0.0, 0.0, 0.521568627451, 0.0, 0.470588235294, 0.0, 1.0, 0.909803921569};
    const float greenArray[] = {0.0, 0.0, 0.0, 0.298039215686, 0.898039215686, 0.372549019608, 1.0, 0.0, 0.576470588235, 0.141176470588, 0.0823529411765, 0.81568627451, 0.0549019607843, 0.407843137255, 0.0, 0.490196078431, 0.509803921569, 0.682352941176, 0.549019607843, 0.6, 0.560784313725, 0.678431372549, 0.0, 0.0, 0.0078431372549, 0.239215686275, 0.454901960784, 0.541176470588, 1.0, 0.341176470588, 1.0, 0.933333333333, 0.537254901961, 0.776470588235, 0.81568627451, 0.533333333333, 0.266666666667, 1.0, 0.650980392157, 0.301960784314, 0.278431372549, 0.203921568627, 0.278431372549, 0.0, 0.0, 0.694117647059, 0.858823529412, 0.98431372549, 0.176470588235, 0.827450980392, 0.435294117647, 1.0, 1.0, 0.607843137255, 0.392156862745, 0.462745098039, 0.662745098039, 0.725490196078, 0.509803921569, 1.0, 0.43137254902, 0.36862745098};
    const float blueArray[] = {0.0, 0.337254901961, 0.556862745098, 0.63137254902, 0.0078431372549, 0.223529411765, 0.0, 0.227450980392, 0.494117647059, 0.0, 0.266666666667, 0.796078431373, 0.0, 0.509803921569, 1.0, 0.709803921569, 0.423529411765, 0.494117647059, 0.623529411765, 0.439215686275, 0.611764705882, 0.305882352941, 0.0, 0.964705882353, 0.61568627451, 0.23137254902, 0.639215686275, 0.909803921569, 0.321568627451, 0.250980392157, 0.996078431373, 0.909803921569, 0.0, 1.0, 1.0, 0.0, 0.694117647059, 0.823529411765, 0.996078431373, 0.0, 0.509803921569, 0.0, 0.329411764706, 0.172549019608, 1.0, 0.403921568627, 0.4, 0.572549019608, 0.823529411765, 0.576470588235, 0.996078431373, 0.454901960784, 0.470588235294, 1.0, 0.00392156862745, 1.0, 0.0, 0.0901960784314, 0.192156862745, 0.776470588235, 0.254901960784, 0.745098039216};

    std::vector<int> colour;
    colour.push_back(1);
    colour.push_back(2);
    colour.push_back(3);
    colour.push_back(4);
    colour.push_back(5);
    colour.push_back(6);
    colour.push_back(7);
    colour.push_back(8);
    colour.push_back(9);
    colour.push_back(30);
    colour.push_back(46);
    colour.push_back(38);

    for (std::vector<std::string>::iterator it = energyVector.begin(); it != energyVector.end(); it++)
    {
        std::string energy = *it;
        const int position = it - energyVector.begin();
        Color_t col = TColor::GetColor(redArray[position], greenArray[position], blueArray[position]);
        TH1F *pTH1F = Histogram(energy,"Kaon0L");
        pTH1F->SetName(energy.c_str());
        pTH1F->SetTitle(energy.c_str());
        pTH1F->SetLineColor(col);
        pTH1F->SetMarkerColor(col);
        pTH1F->SetFillColor(col);
        pTH1F->SetFillStyle(0);
        pTH1F->SetLineStyle(2);
        pTH1F->Draw("same");
        TString entry;
        entry = energy + " GeV Kaon0L";
        pLegend->AddEntry(pTH1F, entry, "lp");

        std::string scEn = "SoftComp_" + energy;
        TH1F *pTH1FSC = Histogram(scEn,"Kaon0L");
        pTH1FSC->SetName(scEn.c_str());
        pTH1FSC->SetTitle(scEn.c_str());
        pTH1FSC->SetLineColor(col);
        pTH1FSC->SetMarkerColor(col);
        pTH1FSC->SetFillColor(col);
        pTH1FSC->SetFillStyle(3004);
        pTH1FSC->Draw("same");
        TString entrysc;
        entrysc = energy + " GeV Kaon0L, with Software Compensation";
        pLegend->AddEntry(pTH1FSC, entrysc, "lp");
    }
    pLegend->Draw();
    pCanvas->SaveAs("PfoEnergyKaon0L.C");
/*
    pLegend = new TLegend(0.6, 0.6, 0.9, 0.9);
    pAxes->Draw();

    for (std::vector<std::string>::iterator it = energyVector.begin(); it != energyVector.end(); it++)
    {
        std::string energy = *it;
        const int position = it - energyVector.begin();
        const int col = colour.at(position);
        TH1F *pTH1F = Histogram(energy,"Neutron");
        pTH1F->SetName(energy.c_str());
        pTH1F->SetTitle(energy.c_str());
        pTH1F->SetLineColor(col);
        pTH1F->SetMarkerColor(col);
        pTH1F->SetFillColor(col);
        pTH1F->SetFillStyle(3001);
        pTH1F->Draw("same");
        pLegend->AddEntry(pTH1F, energy.c_str(), "lp");
    }
    pLegend->Draw();
    pCanvas->SaveAs("PfoEnergyNeutron.pdf");
*/
}

TH1F* Histogram(std::string energy, std::string particle)
{
    std::string path = "/r06/lc/sg568/JERDetailed/Calibration/Detector_Model_pseudo_clic_ild/Reco_Stage_76_ilcsoft_v01-17-10/SoftwareCompensationWeightTesting/RootFiles/";
    std::string rootFiles = path + "TestingSoftwareCompensationWeights_DetModel_pseudo_clic_ild_RecoVar_RecoVar76_ilcsoft_v01-17-10_" + energy + "_GeV_"+ particle + "_*.root";
    TChain *pTChain = new TChain("PfoAnalysisTree");
    pTChain->Add(rootFiles.c_str());

    TH1F *pTH1F = new TH1F("Histo","Histo",500,0,125);

    float pfoEnergy(-1.f);
    std::vector<float> *pTargetCosTheta(NULL);

    pTChain->SetBranchAddress("pfoEnergyTotal",&pfoEnergy);
    pTChain->SetBranchAddress("pfoTargetCosTheta",&pTargetCosTheta);

    if (0 == pTChain->GetEntries()) continue;

    for (unsigned int i = 0; i < pTChain->GetEntries(); i++)
    {
        pTChain->GetEntry(i);
        if (std::fabs(pTargetCosTheta->at(0)) < 0.7)
        {
            pTH1F->Fill(pfoEnergy);
        }
    }
    float norm = pTH1F->GetEntries();
    pTH1F->Scale(1/norm);
    return pTH1F;
}
