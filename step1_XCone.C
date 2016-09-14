#define step1_XCone_cxx
#include "step1_XCone.h"
#include <TH2.h>
#include <TH1.h>
#include <TStyle.h>
#include <TCanvas.h>

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


   TH1D *h3 = new TH1D("AK4JetPt","AK4JetPt",100,0,600); 
   TH1D *h4 = new TH1D("genJetPt","genJetPt",100,0,600); 
   TH1D *h5 = new TH1D("XConeJetPt","XConeJetPt",100,0,600); 
   
   const int n  = 20;
   TGraph *gr = new TGraph(n);
   bool onePass = false;


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

      //if(!isTHTH_TpTpCalc) continue;

      //std::cout<<"Leptons = "<< elPt_singleLepCalc->size()+muPt_singleLepCalc << std::endl;

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
      
      
//       if(!onePass){
		int x[n];
		double y[n];
		for (Int_t i=0;i<n;i++) {
		 x[i] = i;
		 y[i] = tau_njettiness_XConeCalc->at(i);
		 gr->SetPoint(i, x[i],y[i]);
		 gr->SetMarkerStyle(kCircle);
		 //printf(" N = %i tau = %f \n",x[i],y[i]);
		}
		
		gr->GetXaxis()->SetTitle("N");
		gr->GetYaxis()->SetTitle("NJettiness");
		gr->GetYaxis()->SetTitleOffset(1.3);
		gr->Write();
		
		onePass = true;
//       }
		      
      outputTree->Fill();
      //outputTree->Print();
   }
   
//    TCanvas *c1 = new TCanvas();
//    c1->cd();
//    h1->Draw();
// 
//    TCanvas *c2 = new TCanvas();
//    c2->cd();
//    h2->Draw();
// 
//    TCanvas *c3 = new TCanvas();
//    c3->cd();
//    h3->Draw();
// 
//    TCanvas *c4 = new TCanvas();
//    c4->cd();
//    h4->Draw();
// 
//    TCanvas *c5 = new TCanvas();
//    c5->cd();
//    h5->Draw();
	
// 	TCanvas *c6 = new TCanvas();
// 	c6->cd();
// 	gr->Draw();
   
   //c1->SaveAs("TEMP_h1.png");   
   //c2->SaveAs("TEMP_h2.png");   
   //c6->SaveAs("TEMP_graph.png");   
   
   outputTree->Write();
   outputFile->Write();
}
