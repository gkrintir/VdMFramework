{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Feb  7 16:33:53 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,700,476);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-367.0375,0.1236723,3303.338,1.232626);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.4706081);
   gre->SetPointError(0,0,0.03705328);
   gre->SetPoint(1,2211,0.4943072);
   gre->SetPointError(1,0,0.09924951);
   gre->SetPoint(2,771,0.4354516);
   gre->SetPointError(2,0,0.0611533);
   gre->SetPoint(3,51,0.4592045);
   gre->SetPointError(3,0,0.05381436);
   gre->SetPoint(4,2674,0.5627148);
   gre->SetPointError(4,0,0.04456826);
   
   TH1F *Graph_Graph63 = new TH1F("Graph_Graph63","4266 PCC DGConst Const",100,0,2936.3);
   Graph_Graph63->SetMinimum(0.2345677);
   Graph_Graph63->SetMaximum(1.121731);
   Graph_Graph63->SetDirectory(0);
   Graph_Graph63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph63->SetLineColor(ci);
   Graph_Graph63->GetXaxis()->SetTitle("BCID");
   Graph_Graph63->GetXaxis()->SetLabelFont(42);
   Graph_Graph63->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph63->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph63->GetXaxis()->SetTitleFont(42);
   Graph_Graph63->GetYaxis()->SetTitle("Const");
   Graph_Graph63->GetYaxis()->SetLabelFont(42);
   Graph_Graph63->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph63->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph63->GetYaxis()->SetTitleFont(42);
   Graph_Graph63->GetZaxis()->SetLabelFont(42);
   Graph_Graph63->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph63->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph63->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph63);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 2");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.6422297);
   gre->SetPointError(0,0,0.02343237);
   gre->SetPoint(1,2211,0.5810972);
   gre->SetPointError(1,0,0.01955721);
   gre->SetPoint(2,771,0.4720974);
   gre->SetPointError(2,0,0.02702953);
   gre->SetPoint(3,51,0.5930098);
   gre->SetPointError(3,0,0.02069287);
   gre->SetPoint(4,2674,0.5574382);
   gre->SetPointError(4,0,0.03121494);
   
   TH1F *Graph_Graph64 = new TH1F("Graph_Graph64","4266 PCC DGConst Const  Scan 2",100,0,2936.3);
   Graph_Graph64->SetMinimum(0.4230085);
   Graph_Graph64->SetMaximum(0.6877215);
   Graph_Graph64->SetDirectory(0);
   Graph_Graph64->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph64->SetLineColor(ci);
   Graph_Graph64->GetXaxis()->SetLabelFont(42);
   Graph_Graph64->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph64->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph64->GetXaxis()->SetTitleFont(42);
   Graph_Graph64->GetYaxis()->SetLabelFont(42);
   Graph_Graph64->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph64->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph64->GetYaxis()->SetTitleFont(42);
   Graph_Graph64->GetZaxis()->SetLabelFont(42);
   Graph_Graph64->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph64->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph64->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph64);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 3");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.6746904);
   gre->SetPointError(0,0,0.0203076);
   gre->SetPoint(1,2211,0.661359);
   gre->SetPointError(1,0,0.0001574607);
   gre->SetPoint(2,771,0.6102137);
   gre->SetPointError(2,0,0.01847818);
   gre->SetPoint(3,51,0.6601527);
   gre->SetPointError(3,0,0.02088145);
   gre->SetPoint(4,2674,0.7424375);
   gre->SetPointError(4,0,0.02119682);
   
   TH1F *Graph_Graph65 = new TH1F("Graph_Graph65","4266 PCC DGConst Const  Scan 3",100,0,2936.3);
   Graph_Graph65->SetMinimum(0.5745456);
   Graph_Graph65->SetMaximum(0.7808242);
   Graph_Graph65->SetDirectory(0);
   Graph_Graph65->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph65->SetLineColor(ci);
   Graph_Graph65->GetXaxis()->SetLabelFont(42);
   Graph_Graph65->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph65->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetXaxis()->SetTitleFont(42);
   Graph_Graph65->GetYaxis()->SetLabelFont(42);
   Graph_Graph65->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph65->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetYaxis()->SetTitleFont(42);
   Graph_Graph65->GetZaxis()->SetLabelFont(42);
   Graph_Graph65->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph65->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph65->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph65);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 4");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.5399561);
   gre->SetPointError(0,0,0.04239673);
   gre->SetPoint(1,2211,0.514686);
   gre->SetPointError(1,0,0.04159224);
   gre->SetPoint(2,771,0.3);
   gre->SetPointError(2,0,0.01296124);
   gre->SetPoint(3,51,0.6946642);
   gre->SetPointError(3,0,0.02414582);
   gre->SetPoint(4,2674,0.5514242);
   gre->SetPointError(4,0,0.04144805);
   
   TH1F *Graph_Graph66 = new TH1F("Graph_Graph66","4266 PCC DGConst Const  Scan 4",100,0,2936.3);
   Graph_Graph66->SetMinimum(0.2438616);
   Graph_Graph66->SetMaximum(0.7619871);
   Graph_Graph66->SetDirectory(0);
   Graph_Graph66->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph66->SetLineColor(ci);
   Graph_Graph66->GetXaxis()->SetLabelFont(42);
   Graph_Graph66->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph66->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetXaxis()->SetTitleFont(42);
   Graph_Graph66->GetYaxis()->SetLabelFont(42);
   Graph_Graph66->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph66->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetYaxis()->SetTitleFont(42);
   Graph_Graph66->GetZaxis()->SetLabelFont(42);
   Graph_Graph66->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph66->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph66->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph66);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 5");
   gre->SetFillColor(1);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.6332467);
   gre->SetPointError(0,0,0.1552415);
   gre->SetPoint(1,2211,0.3857183);
   gre->SetPointError(1,0,0.1364063);
   gre->SetPoint(2,771,0.532976);
   gre->SetPointError(2,0,0.1417617);
   gre->SetPoint(3,51,0.3075692);
   gre->SetPointError(3,0,0.6149885);
   gre->SetPoint(4,2674,0.9543231);
   gre->SetPointError(4,0,0.0433517);
   
   TH1F *Graph_Graph67 = new TH1F("Graph_Graph67","4266 PCC DGConst Const  Scan 5",100,0,2936.3);
   Graph_Graph67->SetMinimum(-0.4379288);
   Graph_Graph67->SetMaximum(1.128184);
   Graph_Graph67->SetDirectory(0);
   Graph_Graph67->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph67->SetLineColor(ci);
   Graph_Graph67->GetXaxis()->SetLabelFont(42);
   Graph_Graph67->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph67->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetXaxis()->SetTitleFont(42);
   Graph_Graph67->GetYaxis()->SetLabelFont(42);
   Graph_Graph67->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph67->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetYaxis()->SetTitleFont(42);
   Graph_Graph67->GetZaxis()->SetLabelFont(42);
   Graph_Graph67->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph67->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph67->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph67);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 6");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.6049837);
   gre->SetPointError(0,0,0.0319624);
   gre->SetPoint(1,2211,0.3498111);
   gre->SetPointError(1,0,0.07903415);
   gre->SetPoint(2,771,0.5812787);
   gre->SetPointError(2,0,0.03170569);
   gre->SetPoint(3,51,0.581058);
   gre->SetPointError(3,0,0.03429476);
   gre->SetPoint(4,2674,0.61149);
   gre->SetPointError(4,0,1.194142e-05);
   
   TH1F *Graph_Graph68 = new TH1F("Graph_Graph68","4266 PCC DGConst Const  Scan 6",100,0,2936.3);
   Graph_Graph68->SetMinimum(0.23416);
   Graph_Graph68->SetMaximum(0.673563);
   Graph_Graph68->SetDirectory(0);
   Graph_Graph68->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph68->SetLineColor(ci);
   Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph68->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph68->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph68->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph68->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph68->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph68->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph68->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph68);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 7");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(26);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.3000001);
   gre->SetPointError(0,0,0.1510818);
   gre->SetPoint(1,2211,0.3);
   gre->SetPointError(1,0,0.5171169);
   gre->SetPoint(2,771,0.3836183);
   gre->SetPointError(2,0,0.1354372);
   gre->SetPoint(3,51,0.4086215);
   gre->SetPointError(3,0,0.1507946);
   gre->SetPoint(4,2674,0.3);
   gre->SetPointError(4,0,0.6167617);
   
   TH1F *Graph_Graph69 = new TH1F("Graph_Graph69","4266 PCC DGConst Const  Scan 7",100,0,2936.3);
   Graph_Graph69->SetMinimum(-0.440114);
   Graph_Graph69->SetMaximum(1.040114);
   Graph_Graph69->SetDirectory(0);
   Graph_Graph69->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph69->SetLineColor(ci);
   Graph_Graph69->GetXaxis()->SetLabelFont(42);
   Graph_Graph69->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph69->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetXaxis()->SetTitleFont(42);
   Graph_Graph69->GetYaxis()->SetLabelFont(42);
   Graph_Graph69->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph69->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetYaxis()->SetTitleFont(42);
   Graph_Graph69->GetZaxis()->SetLabelFont(42);
   Graph_Graph69->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph69->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph69->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph69);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 8");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.7055602);
   gre->SetPointError(0,0,5.043798e-05);
   gre->SetPoint(1,2211,0.6726193);
   gre->SetPointError(1,0,3.821508e-06);
   gre->SetPoint(2,771,0.6876907);
   gre->SetPointError(2,0,0.00164559);
   gre->SetPoint(3,51,0.7197676);
   gre->SetPointError(3,0,0.0004417411);
   gre->SetPoint(4,2674,0.8652939);
   gre->SetPointError(4,0,0.00173018);
   
   TH1F *Graph_Graph70 = new TH1F("Graph_Graph70","4266 PCC DGConst Const  Scan 8",100,0,2936.3);
   Graph_Graph70->SetMinimum(0.6531746);
   Graph_Graph70->SetMaximum(0.8864649);
   Graph_Graph70->SetDirectory(0);
   Graph_Graph70->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph70->SetLineColor(ci);
   Graph_Graph70->GetXaxis()->SetLabelFont(42);
   Graph_Graph70->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph70->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetXaxis()->SetTitleFont(42);
   Graph_Graph70->GetYaxis()->SetLabelFont(42);
   Graph_Graph70->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph70->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetYaxis()->SetTitleFont(42);
   Graph_Graph70->GetZaxis()->SetLabelFont(42);
   Graph_Graph70->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph70->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph70->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph70);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 9");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.4757491);
   gre->SetPointError(0,0,0.04351439);
   gre->SetPoint(1,2211,0.4250278);
   gre->SetPointError(1,0,0.04927232);
   gre->SetPoint(2,771,0.3);
   gre->SetPointError(2,0,0.6279552);
   gre->SetPoint(3,51,0.4650562);
   gre->SetPointError(3,0,0.07493632);
   gre->SetPoint(4,2674,0.4564901);
   gre->SetPointError(4,0,0.06009751);
   
   TH1F *Graph_Graph71 = new TH1F("Graph_Graph71","4266 PCC DGConst Const  Scan 9",100,0,2936.3);
   Graph_Graph71->SetMinimum(-0.4535462);
   Graph_Graph71->SetMaximum(1.053546);
   Graph_Graph71->SetDirectory(0);
   Graph_Graph71->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph71->SetLineColor(ci);
   Graph_Graph71->GetXaxis()->SetLabelFont(42);
   Graph_Graph71->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph71->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetXaxis()->SetTitleFont(42);
   Graph_Graph71->GetYaxis()->SetLabelFont(42);
   Graph_Graph71->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph71->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetYaxis()->SetTitleFont(42);
   Graph_Graph71->GetZaxis()->SetLabelFont(42);
   Graph_Graph71->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph71->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph71->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph71);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Const  Scan 10");
   gre->SetFillColor(1);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(29);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.5708876);
   gre->SetPointError(0,0,0.02758264);
   gre->SetPoint(1,2211,0.6135274);
   gre->SetPointError(1,0,0.02056619);
   gre->SetPoint(2,771,0.4945782);
   gre->SetPointError(2,0,0.0270626);
   gre->SetPoint(3,51,0.6275643);
   gre->SetPointError(3,0,0.02152752);
   gre->SetPoint(4,2674,0.5790215);
   gre->SetPointError(4,0,0.02389198);
   
   TH1F *Graph_Graph72 = new TH1F("Graph_Graph72","4266 PCC DGConst Const  Scan 10",100,0,2936.3);
   Graph_Graph72->SetMinimum(0.449358);
   Graph_Graph72->SetMaximum(0.6672495);
   Graph_Graph72->SetDirectory(0);
   Graph_Graph72->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph72->SetLineColor(ci);
   Graph_Graph72->GetXaxis()->SetLabelFont(42);
   Graph_Graph72->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph72->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetXaxis()->SetTitleFont(42);
   Graph_Graph72->GetYaxis()->SetLabelFont(42);
   Graph_Graph72->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph72->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetYaxis()->SetTitleFont(42);
   Graph_Graph72->GetZaxis()->SetLabelFont(42);
   Graph_Graph72->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph72->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph72->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph72);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.65,0.8,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","4266 PCC DGConst Const Scan  1","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 2","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 3","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 4","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 5","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 6","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 7","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 8","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 9","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Const  Scan 10","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2773563,0.94,0.7226437,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("4266 PCC DGConst Const");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
