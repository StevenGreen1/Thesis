{
    gStyle->SetOptStat(0);

    TCanvas *pCanvasEj = new TCanvas();
    pCanvasEj->SetTopMargin(0.05);
    pCanvasEj->SetRightMargin(0.05);
    pCanvasEj->cd();

    TH2F *pAxesEj = new TH2F("axesEj","",300,0,300,650,2.5,5);
    pAxesEj->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
    pAxesEj->GetYaxis()->SetTitleOffset(0.8);
    pAxesEj->GetYaxis()->SetDecimals();
    pAxesEj->GetYaxis()->SetTitleSize(0.05);
    pAxesEj->GetYaxis()->SetLabelSize(0.05);
    pAxesEj->GetXaxis()->SetTitle("E_{j} [GeV]");
    pAxesEj->GetXaxis()->SetTitleOffset(0.95);
    pAxesEj->GetXaxis()->SetDecimals();
    pAxesEj->GetXaxis()->SetTitleSize(0.05);
    pAxesEj->GetXaxis()->SetLabelSize(0.05);
    pAxesEj->Draw();

    float jetEnergy[4] = {45.5,100.0,180.0,250.0};

    float jetEnergyError[4] = {0,0,0,0};

    float Variable_1_Default_JER[4] = {3.6469,2.88127,2.84624,2.97436};

    float Variable_2_Default_JER[4] = {3.67166,2.91541,2.86234,3.02512};

    float Variable_3_Default_JER[4] = {3.66999,3.12068,3.35563,3.75508};

    float Variable_4_Default_JER[4] = {3.68914,3.02638,3.38325,3.79916};

    float Variable_1_PerfectPFA_JER[4] = {2.93851,2.13528,1.79003,1.69254};

    float Variable_2_PerfectPFA_JER[4] = {2.975,2.11394,1.71837,1.65483};

    float Variable_3_PerfectPFA_JER[4] = {2.93693,2.07323,1.86062,1.8004};

    float Variable_4_PerfectPFA_JER[4] = {2.88623,2.06823,1.86124,1.74872};

    float Variable_1_TotalConfusion_JER[4] = {2.15987004005,1.93450152094,2.2128883245,2.44583845705};

    float Variable_2_TotalConfusion_JER[4] = {2.15185086742,2.00770345034,2.28914718153,2.53236819706};

    float Variable_3_TotalConfusion_JER[4] = {2.20074277806,2.33245815171,2.79255186389,3.29532785112};

    float Variable_4_TotalConfusion_JER[4] = {2.29770109603,2.20938918516,2.82527277,3.37277260829};

    float Variable_1_Default_JERError[4] = {0.0464093,0.0368969,0.0363619,0.0453691};

    float Variable_2_Default_JERError[4] = {0.0497581,0.0373679,0.0364577,0.0386536};

    float Variable_3_Default_JERError[4] = {0.0471637,0.0421138,0.0427408,0.0479807};

    float Variable_4_Default_JERError[4] = {0.0474098,0.0387902,0.0430926,0.0485439};

    float Variable_1_PerfectPFA_JERError[4] = {0.0373946,0.0273439,0.0228684,0.0241841};

    float Variable_2_PerfectPFA_JERError[4] = {0.0403169,0.0270951,0.021887,0.0211446};

    float Variable_3_PerfectPFA_JERError[4] = {0.037743,0.0279783,0.0236988,0.0230046};

    float Variable_4_PerfectPFA_JERError[4] = {0.0370914,0.0265092,0.0237067,0.0223443};

    float Variable_1_TotalConfusion_JERError[4] = {0.0596000757346,0.0459246378909,0.0429552070939,0.0525734765383};

    float Variable_2_TotalConfusion_JERError[4] = {0.0640417552607,0.0461574606796,0.0425229285753,0.0440590352074};

    float Variable_3_TotalConfusion_JERError[4] = {0.0604065532115,0.0505605198004,0.0488713490751,0.0532105683648};

    float Variable_4_TotalConfusion_JERError[4] = {0.0601952861648,0.0469832096568,0.0491831206667,0.053439495985};

    TLegend *pLegend = new TLegend(0.2, 0.75, 0.85, 0.9);
    pLegend->SetNColumns(2);
    pLegend->SetTextSize(0.05);
    TGraphErrors *pTGraphErrors_Variable_1_Default = new TGraphErrors(4,jetEnergy,Variable_1_Default_JER,jetEnergyError,Variable_1_Default_JERError);

    pTGraphErrors_Variable_1_Default->SetLineColor(kBlack);
    pTGraphErrors_Variable_1_Default->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_1_Default->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1_Default, "Steel HCal Absorber Material, QGSP_BERT Default", "lp");

    TGraphErrors *pTGraphErrors_Variable_2_Default = new TGraphErrors(4,jetEnergy,Variable_2_Default_JER,jetEnergyError,Variable_2_Default_JERError);

    pTGraphErrors_Variable_2_Default->SetLineColor(kBlack);
    pTGraphErrors_Variable_2_Default->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_2_Default->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_2_Default, "Steel HCal Absorber Material, QGSP_BERT_HP Default", "lp");

    TGraphErrors *pTGraphErrors_Variable_3_Default = new TGraphErrors(4,jetEnergy,Variable_3_Default_JER,jetEnergyError,Variable_3_Default_JERError);

    pTGraphErrors_Variable_3_Default->SetLineColor(kBlack);
    pTGraphErrors_Variable_3_Default->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_3_Default->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_3_Default, "Tungsten HCal Absorber Material, QGSP_BERT Default", "lp");

    TGraphErrors *pTGraphErrors_Variable_4_Default = new TGraphErrors(4,jetEnergy,Variable_4_Default_JER,jetEnergyError,Variable_4_Default_JERError);

    pTGraphErrors_Variable_4_Default->SetLineColor(kBlack);
    pTGraphErrors_Variable_4_Default->SetMarkerColor(kBlack);
    pTGraphErrors_Variable_4_Default->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_4_Default, "Tungsten HCal Absorber Material, QGSP_BERT_HP Default", "lp");

    TGraphErrors *pTGraphErrors_Variable_1_PerfectPFA = new TGraphErrors(4,jetEnergy,Variable_1_PerfectPFA_JER,jetEnergyError,Variable_1_PerfectPFA_JERError);

    pTGraphErrors_Variable_1_PerfectPFA->SetLineColor(kBlue);
    pTGraphErrors_Variable_1_PerfectPFA->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_1_PerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1_PerfectPFA, "Steel HCal Absorber Material, QGSP_BERT PerfectPFA", "lp");

    TGraphErrors *pTGraphErrors_Variable_2_PerfectPFA = new TGraphErrors(4,jetEnergy,Variable_2_PerfectPFA_JER,jetEnergyError,Variable_2_PerfectPFA_JERError);

    pTGraphErrors_Variable_2_PerfectPFA->SetLineColor(kBlue);
    pTGraphErrors_Variable_2_PerfectPFA->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_2_PerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_2_PerfectPFA, "Steel HCal Absorber Material, QGSP_BERT_HP PerfectPFA", "lp");

    TGraphErrors *pTGraphErrors_Variable_3_PerfectPFA = new TGraphErrors(4,jetEnergy,Variable_3_PerfectPFA_JER,jetEnergyError,Variable_3_PerfectPFA_JERError);

    pTGraphErrors_Variable_3_PerfectPFA->SetLineColor(kBlue);
    pTGraphErrors_Variable_3_PerfectPFA->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_3_PerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_3_PerfectPFA, "Tungsten HCal Absorber Material, QGSP_BERT PerfectPFA", "lp");

    TGraphErrors *pTGraphErrors_Variable_4_PerfectPFA = new TGraphErrors(4,jetEnergy,Variable_4_PerfectPFA_JER,jetEnergyError,Variable_4_PerfectPFA_JERError);

    pTGraphErrors_Variable_4_PerfectPFA->SetLineColor(kBlue);
    pTGraphErrors_Variable_4_PerfectPFA->SetMarkerColor(kBlue);
    pTGraphErrors_Variable_4_PerfectPFA->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_4_PerfectPFA, "Tungsten HCal Absorber Material, QGSP_BERT_HP PerfectPFA", "lp");

    TGraphErrors *pTGraphErrors_Variable_1_TotalConfusion = new TGraphErrors(4,jetEnergy,Variable_1_TotalConfusion_JER,jetEnergyError,Variable_1_TotalConfusion_JERError);

    pTGraphErrors_Variable_1_TotalConfusion->SetLineColor(kRed);
    pTGraphErrors_Variable_1_TotalConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Variable_1_TotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_1_TotalConfusion, "Steel HCal Absorber Material, QGSP_BERT TotalConfusion", "lp");

    TGraphErrors *pTGraphErrors_Variable_2_TotalConfusion = new TGraphErrors(4,jetEnergy,Variable_2_TotalConfusion_JER,jetEnergyError,Variable_2_TotalConfusion_JERError);

    pTGraphErrors_Variable_2_TotalConfusion->SetLineColor(kRed);
    pTGraphErrors_Variable_2_TotalConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Variable_2_TotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_2_TotalConfusion, "Steel HCal Absorber Material, QGSP_BERT_HP TotalConfusion", "lp");

    TGraphErrors *pTGraphErrors_Variable_3_TotalConfusion = new TGraphErrors(4,jetEnergy,Variable_3_TotalConfusion_JER,jetEnergyError,Variable_3_TotalConfusion_JERError);

    pTGraphErrors_Variable_3_TotalConfusion->SetLineColor(kRed);
    pTGraphErrors_Variable_3_TotalConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Variable_3_TotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_3_TotalConfusion, "Tungsten HCal Absorber Material, QGSP_BERT TotalConfusion", "lp");

    TGraphErrors *pTGraphErrors_Variable_4_TotalConfusion = new TGraphErrors(4,jetEnergy,Variable_4_TotalConfusion_JER,jetEnergyError,Variable_4_TotalConfusion_JERError);

    pTGraphErrors_Variable_4_TotalConfusion->SetLineColor(kRed);
    pTGraphErrors_Variable_4_TotalConfusion->SetMarkerColor(kRed);
    pTGraphErrors_Variable_4_TotalConfusion->Draw("lp,same");

    pLegend->AddEntry(pTGraphErrors_Variable_4_TotalConfusion, "Tungsten HCal Absorber Material, QGSP_BERT_HP TotalConfusion", "lp");

    pLegend->SetFillStyle(0);
    pLegend->Draw("same");
    pCanvasEj->SaveAs("JER_vs_JetEnergy_HCalAbsorberMaterial.pdf");
}
