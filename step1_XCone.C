#define step1_XCone_cxx
#include "step1_XCone.h"
#include <TH2.h>
#include <TH1.h>
#include <TStyle.h>
#include <TCanvas.h>

void DrawTGraph(TGraph *gr, TString name, std::string outDir_, TString text,TString text2, TLine *l){
	TCanvas *c_temp = new TCanvas();
	c_temp->cd();
	gr->Draw();
	
	TLatex *t = new TLatex(.7,.7,text);
	t->SetNDC();
	t->Draw();

	TLatex *t2 = new TLatex(.7,.6,text2);
	t2->SetNDC();
	t2->Draw();
	
	l->Draw();

	TString outDir = outDir_.replace(outDir_.end()-5,outDir_.end(),"");
  	TString action = "mkdir -p plots/"+outDir;
  	system(action);
	c_temp->SaveAs("plots/"+outDir+"/"+name+".png");
}

void DrawTGraph(TGraph *gr, TString name, std::string outDir_, TString text,TString text2, TLine *l, TLine *l2){
	TCanvas *c_temp = new TCanvas();
	c_temp->cd();
	gr->Draw();
	
	TLatex *t = new TLatex(.7,.7,text);
	t->SetNDC();
	t->Draw();

	TLatex *t2 = new TLatex(.7,.6,text2);
	t2->SetNDC();
	t2->Draw();
	
	l->Draw();

	l2->Draw();

	TString outDir = outDir_.replace(outDir_.end()-5,outDir_.end(),"");
  	TString action = "mkdir -p plots/"+outDir;
  	system(action);
	c_temp->SaveAs("plots/"+outDir+"/"+name+".png");
}

void DrawHisto(TH1D *h, TString name, std::string outDir_){
	TCanvas *c_temp = new TCanvas();
	c_temp->cd();
	h->Draw();
	TString outDir = outDir_.replace(outDir_.end()-5,outDir_.end(),"");
  	TString action = "mkdir -p plots/"+outDir;
  	system(action);
	c_temp->SaveAs("plots/"+outDir+"/"+name+".png");
}

