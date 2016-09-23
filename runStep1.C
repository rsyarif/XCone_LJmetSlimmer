#include "step1_XCone.C"

void runStep1(TString file){
  
  //TString inputFile="LJMet_testmc_reHLT_XCone.root";
  TString inputFile="/uscms_data/d3/rsyarif/FermilabFall2016/XConeinLJMet80x/CMSSW_8_0_17/src/LJMet/Com/condor_XConeStudy/"+file+".root";
  
  TString outputFile=file+"_step1_XCone";

  //TString inputtree="ljmet";
  
  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");
  
  step1_XCone t(0,inputFile,outputFile+".root");
//   step1_XCone t;
  t.Loop();
}

void runStep1(){
	runStep1("TprimeTprime_M-800_TuneCUETP8M1_13TeV-madgraph-pythia8_testmc_reHLT_LJMet");
	runStep1("TT_TuneCUETP8M1_13TeV-powheg-pythia8_testmc_LJMet");
}


