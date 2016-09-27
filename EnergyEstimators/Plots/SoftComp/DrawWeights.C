template <class T>
std::string NumberToString ( T Number ) const
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

void DrawWeights()
{
    const float weights[9]  = {1.33518, -0.00883497, -5.28082e-07, -0.0200228, -0.000428023, 3.95272e-06, 0.114467, 0.179695, -0.0395887};

    const float energies[5]  = {10, 30, 50, 70, 100};

    const float rho[9]  = {10, 20, 30, 40, 50, 60, 70, 80, 100};

    const int nBins = 10;
    const float bins[nBins] = {0.f, 2.f, 5.f, 7.5f, 9.5f, 13.f, 16.f, 20.f, 23.5f, 28.f};
    const float binCentre[nBins+1] = {1.f, 3.5f, 6.25f, 8.5f, 11.25f, 14.5f, 18.f, 21.75f, 25.75f, 30.f};

    static const float redArray[] = {0.0, 1.0, 0.619607843137, 0.0549019607843, 1.0, 0.0, 0.0, 0.58431372549, 1.0, 0.643137254902, 0.0, 0.56862745098, 0.38431372549, 0.419607843137, 0.0, 0.0, 0.41568627451, 0.0, 0.760784313725, 0.745098039216, 0.0, 0.372549019608, 1.0, 1.0, 1.0, 0.407843137255, 1.0, 0.588235294118, 0.596078431373, 0.654901960784, 0.00392156862745, 1.0, 0.996078431373, 0.741176470588, 0.00392156862745, 0.733333333333, 0.458823529412, 0.647058823529, 1.0, 0.466666666667, 0.478431372549, 0.149019607843, 0.0, 0.262745098039, 0.709803921569, 1.0, 1.0, 0.564705882353, 0.494117647059, 0.741176470588, 0.898039215686, 0.870588235294, 0.0, 0.0, 0.0, 0.0, 0.521568627451, 0.0, 0.470588235294, 0.0, 1.0, 0.909803921569};
    static const float greenArray[] = {0.0, 0.0, 0.0, 0.298039215686, 0.898039215686, 0.372549019608, 1.0, 0.0, 0.576470588235, 0.141176470588, 0.0823529411765, 0.81568627451, 0.0549019607843, 0.407843137255, 0.0, 0.490196078431, 0.509803921569, 0.682352941176, 0.549019607843, 0.6, 0.560784313725, 0.678431372549, 0.0, 0.0, 0.0078431372549, 0.239215686275, 0.454901960784, 0.541176470588, 1.0, 0.341176470588, 1.0, 0.933333333333, 0.537254901961, 0.776470588235, 0.81568627451, 0.533333333333, 0.266666666667, 1.0, 0.650980392157, 0.301960784314, 0.278431372549, 0.203921568627, 0.278431372549, 0.0, 0.0, 0.694117647059, 0.858823529412, 0.98431372549, 0.176470588235, 0.827450980392, 0.435294117647, 1.0, 1.0, 0.607843137255, 0.392156862745, 0.462745098039, 0.662745098039, 0.725490196078, 0.509803921569, 1.0, 0.43137254902, 0.36862745098};
    static const float blueArray[] = {0.0, 0.337254901961, 0.556862745098, 0.63137254902, 0.0078431372549, 0.223529411765, 0.0, 0.227450980392, 0.494117647059, 0.0, 0.266666666667, 0.796078431373, 0.0, 0.509803921569, 1.0, 0.709803921569, 0.423529411765, 0.494117647059, 0.623529411765, 0.439215686275, 0.611764705882, 0.305882352941, 0.0, 0.964705882353, 0.61568627451, 0.23137254902, 0.639215686275, 0.909803921569, 0.321568627451, 0.250980392157, 0.996078431373, 0.909803921569, 0.0, 1.0, 1.0, 0.0, 0.694117647059, 0.823529411765, 0.996078431373, 0.0, 0.509803921569, 0.0, 0.329411764706, 0.172549019608, 1.0, 0.403921568627, 0.4, 0.572549019608, 0.823529411765, 0.576470588235, 0.996078431373, 0.454901960784, 0.470588235294, 1.0, 0.00392156862745, 1.0, 0.0, 0.0901960784314, 0.192156862745, 0.776470588235, 0.254901960784, 0.745098039216};

    TCanvas *pTCanvas = new TCanvas();
    TLegend *pTLegend = new TLegend(0.6,0.6,0.85,0.85,"Weights");

    TMultiGraph *pTMultiGraph = new TMultiGraph();

    for (unsigned int en = 0; en < 5; en++) 
    {
        const float energy(energies[en]);
        const float p1(weights[0] + energy*weights[1] + energy*energy*weights[2]);
        const float p2(weights[3] + energy*weights[4] + energy*energy*weights[5]);
        const float p3(weights[6]/(weights[7]+exp(weights[8]*energy)));

        TString stEnergy = "";
        stEnergy += energy;
        TGraph *pTGraphWeights = new TGraph();
        TString legname = "MC Cluster Energy: "; 
        legname += energy; 
        legname += " GeV";

        for (int i = 0; i < 10; i++)
        {
            const float weight(p1*exp(p2*binCentre[i])+p3);
            pTGraphWeights->SetPoint(pTGraphWeights->GetN(),binCentre[i],weight);
        }

        Color_t color = TColor::GetColor(redArray[en], greenArray[en], blueArray[en]);

        pTGraphWeights->GetXaxis()->SetTitle("Energy Density [GeV/dm^{3}]");
        pTGraphWeights->GetYaxis()->SetTitle("Software Compensation Weight");
        pTGraphWeights->SetMarkerColor(color);
        pTGraphWeights->SetLineColor(color);

        pTLegend->AddEntry(pTGraphWeights,legname,"p");

        pTMultiGraph->Add(pTGraphWeights);
//        pTGraphWeights->Draw("same");
//        std::string plotName("Weights_" + NumberToString(energy) + "_GeV_Cluster.C");
//        pTCanvas->SaveAs(plotName.c_str());
    }

//    pTMultiGraph->GetXaxis()->SetTitle("Energy Density [GeV/dm^{3}]");
//    pTMultiGraph->GetYaxis()->SetTitle("Software Compensation Weight");

    pTMultiGraph->Draw("AP");
    pTMultiGraph->GetXaxis()->SetTitle("Energy Density [GeV/dm^{3}]");
    pTMultiGraph->GetYaxis()->SetTitle("Software Compensation Weight");
    pTLegend->Draw("same");
    pTCanvas->SaveAs("Weights.C");
}

