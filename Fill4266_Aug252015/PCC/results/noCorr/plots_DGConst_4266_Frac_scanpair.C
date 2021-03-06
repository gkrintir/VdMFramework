{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Feb  7 16:33:52 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-1.25,-0.1374999,12.25,1.237499);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(50);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,10,0.0287882);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,10,0.9901035);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,10,0.003613489);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,10,0.9900102);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,10,0.01936714);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,4,0.01185005);
   gre->SetPointError(5,0,0);
   gre->SetPoint(6,4,0.01402741);
   gre->SetPointError(6,0,0);
   gre->SetPoint(7,4,0.9781067);
   gre->SetPointError(7,0,0);
   gre->SetPoint(8,4,0.9900007);
   gre->SetPointError(8,0,0);
   gre->SetPoint(9,4,0.9820855);
   gre->SetPointError(9,0,0);
   gre->SetPoint(10,5,0.01061536);
   gre->SetPointError(10,0,0);
   gre->SetPoint(11,5,0.9769114);
   gre->SetPointError(11,0,0);
   gre->SetPoint(12,5,0.01356289);
   gre->SetPointError(12,0,0);
   gre->SetPoint(13,5,0.97781);
   gre->SetPointError(13,0,0);
   gre->SetPoint(14,5,0.02525706);
   gre->SetPointError(14,0,0);
   gre->SetPoint(15,6,0.997643);
   gre->SetPointError(15,0,0);
   gre->SetPoint(16,6,0.9890417);
   gre->SetPointError(16,0,0);
   gre->SetPoint(17,6,0.5035199);
   gre->SetPointError(17,0,0);
   gre->SetPoint(18,6,0.9908127);
   gre->SetPointError(18,0,0);
   gre->SetPoint(19,6,1);
   gre->SetPointError(19,0,0);
   gre->SetPoint(20,7,0.9601911);
   gre->SetPointError(20,0,0);
   gre->SetPoint(21,7,0.02767868);
   gre->SetPointError(21,0,0);
   gre->SetPoint(22,7,0.9821835);
   gre->SetPointError(22,0,0);
   gre->SetPoint(23,7,0.01669805);
   gre->SetPointError(23,0,0);
   gre->SetPoint(24,7,0.04200481);
   gre->SetPointError(24,0,0);
   gre->SetPoint(25,1,0.01149498);
   gre->SetPointError(25,0,0);
   gre->SetPoint(26,1,0.01156823);
   gre->SetPointError(26,0,0);
   gre->SetPoint(27,1,0.02788543);
   gre->SetPointError(27,0,0);
   gre->SetPoint(28,1,0.02737124);
   gre->SetPointError(28,0,0);
   gre->SetPoint(29,1,0.9912069);
   gre->SetPointError(29,0,0);
   gre->SetPoint(30,2,0.9999616);
   gre->SetPointError(30,0,0);
   gre->SetPoint(31,2,0.3572212);
   gre->SetPointError(31,0,0);
   gre->SetPoint(32,2,0.9968343);
   gre->SetPointError(32,0,0);
   gre->SetPoint(33,2,0.9992503);
   gre->SetPointError(33,0,0);
   gre->SetPoint(34,2,0.9909869);
   gre->SetPointError(34,0,0);
   gre->SetPoint(35,3,0.9900014);
   gre->SetPointError(35,0,0);
   gre->SetPoint(36,3,7.738807e-06);
   gre->SetPointError(36,0,0);
   gre->SetPoint(37,3,0.9900024);
   gre->SetPointError(37,0,0);
   gre->SetPoint(38,3,0.9993701);
   gre->SetPointError(38,0,0);
   gre->SetPoint(39,3,0.9999988);
   gre->SetPointError(39,0,0);
   gre->SetPoint(40,8,1);
   gre->SetPointError(40,0,0);
   gre->SetPoint(41,8,1);
   gre->SetPointError(41,0,0);
   gre->SetPoint(42,8,0.9998774);
   gre->SetPointError(42,0,0);
   gre->SetPoint(43,8,0.9999998);
   gre->SetPointError(43,0,0);
   gre->SetPoint(44,8,0.9874549);
   gre->SetPointError(44,0,0);
   gre->SetPoint(45,9,0.05682143);
   gre->SetPointError(45,0,0);
   gre->SetPoint(46,9,0.07573841);
   gre->SetPointError(46,0,0);
   gre->SetPoint(47,9,0.959541);
   gre->SetPointError(47,0,0);
   gre->SetPoint(48,9,0.9655079);
   gre->SetPointError(48,0,0);
   gre->SetPoint(49,9,0.04669487);
   gre->SetPointError(49,0,0);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","4266 PCC DGConst Frac",100,0.1,10.9);
   Graph_Graph40->SetMinimum(0);
   Graph_Graph40->SetMaximum(1.099999);
   Graph_Graph40->SetDirectory(0);
   Graph_Graph40->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph40->SetLineColor(ci);
   Graph_Graph40->GetXaxis()->SetTitle("Scan");
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetTitle("Frac");
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph40);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.2902874,0.94,0.7097126,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("4266 PCC DGConst Frac");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
