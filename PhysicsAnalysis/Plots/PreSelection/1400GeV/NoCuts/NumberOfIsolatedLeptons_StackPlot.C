{
//=========Macro generated from canvas: HHURDZZJUW/NumberOfIsolatedLeptons
//=========  (Wed Jan  4 14:57:13 2017) by ROOT version5.34/30
   TCanvas *HHURDZZJUW = new TCanvas("HHURDZZJUW", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   HHURDZZJUW->SetHighLightColor(2);
   HHURDZZJUW->Range(-0.625,-2.98047,5.625,9.497031);
   HHURDZZJUW->SetFillColor(0);
   HHURDZZJUW->SetBorderMode(0);
   HHURDZZJUW->SetBorderSize(2);
   HHURDZZJUW->SetLogy();
   HHURDZZJUW->SetFrameBorderMode(0);
   HHURDZZJUW->SetFrameBorderMode(0);
   
   THStack *RLVSTEUZFP = new THStack();
   RLVSTEUZFP->SetName("RLVSTEUZFP");
   RLVSTEUZFP->SetTitle("NumberOfIsolatedLeptons");
   RLVSTEUZFP->SetMinimum(0.1);
   
   TH1F *RLVSTEUZFP_stack_17 = new TH1F("RLVSTEUZFP_stack_17","NumberOfIsolatedLeptons",5,0,5);
   RLVSTEUZFP_stack_17->SetMinimum(0.01850461);
   RLVSTEUZFP_stack_17->SetMaximum(1.775337e+08);
   RLVSTEUZFP_stack_17->SetDirectory(0);
   RLVSTEUZFP_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   RLVSTEUZFP_stack_17->SetLineColor(ci);
   RLVSTEUZFP_stack_17->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RLVSTEUZFP_stack_17->GetXaxis()->SetLabelFont(42);
   RLVSTEUZFP_stack_17->GetXaxis()->SetLabelSize(0.035);
   RLVSTEUZFP_stack_17->GetXaxis()->SetTitleSize(0.035);
   RLVSTEUZFP_stack_17->GetXaxis()->SetTitleFont(42);
   RLVSTEUZFP_stack_17->GetYaxis()->SetTitle("Entries");
   RLVSTEUZFP_stack_17->GetYaxis()->SetLabelFont(42);
   RLVSTEUZFP_stack_17->GetYaxis()->SetLabelSize(0.035);
   RLVSTEUZFP_stack_17->GetYaxis()->SetTitleSize(0.035);
   RLVSTEUZFP_stack_17->GetYaxis()->SetTitleFont(42);
   RLVSTEUZFP_stack_17->GetZaxis()->SetLabelFont(42);
   RLVSTEUZFP_stack_17->GetZaxis()->SetLabelSize(0.035);
   RLVSTEUZFP_stack_17->GetZaxis()->SetTitleSize(0.035);
   RLVSTEUZFP_stack_17->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->SetHistogram(RLVSTEUZFP_stack_17);
   
   
   TH1F *ERNXCHDJZV = new TH1F("ERNXCHDJZV","NumberOfIsolatedLeptons",5,0,5);
   ERNXCHDJZV->SetBinContent(1,36771.09);
   ERNXCHDJZV->SetBinContent(2,116.2685);
   ERNXCHDJZV->SetBinContent(3,0.2748516);
   ERNXCHDJZV->SetBinContent(4,0.02748516);
   ERNXCHDJZV->SetMinimum(0.1);
   ERNXCHDJZV->SetMaximum(73542.18);
   ERNXCHDJZV->SetEntries(1348000);
   ERNXCHDJZV->SetStats(0);
   ERNXCHDJZV->SetFillColor(1);
   ERNXCHDJZV->SetFillStyle(3001);
   ERNXCHDJZV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ERNXCHDJZV->GetXaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetXaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetXaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetYaxis()->SetTitle("Entries");
   ERNXCHDJZV->GetYaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetYaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetYaxis()->SetTitleFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelFont(42);
   ERNXCHDJZV->GetZaxis()->SetLabelSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleSize(0.035);
   ERNXCHDJZV->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(ERNXCHDJZV,"");
   
   TH1F *WQBOYXJRQG = new TH1F("WQBOYXJRQG","NumberOfIsolatedLeptons",5,0,5);
   WQBOYXJRQG->SetBinContent(1,80876.88);
   WQBOYXJRQG->SetBinContent(2,84145.02);
   WQBOYXJRQG->SetBinContent(3,268.513);
   WQBOYXJRQG->SetBinContent(4,0.4467754);
   WQBOYXJRQG->SetBinContent(5,0.4467754);
   WQBOYXJRQG->SetMinimum(0.1);
   WQBOYXJRQG->SetMaximum(168290);
   WQBOYXJRQG->SetEntries(370656);
   WQBOYXJRQG->SetStats(0);

   ci = TColor::GetColor("#000066");
   WQBOYXJRQG->SetFillColor(ci);
   WQBOYXJRQG->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   WQBOYXJRQG->SetLineColor(ci);
   WQBOYXJRQG->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   WQBOYXJRQG->GetXaxis()->SetLabelFont(42);
   WQBOYXJRQG->GetXaxis()->SetLabelSize(0.035);
   WQBOYXJRQG->GetXaxis()->SetTitleSize(0.035);
   WQBOYXJRQG->GetXaxis()->SetTitleFont(42);
   WQBOYXJRQG->GetYaxis()->SetTitle("Entries");
   WQBOYXJRQG->GetYaxis()->SetLabelFont(42);
   WQBOYXJRQG->GetYaxis()->SetLabelSize(0.035);
   WQBOYXJRQG->GetYaxis()->SetTitleSize(0.035);
   WQBOYXJRQG->GetYaxis()->SetTitleFont(42);
   WQBOYXJRQG->GetZaxis()->SetLabelFont(42);
   WQBOYXJRQG->GetZaxis()->SetLabelSize(0.035);
   WQBOYXJRQG->GetZaxis()->SetTitleSize(0.035);
   WQBOYXJRQG->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(WQBOYXJRQG,"");
   
   TH1F *HZKGXXDEVP = new TH1F("HZKGXXDEVP","NumberOfIsolatedLeptons",5,0,5);
   HZKGXXDEVP->SetBinContent(1,52260.67);
   HZKGXXDEVP->SetBinContent(2,31604.48);
   HZKGXXDEVP->SetBinContent(3,9354.529);
   HZKGXXDEVP->SetBinContent(4,27.46213);
   HZKGXXDEVP->SetMinimum(0.1);
   HZKGXXDEVP->SetMaximum(104521.3);
   HZKGXXDEVP->SetEntries(634293);
   HZKGXXDEVP->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   HZKGXXDEVP->SetFillColor(ci);
   HZKGXXDEVP->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   HZKGXXDEVP->SetLineColor(ci);
   HZKGXXDEVP->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   HZKGXXDEVP->GetXaxis()->SetLabelFont(42);
   HZKGXXDEVP->GetXaxis()->SetLabelSize(0.035);
   HZKGXXDEVP->GetXaxis()->SetTitleSize(0.035);
   HZKGXXDEVP->GetXaxis()->SetTitleFont(42);
   HZKGXXDEVP->GetYaxis()->SetTitle("Entries");
   HZKGXXDEVP->GetYaxis()->SetLabelFont(42);
   HZKGXXDEVP->GetYaxis()->SetLabelSize(0.035);
   HZKGXXDEVP->GetYaxis()->SetTitleSize(0.035);
   HZKGXXDEVP->GetYaxis()->SetTitleFont(42);
   HZKGXXDEVP->GetZaxis()->SetLabelFont(42);
   HZKGXXDEVP->GetZaxis()->SetLabelSize(0.035);
   HZKGXXDEVP->GetZaxis()->SetTitleSize(0.035);
   HZKGXXDEVP->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(HZKGXXDEVP,"");
   
   TH1F *RDSLFWBMAM = new TH1F("RDSLFWBMAM","NumberOfIsolatedLeptons",5,0,5);
   RDSLFWBMAM->SetBinContent(1,1862169);
   RDSLFWBMAM->SetBinContent(2,3198.636);
   RDSLFWBMAM->SetBinContent(3,6.384473);
   RDSLFWBMAM->SetMinimum(0.1);
   RDSLFWBMAM->SetMaximum(3724338);
   RDSLFWBMAM->SetEntries(292530);
   RDSLFWBMAM->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   RDSLFWBMAM->SetFillColor(ci);
   RDSLFWBMAM->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   RDSLFWBMAM->SetLineColor(ci);
   RDSLFWBMAM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RDSLFWBMAM->GetXaxis()->SetLabelFont(42);
   RDSLFWBMAM->GetXaxis()->SetLabelSize(0.035);
   RDSLFWBMAM->GetXaxis()->SetTitleSize(0.035);
   RDSLFWBMAM->GetXaxis()->SetTitleFont(42);
   RDSLFWBMAM->GetYaxis()->SetTitle("Entries");
   RDSLFWBMAM->GetYaxis()->SetLabelFont(42);
   RDSLFWBMAM->GetYaxis()->SetLabelSize(0.035);
   RDSLFWBMAM->GetYaxis()->SetTitleSize(0.035);
   RDSLFWBMAM->GetYaxis()->SetTitleFont(42);
   RDSLFWBMAM->GetZaxis()->SetLabelFont(42);
   RDSLFWBMAM->GetZaxis()->SetLabelSize(0.035);
   RDSLFWBMAM->GetZaxis()->SetTitleSize(0.035);
   RDSLFWBMAM->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(RDSLFWBMAM,"");
   
   TH1F *KPMGPCTXOJ = new TH1F("KPMGPCTXOJ","NumberOfIsolatedLeptons",5,0,5);
   KPMGPCTXOJ->SetBinContent(1,1180352);
   KPMGPCTXOJ->SetBinContent(2,2545.788);
   KPMGPCTXOJ->SetMinimum(0.1);
   KPMGPCTXOJ->SetMaximum(2360704);
   KPMGPCTXOJ->SetEntries(291933);
   KPMGPCTXOJ->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   KPMGPCTXOJ->SetFillColor(ci);
   KPMGPCTXOJ->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   KPMGPCTXOJ->SetLineColor(ci);
   KPMGPCTXOJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KPMGPCTXOJ->GetXaxis()->SetLabelFont(42);
   KPMGPCTXOJ->GetXaxis()->SetLabelSize(0.035);
   KPMGPCTXOJ->GetXaxis()->SetTitleSize(0.035);
   KPMGPCTXOJ->GetXaxis()->SetTitleFont(42);
   KPMGPCTXOJ->GetYaxis()->SetTitle("Entries");
   KPMGPCTXOJ->GetYaxis()->SetLabelFont(42);
   KPMGPCTXOJ->GetYaxis()->SetLabelSize(0.035);
   KPMGPCTXOJ->GetYaxis()->SetTitleSize(0.035);
   KPMGPCTXOJ->GetYaxis()->SetTitleFont(42);
   KPMGPCTXOJ->GetZaxis()->SetLabelFont(42);
   KPMGPCTXOJ->GetZaxis()->SetLabelSize(0.035);
   KPMGPCTXOJ->GetZaxis()->SetTitleSize(0.035);
   KPMGPCTXOJ->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(KPMGPCTXOJ,"");
   
   TH1F *EIDTNXEFET = new TH1F("EIDTNXEFET","NumberOfIsolatedLeptons",5,0,5);
   EIDTNXEFET->SetBinContent(1,4786364);
   EIDTNXEFET->SetBinContent(2,1672156);
   EIDTNXEFET->SetBinContent(3,2507.407);
   EIDTNXEFET->SetMinimum(0.1);
   EIDTNXEFET->SetMaximum(9572728);
   EIDTNXEFET->SetEntries(1046740);
   EIDTNXEFET->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   EIDTNXEFET->SetFillColor(ci);
   EIDTNXEFET->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   EIDTNXEFET->SetLineColor(ci);
   EIDTNXEFET->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   EIDTNXEFET->GetXaxis()->SetLabelFont(42);
   EIDTNXEFET->GetXaxis()->SetLabelSize(0.035);
   EIDTNXEFET->GetXaxis()->SetTitleSize(0.035);
   EIDTNXEFET->GetXaxis()->SetTitleFont(42);
   EIDTNXEFET->GetYaxis()->SetTitle("Entries");
   EIDTNXEFET->GetYaxis()->SetLabelFont(42);
   EIDTNXEFET->GetYaxis()->SetLabelSize(0.035);
   EIDTNXEFET->GetYaxis()->SetTitleSize(0.035);
   EIDTNXEFET->GetYaxis()->SetTitleFont(42);
   EIDTNXEFET->GetZaxis()->SetLabelFont(42);
   EIDTNXEFET->GetZaxis()->SetLabelSize(0.035);
   EIDTNXEFET->GetZaxis()->SetTitleSize(0.035);
   EIDTNXEFET->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(EIDTNXEFET,"");
   
   TH1F *YADPJIUKGS = new TH1F("YADPJIUKGS","NumberOfIsolatedLeptons",5,0,5);
   YADPJIUKGS->SetBinContent(1,3461975);
   YADPJIUKGS->SetBinContent(2,582797.4);
   YADPJIUKGS->SetBinContent(3,72526.26);
   YADPJIUKGS->SetBinContent(4,109.0606);
   YADPJIUKGS->SetMinimum(0.1);
   YADPJIUKGS->SetMaximum(6923950);
   YADPJIUKGS->SetEntries(1049725);
   YADPJIUKGS->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   YADPJIUKGS->SetFillColor(ci);
   YADPJIUKGS->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   YADPJIUKGS->SetLineColor(ci);
   YADPJIUKGS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YADPJIUKGS->GetXaxis()->SetLabelFont(42);
   YADPJIUKGS->GetXaxis()->SetLabelSize(0.035);
   YADPJIUKGS->GetXaxis()->SetTitleSize(0.035);
   YADPJIUKGS->GetXaxis()->SetTitleFont(42);
   YADPJIUKGS->GetYaxis()->SetTitle("Entries");
   YADPJIUKGS->GetYaxis()->SetLabelFont(42);
   YADPJIUKGS->GetYaxis()->SetLabelSize(0.035);
   YADPJIUKGS->GetYaxis()->SetTitleSize(0.035);
   YADPJIUKGS->GetYaxis()->SetTitleFont(42);
   YADPJIUKGS->GetZaxis()->SetLabelFont(42);
   YADPJIUKGS->GetZaxis()->SetLabelSize(0.035);
   YADPJIUKGS->GetZaxis()->SetTitleSize(0.035);
   YADPJIUKGS->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(YADPJIUKGS,"");
   
   TH1F *VWZCWLXVPS = new TH1F("VWZCWLXVPS","NumberOfIsolatedLeptons",5,0,5);
   VWZCWLXVPS->SetBinContent(1,6018986);
   VWZCWLXVPS->SetBinContent(2,8126.138);
   VWZCWLXVPS->SetMinimum(0.1);
   VWZCWLXVPS->SetMaximum(1.203797e+07);
   VWZCWLXVPS->SetEntries(242757);
   VWZCWLXVPS->SetStats(0);

   ci = TColor::GetColor("#006633");
   VWZCWLXVPS->SetFillColor(ci);
   VWZCWLXVPS->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   VWZCWLXVPS->SetLineColor(ci);
   VWZCWLXVPS->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   VWZCWLXVPS->GetXaxis()->SetLabelFont(42);
   VWZCWLXVPS->GetXaxis()->SetLabelSize(0.035);
   VWZCWLXVPS->GetXaxis()->SetTitleSize(0.035);
   VWZCWLXVPS->GetXaxis()->SetTitleFont(42);
   VWZCWLXVPS->GetYaxis()->SetTitle("Entries");
   VWZCWLXVPS->GetYaxis()->SetLabelFont(42);
   VWZCWLXVPS->GetYaxis()->SetLabelSize(0.035);
   VWZCWLXVPS->GetYaxis()->SetTitleSize(0.035);
   VWZCWLXVPS->GetYaxis()->SetTitleFont(42);
   VWZCWLXVPS->GetZaxis()->SetLabelFont(42);
   VWZCWLXVPS->GetZaxis()->SetLabelSize(0.035);
   VWZCWLXVPS->GetZaxis()->SetTitleSize(0.035);
   VWZCWLXVPS->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(VWZCWLXVPS,"");
   
   TH1F *MIDGZZRENT = new TH1F("MIDGZZRENT","NumberOfIsolatedLeptons",5,0,5);
   MIDGZZRENT->SetBinContent(1,273643.8);
   MIDGZZRENT->SetBinContent(2,134961.7);
   MIDGZZRENT->SetBinContent(3,21900.45);
   MIDGZZRENT->SetBinContent(4,40.9091);
   MIDGZZRENT->SetBinContent(5,6.818182);
   MIDGZZRENT->SetMinimum(0.1);
   MIDGZZRENT->SetMaximum(547287.6);
   MIDGZZRENT->SetEntries(63162);
   MIDGZZRENT->SetStats(0);
   MIDGZZRENT->SetFillColor(3);
   MIDGZZRENT->SetFillStyle(3001);
   MIDGZZRENT->SetLineColor(3);
   MIDGZZRENT->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   MIDGZZRENT->GetXaxis()->SetLabelFont(42);
   MIDGZZRENT->GetXaxis()->SetLabelSize(0.035);
   MIDGZZRENT->GetXaxis()->SetTitleSize(0.035);
   MIDGZZRENT->GetXaxis()->SetTitleFont(42);
   MIDGZZRENT->GetYaxis()->SetTitle("Entries");
   MIDGZZRENT->GetYaxis()->SetLabelFont(42);
   MIDGZZRENT->GetYaxis()->SetLabelSize(0.035);
   MIDGZZRENT->GetYaxis()->SetTitleSize(0.035);
   MIDGZZRENT->GetYaxis()->SetTitleFont(42);
   MIDGZZRENT->GetZaxis()->SetLabelFont(42);
   MIDGZZRENT->GetZaxis()->SetLabelSize(0.035);
   MIDGZZRENT->GetZaxis()->SetTitleSize(0.035);
   MIDGZZRENT->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(MIDGZZRENT,"");
   
   TH1F *YIYYCIKZVH = new TH1F("YIYYCIKZVH","NumberOfIsolatedLeptons",5,0,5);
   YIYYCIKZVH->SetBinContent(1,1504966);
   YIYYCIKZVH->SetBinContent(2,233813.2);
   YIYYCIKZVH->SetBinContent(3,1716.429);
   YIYYCIKZVH->SetMinimum(0.1);
   YIYYCIKZVH->SetMaximum(3009933);
   YIYYCIKZVH->SetEntries(61875);
   YIYYCIKZVH->SetStats(0);

   ci = TColor::GetColor("#990033");
   YIYYCIKZVH->SetFillColor(ci);
   YIYYCIKZVH->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   YIYYCIKZVH->SetLineColor(ci);
   YIYYCIKZVH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   YIYYCIKZVH->GetXaxis()->SetLabelFont(42);
   YIYYCIKZVH->GetXaxis()->SetLabelSize(0.035);
   YIYYCIKZVH->GetXaxis()->SetTitleSize(0.035);
   YIYYCIKZVH->GetXaxis()->SetTitleFont(42);
   YIYYCIKZVH->GetYaxis()->SetTitle("Entries");
   YIYYCIKZVH->GetYaxis()->SetLabelFont(42);
   YIYYCIKZVH->GetYaxis()->SetLabelSize(0.035);
   YIYYCIKZVH->GetYaxis()->SetTitleSize(0.035);
   YIYYCIKZVH->GetYaxis()->SetTitleFont(42);
   YIYYCIKZVH->GetZaxis()->SetLabelFont(42);
   YIYYCIKZVH->GetZaxis()->SetLabelSize(0.035);
   YIYYCIKZVH->GetZaxis()->SetTitleSize(0.035);
   YIYYCIKZVH->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(YIYYCIKZVH,"");
   
   TH1F *RDHBLJUDAD = new TH1F("RDHBLJUDAD","NumberOfIsolatedLeptons",5,0,5);
   RDHBLJUDAD->SetBinContent(1,274429.8);
   RDHBLJUDAD->SetBinContent(2,134432.4);
   RDHBLJUDAD->SetBinContent(3,21344.63);
   RDHBLJUDAD->SetBinContent(4,50.39965);
   RDHBLJUDAD->SetMinimum(0.1);
   RDHBLJUDAD->SetMaximum(548859.6);
   RDHBLJUDAD->SetEntries(68310);
   RDHBLJUDAD->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   RDHBLJUDAD->SetFillColor(ci);
   RDHBLJUDAD->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   RDHBLJUDAD->SetLineColor(ci);
   RDHBLJUDAD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   RDHBLJUDAD->GetXaxis()->SetLabelFont(42);
   RDHBLJUDAD->GetXaxis()->SetLabelSize(0.035);
   RDHBLJUDAD->GetXaxis()->SetTitleSize(0.035);
   RDHBLJUDAD->GetXaxis()->SetTitleFont(42);
   RDHBLJUDAD->GetYaxis()->SetTitle("Entries");
   RDHBLJUDAD->GetYaxis()->SetLabelFont(42);
   RDHBLJUDAD->GetYaxis()->SetLabelSize(0.035);
   RDHBLJUDAD->GetYaxis()->SetTitleSize(0.035);
   RDHBLJUDAD->GetYaxis()->SetTitleFont(42);
   RDHBLJUDAD->GetZaxis()->SetLabelFont(42);
   RDHBLJUDAD->GetZaxis()->SetLabelSize(0.035);
   RDHBLJUDAD->GetZaxis()->SetTitleSize(0.035);
   RDHBLJUDAD->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(RDHBLJUDAD,"");
   
   TH1F *CMUKFNTVCJ = new TH1F("CMUKFNTVCJ","NumberOfIsolatedLeptons",5,0,5);
   CMUKFNTVCJ->SetBinContent(1,1499738);
   CMUKFNTVCJ->SetBinContent(2,232090.6);
   CMUKFNTVCJ->SetBinContent(3,1917.578);
   CMUKFNTVCJ->SetBinContent(4,29.05423);
   CMUKFNTVCJ->SetMinimum(0.1);
   CMUKFNTVCJ->SetMaximum(2999477);
   CMUKFNTVCJ->SetEntries(59697);
   CMUKFNTVCJ->SetStats(0);

   ci = TColor::GetColor("#a42400");
   CMUKFNTVCJ->SetFillColor(ci);
   CMUKFNTVCJ->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   CMUKFNTVCJ->SetLineColor(ci);
   CMUKFNTVCJ->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   CMUKFNTVCJ->GetXaxis()->SetLabelFont(42);
   CMUKFNTVCJ->GetXaxis()->SetLabelSize(0.035);
   CMUKFNTVCJ->GetXaxis()->SetTitleSize(0.035);
   CMUKFNTVCJ->GetXaxis()->SetTitleFont(42);
   CMUKFNTVCJ->GetYaxis()->SetTitle("Entries");
   CMUKFNTVCJ->GetYaxis()->SetLabelFont(42);
   CMUKFNTVCJ->GetYaxis()->SetLabelSize(0.035);
   CMUKFNTVCJ->GetYaxis()->SetTitleSize(0.035);
   CMUKFNTVCJ->GetYaxis()->SetTitleFont(42);
   CMUKFNTVCJ->GetZaxis()->SetLabelFont(42);
   CMUKFNTVCJ->GetZaxis()->SetLabelSize(0.035);
   CMUKFNTVCJ->GetZaxis()->SetTitleSize(0.035);
   CMUKFNTVCJ->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(CMUKFNTVCJ,"");
   
   TH1F *ZOUXLANXSM = new TH1F("ZOUXLANXSM","NumberOfIsolatedLeptons",5,0,5);
   ZOUXLANXSM->SetBinContent(1,36125.16);
   ZOUXLANXSM->SetBinContent(2,12772.54);
   ZOUXLANXSM->SetBinContent(3,34.3321);
   ZOUXLANXSM->SetMinimum(0.1);
   ZOUXLANXSM->SetMaximum(72250.33);
   ZOUXLANXSM->SetEntries(88308);
   ZOUXLANXSM->SetStats(0);

   ci = TColor::GetColor("#001544");
   ZOUXLANXSM->SetFillColor(ci);
   ZOUXLANXSM->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   ZOUXLANXSM->SetLineColor(ci);
   ZOUXLANXSM->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZOUXLANXSM->GetXaxis()->SetLabelFont(42);
   ZOUXLANXSM->GetXaxis()->SetLabelSize(0.035);
   ZOUXLANXSM->GetXaxis()->SetTitleSize(0.035);
   ZOUXLANXSM->GetXaxis()->SetTitleFont(42);
   ZOUXLANXSM->GetYaxis()->SetTitle("Entries");
   ZOUXLANXSM->GetYaxis()->SetLabelFont(42);
   ZOUXLANXSM->GetYaxis()->SetLabelSize(0.035);
   ZOUXLANXSM->GetYaxis()->SetTitleSize(0.035);
   ZOUXLANXSM->GetYaxis()->SetTitleFont(42);
   ZOUXLANXSM->GetZaxis()->SetLabelFont(42);
   ZOUXLANXSM->GetZaxis()->SetLabelSize(0.035);
   ZOUXLANXSM->GetZaxis()->SetTitleSize(0.035);
   ZOUXLANXSM->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(ZOUXLANXSM,"");
   
   TH1F *ZEUYPWBRRH = new TH1F("ZEUYPWBRRH","NumberOfIsolatedLeptons",5,0,5);
   ZEUYPWBRRH->SetBinContent(1,203346.7);
   ZEUYPWBRRH->SetBinContent(2,1960.965);
   ZEUYPWBRRH->SetBinContent(3,9.4391);
   ZEUYPWBRRH->SetMinimum(0.1);
   ZEUYPWBRRH->SetMaximum(406693.4);
   ZEUYPWBRRH->SetEntries(87021);
   ZEUYPWBRRH->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   ZEUYPWBRRH->SetFillColor(ci);
   ZEUYPWBRRH->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   ZEUYPWBRRH->SetLineColor(ci);
   ZEUYPWBRRH->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ZEUYPWBRRH->GetXaxis()->SetLabelFont(42);
   ZEUYPWBRRH->GetXaxis()->SetLabelSize(0.035);
   ZEUYPWBRRH->GetXaxis()->SetTitleSize(0.035);
   ZEUYPWBRRH->GetXaxis()->SetTitleFont(42);
   ZEUYPWBRRH->GetYaxis()->SetTitle("Entries");
   ZEUYPWBRRH->GetYaxis()->SetLabelFont(42);
   ZEUYPWBRRH->GetYaxis()->SetLabelSize(0.035);
   ZEUYPWBRRH->GetYaxis()->SetTitleSize(0.035);
   ZEUYPWBRRH->GetYaxis()->SetTitleFont(42);
   ZEUYPWBRRH->GetZaxis()->SetLabelFont(42);
   ZEUYPWBRRH->GetZaxis()->SetLabelSize(0.035);
   ZEUYPWBRRH->GetZaxis()->SetTitleSize(0.035);
   ZEUYPWBRRH->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(ZEUYPWBRRH,"");
   
   TH1F *KAFDKTMLCN = new TH1F("KAFDKTMLCN","NumberOfIsolatedLeptons",5,0,5);
   KAFDKTMLCN->SetBinContent(1,36032.53);
   KAFDKTMLCN->SetBinContent(2,12866.11);
   KAFDKTMLCN->SetBinContent(3,33.22461);
   KAFDKTMLCN->SetMinimum(0.1);
   KAFDKTMLCN->SetMaximum(72065.06);
   KAFDKTMLCN->SetEntries(88308);
   KAFDKTMLCN->SetStats(0);

   ci = TColor::GetColor("#620e00");
   KAFDKTMLCN->SetFillColor(ci);
   KAFDKTMLCN->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   KAFDKTMLCN->SetLineColor(ci);
   KAFDKTMLCN->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   KAFDKTMLCN->GetXaxis()->SetLabelFont(42);
   KAFDKTMLCN->GetXaxis()->SetLabelSize(0.035);
   KAFDKTMLCN->GetXaxis()->SetTitleSize(0.035);
   KAFDKTMLCN->GetXaxis()->SetTitleFont(42);
   KAFDKTMLCN->GetYaxis()->SetTitle("Entries");
   KAFDKTMLCN->GetYaxis()->SetLabelFont(42);
   KAFDKTMLCN->GetYaxis()->SetLabelSize(0.035);
   KAFDKTMLCN->GetYaxis()->SetTitleSize(0.035);
   KAFDKTMLCN->GetYaxis()->SetTitleFont(42);
   KAFDKTMLCN->GetZaxis()->SetLabelFont(42);
   KAFDKTMLCN->GetZaxis()->SetLabelSize(0.035);
   KAFDKTMLCN->GetZaxis()->SetTitleSize(0.035);
   KAFDKTMLCN->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(KAFDKTMLCN,"");
   
   TH1F *BPSYIWTUIO = new TH1F("BPSYIWTUIO","NumberOfIsolatedLeptons",5,0,5);
   BPSYIWTUIO->SetBinContent(1,202770.1);
   BPSYIWTUIO->SetBinContent(2,1903.126);
   BPSYIWTUIO->SetBinContent(3,7.110091);
   BPSYIWTUIO->SetMinimum(0.1);
   BPSYIWTUIO->SetMaximum(405540.2);
   BPSYIWTUIO->SetEntries(86328);
   BPSYIWTUIO->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   BPSYIWTUIO->SetFillColor(ci);
   BPSYIWTUIO->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   BPSYIWTUIO->SetLineColor(ci);
   BPSYIWTUIO->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BPSYIWTUIO->GetXaxis()->SetLabelFont(42);
   BPSYIWTUIO->GetXaxis()->SetLabelSize(0.035);
   BPSYIWTUIO->GetXaxis()->SetTitleSize(0.035);
   BPSYIWTUIO->GetXaxis()->SetTitleFont(42);
   BPSYIWTUIO->GetYaxis()->SetTitle("Entries");
   BPSYIWTUIO->GetYaxis()->SetLabelFont(42);
   BPSYIWTUIO->GetYaxis()->SetLabelSize(0.035);
   BPSYIWTUIO->GetYaxis()->SetTitleSize(0.035);
   BPSYIWTUIO->GetYaxis()->SetTitleFont(42);
   BPSYIWTUIO->GetZaxis()->SetLabelFont(42);
   BPSYIWTUIO->GetZaxis()->SetLabelSize(0.035);
   BPSYIWTUIO->GetZaxis()->SetTitleSize(0.035);
   BPSYIWTUIO->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(BPSYIWTUIO,"");
   
   TH1F *JILWWIGGIV = new TH1F("JILWWIGGIV","NumberOfIsolatedLeptons",5,0,5);
   JILWWIGGIV->SetBinContent(1,861094.6);
   JILWWIGGIV->SetBinContent(2,243997.1);
   JILWWIGGIV->SetBinContent(3,24929.12);
   JILWWIGGIV->SetBinContent(4,67.66958);
   JILWWIGGIV->SetMinimum(0.1);
   JILWWIGGIV->SetMaximum(1722189);
   JILWWIGGIV->SetEntries(83457);
   JILWWIGGIV->SetStats(0);
   JILWWIGGIV->SetFillColor(4);
   JILWWIGGIV->SetFillStyle(3001);
   JILWWIGGIV->SetLineColor(4);
   JILWWIGGIV->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   JILWWIGGIV->GetXaxis()->SetLabelFont(42);
   JILWWIGGIV->GetXaxis()->SetLabelSize(0.035);
   JILWWIGGIV->GetXaxis()->SetTitleSize(0.035);
   JILWWIGGIV->GetXaxis()->SetTitleFont(42);
   JILWWIGGIV->GetYaxis()->SetTitle("Entries");
   JILWWIGGIV->GetYaxis()->SetLabelFont(42);
   JILWWIGGIV->GetYaxis()->SetLabelSize(0.035);
   JILWWIGGIV->GetYaxis()->SetTitleSize(0.035);
   JILWWIGGIV->GetYaxis()->SetTitleFont(42);
   JILWWIGGIV->GetZaxis()->SetLabelFont(42);
   JILWWIGGIV->GetZaxis()->SetLabelSize(0.035);
   JILWWIGGIV->GetZaxis()->SetTitleSize(0.035);
   JILWWIGGIV->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(JILWWIGGIV,"");
   
   TH1F *SQKPYPKRJD = new TH1F("SQKPYPKRJD","NumberOfIsolatedLeptons",5,0,5);
   SQKPYPKRJD->SetBinContent(1,5206607);
   SQKPYPKRJD->SetBinContent(2,837944.6);
   SQKPYPKRJD->SetBinContent(3,6557.813);
   SQKPYPKRJD->SetMinimum(0.1);
   SQKPYPKRJD->SetMaximum(1.041321e+07);
   SQKPYPKRJD->SetEntries(83061);
   SQKPYPKRJD->SetStats(0);

   ci = TColor::GetColor("#007db5");
   SQKPYPKRJD->SetFillColor(ci);
   SQKPYPKRJD->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   SQKPYPKRJD->SetLineColor(ci);
   SQKPYPKRJD->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   SQKPYPKRJD->GetXaxis()->SetLabelFont(42);
   SQKPYPKRJD->GetXaxis()->SetLabelSize(0.035);
   SQKPYPKRJD->GetXaxis()->SetTitleSize(0.035);
   SQKPYPKRJD->GetXaxis()->SetTitleFont(42);
   SQKPYPKRJD->GetYaxis()->SetTitle("Entries");
   SQKPYPKRJD->GetYaxis()->SetLabelFont(42);
   SQKPYPKRJD->GetYaxis()->SetLabelSize(0.035);
   SQKPYPKRJD->GetYaxis()->SetTitleSize(0.035);
   SQKPYPKRJD->GetYaxis()->SetTitleFont(42);
   SQKPYPKRJD->GetZaxis()->SetLabelFont(42);
   SQKPYPKRJD->GetZaxis()->SetLabelSize(0.035);
   SQKPYPKRJD->GetZaxis()->SetTitleSize(0.035);
   SQKPYPKRJD->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(SQKPYPKRJD,"");
   
   TH1F *BAWMFDUCGB = new TH1F("BAWMFDUCGB","NumberOfIsolatedLeptons",5,0,5);
   BAWMFDUCGB->SetBinContent(1,5188128);
   BAWMFDUCGB->SetBinContent(2,831305.4);
   BAWMFDUCGB->SetBinContent(3,5968.153);
   BAWMFDUCGB->SetMinimum(0.1);
   BAWMFDUCGB->SetMaximum(1.037626e+07);
   BAWMFDUCGB->SetEntries(84843);
   BAWMFDUCGB->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   BAWMFDUCGB->SetFillColor(ci);
   BAWMFDUCGB->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   BAWMFDUCGB->SetLineColor(ci);
   BAWMFDUCGB->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   BAWMFDUCGB->GetXaxis()->SetLabelFont(42);
   BAWMFDUCGB->GetXaxis()->SetLabelSize(0.035);
   BAWMFDUCGB->GetXaxis()->SetTitleSize(0.035);
   BAWMFDUCGB->GetXaxis()->SetTitleFont(42);
   BAWMFDUCGB->GetYaxis()->SetTitle("Entries");
   BAWMFDUCGB->GetYaxis()->SetLabelFont(42);
   BAWMFDUCGB->GetYaxis()->SetLabelSize(0.035);
   BAWMFDUCGB->GetYaxis()->SetTitleSize(0.035);
   BAWMFDUCGB->GetYaxis()->SetTitleFont(42);
   BAWMFDUCGB->GetZaxis()->SetLabelFont(42);
   BAWMFDUCGB->GetZaxis()->SetLabelSize(0.035);
   BAWMFDUCGB->GetZaxis()->SetTitleSize(0.035);
   BAWMFDUCGB->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(BAWMFDUCGB,"");
   
   TH1F *ORUNAEGDTL = new TH1F("ORUNAEGDTL","NumberOfIsolatedLeptons",5,0,5);
   ORUNAEGDTL->SetBinContent(1,3.151937e+07);
   ORUNAEGDTL->SetBinContent(2,564974.6);
   ORUNAEGDTL->SetBinContent(3,3219.219);
   ORUNAEGDTL->SetMinimum(0.1);
   ORUNAEGDTL->SetMaximum(6.303875e+07);
   ORUNAEGDTL->SetEntries(79794);
   ORUNAEGDTL->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   ORUNAEGDTL->SetFillColor(ci);
   ORUNAEGDTL->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   ORUNAEGDTL->SetLineColor(ci);
   ORUNAEGDTL->GetXaxis()->SetTitle("NumberOfIsolatedLeptons");
   ORUNAEGDTL->GetXaxis()->SetLabelFont(42);
   ORUNAEGDTL->GetXaxis()->SetLabelSize(0.035);
   ORUNAEGDTL->GetXaxis()->SetTitleSize(0.035);
   ORUNAEGDTL->GetXaxis()->SetTitleFont(42);
   ORUNAEGDTL->GetYaxis()->SetTitle("Entries");
   ORUNAEGDTL->GetYaxis()->SetLabelFont(42);
   ORUNAEGDTL->GetYaxis()->SetLabelSize(0.035);
   ORUNAEGDTL->GetYaxis()->SetTitleSize(0.035);
   ORUNAEGDTL->GetYaxis()->SetTitleFont(42);
   ORUNAEGDTL->GetZaxis()->SetLabelFont(42);
   ORUNAEGDTL->GetZaxis()->SetLabelSize(0.035);
   ORUNAEGDTL->GetZaxis()->SetTitleSize(0.035);
   ORUNAEGDTL->GetZaxis()->SetTitleFont(42);
   RLVSTEUZFP->Add(ORUNAEGDTL,"");
   RLVSTEUZFP->Draw("");
   
   TPaveText *pt = new TPaveText(0.2737644,0.9339831,0.7262356,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.7,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ERNXCHDJZV","ee_nunuqqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("WQBOYXJRQG","ee_lnuqqqq","f");

   ci = TColor::GetColor("#000066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("HZKGXXDEVP","ee_llqqqq","f");

   ci = TColor::GetColor("#d5ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RDSLFWBMAM","ee_qqqq","f");

   ci = TColor::GetColor("#ff0056");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("KPMGPCTXOJ","ee_nunuqq","f");

   ci = TColor::GetColor("#9e008e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("EIDTNXEFET","ee_lnuqq","f");

   ci = TColor::GetColor("#0e4ca1");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("YADPJIUKGS","ee_qqll","f");

   ci = TColor::GetColor("#ffe502");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VWZCWLXVPS","ee_qq","f");

   ci = TColor::GetColor("#006633");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("MIDGZZRENT","egamma_qqqqe_EPA","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("YIYYCIKZVH","egamma_qqqqe_BS","f");

   ci = TColor::GetColor("#990033");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("RDHBLJUDAD","gammae_qqqqe_EPA","f");

   ci = TColor::GetColor("#ff937e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CMUKFNTVCJ","gammae_qqqqe_BS","f");

   ci = TColor::GetColor("#a42400");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZOUXLANXSM","egamma_qqqqnu_EPA","f");

   ci = TColor::GetColor("#001544");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ZEUYPWBRRH","egamma_qqqqnu_BS","f");

   ci = TColor::GetColor("#99cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("KAFDKTMLCN","gammae_qqqqnu_EPA","f");

   ci = TColor::GetColor("#620e00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BPSYIWTUIO","gammae_qqqqnu_BS","f");

   ci = TColor::GetColor("#6b6882");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("JILWWIGGIV","gammagamma_qqqq_EPA_EPA","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("SQKPYPKRJD","gammagamma_qqqq_EPA_BS","f");

   ci = TColor::GetColor("#007db5");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("BAWMFDUCGB","gammagamma_qqqq_BS_EPA","f");

   ci = TColor::GetColor("#6a826c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ORUNAEGDTL","gammagamma_qqqq_BS_BS","f");

   ci = TColor::GetColor("#00ae7e");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HHURDZZJUW->Modified();
   HHURDZZJUW->cd();
   HHURDZZJUW->SetSelected(HHURDZZJUW);
}
