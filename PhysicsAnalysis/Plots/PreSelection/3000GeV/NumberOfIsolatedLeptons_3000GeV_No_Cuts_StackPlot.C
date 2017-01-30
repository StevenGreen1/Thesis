{
//=========Macro generated from canvas: XQLPQATFDP/NumberOfIsolatedLeptons
//=========  (Mon Jan 23 19:03:40 2017) by ROOT version5.34/30
   TCanvas *XQLPQATFDP = new TCanvas("XQLPQATFDP", "NumberOfIsolatedLeptons",0,0,700,500);
   gStyle->SetOptStat(0);
   XQLPQATFDP->SetHighLightColor(2);
   XQLPQATFDP->Range(-1.25,-2.970856,11.25,9.432728);
   XQLPQATFDP->SetFillColor(0);
   XQLPQATFDP->SetBorderMode(0);
   XQLPQATFDP->SetBorderSize(2);
   XQLPQATFDP->SetLogy();
   XQLPQATFDP->SetFrameBorderMode(0);
   XQLPQATFDP->SetFrameBorderMode(0);
   XQLPQATFDP->SetTopMargin(0.05);
   XQLPQATFDP->SetRightMargin(0.3);
   
   THStack *RVHMHAEFPF = new THStack();
   RVHMHAEFPF->SetName("RVHMHAEFPF");
   RVHMHAEFPF->SetTitle("");
   RVHMHAEFPF->SetMinimum(1);
   
   TH1F *RVHMHAEFPF_stack_17 = new TH1F("RVHMHAEFPF_stack_17","NumberOfIsolatedLeptons",10,0,10);
   RVHMHAEFPF_stack_17->SetMinimum(0.01859956);
   RVHMHAEFPF_stack_17->SetMaximum(1.557291e+08);
   RVHMHAEFPF_stack_17->SetDirectory(0);
   RVHMHAEFPF_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   RVHMHAEFPF_stack_17->SetLineColor(ci);
   RVHMHAEFPF_stack_17->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   RVHMHAEFPF_stack_17->GetXaxis()->SetLabelFont(42);
   RVHMHAEFPF_stack_17->GetXaxis()->SetLabelSize(0.05);
   RVHMHAEFPF_stack_17->GetXaxis()->SetTitleSize(0.05);
   RVHMHAEFPF_stack_17->GetXaxis()->SetTitleFont(42);
   RVHMHAEFPF_stack_17->GetYaxis()->SetTitle("Entries");
   RVHMHAEFPF_stack_17->GetYaxis()->SetLabelFont(42);
   RVHMHAEFPF_stack_17->GetYaxis()->SetLabelSize(0.05);
   RVHMHAEFPF_stack_17->GetYaxis()->SetTitleSize(0.05);
   RVHMHAEFPF_stack_17->GetYaxis()->SetTitleFont(42);
   RVHMHAEFPF_stack_17->GetZaxis()->SetLabelFont(42);
   RVHMHAEFPF_stack_17->GetZaxis()->SetLabelSize(0.035);
   RVHMHAEFPF_stack_17->GetZaxis()->SetTitleSize(0.035);
   RVHMHAEFPF_stack_17->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->SetHistogram(RVHMHAEFPF_stack_17);
   
   
   TH1F *XNGFDWDAQS = new TH1F("XNGFDWDAQS","NumberOfIsolatedLeptons",10,0,10);
   XNGFDWDAQS->SetBinContent(1,146120.2);
   XNGFDWDAQS->SetBinContent(2,402.903);
   XNGFDWDAQS->SetBinContent(3,0.4532778);
   XNGFDWDAQS->SetMinimum(0.1);
   XNGFDWDAQS->SetMaximum(292240.3);
   XNGFDWDAQS->SetEntries(3154659);
   XNGFDWDAQS->SetStats(0);
   XNGFDWDAQS->SetFillColor(1);
   XNGFDWDAQS->SetFillStyle(3001);
   XNGFDWDAQS->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   XNGFDWDAQS->GetXaxis()->SetLabelFont(42);
   XNGFDWDAQS->GetXaxis()->SetLabelSize(0.05);
   XNGFDWDAQS->GetXaxis()->SetTitleSize(0.05);
   XNGFDWDAQS->GetXaxis()->SetTitleFont(42);
   XNGFDWDAQS->GetYaxis()->SetTitle("Entries");
   XNGFDWDAQS->GetYaxis()->SetLabelFont(42);
   XNGFDWDAQS->GetYaxis()->SetLabelSize(0.05);
   XNGFDWDAQS->GetYaxis()->SetTitleSize(0.05);
   XNGFDWDAQS->GetYaxis()->SetTitleFont(42);
   XNGFDWDAQS->GetZaxis()->SetLabelFont(42);
   XNGFDWDAQS->GetZaxis()->SetLabelSize(0.035);
   XNGFDWDAQS->GetZaxis()->SetTitleSize(0.035);
   XNGFDWDAQS->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(XNGFDWDAQS,"");
   
   TH1F *VNJVDVCJXC = new TH1F("VNJVDVCJXC","NumberOfIsolatedLeptons",10,0,10);
   VNJVDVCJXC->SetBinContent(1,139732);
   VNJVDVCJXC->SetBinContent(2,72505.91);
   VNJVDVCJXC->SetBinContent(3,205.8302);
   VNJVDVCJXC->SetMinimum(0.1);
   VNJVDVCJXC->SetMaximum(279463.9);
   VNJVDVCJXC->SetEntries(970504);
   VNJVDVCJXC->SetStats(0);

   ci = TColor::GetColor("#000066");
   VNJVDVCJXC->SetFillColor(ci);
   VNJVDVCJXC->SetFillStyle(3001);

   ci = TColor::GetColor("#000066");
   VNJVDVCJXC->SetLineColor(ci);
   VNJVDVCJXC->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   VNJVDVCJXC->GetXaxis()->SetLabelFont(42);
   VNJVDVCJXC->GetXaxis()->SetLabelSize(0.05);
   VNJVDVCJXC->GetXaxis()->SetTitleSize(0.05);
   VNJVDVCJXC->GetXaxis()->SetTitleFont(42);
   VNJVDVCJXC->GetYaxis()->SetTitle("Entries");
   VNJVDVCJXC->GetYaxis()->SetLabelFont(42);
   VNJVDVCJXC->GetYaxis()->SetLabelSize(0.05);
   VNJVDVCJXC->GetYaxis()->SetTitleSize(0.05);
   VNJVDVCJXC->GetYaxis()->SetTitleFont(42);
   VNJVDVCJXC->GetZaxis()->SetLabelFont(42);
   VNJVDVCJXC->GetZaxis()->SetLabelSize(0.035);
   VNJVDVCJXC->GetZaxis()->SetTitleSize(0.035);
   VNJVDVCJXC->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(VNJVDVCJXC,"");
   
   TH1F *IIJPBVFXRY = new TH1F("IIJPBVFXRY","NumberOfIsolatedLeptons",10,0,10);
   IIJPBVFXRY->SetBinContent(1,267142.8);
   IIJPBVFXRY->SetBinContent(2,64762.66);
   IIJPBVFXRY->SetBinContent(3,8381.845);
   IIJPBVFXRY->SetBinContent(4,20.78167);
   IIJPBVFXRY->SetMinimum(0.1);
   IIJPBVFXRY->SetMaximum(534285.7);
   IIJPBVFXRY->SetEntries(733190);
   IIJPBVFXRY->SetStats(0);

   ci = TColor::GetColor("#d5ff00");
   IIJPBVFXRY->SetFillColor(ci);
   IIJPBVFXRY->SetFillStyle(3001);

   ci = TColor::GetColor("#d5ff00");
   IIJPBVFXRY->SetLineColor(ci);
   IIJPBVFXRY->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   IIJPBVFXRY->GetXaxis()->SetLabelFont(42);
   IIJPBVFXRY->GetXaxis()->SetLabelSize(0.05);
   IIJPBVFXRY->GetXaxis()->SetTitleSize(0.05);
   IIJPBVFXRY->GetXaxis()->SetTitleFont(42);
   IIJPBVFXRY->GetYaxis()->SetTitle("Entries");
   IIJPBVFXRY->GetYaxis()->SetLabelFont(42);
   IIJPBVFXRY->GetYaxis()->SetLabelSize(0.05);
   IIJPBVFXRY->GetYaxis()->SetTitleSize(0.05);
   IIJPBVFXRY->GetYaxis()->SetTitleFont(42);
   IIJPBVFXRY->GetZaxis()->SetLabelFont(42);
   IIJPBVFXRY->GetZaxis()->SetLabelSize(0.035);
   IIJPBVFXRY->GetZaxis()->SetTitleSize(0.035);
   IIJPBVFXRY->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(IIJPBVFXRY,"");
   
   TH1F *KFTKCSTEGZ = new TH1F("KFTKCSTEGZ","NumberOfIsolatedLeptons",10,0,10);
   KFTKCSTEGZ->SetBinContent(1,1107809);
   KFTKCSTEGZ->SetBinContent(2,1869.323);
   KFTKCSTEGZ->SetBinContent(3,2.147312);
   KFTKCSTEGZ->SetMinimum(0.1);
   KFTKCSTEGZ->SetMaximum(2215618);
   KFTKCSTEGZ->SetEntries(3053797);
   KFTKCSTEGZ->SetStats(0);

   ci = TColor::GetColor("#ff0056");
   KFTKCSTEGZ->SetFillColor(ci);
   KFTKCSTEGZ->SetFillStyle(3001);

   ci = TColor::GetColor("#ff0056");
   KFTKCSTEGZ->SetLineColor(ci);
   KFTKCSTEGZ->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   KFTKCSTEGZ->GetXaxis()->SetLabelFont(42);
   KFTKCSTEGZ->GetXaxis()->SetLabelSize(0.05);
   KFTKCSTEGZ->GetXaxis()->SetTitleSize(0.05);
   KFTKCSTEGZ->GetXaxis()->SetTitleFont(42);
   KFTKCSTEGZ->GetYaxis()->SetTitle("Entries");
   KFTKCSTEGZ->GetYaxis()->SetLabelFont(42);
   KFTKCSTEGZ->GetYaxis()->SetLabelSize(0.05);
   KFTKCSTEGZ->GetYaxis()->SetTitleSize(0.05);
   KFTKCSTEGZ->GetYaxis()->SetTitleFont(42);
   KFTKCSTEGZ->GetZaxis()->SetLabelFont(42);
   KFTKCSTEGZ->GetZaxis()->SetLabelSize(0.035);
   KFTKCSTEGZ->GetZaxis()->SetTitleSize(0.035);
   KFTKCSTEGZ->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(KFTKCSTEGZ,"");
   
   TH1F *SOKBWSHNAO = new TH1F("SOKBWSHNAO","NumberOfIsolatedLeptons",10,0,10);
   SOKBWSHNAO->SetBinContent(1,2641440);
   SOKBWSHNAO->SetBinContent(2,5307.503);
   SOKBWSHNAO->SetBinContent(3,9.254577);
   SOKBWSHNAO->SetMinimum(0.1);
   SOKBWSHNAO->SetMaximum(5282879);
   SOKBWSHNAO->SetEntries(569165);
   SOKBWSHNAO->SetStats(0);

   ci = TColor::GetColor("#9e008e");
   SOKBWSHNAO->SetFillColor(ci);
   SOKBWSHNAO->SetFillStyle(3001);

   ci = TColor::GetColor("#9e008e");
   SOKBWSHNAO->SetLineColor(ci);
   SOKBWSHNAO->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   SOKBWSHNAO->GetXaxis()->SetLabelFont(42);
   SOKBWSHNAO->GetXaxis()->SetLabelSize(0.05);
   SOKBWSHNAO->GetXaxis()->SetTitleSize(0.05);
   SOKBWSHNAO->GetXaxis()->SetTitleFont(42);
   SOKBWSHNAO->GetYaxis()->SetTitle("Entries");
   SOKBWSHNAO->GetYaxis()->SetLabelFont(42);
   SOKBWSHNAO->GetYaxis()->SetLabelSize(0.05);
   SOKBWSHNAO->GetYaxis()->SetTitleSize(0.05);
   SOKBWSHNAO->GetYaxis()->SetTitleFont(42);
   SOKBWSHNAO->GetZaxis()->SetLabelFont(42);
   SOKBWSHNAO->GetZaxis()->SetLabelSize(0.035);
   SOKBWSHNAO->GetZaxis()->SetTitleSize(0.035);
   SOKBWSHNAO->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(SOKBWSHNAO,"");
   
   TH1F *IEFHDSAPEI = new TH1F("IEFHDSAPEI","NumberOfIsolatedLeptons",10,0,10);
   IEFHDSAPEI->SetBinContent(1,9973292);
   IEFHDSAPEI->SetBinContent(2,1155428);
   IEFHDSAPEI->SetBinContent(3,1768.199);
   IEFHDSAPEI->SetMinimum(0.1);
   IEFHDSAPEI->SetMaximum(1.994658e+07);
   IEFHDSAPEI->SetEntries(2094182);
   IEFHDSAPEI->SetStats(0);

   ci = TColor::GetColor("#0e4ca1");
   IEFHDSAPEI->SetFillColor(ci);
   IEFHDSAPEI->SetFillStyle(3001);

   ci = TColor::GetColor("#0e4ca1");
   IEFHDSAPEI->SetLineColor(ci);
   IEFHDSAPEI->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   IEFHDSAPEI->GetXaxis()->SetLabelFont(42);
   IEFHDSAPEI->GetXaxis()->SetLabelSize(0.05);
   IEFHDSAPEI->GetXaxis()->SetTitleSize(0.05);
   IEFHDSAPEI->GetXaxis()->SetTitleFont(42);
   IEFHDSAPEI->GetYaxis()->SetTitle("Entries");
   IEFHDSAPEI->GetYaxis()->SetLabelFont(42);
   IEFHDSAPEI->GetYaxis()->SetLabelSize(0.05);
   IEFHDSAPEI->GetYaxis()->SetTitleSize(0.05);
   IEFHDSAPEI->GetYaxis()->SetTitleFont(42);
   IEFHDSAPEI->GetZaxis()->SetLabelFont(42);
   IEFHDSAPEI->GetZaxis()->SetLabelSize(0.035);
   IEFHDSAPEI->GetZaxis()->SetTitleSize(0.035);
   IEFHDSAPEI->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(IEFHDSAPEI,"");
   
   TH1F *BKCJOBUILP = new TH1F("BKCJOBUILP","NumberOfIsolatedLeptons",10,0,10);
   BKCJOBUILP->SetBinContent(1,5884122);
   BKCJOBUILP->SetBinContent(2,708476.5);
   BKCJOBUILP->SetBinContent(3,36380.49);
   BKCJOBUILP->SetBinContent(4,98.1738);
   BKCJOBUILP->SetMinimum(0.1);
   BKCJOBUILP->SetMaximum(1.176824e+07);
   BKCJOBUILP->SetEntries(473344);
   BKCJOBUILP->SetStats(0);

   ci = TColor::GetColor("#ffe502");
   BKCJOBUILP->SetFillColor(ci);
   BKCJOBUILP->SetFillStyle(3001);

   ci = TColor::GetColor("#ffe502");
   BKCJOBUILP->SetLineColor(ci);
   BKCJOBUILP->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   BKCJOBUILP->GetXaxis()->SetLabelFont(42);
   BKCJOBUILP->GetXaxis()->SetLabelSize(0.05);
   BKCJOBUILP->GetXaxis()->SetTitleSize(0.05);
   BKCJOBUILP->GetXaxis()->SetTitleFont(42);
   BKCJOBUILP->GetYaxis()->SetTitle("Entries");
   BKCJOBUILP->GetYaxis()->SetLabelFont(42);
   BKCJOBUILP->GetYaxis()->SetLabelSize(0.05);
   BKCJOBUILP->GetYaxis()->SetTitleSize(0.05);
   BKCJOBUILP->GetYaxis()->SetTitleFont(42);
   BKCJOBUILP->GetZaxis()->SetLabelFont(42);
   BKCJOBUILP->GetZaxis()->SetLabelSize(0.035);
   BKCJOBUILP->GetZaxis()->SetTitleSize(0.035);
   BKCJOBUILP->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(BKCJOBUILP,"");
   
   TH1F *FCZIUOPBER = new TH1F("FCZIUOPBER","NumberOfIsolatedLeptons",10,0,10);
   FCZIUOPBER->SetBinContent(1,5892046);
   FCZIUOPBER->SetBinContent(2,9251.542);
   FCZIUOPBER->SetMinimum(0.1);
   FCZIUOPBER->SetMaximum(1.178409e+07);
   FCZIUOPBER->SetEntries(194395);
   FCZIUOPBER->SetStats(0);

   ci = TColor::GetColor("#006633");
   FCZIUOPBER->SetFillColor(ci);
   FCZIUOPBER->SetFillStyle(3001);

   ci = TColor::GetColor("#006633");
   FCZIUOPBER->SetLineColor(ci);
   FCZIUOPBER->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   FCZIUOPBER->GetXaxis()->SetLabelFont(42);
   FCZIUOPBER->GetXaxis()->SetLabelSize(0.05);
   FCZIUOPBER->GetXaxis()->SetTitleSize(0.05);
   FCZIUOPBER->GetXaxis()->SetTitleFont(42);
   FCZIUOPBER->GetYaxis()->SetTitle("Entries");
   FCZIUOPBER->GetYaxis()->SetLabelFont(42);
   FCZIUOPBER->GetYaxis()->SetLabelSize(0.05);
   FCZIUOPBER->GetYaxis()->SetTitleSize(0.05);
   FCZIUOPBER->GetYaxis()->SetTitleFont(42);
   FCZIUOPBER->GetZaxis()->SetLabelFont(42);
   FCZIUOPBER->GetZaxis()->SetLabelSize(0.035);
   FCZIUOPBER->GetZaxis()->SetTitleSize(0.035);
   FCZIUOPBER->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(FCZIUOPBER,"");
   
   TH1F *VYVWMXMCSL = new TH1F("VYVWMXMCSL","NumberOfIsolatedLeptons",10,0,10);
   VYVWMXMCSL->SetBinContent(1,393567.7);
   VYVWMXMCSL->SetBinContent(2,155442.7);
   VYVWMXMCSL->SetBinContent(3,26536.96);
   VYVWMXMCSL->SetBinContent(4,54.41041);
   VYVWMXMCSL->SetMinimum(0.1);
   VYVWMXMCSL->SetMaximum(787135.3);
   VYVWMXMCSL->SetEntries(74051);
   VYVWMXMCSL->SetStats(0);
   VYVWMXMCSL->SetFillColor(3);
   VYVWMXMCSL->SetFillStyle(3001);
   VYVWMXMCSL->SetLineColor(3);
   VYVWMXMCSL->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   VYVWMXMCSL->GetXaxis()->SetLabelFont(42);
   VYVWMXMCSL->GetXaxis()->SetLabelSize(0.05);
   VYVWMXMCSL->GetXaxis()->SetTitleSize(0.05);
   VYVWMXMCSL->GetXaxis()->SetTitleFont(42);
   VYVWMXMCSL->GetYaxis()->SetTitle("Entries");
   VYVWMXMCSL->GetYaxis()->SetLabelFont(42);
   VYVWMXMCSL->GetYaxis()->SetLabelSize(0.05);
   VYVWMXMCSL->GetYaxis()->SetTitleSize(0.05);
   VYVWMXMCSL->GetYaxis()->SetTitleFont(42);
   VYVWMXMCSL->GetZaxis()->SetLabelFont(42);
   VYVWMXMCSL->GetZaxis()->SetLabelSize(0.035);
   VYVWMXMCSL->GetZaxis()->SetTitleSize(0.035);
   VYVWMXMCSL->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(VYVWMXMCSL,"");
   
   TH1F *TISMBRWTCY = new TH1F("TISMBRWTCY","NumberOfIsolatedLeptons",10,0,10);
   TISMBRWTCY->SetBinContent(1,1761700);
   TISMBRWTCY->SetBinContent(2,242226.1);
   TISMBRWTCY->SetBinContent(3,1645.017);
   TISMBRWTCY->SetBinContent(4,18.07709);
   TISMBRWTCY->SetMinimum(0.1);
   TISMBRWTCY->SetMaximum(3523399);
   TISMBRWTCY->SetEntries(110876);
   TISMBRWTCY->SetStats(0);

   ci = TColor::GetColor("#990033");
   TISMBRWTCY->SetFillColor(ci);
   TISMBRWTCY->SetFillStyle(3001);

   ci = TColor::GetColor("#990033");
   TISMBRWTCY->SetLineColor(ci);
   TISMBRWTCY->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   TISMBRWTCY->GetXaxis()->SetLabelFont(42);
   TISMBRWTCY->GetXaxis()->SetLabelSize(0.05);
   TISMBRWTCY->GetXaxis()->SetTitleSize(0.05);
   TISMBRWTCY->GetXaxis()->SetTitleFont(42);
   TISMBRWTCY->GetYaxis()->SetTitle("Entries");
   TISMBRWTCY->GetYaxis()->SetLabelFont(42);
   TISMBRWTCY->GetYaxis()->SetLabelSize(0.05);
   TISMBRWTCY->GetYaxis()->SetTitleSize(0.05);
   TISMBRWTCY->GetYaxis()->SetTitleFont(42);
   TISMBRWTCY->GetZaxis()->SetLabelFont(42);
   TISMBRWTCY->GetZaxis()->SetLabelSize(0.035);
   TISMBRWTCY->GetZaxis()->SetTitleSize(0.035);
   TISMBRWTCY->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(TISMBRWTCY,"");
   
   TH1F *UJZJVCKTVH = new TH1F("UJZJVCKTVH","NumberOfIsolatedLeptons",10,0,10);
   UJZJVCKTVH->SetBinContent(1,389817.7);
   UJZJVCKTVH->SetBinContent(2,158387.7);
   UJZJVCKTVH->SetBinContent(3,27214.54);
   UJZJVCKTVH->SetBinContent(4,69.86285);
   UJZJVCKTVH->SetMinimum(0.1);
   UJZJVCKTVH->SetMaximum(779635.4);
   UJZJVCKTVH->SetEntries(74150);
   UJZJVCKTVH->SetStats(0);

   ci = TColor::GetColor("#ff937e");
   UJZJVCKTVH->SetFillColor(ci);
   UJZJVCKTVH->SetFillStyle(3001);

   ci = TColor::GetColor("#ff937e");
   UJZJVCKTVH->SetLineColor(ci);
   UJZJVCKTVH->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   UJZJVCKTVH->GetXaxis()->SetLabelFont(42);
   UJZJVCKTVH->GetXaxis()->SetLabelSize(0.05);
   UJZJVCKTVH->GetXaxis()->SetTitleSize(0.05);
   UJZJVCKTVH->GetXaxis()->SetTitleFont(42);
   UJZJVCKTVH->GetYaxis()->SetTitle("Entries");
   UJZJVCKTVH->GetYaxis()->SetLabelFont(42);
   UJZJVCKTVH->GetYaxis()->SetLabelSize(0.05);
   UJZJVCKTVH->GetYaxis()->SetTitleSize(0.05);
   UJZJVCKTVH->GetYaxis()->SetTitleFont(42);
   UJZJVCKTVH->GetZaxis()->SetLabelFont(42);
   UJZJVCKTVH->GetZaxis()->SetLabelSize(0.035);
   UJZJVCKTVH->GetZaxis()->SetTitleSize(0.035);
   UJZJVCKTVH->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(UJZJVCKTVH,"");
   
   TH1F *RSJCXMIOUQ = new TH1F("RSJCXMIOUQ","NumberOfIsolatedLeptons",10,0,10);
   RSJCXMIOUQ->SetBinContent(1,1767690);
   RSJCXMIOUQ->SetBinContent(2,234754);
   RSJCXMIOUQ->SetBinContent(3,1651.785);
   RSJCXMIOUQ->SetMinimum(0.1);
   RSJCXMIOUQ->SetMaximum(3535379);
   RSJCXMIOUQ->SetEntries(113948);
   RSJCXMIOUQ->SetStats(0);

   ci = TColor::GetColor("#a42400");
   RSJCXMIOUQ->SetFillColor(ci);
   RSJCXMIOUQ->SetFillStyle(3001);

   ci = TColor::GetColor("#a42400");
   RSJCXMIOUQ->SetLineColor(ci);
   RSJCXMIOUQ->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   RSJCXMIOUQ->GetXaxis()->SetLabelFont(42);
   RSJCXMIOUQ->GetXaxis()->SetLabelSize(0.05);
   RSJCXMIOUQ->GetXaxis()->SetTitleSize(0.05);
   RSJCXMIOUQ->GetXaxis()->SetTitleFont(42);
   RSJCXMIOUQ->GetYaxis()->SetTitle("Entries");
   RSJCXMIOUQ->GetYaxis()->SetLabelFont(42);
   RSJCXMIOUQ->GetYaxis()->SetLabelSize(0.05);
   RSJCXMIOUQ->GetYaxis()->SetTitleSize(0.05);
   RSJCXMIOUQ->GetYaxis()->SetTitleFont(42);
   RSJCXMIOUQ->GetZaxis()->SetLabelFont(42);
   RSJCXMIOUQ->GetZaxis()->SetLabelSize(0.035);
   RSJCXMIOUQ->GetZaxis()->SetTitleSize(0.035);
   RSJCXMIOUQ->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(RSJCXMIOUQ,"");
   
   TH1F *RCZRNBHUMO = new TH1F("RCZRNBHUMO","NumberOfIsolatedLeptons",10,0,10);
   RCZRNBHUMO->SetBinContent(1,85265.43);
   RCZRNBHUMO->SetBinContent(2,23153.81);
   RCZRNBHUMO->SetBinContent(3,65.94067);
   RCZRNBHUMO->SetMinimum(0.1);
   RCZRNBHUMO->SetMaximum(170530.9);
   RCZRNBHUMO->SetEntries(578634);
   RCZRNBHUMO->SetStats(0);

   ci = TColor::GetColor("#001544");
   RCZRNBHUMO->SetFillColor(ci);
   RCZRNBHUMO->SetFillStyle(3001);

   ci = TColor::GetColor("#001544");
   RCZRNBHUMO->SetLineColor(ci);
   RCZRNBHUMO->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   RCZRNBHUMO->GetXaxis()->SetLabelFont(42);
   RCZRNBHUMO->GetXaxis()->SetLabelSize(0.05);
   RCZRNBHUMO->GetXaxis()->SetTitleSize(0.05);
   RCZRNBHUMO->GetXaxis()->SetTitleFont(42);
   RCZRNBHUMO->GetYaxis()->SetTitle("Entries");
   RCZRNBHUMO->GetYaxis()->SetLabelFont(42);
   RCZRNBHUMO->GetYaxis()->SetLabelSize(0.05);
   RCZRNBHUMO->GetYaxis()->SetTitleSize(0.05);
   RCZRNBHUMO->GetYaxis()->SetTitleFont(42);
   RCZRNBHUMO->GetZaxis()->SetLabelFont(42);
   RCZRNBHUMO->GetZaxis()->SetLabelSize(0.035);
   RCZRNBHUMO->GetZaxis()->SetTitleSize(0.035);
   RCZRNBHUMO->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(RCZRNBHUMO,"");
   
   TH1F *UVMBKXTAYR = new TH1F("UVMBKXTAYR","NumberOfIsolatedLeptons",10,0,10);
   UVMBKXTAYR->SetBinContent(1,423917);
   UVMBKXTAYR->SetBinContent(2,3615.555);
   UVMBKXTAYR->SetBinContent(3,12.48829);
   UVMBKXTAYR->SetMinimum(0.1);
   UVMBKXTAYR->SetMaximum(847833.9);
   UVMBKXTAYR->SetEntries(2922492);
   UVMBKXTAYR->SetStats(0);

   ci = TColor::GetColor("#99cccc");
   UVMBKXTAYR->SetFillColor(ci);
   UVMBKXTAYR->SetFillStyle(3001);

   ci = TColor::GetColor("#99cccc");
   UVMBKXTAYR->SetLineColor(ci);
   UVMBKXTAYR->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   UVMBKXTAYR->GetXaxis()->SetLabelFont(42);
   UVMBKXTAYR->GetXaxis()->SetLabelSize(0.05);
   UVMBKXTAYR->GetXaxis()->SetTitleSize(0.05);
   UVMBKXTAYR->GetXaxis()->SetTitleFont(42);
   UVMBKXTAYR->GetYaxis()->SetTitle("Entries");
   UVMBKXTAYR->GetYaxis()->SetLabelFont(42);
   UVMBKXTAYR->GetYaxis()->SetLabelSize(0.05);
   UVMBKXTAYR->GetYaxis()->SetTitleSize(0.05);
   UVMBKXTAYR->GetYaxis()->SetTitleFont(42);
   UVMBKXTAYR->GetZaxis()->SetLabelFont(42);
   UVMBKXTAYR->GetZaxis()->SetLabelSize(0.035);
   UVMBKXTAYR->GetZaxis()->SetTitleSize(0.035);
   UVMBKXTAYR->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(UVMBKXTAYR,"");
   
   TH1F *RMFLUZLFJW = new TH1F("RMFLUZLFJW","NumberOfIsolatedLeptons",10,0,10);
   RMFLUZLFJW->SetBinContent(1,85113.71);
   RMFLUZLFJW->SetBinContent(2,23174.02);
   RMFLUZLFJW->SetBinContent(3,60.40325);
   RMFLUZLFJW->SetMinimum(0.1);
   RMFLUZLFJW->SetMaximum(170227.4);
   RMFLUZLFJW->SetEntries(577845);
   RMFLUZLFJW->SetStats(0);

   ci = TColor::GetColor("#620e00");
   RMFLUZLFJW->SetFillColor(ci);
   RMFLUZLFJW->SetFillStyle(3001);

   ci = TColor::GetColor("#620e00");
   RMFLUZLFJW->SetLineColor(ci);
   RMFLUZLFJW->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   RMFLUZLFJW->GetXaxis()->SetLabelFont(42);
   RMFLUZLFJW->GetXaxis()->SetLabelSize(0.05);
   RMFLUZLFJW->GetXaxis()->SetTitleSize(0.05);
   RMFLUZLFJW->GetXaxis()->SetTitleFont(42);
   RMFLUZLFJW->GetYaxis()->SetTitle("Entries");
   RMFLUZLFJW->GetYaxis()->SetLabelFont(42);
   RMFLUZLFJW->GetYaxis()->SetLabelSize(0.05);
   RMFLUZLFJW->GetYaxis()->SetTitleSize(0.05);
   RMFLUZLFJW->GetYaxis()->SetTitleFont(42);
   RMFLUZLFJW->GetZaxis()->SetLabelFont(42);
   RMFLUZLFJW->GetZaxis()->SetLabelSize(0.035);
   RMFLUZLFJW->GetZaxis()->SetTitleSize(0.035);
   RMFLUZLFJW->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(RMFLUZLFJW,"");
   
   TH1F *DIMOEYICAO = new TH1F("DIMOEYICAO","NumberOfIsolatedLeptons",10,0,10);
   DIMOEYICAO->SetBinContent(1,424423.4);
   DIMOEYICAO->SetBinContent(2,3527.835);
   DIMOEYICAO->SetBinContent(3,14.442);
   DIMOEYICAO->SetBinContent(4,0.2831767);
   DIMOEYICAO->SetMinimum(0.1);
   DIMOEYICAO->SetMaximum(848846.8);
   DIMOEYICAO->SetEntries(2926938);
   DIMOEYICAO->SetStats(0);

   ci = TColor::GetColor("#6b6882");
   DIMOEYICAO->SetFillColor(ci);
   DIMOEYICAO->SetFillStyle(3001);

   ci = TColor::GetColor("#6b6882");
   DIMOEYICAO->SetLineColor(ci);
   DIMOEYICAO->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   DIMOEYICAO->GetXaxis()->SetLabelFont(42);
   DIMOEYICAO->GetXaxis()->SetLabelSize(0.05);
   DIMOEYICAO->GetXaxis()->SetTitleSize(0.05);
   DIMOEYICAO->GetXaxis()->SetTitleFont(42);
   DIMOEYICAO->GetYaxis()->SetTitle("Entries");
   DIMOEYICAO->GetYaxis()->SetLabelFont(42);
   DIMOEYICAO->GetYaxis()->SetLabelSize(0.05);
   DIMOEYICAO->GetYaxis()->SetTitleSize(0.05);
   DIMOEYICAO->GetYaxis()->SetTitleFont(42);
   DIMOEYICAO->GetZaxis()->SetLabelFont(42);
   DIMOEYICAO->GetZaxis()->SetLabelSize(0.035);
   DIMOEYICAO->GetZaxis()->SetTitleSize(0.035);
   DIMOEYICAO->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(DIMOEYICAO,"");
   
   TH1F *FHEMTSFWUB = new TH1F("FHEMTSFWUB","NumberOfIsolatedLeptons",10,0,10);
   FHEMTSFWUB->SetBinContent(1,652207.1);
   FHEMTSFWUB->SetBinContent(2,140543.5);
   FHEMTSFWUB->SetBinContent(3,12565.49);
   FHEMTSFWUB->SetBinContent(4,30.22048);
   FHEMTSFWUB->SetMinimum(0.1);
   FHEMTSFWUB->SetMaximum(1304414);
   FHEMTSFWUB->SetEntries(133254);
   FHEMTSFWUB->SetStats(0);
   FHEMTSFWUB->SetFillColor(4);
   FHEMTSFWUB->SetFillStyle(3001);
   FHEMTSFWUB->SetLineColor(4);
   FHEMTSFWUB->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   FHEMTSFWUB->GetXaxis()->SetLabelFont(42);
   FHEMTSFWUB->GetXaxis()->SetLabelSize(0.05);
   FHEMTSFWUB->GetXaxis()->SetTitleSize(0.05);
   FHEMTSFWUB->GetXaxis()->SetTitleFont(42);
   FHEMTSFWUB->GetYaxis()->SetTitle("Entries");
   FHEMTSFWUB->GetYaxis()->SetLabelFont(42);
   FHEMTSFWUB->GetYaxis()->SetLabelSize(0.05);
   FHEMTSFWUB->GetYaxis()->SetTitleSize(0.05);
   FHEMTSFWUB->GetYaxis()->SetTitleFont(42);
   FHEMTSFWUB->GetZaxis()->SetLabelFont(42);
   FHEMTSFWUB->GetZaxis()->SetLabelSize(0.035);
   FHEMTSFWUB->GetZaxis()->SetTitleSize(0.035);
   FHEMTSFWUB->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(FHEMTSFWUB,"");
   
   TH1F *AKAFGYUXEC = new TH1F("AKAFGYUXEC","NumberOfIsolatedLeptons",10,0,10);
   AKAFGYUXEC->SetBinContent(1,3398386);
   AKAFGYUXEC->SetBinContent(2,430227.5);
   AKAFGYUXEC->SetBinContent(3,3836.872);
   AKAFGYUXEC->SetBinContent(4,14.42436);
   AKAFGYUXEC->SetMinimum(0.1);
   AKAFGYUXEC->SetMaximum(6796772);
   AKAFGYUXEC->SetEntries(265417);
   AKAFGYUXEC->SetStats(0);

   ci = TColor::GetColor("#007db5");
   AKAFGYUXEC->SetFillColor(ci);
   AKAFGYUXEC->SetFillStyle(3001);

   ci = TColor::GetColor("#007db5");
   AKAFGYUXEC->SetLineColor(ci);
   AKAFGYUXEC->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   AKAFGYUXEC->GetXaxis()->SetLabelFont(42);
   AKAFGYUXEC->GetXaxis()->SetLabelSize(0.05);
   AKAFGYUXEC->GetXaxis()->SetTitleSize(0.05);
   AKAFGYUXEC->GetXaxis()->SetTitleFont(42);
   AKAFGYUXEC->GetYaxis()->SetTitle("Entries");
   AKAFGYUXEC->GetYaxis()->SetLabelFont(42);
   AKAFGYUXEC->GetYaxis()->SetLabelSize(0.05);
   AKAFGYUXEC->GetYaxis()->SetTitleSize(0.05);
   AKAFGYUXEC->GetYaxis()->SetTitleFont(42);
   AKAFGYUXEC->GetZaxis()->SetLabelFont(42);
   AKAFGYUXEC->GetZaxis()->SetLabelSize(0.035);
   AKAFGYUXEC->GetZaxis()->SetTitleSize(0.035);
   AKAFGYUXEC->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(AKAFGYUXEC,"");
   
   TH1F *XZGYLIITMQ = new TH1F("XZGYLIITMQ","NumberOfIsolatedLeptons",10,0,10);
   XZGYLIITMQ->SetBinContent(1,3397401);
   XZGYLIITMQ->SetBinContent(2,431596.5);
   XZGYLIITMQ->SetBinContent(3,3308.866);
   XZGYLIITMQ->SetMinimum(0.1);
   XZGYLIITMQ->SetMaximum(6794802);
   XZGYLIITMQ->SetEntries(270465);
   XZGYLIITMQ->SetStats(0);

   ci = TColor::GetColor("#6a826c");
   XZGYLIITMQ->SetFillColor(ci);
   XZGYLIITMQ->SetFillStyle(3001);

   ci = TColor::GetColor("#6a826c");
   XZGYLIITMQ->SetLineColor(ci);
   XZGYLIITMQ->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   XZGYLIITMQ->GetXaxis()->SetLabelFont(42);
   XZGYLIITMQ->GetXaxis()->SetLabelSize(0.05);
   XZGYLIITMQ->GetXaxis()->SetTitleSize(0.05);
   XZGYLIITMQ->GetXaxis()->SetTitleFont(42);
   XZGYLIITMQ->GetYaxis()->SetTitle("Entries");
   XZGYLIITMQ->GetYaxis()->SetLabelFont(42);
   XZGYLIITMQ->GetYaxis()->SetLabelSize(0.05);
   XZGYLIITMQ->GetYaxis()->SetTitleSize(0.05);
   XZGYLIITMQ->GetYaxis()->SetTitleFont(42);
   XZGYLIITMQ->GetZaxis()->SetLabelFont(42);
   XZGYLIITMQ->GetZaxis()->SetLabelSize(0.035);
   XZGYLIITMQ->GetZaxis()->SetTitleSize(0.035);
   XZGYLIITMQ->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(XZGYLIITMQ,"");
   
   TH1F *QUQIAYKOYA = new TH1F("QUQIAYKOYA","NumberOfIsolatedLeptons",10,0,10);
   QUQIAYKOYA->SetBinContent(1,1.778544e+07);
   QUQIAYKOYA->SetBinContent(2,285470.1);
   QUQIAYKOYA->SetBinContent(3,2034.346);
   QUQIAYKOYA->SetMinimum(0.1);
   QUQIAYKOYA->SetMaximum(3.557088e+07);
   QUQIAYKOYA->SetEntries(504603);
   QUQIAYKOYA->SetStats(0);

   ci = TColor::GetColor("#00ae7e");
   QUQIAYKOYA->SetFillColor(ci);
   QUQIAYKOYA->SetFillStyle(3001);

   ci = TColor::GetColor("#00ae7e");
   QUQIAYKOYA->SetLineColor(ci);
   QUQIAYKOYA->GetXaxis()->SetTitle("Number Of Isolated Leptons");
   QUQIAYKOYA->GetXaxis()->SetLabelFont(42);
   QUQIAYKOYA->GetXaxis()->SetLabelSize(0.05);
   QUQIAYKOYA->GetXaxis()->SetTitleSize(0.05);
   QUQIAYKOYA->GetXaxis()->SetTitleFont(42);
   QUQIAYKOYA->GetYaxis()->SetTitle("Entries");
   QUQIAYKOYA->GetYaxis()->SetLabelFont(42);
   QUQIAYKOYA->GetYaxis()->SetLabelSize(0.05);
   QUQIAYKOYA->GetYaxis()->SetTitleSize(0.05);
   QUQIAYKOYA->GetYaxis()->SetTitleFont(42);
   QUQIAYKOYA->GetZaxis()->SetLabelFont(42);
   QUQIAYKOYA->GetZaxis()->SetLabelSize(0.035);
   QUQIAYKOYA->GetZaxis()->SetTitleSize(0.035);
   QUQIAYKOYA->GetZaxis()->SetTitleFont(42);
   RVHMHAEFPF->Add(QUQIAYKOYA,"");
   RVHMHAEFPF->Draw("");
   RVHMHAEFPF->GetXaxis()->SetRangeUser(0,5);

   TPaveText *pt = new TPaveText(0.2737644,0.9339831,0.7262356,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("NumberOfIsolatedLeptons");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.7,0.1,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","","");
   entry=leg->AddEntry("XNGFDWDAQS","e^{+}e^{-} #rightarrow #nu #nu qqqq","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VNJVDVCJXC","e^{+}e^{-} #rightarrow l #nu qqqq","f");

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
   entry=leg->AddEntry("IIJPBVFXRY","e^{+}e^{-} #rightarrow llqqqq","f");

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
   entry=leg->AddEntry("KFTKCSTEGZ","e^{+}e^{-} #rightarrow qqqq","f");

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
   entry=leg->AddEntry("SOKBWSHNAO","e^{+}e^{-} #rightarrow #nu #nu qq","f");

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
   entry=leg->AddEntry("IEFHDSAPEI","e^{+}e^{-} #rightarrow l #nu qq","f");

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
   entry=leg->AddEntry("BKCJOBUILP","e^{+}e^{-} #rightarrow qqll","f");

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
   entry=leg->AddEntry("FCZIUOPBER","e^{+}e^{-} #rightarrow qq","f");

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
   entry=leg->AddEntry("VYVWMXMCSL","#gamma_{EPA} e^{-} #rightarrow qqqq e^{-}","f");
   entry->SetFillColor(3);
   entry->SetFillStyle(3001);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TISMBRWTCY","#gamma_{BS} e^{-} #rightarrow qqqq e^{-}","f");

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
   entry=leg->AddEntry("UJZJVCKTVH","e^{+} #gamma_{EPA} #rightarrow qqqq e^{+}","f");

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
   entry=leg->AddEntry("RSJCXMIOUQ","e^{+} #gamma_{BS} #rightarrow qqqq e^{+}","f");

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
   entry=leg->AddEntry("RCZRNBHUMO","#gamma_{EPA} e^{-} #rightarrow qqqq #nu","f");

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
   entry=leg->AddEntry("UVMBKXTAYR","#gamma_{BS} e^{-} #rightarrow qqqq #nu","f");

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
   entry=leg->AddEntry("RMFLUZLFJW","e^{+} #gamma_{EPA} #rightarrow qqqq #nu","f");

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
   entry=leg->AddEntry("DIMOEYICAO","e^{+} #gamma_{BS} #rightarrow qqqq #nu","f");

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
   entry=leg->AddEntry("FHEMTSFWUB","#gamma_{EPA}#gamma_{EPA} #rightarrow qqqq","f");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AKAFGYUXEC","#gamma_{EPA}#gamma_{BS} #rightarrow qqqq","f");

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
   entry=leg->AddEntry("XZGYLIITMQ","#gamma_{BS}#gamma_{EPA} #rightarrow qqqq","f");

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
   entry=leg->AddEntry("QUQIAYKOYA","#gamma_{BS}#gamma_{BS} #rightarrow qqqq","f");
   entry=leg->AddEntry("","","");

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
   XQLPQATFDP->Modified();
   XQLPQATFDP->cd();
   XQLPQATFDP->SetSelected(XQLPQATFDP);
   XQLPQATFDP->SaveAs("NumberOfIsolatedLeptons_3000GeV_No_Cuts_StackPlot.pdf");
}