void step1_XCone::Loop()
{
//   In a ROOT session, you can do:
//      root> .L step1_XCone.C
//      root> step1_XCone t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    inputtree->SetBranchStatus("*",0);  // disable all branches
//    inputtree->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    inputtree->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch


   // OUTPUT FILE
   outputFile->cd();
   TTree *outputTree = new TTree("ljmet","ljmet");
   
   TH1D *h1 = new TH1D("N_AK4Jet","N_AK4Jet",20,-0.5,19.5); 
   TH1D *h2 = new TH1D("N_genJet","N_genJet",20,-0.5,19.5); 
   TH1D *h6 = new TH1D("N_XConeJet","N_XConeJet",20,-0.5,19.5); 

   TH1D *h7 = new TH1D("N_quarks","N_quarks",20,-0.5,19.5); 
   TH1D *h8 = new TH1D("N_gluons","N_gluons",20,-0.5,19.5); 

   TH1D *h9 = new TH1D("N_partons","N_partons",20,-0.5,19.5); 

   TH1D *h10 = new TH1D("N_optimal","N_optimal",20,-0.5,19.5); 

   TH1D *h3 = new TH1D("AK4JetPt","AK4JetPt",100,0,600); 
   TH1D *h4 = new TH1D("genJetPt","genJetPt",100,0,600); 
   TH1D *h5 = new TH1D("XConeJetPt","XConeJetPt",100,0,600); 
   
   const int n  = 20;
   TGraph *gr = new TGraph(n);
   TGraph *gr2 = new TGraph(n);
   TGraph *gr2b = new TGraph(n);
   TGraph *gr3 = new TGraph(n);
   TGraph *gr3b = new TGraph(n);
   TGraph *gr3c = new TGraph(n);

//    outputTree->Branch("AK4JetPt","TH1D",&h3);
//    outputTree->Branch("genJetPt","TH1D",&h4);
//    outputTree->Branch("XConeJetPt","TH1D",&h5);

   if (inputtree == 0) return;

   Long64_t nentries = inputtree->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = inputtree->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if(jentry % 10 ==0) std::cout<<"Completed "<<jentry<<" out of "<<nentries<<" events"<<std::endl;

      //if(jentry >= 50) continue;

      if(isTpTp & !isTHTH_TpTpCalc) continue;

      //std::cout<<"Leptons = "<< elPt_singleLepCalc->size()+muPt_singleLepCalc << std::endl;
      
      int N_genEl=0;
      int N_genMu=0;
      int N_quarks=0;
      int N_gluons=0;
      int N_partons=0;

      //std::cout<<"Entry = "<<jentry <<std::endl;
      for(int i=0; i<genPt_singleLepCalc->size();i++){
      	
      	if(genStatus_singleLepCalc->at(i)!=23) continue;
      	//std::cout << "genID = " << genID_singleLepCalc->at(i) << " status = " << genStatus_singleLepCalc->at(i)  << " Mother = " << genMotherID_singleLepCalc->at(i) << std::endl;
      	
      	
      	if (fabs(genID_singleLepCalc->at(i))!=13 || fabs(genID_singleLepCalc->at(i))!=11 || fabs(genID_singleLepCalc->at(i))!=15){
      		N_partons++;
      		if(genID_singleLepCalc->at(i)!=21 && genID_singleLepCalc->at(i)!=genMotherID_singleLepCalc->at(i)) N_quarks++;
      		if(genID_singleLepCalc->at(i)==21) N_gluons++;
      		
      		continue;
      	}
 		if (fabs(genID_singleLepCalc->at(i))==11) N_genEl++;
 		if (fabs(genID_singleLepCalc->at(i))==13) N_genMu++;
 		
 		std::cout << "Lepton ID = " << genID_singleLepCalc->at(i) << ", status = " << genStatus_singleLepCalc->at(i) << std::endl;

      }

      //std::cout<<"Final quarks = "<< N_quarks << std::endl;
      //std::cout<<"Final gluons = "<< N_gluons << std::endl;
      //std::cout<<"Final partons = "<< N_partons << std::endl;
      
      h7->Fill(N_quarks);
      h8->Fill(N_gluons);
      h9->Fill(N_partons);

      if(N_genEl+N_genMu!=0){
      	std::cout<<"Gen Leptons = "<< N_genEl+N_genMu << std::endl;
      	continue;
      }

      h1->Fill(theJetPt_JetSubCalc->size());
      h2->Fill(genJetPt_singleLepCalc->size());
      h6->Fill(theXConeJetPt_XConeCalc->size());
            
      for (unsigned int ijet=0; ijet < theJetPt_JetSubCalc->size(); ijet++){
      	h3->Fill(theJetPt_JetSubCalc->at(ijet));
      }

      for (unsigned int ijet=0; ijet < genJetPt_singleLepCalc->size(); ijet++){
      	h4->Fill(genJetPt_singleLepCalc->at(ijet));
      }

      for (unsigned int ijet=0; ijet < theXConeJetPt_XConeCalc->size(); ijet++){
      	h5->Fill(theXConeJetPt_XConeCalc->at(ijet));
      }
      
      int x[n];
      double y[n];
      for (Int_t i=0;i<n;i++) {
		  x[i] = i;
		  y[i] = tau_njettiness_XConeCalc->at(i);
		  gr->SetPoint(i, x[i],y[i]);
		  gr->SetMarkerStyle(kCircle);

		  //if(i==0)gr2->SetPoint(i, x[i],0);
		  if(i!=0)gr2->SetPoint(i, x[i],y[i]-y[i-1]);
		  gr2->SetMarkerStyle(kCircle);

		  if(i!=0)gr2b->SetPoint(i, x[i],y[i]/y[i-1]);
		  gr2b->SetMarkerStyle(kCircle);

		  //if(i==0)gr3->SetPoint(i, x[i],0);
		  //if(i==1)gr3->SetPoint(i, x[i],0);
		  if(i!=0 && i!=1)gr3->SetPoint(i, x[i],(y[i]-y[i-1])-(y[i-1]-y[i-2]));
		  gr3->SetMarkerStyle(kCircle);

		  if(i!=0 && i!=1)gr3b->SetPoint(i, x[i],(y[i]/y[i-1])-(y[i-1]/y[i-2]));
		  gr3b->SetMarkerStyle(kCircle);

		  if(i!=0 && i!=1)gr3c->SetPoint(i, x[i],(y[i]/y[i-1])/(y[i-1]/y[i-2]));
		  gr3c->SetMarkerStyle(kCircle);


		  //printf(" N = %i tau = %f \n",x[i],y[i]);
      }
      
      //Attempt to find optimal N - start
      
      //std::cout << "" << std::endl;
      //std::cout << "Finding opt of Div (Event " << jentry << ")" <<std::endl;
      TGraph *graph = (TGraph*)gr2b->Clone();
      //Double_t y_opt = TMath::MaxElement(graph->GetN(),graph->GetY());

      Double_t y_opt=0;
      Double_t x_opt=0;

	  //Finding y_opt - Mean
      {
		  Double_t y[graph->GetN()];
		  Double_t x[graph->GetN()];
		  Double_t yTot=0;
		  Double_t yMean=0;		  
		  for(int i=1; i<graph->GetN();i++){
		  	graph->GetPoint(i,x[i],y[i]);
		  	yTot = yTot+y[i];
		  }
		  yMean = yTot / (graph->GetN()-1);
		  y_opt = yMean;     
      }
      //std::cout << "y_opt = " << y_opt << std::endl;
      
      //Finding x_opt
      {
		  int param = 2; //x distance before y below threshold.
		  Double_t y[graph->GetN()];
		  Double_t x[graph->GetN()];
		  for(int i=graph->GetN()-1; i>-1;i--){ //count from large N
	      	graph->GetPoint(i,x[i],y[i]);
// 	      	std::cout << "i = " << i << std::endl;
// 	      	std::cout << "x =" << x[i] << std::endl;
	      	//std::cout << "i = " << i <<  " y = " << y[i] << std::endl;
// 			if(y[i]==y_opt) std::cout << "x_opt = " << x[i] << std::endl;
			if((y[i]<=y_opt)){
				x_opt = x[i]+param; //get value just before y is below mean
				//std::cout << "x_opt = " << x_opt << std::endl;
				break;
			}
		  }
      }
      
      h10->Fill(x_opt);
      //Attempt to find optimal N - end

      //Find optimal N for XCone - end
      
      
      gr->GetXaxis()->SetTitle("N");
      gr->GetYaxis()->SetTitle("NJettiness");
      gr->GetYaxis()->SetTitleOffset(1.3);
      
      gr2->GetXaxis()->SetTitle("N");
      gr2->GetXaxis()->SetRangeUser(1,20);
      gr2->GetYaxis()->SetTitle("#DeltaNJettiness");
      gr2->GetYaxis()->SetTitleOffset(1.3);

      gr2b->GetXaxis()->SetTitle("N");
      gr2b->GetXaxis()->SetRangeUser(1,20);
      gr2b->GetYaxis()->SetTitle("#frac{NJettiness}{N_{-1}Jettiness}");
      gr2b->GetYaxis()->SetTitleOffset(1.1);

      gr3->GetXaxis()->SetTitle("N");
      gr3->GetXaxis()->SetRangeUser(2,20);
      gr3->GetYaxis()->SetTitle("#Delta#DeltaNJettiness");
      gr3->GetYaxis()->SetTitleOffset(1.3);

      gr3b->GetXaxis()->SetTitle("N");
      gr3b->GetXaxis()->SetRangeUser(2,20);
      gr3b->GetYaxis()->SetTitle("#frac{NJettiness}{N_{-1}Jettiness} - #frac{N_{-1}Jettiness}{N_{-2}Jettiness}");
      gr3b->GetYaxis()->SetTitleOffset(1.1);

      gr3c->GetXaxis()->SetTitle("N");
      gr3c->GetXaxis()->SetRangeUser(2,20);
      gr3c->GetYaxis()->SetTitle("#frac{NJettiness}{N_{-1}Jettiness} / #frac{N_{-1}Jettiness}{N_{-2}Jettiness}");
      gr3c->GetYaxis()->SetTitleOffset(1.1);
      
      TString evntNum;
      evntNum = std::to_string(jentry);
      
      TString text = "q:"+std::to_string(N_quarks)+" g:"+std::to_string(N_gluons)+" p:"+std::to_string(N_partons);
      TString text2 = "N_AK4:"+std::to_string(theJetPt_JetSubCalc->size());
      
      float x1=x_opt;
      float y1;
      float x2=x_opt;
      float y2;
      TLine *xline; 
      y1 = TMath::MinElement(graph->GetN(),gr->GetY());
      y2 = TMath::MaxElement(graph->GetN(),gr->GetY());
      xline = new TLine(x1,y1,x2,y2);
      xline->SetLineStyle(2);
      xline->SetLineColor(kBlue);

      y1 = TMath::MinElement(graph->GetN(),gr2->GetY());
      y2 = TMath::MaxElement(graph->GetN(),gr2->GetY());
      TLine *xline2; 
      xline2 = new TLine(x1,y1,x2,y2);
      xline2->SetLineStyle(2);
      xline2->SetLineColor(kBlue);

      y1 = TMath::MinElement(graph->GetN(),gr2b->GetY());
      y2 = TMath::MaxElement(graph->GetN(),gr2b->GetY());
      TLine *xline2b; 
      xline2b = new TLine(x1,y1,x2,y2);
      xline2b->SetLineStyle(2);
      xline2b->SetLineColor(kBlue);

      TLine *yline; 
      yline = new TLine(0,y_opt,20,y_opt);
      yline->SetLineStyle(2);
      yline->SetLineColor(kRed);

//       DrawTGraph(gr,"Njettiness_Event"+evntNum,outFileName_,text,text2);
//       DrawTGraph(gr2,"NjettinessDiff_Event"+evntNum,outFileName_,text,text2);
//       DrawTGraph(gr3,"NjettinessDiffDiff_Event"+evntNum,outFileName_,text,text2);

      DrawTGraph(gr,"Event"+evntNum+"_Njettiness",outFileName_,text,text2,xline);
      DrawTGraph(gr2,"Event"+evntNum+"_NjettinessDiff",outFileName_,text,text2,xline2);
      DrawTGraph(gr2b,"Event"+evntNum+"_NjettinessDiv",outFileName_,text,text2,xline2b,yline);
//       DrawTGraph(gr3,"Event"+evntNum+"_NjettinessDiffDiff",outFileName_,text,text2);
//       DrawTGraph(gr3b,"Event"+evntNum+"_NjettinessDivDiff",outFileName_,text,text2);
//       DrawTGraph(gr3c,"Event"+evntNum+"_NjettinessDivDiv",outFileName_,text,text2);
      
//       gr->Write();
//       gr2->Write();
//       gr3->Write();
      		      
      outputTree->Fill();
      //outputTree->Print();
   }
   
   DrawHisto(h1,h1->GetTitle(),outFileName_);
   DrawHisto(h2,h2->GetTitle(),outFileName_);
   DrawHisto(h3,h3->GetTitle(),outFileName_);
   DrawHisto(h4,h4->GetTitle(),outFileName_);
   DrawHisto(h5,h5->GetTitle(),outFileName_);
   DrawHisto(h6,h6->GetTitle(),outFileName_);
   DrawHisto(h7,h7->GetTitle(),outFileName_);
   DrawHisto(h8,h8->GetTitle(),outFileName_);
   DrawHisto(h9,h9->GetTitle(),outFileName_);
   DrawHisto(h10,h10->GetTitle(),outFileName_);
 
   outputTree->Write();
   outputFile->Write();
}

