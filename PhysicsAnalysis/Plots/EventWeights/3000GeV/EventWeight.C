//======================================================================================

void EventWeight(TString alpha4, TString alpha5)
{
    TH1F *pTH1F = new TH1F("Weights","Weights",200000,0,2000);
    TCanvas *pTCanvas = new TCanvas("Canvas", "");
    pTCanvas->Draw();
    TLegend *pTLegend = new TLegend(0.5,0.7,0.85,0.9);

/*
pcla> ls
Batch.sh                                                       EventWeights_Energy_1400GeV_Alpha4_0.02000_Alpha5_0.00000.pdf   EventWeights_Energy_3000GeV_Alpha4_0.00200_Alpha5_0.00000.C
EventWeight.C                                                  EventWeights_Energy_1400GeV_Alpha4_-0.02000_Alpha5_0.02000.C    EventWeights_Energy_3000GeV_Alpha4_0.00200_Alpha5_0.00000.pdf
EventWeights_Energy_1400GeV_Alpha4_0.00000_Alpha5_0.02000.C    EventWeights_Energy_1400GeV_Alpha4_-0.02000_Alpha5_0.02000.pdf  EventWeights_Energy_3000GeV_Alpha4_-0.00200_Alpha5_0.00200.C
EventWeights_Energy_1400GeV_Alpha4_0.00000_Alpha5_0.02000.pdf  EventWeights_Energy_3000GeV_Alpha4_0.00000_Alpha5_0.00200.C     EventWeights_Energy_3000GeV_Alpha4_-0.00200_Alpha5_0.00200.pdf
EventWeights_Energy_1400GeV_Alpha4_0.02000_Alpha5_0.00000.C    EventWeights_Energy_3000GeV_Alpha4_0.00000_Alpha5_0.00200.pdf
*/

    TH1F *pTH1F1 = GetEventWeight(3000,"0.00000","0.00000");
    pTH1F1->Draw();
    pTLegend->AddEntry(pTH1F1,"#alpha_{4} = 0.000, #alpha_{5} = 0.000","f");

    TH1F *pTH1F2 = GetEventWeight(3000,"0.00000","0.00200");
    pTH1F2->SetLineColor(kRed);
    pTH1F2->SetFillColor(kRed);
    pTLegend->AddEntry(pTH1F2,"#alpha_{4} = 0.000, #alpha_{5} = 0.002","f");
    pTH1F2->Draw("same");

    TString description = "EventWeights"

    pTCanvas->SetLogy();
    pTCanvas->SetLogx();
    pTLegend->Draw();
    pTCanvas->SaveAs("Test.C");
    pTCanvas->SaveAs("Test.pdf");

}

//======================================================================================

TH1F* GetEventWeight(int energy, TString alpha4, TString alpha5)
{
    TString descriptor = "EventWeights_Energy_";
    descriptor += energy;
    descriptor += "GeV_Alpha4_" + alpha4 + "_Alpha5_" + alpha5;

    TH1F *pTH1F = new TH1F(descriptor,"",200000,0,2000);

    for (unsigned int i = 1; i <= 350; i++)
//    for (unsigned int i = 1; i <= 2; i++)
    {
        TString path;
        path = "../";
        path += energy;
        path += "GeV/WhizardJobSet";
        path += i;
        path += "/Alpha4_" + alpha4 + "_Alpha5_" + alpha5 + "/";
        Load(path, pTH1F);
    }

    TString descriptor = "EventWeights_Energy_";
    descriptor += energy;  
    descriptor += "GeV_Alpha4_" + alpha4 + "_Alpha5_" + alpha5;

    pTH1F->GetXaxis()->SetTitle("Event Weight");
    pTH1F->GetXaxis()->SetRangeUser(0.01,2000);
    pTH1F->GetYaxis()->SetTitle("Entries");
    pTH1F->GetYaxis()->SetRangeUser(0.1,100000000);
    pTH1F->SetLineColor(kBlue);
    pTH1F->SetFillColor(kBlue);
    pTH1F->SetFillStyle(3004);
    return pTH1F;
}

//======================================================================================

void Load(TString pathToFiles, TH1F *pTH1F)
{ 
    TSystemDirectory directory(pathToFiles, pathToFiles);
    TList *listOfFiles = directory.GetListOfFiles();
    listOfFiles->Sort(); // Alphabetises the list

    if (listOfFiles)
    {
        TSystemFile *file;
        TString fileCandidate;
        TIter next(listOfFiles);
        while ((file=(TSystemFile*)next()))
        {
            fileCandidate = file->GetName();

            if (!file->IsDirectory() && fileCandidate.EndsWith("evt"))
            {
                std::ifstream infile;   
                TString path = pathToFiles + fileCandidate; 
                infile.open(path.Data());// file containing numbers in 3 columns 

                if(infile.fail()) // checks to see if file opended 
                { 
                    std::cout << "error" << std::endl; 
                    continue; 
                } 

                int number;
                float eventWeight;

                while(!infile.eof()) // reads file to end of *file*, not line
                { 
                    infile >> number; // read first column number
                    infile >> eventWeight; // read second column number

                    pTH1F->Fill(eventWeight);

                    if (eventWeight > 200.f)
                    {
                        std::cout << "File " << path << " event " << number << " weight " << eventWeight << std::endl;
                    }
                } 
                infile.close(); 
            }
        }
    }
    return;
} 
