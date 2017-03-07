{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar  7 15:12:28 2017) by ROOT version5.34/37
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH2F *axesEj = new TH2F("axesEj","",100,0,105,1000,8,22);
   axesEj->SetStats(0);
   axesEj->SetLineWidth(2);
   axesEj->GetXaxis()->SetTitle("E_{K^{0}_{L}} [GeV]");
   axesEj->GetXaxis()->SetNdivisions(505);
   axesEj->GetXaxis()->SetLabelFont(132);
   axesEj->GetXaxis()->SetLabelSize(0.05);
   axesEj->GetXaxis()->SetTitleSize(0.05);
   axesEj->GetXaxis()->SetTitleOffset(0.95);
   axesEj->GetXaxis()->SetTitleFont(132);
   axesEj->GetYaxis()->SetTitle("#sigma_{Reco} / E_{Reco} [%]");
   axesEj->GetYaxis()->SetLabelFont(132);
   axesEj->GetYaxis()->SetLabelSize(0.05);
   axesEj->GetYaxis()->SetTitleSize(0.05);
   axesEj->GetYaxis()->SetTitleFont(132);
   axesEj->GetZaxis()->SetLabelFont(132);
   axesEj->GetZaxis()->SetLabelSize(0.05);
   axesEj->GetZaxis()->SetTitleSize(0.05);
   axesEj->GetZaxis()->SetTitleFont(132);
   axesEj->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetPoint(0,10,19.19687);
   gre->SetPointError(0,0,0.1954119);
   gre->SetPoint(1,20,14.06828);
   gre->SetPointError(1,0,0.1382851);
   gre->SetPoint(2,30,11.09014);
   gre->SetPointError(2,0,0.106341);
   gre->SetPoint(3,40,9.880795);
   gre->SetPointError(3,0,0.09891648);
   gre->SetPoint(4,50,9.665278);
   gre->SetPointError(4,0,0.09991535);
   gre->SetPoint(5,60,9.581345);
   gre->SetPointError(5,0,0.09889371);
   gre->SetPoint(6,70,9.849673);
   gre->SetPointError(6,0,0.1006607);
   gre->SetPoint(7,80,10.48809);
   gre->SetPointError(7,0,0.1224119);
   gre->SetPoint(8,90,10.53687);
   gre->SetPointError(8,0,0.1257219);
   gre->SetPoint(9,100,10.79195);
   gre->SetPointError(9,0,0.1330811);
   gre->Draw(" pl");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
