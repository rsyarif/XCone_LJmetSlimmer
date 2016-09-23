//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Sep  2 15:26:21 2016 by ROOT version 6.06/01
// from TTree ljmet/ljmet
// found on file: testmc_reHLT_XCone.root
//////////////////////////////////////////////////////////

#ifndef step1_XCone_h
#define step1_XCone_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class step1_XCone {
public :
   TTree          *inputtree;   //!pointer to the analyzed TTree or TChain
   TFile          *inputFile, *outputFile;
   Int_t           fCurrent; //!current Tree number in a TChain
   
   Bool_t			isTT;
   Bool_t			isTpTp;
   std::string			outFileName_; 
   
// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Bool_t          isBHBH_TpTpCalc;
   Bool_t          isBHTW_TpTpCalc;
   Bool_t          isBWBW_TpTpCalc;
   Bool_t          isBZBH_TpTpCalc;
   Bool_t          isBZBZ_TpTpCalc;
   Bool_t          isBZTW_TpTpCalc;
   Bool_t          isTHBW_TpTpCalc;
   Bool_t          isTHTH_TpTpCalc;
   Bool_t          isTWTW_TpTpCalc;
   Bool_t          isTZBW_TpTpCalc;
   Bool_t          isTZTH_TpTpCalc;
   Bool_t          isTZTZ_TpTpCalc;
   Int_t           NLeptonDecays_TpTpCalc;
   Int_t           dataE_singleLepCalc;
   Int_t           dataM_singleLepCalc;
   Int_t           genTDLID_singleLepCalc;
   Int_t           lumi_CommonCalc;
   Int_t           nAllJets_CommonCalc;
   Int_t           nLooseMuons_CommonCalc;
   Int_t           nPV_singleLepCalc;
   Int_t           nPileupInteractions_singleLepCalc;
   Int_t           nSelBtagJets_CommonCalc;
   Int_t           nSelElectrons_CommonCalc;
   Int_t           nSelJets_CommonCalc;
   Int_t           nTightMuons_CommonCalc;
   Int_t           nTrueInteractions_singleLepCalc;
   Int_t           run_CommonCalc;
   Long64_t        event_CommonCalc;
   Double_t        AK4HT_jerdn_singleLepCalc;
   Double_t        AK4HT_jerup_singleLepCalc;
   Double_t        AK4HT_jesdn_singleLepCalc;
   Double_t        AK4HT_jesup_singleLepCalc;
   Double_t        AK4HT_singleLepCalc;
   Double_t        MCWeight_singleLepCalc;
   Double_t        corr_met_jerdn_phi_singleLepCalc;
   Double_t        corr_met_jerdn_singleLepCalc;
   Double_t        corr_met_jerup_phi_singleLepCalc;
   Double_t        corr_met_jerup_singleLepCalc;
   Double_t        corr_met_jesdn_phi_singleLepCalc;
   Double_t        corr_met_jesdn_singleLepCalc;
   Double_t        corr_met_jesup_phi_singleLepCalc;
   Double_t        corr_met_jesup_singleLepCalc;
   Double_t        corr_met_phi_singleLepCalc;
   Double_t        corr_met_singleLepCalc;
   Double_t        corr_metnohf_phi_singleLepCalc;
   Double_t        corr_metnohf_singleLepCalc;
   Double_t        genTDLEnergy_singleLepCalc;
   Double_t        genTDLEta_singleLepCalc;
   Double_t        genTDLPhi_singleLepCalc;
   Double_t        genTDLPt_singleLepCalc;
   Double_t        met_phi_singleLepCalc;
   Double_t        met_singleLepCalc;
   Double_t        metnohf_phi_singleLepCalc;
   Double_t        metnohf_singleLepCalc;
   Double_t        theJetHT_JetSubCalc;
   Double_t        theJetLeadPt_JetSubCalc;
   Double_t        theJetSubLeadPt_JetSubCalc;
   vector<bool>    *theJetAK8PrunedTau21Tag_JetSubCalc;
   vector<int>     *AK4JetBTag_bSFdn_singleLepCalc;
   vector<int>     *AK4JetBTag_bSFup_singleLepCalc;
   vector<int>     *AK4JetBTag_lSFdn_singleLepCalc;
   vector<int>     *AK4JetBTag_lSFup_singleLepCalc;
   vector<int>     *AK4JetBTag_singleLepCalc;
   vector<int>     *AK4JetFlav_singleLepCalc;
   vector<int>     *HadronicVHtID_JetSubCalc;
   vector<int>     *HadronicVHtStatus_JetSubCalc;
   vector<int>     *HdecayID_TpTpCalc;
   vector<int>     *HdecayIndex_TpTpCalc;
   vector<int>     *LHEweightids_singleLepCalc;
   vector<int>     *LeptonID_TpTpCalc;
   vector<int>     *LeptonParentID_TpTpCalc;
   vector<int>     *WdecayID_TpTpCalc;
   vector<int>     *WdecayIndex_TpTpCalc;
   vector<int>     *ZdecayID_TpTpCalc;
   vector<int>     *ZdecayIndex_TpTpCalc;
   vector<int>     *bPrimeID_TpTpCalc;
   vector<int>     *bPrimeNDaughters_TpTpCalc;
   vector<int>     *bPrimeStatus_TpTpCalc;
   vector<int>     *bosonID_TpTpCalc;
   vector<int>     *elChargeConsistent_singleLepCalc;
   vector<int>     *elCharge_singleLepCalc;
   vector<int>     *elIsEBEE_singleLepCalc;
   vector<int>     *elMHits_singleLepCalc;
   vector<int>     *elMatched_singleLepCalc;
   vector<int>     *elMother_id_singleLepCalc;
   vector<int>     *elMother_status_singleLepCalc;
   vector<int>     *elNotConversion_singleLepCalc;
   vector<int>     *elNumberOfMothers_singleLepCalc;
   vector<int>     *elPdgId_singleLepCalc;
   vector<int>     *elStatus_singleLepCalc;
   vector<int>     *elVtxFitConv_singleLepCalc;
   vector<int>     *electron_1_hltmatched_singleLepCalc;
   vector<int>     *genBSLID_singleLepCalc;
   vector<int>     *genID_singleLepCalc;
   vector<int>     *genIndex_singleLepCalc;
   vector<int>     *genMotherID_singleLepCalc;
   vector<int>     *genMotherIndex_singleLepCalc;
   vector<int>     *genStatus_singleLepCalc;
   vector<int>     *muCharge_singleLepCalc;
   vector<int>     *muGlobal_singleLepCalc;
   vector<int>     *muIsLoose_singleLepCalc;
   vector<int>     *muIsMedium_singleLepCalc;
   vector<int>     *muIsTight_singleLepCalc;
   vector<int>     *muMatched_singleLepCalc;
   vector<int>     *muMother_id_singleLepCalc;
   vector<int>     *muMother_status_singleLepCalc;
   vector<int>     *muNMatchedStations_singleLepCalc;
   vector<int>     *muNTrackerLayers_singleLepCalc;
   vector<int>     *muNValMuHits_singleLepCalc;
   vector<int>     *muNValPixelHits_singleLepCalc;
   vector<int>     *muNumberOfMothers_singleLepCalc;
   vector<int>     *muPdgId_singleLepCalc;
   vector<int>     *muStatus_singleLepCalc;
   vector<int>     *muon_1_hltmatched_singleLepCalc;
   vector<int>     *quarkID_TpTpCalc;
   vector<int>     *tPrimeID_TpTpCalc;
   vector<int>     *tPrimeNDaughters_TpTpCalc;
   vector<int>     *tPrimeStatus_TpTpCalc;
   vector<int>     *theJetAK8SDSubjetIndex_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNCSVL_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNCSVMSF_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNCSVM_bSFdn_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNCSVM_bSFup_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNCSVM_lSFdn_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetNCSVM_lSFup_JetSubCalc;
   vector<int>     *theJetAK8SDSubjetSize_JetSubCalc;
   vector<int>     *theJetAK8nDaughters_JetSubCalc;
   vector<int>     *theJetBTag_JetSubCalc;
   vector<int>     *theJetBTag_bSFdn_JetSubCalc;
   vector<int>     *theJetBTag_bSFup_JetSubCalc;
   vector<int>     *theJetBTag_lSFdn_JetSubCalc;
   vector<int>     *theJetBTag_lSFup_JetSubCalc;
   vector<int>     *theJetHFlav_JetSubCalc;
   vector<int>     *theJetPFlav_JetSubCalc;
   vector<int>     *theJetnDaughters_JetSubCalc;
   vector<int>     *viSelMCTriggersEl_singleLepCalc;
   vector<int>     *viSelMCTriggersMu_singleLepCalc;
   vector<int>     *viSelTriggersEl_singleLepCalc;
   vector<int>     *viSelTriggersMu_singleLepCalc;
   vector<double>  *AK4JetBDisc_singleLepCalc;
   vector<double>  *AK4JetEnergy_jerdn_singleLepCalc;
   vector<double>  *AK4JetEnergy_jerup_singleLepCalc;
   vector<double>  *AK4JetEnergy_jesdn_singleLepCalc;
   vector<double>  *AK4JetEnergy_jesup_singleLepCalc;
   vector<double>  *AK4JetEnergy_singleLepCalc;
   vector<double>  *AK4JetEta_singleLepCalc;
   vector<double>  *AK4JetPhi_singleLepCalc;
   vector<double>  *AK4JetPt_jerdn_singleLepCalc;
   vector<double>  *AK4JetPt_jerup_singleLepCalc;
   vector<double>  *AK4JetPt_jesdn_singleLepCalc;
   vector<double>  *AK4JetPt_jesup_singleLepCalc;
   vector<double>  *AK4JetPt_singleLepCalc;
   vector<double>  *AK8JetCSV_singleLepCalc;
   vector<double>  *AK8JetEnergy_jerdn_singleLepCalc;
   vector<double>  *AK8JetEnergy_jerup_singleLepCalc;
   vector<double>  *AK8JetEnergy_jesdn_singleLepCalc;
   vector<double>  *AK8JetEnergy_jesup_singleLepCalc;
   vector<double>  *AK8JetEnergy_singleLepCalc;
   vector<double>  *AK8JetEta_singleLepCalc;
   vector<double>  *AK8JetPhi_singleLepCalc;
   vector<double>  *AK8JetPt_jerdn_singleLepCalc;
   vector<double>  *AK8JetPt_jerup_singleLepCalc;
   vector<double>  *AK8JetPt_jesdn_singleLepCalc;
   vector<double>  *AK8JetPt_jesup_singleLepCalc;
   vector<double>  *AK8JetPt_singleLepCalc;
   vector<double>  *HadronicVHtD0E_JetSubCalc;
   vector<double>  *HadronicVHtD0Eta_JetSubCalc;
   vector<double>  *HadronicVHtD0Phi_JetSubCalc;
   vector<double>  *HadronicVHtD0Pt_JetSubCalc;
   vector<double>  *HadronicVHtD1E_JetSubCalc;
   vector<double>  *HadronicVHtD1Eta_JetSubCalc;
   vector<double>  *HadronicVHtD1Phi_JetSubCalc;
   vector<double>  *HadronicVHtD1Pt_JetSubCalc;
   vector<double>  *HadronicVHtD2E_JetSubCalc;
   vector<double>  *HadronicVHtD2Eta_JetSubCalc;
   vector<double>  *HadronicVHtD2Phi_JetSubCalc;
   vector<double>  *HadronicVHtD2Pt_JetSubCalc;
   vector<double>  *HadronicVHtEnergy_JetSubCalc;
   vector<double>  *HadronicVHtEta_JetSubCalc;
   vector<double>  *HadronicVHtPhi_JetSubCalc;
   vector<double>  *HadronicVHtPt_JetSubCalc;
   vector<double>  *HdecayEnergy_TpTpCalc;
   vector<double>  *HdecayEta_TpTpCalc;
   vector<double>  *HdecayPhi_TpTpCalc;
   vector<double>  *HdecayPt_TpTpCalc;
   vector<double>  *LHEweights_singleLepCalc;
   vector<double>  *LeptonEnergy_TpTpCalc;
   vector<double>  *LeptonEta_TpTpCalc;
   vector<double>  *LeptonPhi_TpTpCalc;
   vector<double>  *LeptonPt_TpTpCalc;
   vector<double>  *WdecayEnergy_TpTpCalc;
   vector<double>  *WdecayEta_TpTpCalc;
   vector<double>  *WdecayPhi_TpTpCalc;
   vector<double>  *WdecayPt_TpTpCalc;
   vector<double>  *ZdecayEnergy_TpTpCalc;
   vector<double>  *ZdecayEta_TpTpCalc;
   vector<double>  *ZdecayPhi_TpTpCalc;
   vector<double>  *ZdecayPt_TpTpCalc;
   vector<double>  *bPrimeEnergy_TpTpCalc;
   vector<double>  *bPrimeEta_TpTpCalc;
   vector<double>  *bPrimeMass_TpTpCalc;
   vector<double>  *bPrimePhi_TpTpCalc;
   vector<double>  *bPrimePt_TpTpCalc;
   vector<double>  *bosonEnergy_TpTpCalc;
   vector<double>  *bosonEta_TpTpCalc;
   vector<double>  *bosonPhi_TpTpCalc;
   vector<double>  *bosonPt_TpTpCalc;
   vector<double>  *elAEff_singleLepCalc;
   vector<double>  *elChIso_singleLepCalc;
   vector<double>  *elD0_singleLepCalc;
   vector<double>  *elDEtaSCTkAtVtx_singleLepCalc;
   vector<double>  *elDPhiSCTkAtVtx_singleLepCalc;
   vector<double>  *elDR03TkSumPt_singleLepCalc;
   vector<double>  *elDZ_singleLepCalc;
   vector<double>  *elDeta_singleLepCalc;
   vector<double>  *elDphi_singleLepCalc;
   vector<double>  *elDxy_singleLepCalc;
   vector<double>  *elEcalPFClusterIso_singleLepCalc;
   vector<double>  *elEnergy_singleLepCalc;
   vector<double>  *elEtaVtx_singleLepCalc;
   vector<double>  *elEta_singleLepCalc;
   vector<double>  *elGen_Reco_dr_singleLepCalc;
   vector<double>  *elHcalPFClusterIso_singleLepCalc;
   vector<double>  *elHoE_singleLepCalc;
   vector<double>  *elMVAValue_singleLepCalc;
   vector<double>  *elMatchedEnergy_singleLepCalc;
   vector<double>  *elMatchedEta_singleLepCalc;
   vector<double>  *elMatchedPhi_singleLepCalc;
   vector<double>  *elMatchedPt_singleLepCalc;
   vector<double>  *elMiniIso_singleLepCalc;
   vector<double>  *elMother_energy_singleLepCalc;
   vector<double>  *elMother_eta_singleLepCalc;
   vector<double>  *elMother_phi_singleLepCalc;
   vector<double>  *elMother_pt_singleLepCalc;
   vector<double>  *elNhIso_singleLepCalc;
   vector<double>  *elOoemoop_singleLepCalc;
   vector<double>  *elPFEta_singleLepCalc;
   vector<double>  *elPFPhi_singleLepCalc;
   vector<double>  *elPhIso_singleLepCalc;
   vector<double>  *elPhiVtx_singleLepCalc;
   vector<double>  *elPhi_singleLepCalc;
   vector<double>  *elPt_singleLepCalc;
   vector<double>  *elRelIso_singleLepCalc;
   vector<double>  *elRhoIso_singleLepCalc;
   vector<double>  *elSCE_singleLepCalc;
   vector<double>  *elSihih_singleLepCalc;
   vector<double>  *evtWeightsMC_singleLepCalc;
   vector<double>  *genBSLEnergy_singleLepCalc;
   vector<double>  *genBSLEta_singleLepCalc;
   vector<double>  *genBSLPhi_singleLepCalc;
   vector<double>  *genBSLPt_singleLepCalc;
   vector<double>  *genEnergy_singleLepCalc;
   vector<double>  *genEta_singleLepCalc;
   vector<double>  *genJetEnergy_singleLepCalc;
   vector<double>  *genJetEta_singleLepCalc;
   vector<double>  *genJetPhi_singleLepCalc;
   vector<double>  *genJetPt_singleLepCalc;
   vector<double>  *genPhi_singleLepCalc;
   vector<double>  *genPt_singleLepCalc;
   vector<double>  *muChIso_singleLepCalc;
   vector<double>  *muChi2_singleLepCalc;
   vector<double>  *muDxy_singleLepCalc;
   vector<double>  *muDz_singleLepCalc;
   vector<double>  *muEnergy_singleLepCalc;
   vector<double>  *muEta_singleLepCalc;
   vector<double>  *muGIso_singleLepCalc;
   vector<double>  *muGen_Reco_dr_singleLepCalc;
   vector<double>  *muInnerEta_singleLepCalc;
   vector<double>  *muInnerPhi_singleLepCalc;
   vector<double>  *muInnerPt_singleLepCalc;
   vector<double>  *muMatchedEnergy_singleLepCalc;
   vector<double>  *muMatchedEta_singleLepCalc;
   vector<double>  *muMatchedPhi_singleLepCalc;
   vector<double>  *muMatchedPt_singleLepCalc;
   vector<double>  *muMiniIsoDB_singleLepCalc;
   vector<double>  *muMiniIso_singleLepCalc;
   vector<double>  *muMother_energy_singleLepCalc;
   vector<double>  *muMother_eta_singleLepCalc;
   vector<double>  *muMother_phi_singleLepCalc;
   vector<double>  *muMother_pt_singleLepCalc;
   vector<double>  *muNhIso_singleLepCalc;
   vector<double>  *muPhi_singleLepCalc;
   vector<double>  *muPt_singleLepCalc;
   vector<double>  *muPuIso_singleLepCalc;
   vector<double>  *muRelIso_singleLepCalc;
   vector<double>  *pfCombinedInclusiveSecondaryVertexV2BJetTags_BTagSFCalc;
   vector<double>  *pfCombinedMVABJetTags_BTagSFCalc;
   vector<double>  *pfCombinedSecondaryVertexV2BJetTags_BTagSFCalc;
   vector<double>  *pfJetBProbabilityBJetTags_BTagSFCalc;
   vector<double>  *pfJetProbabilityBJetTags_BTagSFCalc;
   vector<double>  *pfSimpleSecondaryVertexHighEffBJetTags_BTagSFCalc;
   vector<double>  *pfSimpleSecondaryVertexHighPurBJetTags_BTagSFCalc;
   vector<double>  *pfTrackCountingHighEffBJetTags_BTagSFCalc;
   vector<double>  *pfTrackCountingHighPurBJetTags_BTagSFCalc;
   vector<double>  *quarkEnergy_TpTpCalc;
   vector<double>  *quarkEta_TpTpCalc;
   vector<double>  *quarkPhi_TpTpCalc;
   vector<double>  *quarkPt_TpTpCalc;
   vector<double>  *tPrimeEnergy_TpTpCalc;
   vector<double>  *tPrimeEta_TpTpCalc;
   vector<double>  *tPrimeMass_TpTpCalc;
   vector<double>  *tPrimePhi_TpTpCalc;
   vector<double>  *tPrimePt_TpTpCalc;
   vector<double>  *theJetAK8CEmEFrac_JetSubCalc;
   vector<double>  *theJetAK8CEmEnergy_JetSubCalc;
   vector<double>  *theJetAK8CHadEFrac_JetSubCalc;
   vector<double>  *theJetAK8CHadEnergy_JetSubCalc;
   vector<double>  *theJetAK8CSV_JetSubCalc;
   vector<double>  *theJetAK8Energy_JetSubCalc;
   vector<double>  *theJetAK8Eta_JetSubCalc;
   vector<double>  *theJetAK8GenDR_JetSubCalc;
   vector<double>  *theJetAK8GenPt_JetSubCalc;
   vector<double>  *theJetAK8JetCharge_JetSubCalc;
   vector<double>  *theJetAK8Mass_JetSubCalc;
   vector<double>  *theJetAK8NEmEFrac_JetSubCalc;
   vector<double>  *theJetAK8NEmEnergy_JetSubCalc;
   vector<double>  *theJetAK8NHadEFrac_JetSubCalc;
   vector<double>  *theJetAK8NHadEnergy_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau1_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau2_JetSubCalc;
   vector<double>  *theJetAK8NjettinessTau3_JetSubCalc;
   vector<double>  *theJetAK8Phi_JetSubCalc;
   vector<double>  *theJetAK8PrunedMassWtagUncerts_JetSubCalc;
   vector<double>  *theJetAK8PrunedMass_JetSubCalc;
   vector<double>  *theJetAK8Pt_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetBTag_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetCSV_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetDR_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetEta_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetMass_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetPhi_JetSubCalc;
   vector<double>  *theJetAK8SDSubjetPt_JetSubCalc;
   vector<double>  *theJetAK8SoftDropMass_JetSubCalc;
   vector<double>  *theJetCEmEFrac_JetSubCalc;
   vector<double>  *theJetCEmEnergy_JetSubCalc;
   vector<double>  *theJetCHadEFrac_JetSubCalc;
   vector<double>  *theJetCHadEnergy_JetSubCalc;
   vector<double>  *theJetCSV_JetSubCalc;
   vector<double>  *theJetEnergy_JetSubCalc;
   vector<double>  *theJetEta_JetSubCalc;
   vector<double>  *theJetMuonEFrac_JetSubCalc;
   vector<double>  *theJetNEmEFrac_JetSubCalc;
   vector<double>  *theJetNEmEnergy_JetSubCalc;
   vector<double>  *theJetNHadEFrac_JetSubCalc;
   vector<double>  *theJetNHadEnergy_JetSubCalc;
   vector<double>  *theJetPhi_JetSubCalc;
   vector<double>  *theJetPileupJetId_JetSubCalc;
   vector<double>  *theJetPt_JetSubCalc;
   vector<double>  *theJetVtx3DSig_JetSubCalc;
   vector<double>  *theJetVtx3DVal_JetSubCalc;
   vector<double>  *theJetVtxMass_JetSubCalc;
   vector<double>  *theJetVtxNtracks_JetSubCalc;
   vector<double>  *tau_njettiness_XConeCalc;
   vector<double>  *tau_njettiness_diff_XConeCalc;
   vector<double>  *tau_njettiness_div_XConeCalc;
   vector<double>  *theXConeJetEnergy_XConeCalc;
   vector<double>  *theXConeJetEta_XConeCalc;
   vector<double>  *theXConeJetPhi_XConeCalc;
   vector<double>  *theXConeJetPt_XConeCalc;
   vector<string>  *electron_hltfilters_singleLepCalc;
   vector<string>  *muon_hltfilters_singleLepCalc;
   vector<string>  *vsSelMCTriggersEl_singleLepCalc;
   vector<string>  *vsSelMCTriggersMu_singleLepCalc;
   vector<string>  *vsSelTriggersEl_singleLepCalc;
   vector<string>  *vsSelTriggersMu_singleLepCalc;

   // List of branches
   TBranch        *b_isBHBH_TpTpCalc;   //!
   TBranch        *b_isBHTW_TpTpCalc;   //!
   TBranch        *b_isBWBW_TpTpCalc;   //!
   TBranch        *b_isBZBH_TpTpCalc;   //!
   TBranch        *b_isBZBZ_TpTpCalc;   //!
   TBranch        *b_isBZTW_TpTpCalc;   //!
   TBranch        *b_isTHBW_TpTpCalc;   //!
   TBranch        *b_isTHTH_TpTpCalc;   //!
   TBranch        *b_isTWTW_TpTpCalc;   //!
   TBranch        *b_isTZBW_TpTpCalc;   //!
   TBranch        *b_isTZTH_TpTpCalc;   //!
   TBranch        *b_isTZTZ_TpTpCalc;   //!
   TBranch        *b_NLeptonDecays_TpTpCalc;   //!
   TBranch        *b_dataE_singleLepCalc;   //!
   TBranch        *b_dataM_singleLepCalc;   //!
   TBranch        *b_genTDLID_singleLepCalc;   //!
   TBranch        *b_lumi_CommonCalc;   //!
   TBranch        *b_nAllJets_CommonCalc;   //!
   TBranch        *b_nLooseMuons_CommonCalc;   //!
   TBranch        *b_nPV_singleLepCalc;   //!
   TBranch        *b_nPileupInteractions_singleLepCalc;   //!
   TBranch        *b_nSelBtagJets_CommonCalc;   //!
   TBranch        *b_nSelElectrons_CommonCalc;   //!
   TBranch        *b_nSelJets_CommonCalc;   //!
   TBranch        *b_nTightMuons_CommonCalc;   //!
   TBranch        *b_nTrueInteractions_singleLepCalc;   //!
   TBranch        *b_run_CommonCalc;   //!
   TBranch        *b_event_CommonCalc;   //!
   TBranch        *b_AK4HT_jerdn_singleLepCalc;   //!
   TBranch        *b_AK4HT_jerup_singleLepCalc;   //!
   TBranch        *b_AK4HT_jesdn_singleLepCalc;   //!
   TBranch        *b_AK4HT_jesup_singleLepCalc;   //!
   TBranch        *b_AK4HT_singleLepCalc;   //!
   TBranch        *b_MCWeight_singleLepCalc;   //!
   TBranch        *b_corr_met_jerdn_phi_singleLepCalc;   //!
   TBranch        *b_corr_met_jerdn_singleLepCalc;   //!
   TBranch        *b_corr_met_jerup_phi_singleLepCalc;   //!
   TBranch        *b_corr_met_jerup_singleLepCalc;   //!
   TBranch        *b_corr_met_jesdn_phi_singleLepCalc;   //!
   TBranch        *b_corr_met_jesdn_singleLepCalc;   //!
   TBranch        *b_corr_met_jesup_phi_singleLepCalc;   //!
   TBranch        *b_corr_met_jesup_singleLepCalc;   //!
   TBranch        *b_corr_met_phi_singleLepCalc;   //!
   TBranch        *b_corr_met_singleLepCalc;   //!
   TBranch        *b_corr_metnohf_phi_singleLepCalc;   //!
   TBranch        *b_corr_metnohf_singleLepCalc;   //!
   TBranch        *b_genTDLEnergy_singleLepCalc;   //!
   TBranch        *b_genTDLEta_singleLepCalc;   //!
   TBranch        *b_genTDLPhi_singleLepCalc;   //!
   TBranch        *b_genTDLPt_singleLepCalc;   //!
   TBranch        *b_met_phi_singleLepCalc;   //!
   TBranch        *b_met_singleLepCalc;   //!
   TBranch        *b_metnohf_phi_singleLepCalc;   //!
   TBranch        *b_metnohf_singleLepCalc;   //!
   TBranch        *b_theJetHT_JetSubCalc;   //!
   TBranch        *b_theJetLeadPt_JetSubCalc;   //!
   TBranch        *b_theJetSubLeadPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8PrunedTau21Tag_JetSubCalc;   //!
   TBranch        *b_AK4JetBTag_bSFdn_singleLepCalc;   //!
   TBranch        *b_AK4JetBTag_bSFup_singleLepCalc;   //!
   TBranch        *b_AK4JetBTag_lSFdn_singleLepCalc;   //!
   TBranch        *b_AK4JetBTag_lSFup_singleLepCalc;   //!
   TBranch        *b_AK4JetBTag_singleLepCalc;   //!
   TBranch        *b_AK4JetFlav_singleLepCalc;   //!
   TBranch        *b_HadronicVHtID_JetSubCalc;   //!
   TBranch        *b_HadronicVHtStatus_JetSubCalc;   //!
   TBranch        *b_HdecayID_TpTpCalc;   //!
   TBranch        *b_HdecayIndex_TpTpCalc;   //!
   TBranch        *b_LHEweightids_singleLepCalc;   //!
   TBranch        *b_LeptonID_TpTpCalc;   //!
   TBranch        *b_LeptonParentID_TpTpCalc;   //!
   TBranch        *b_WdecayID_TpTpCalc;   //!
   TBranch        *b_WdecayIndex_TpTpCalc;   //!
   TBranch        *b_ZdecayID_TpTpCalc;   //!
   TBranch        *b_ZdecayIndex_TpTpCalc;   //!
   TBranch        *b_bPrimeID_TpTpCalc;   //!
   TBranch        *b_bPrimeNDaughters_TpTpCalc;   //!
   TBranch        *b_bPrimeStatus_TpTpCalc;   //!
   TBranch        *b_bosonID_TpTpCalc;   //!
   TBranch        *b_elChargeConsistent_singleLepCalc;   //!
   TBranch        *b_elCharge_singleLepCalc;   //!
   TBranch        *b_elIsEBEE_singleLepCalc;   //!
   TBranch        *b_elMHits_singleLepCalc;   //!
   TBranch        *b_elMatched_singleLepCalc;   //!
   TBranch        *b_elMother_id_singleLepCalc;   //!
   TBranch        *b_elMother_status_singleLepCalc;   //!
   TBranch        *b_elNotConversion_singleLepCalc;   //!
   TBranch        *b_elNumberOfMothers_singleLepCalc;   //!
   TBranch        *b_elPdgId_singleLepCalc;   //!
   TBranch        *b_elStatus_singleLepCalc;   //!
   TBranch        *b_elVtxFitConv_singleLepCalc;   //!
   TBranch        *b_electron_1_hltmatched_singleLepCalc;   //!
   TBranch        *b_genBSLID_singleLepCalc;   //!
   TBranch        *b_genID_singleLepCalc;   //!
   TBranch        *b_genIndex_singleLepCalc;   //!
   TBranch        *b_genMotherID_singleLepCalc;   //!
   TBranch        *b_genMotherIndex_singleLepCalc;   //!
   TBranch        *b_genStatus_singleLepCalc;   //!
   TBranch        *b_muCharge_singleLepCalc;   //!
   TBranch        *b_muGlobal_singleLepCalc;   //!
   TBranch        *b_muIsLoose_singleLepCalc;   //!
   TBranch        *b_muIsMedium_singleLepCalc;   //!
   TBranch        *b_muIsTight_singleLepCalc;   //!
   TBranch        *b_muMatched_singleLepCalc;   //!
   TBranch        *b_muMother_id_singleLepCalc;   //!
   TBranch        *b_muMother_status_singleLepCalc;   //!
   TBranch        *b_muNMatchedStations_singleLepCalc;   //!
   TBranch        *b_muNTrackerLayers_singleLepCalc;   //!
   TBranch        *b_muNValMuHits_singleLepCalc;   //!
   TBranch        *b_muNValPixelHits_singleLepCalc;   //!
   TBranch        *b_muNumberOfMothers_singleLepCalc;   //!
   TBranch        *b_muPdgId_singleLepCalc;   //!
   TBranch        *b_muStatus_singleLepCalc;   //!
   TBranch        *b_muon_1_hltmatched_singleLepCalc;   //!
   TBranch        *b_quarkID_TpTpCalc;   //!
   TBranch        *b_tPrimeID_TpTpCalc;   //!
   TBranch        *b_tPrimeNDaughters_TpTpCalc;   //!
   TBranch        *b_tPrimeStatus_TpTpCalc;   //!
   TBranch        *b_theJetAK8SDSubjetIndex_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNCSVL_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNCSVMSF_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNCSVM_bSFdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNCSVM_bSFup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNCSVM_lSFdn_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetNCSVM_lSFup_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetSize_JetSubCalc;   //!
   TBranch        *b_theJetAK8nDaughters_JetSubCalc;   //!
   TBranch        *b_theJetBTag_JetSubCalc;   //!
   TBranch        *b_theJetBTag_bSFdn_JetSubCalc;   //!
   TBranch        *b_theJetBTag_bSFup_JetSubCalc;   //!
   TBranch        *b_theJetBTag_lSFdn_JetSubCalc;   //!
   TBranch        *b_theJetBTag_lSFup_JetSubCalc;   //!
   TBranch        *b_theJetHFlav_JetSubCalc;   //!
   TBranch        *b_theJetPFlav_JetSubCalc;   //!
   TBranch        *b_theJetnDaughters_JetSubCalc;   //!
   TBranch        *b_viSelMCTriggersEl_singleLepCalc;   //!
   TBranch        *b_viSelMCTriggersMu_singleLepCalc;   //!
   TBranch        *b_viSelTriggersEl_singleLepCalc;   //!
   TBranch        *b_viSelTriggersMu_singleLepCalc;   //!
   TBranch        *b_AK4JetBDisc_singleLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jerdn_singleLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jerup_singleLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jesdn_singleLepCalc;   //!
   TBranch        *b_AK4JetEnergy_jesup_singleLepCalc;   //!
   TBranch        *b_AK4JetEnergy_singleLepCalc;   //!
   TBranch        *b_AK4JetEta_singleLepCalc;   //!
   TBranch        *b_AK4JetPhi_singleLepCalc;   //!
   TBranch        *b_AK4JetPt_jerdn_singleLepCalc;   //!
   TBranch        *b_AK4JetPt_jerup_singleLepCalc;   //!
   TBranch        *b_AK4JetPt_jesdn_singleLepCalc;   //!
   TBranch        *b_AK4JetPt_jesup_singleLepCalc;   //!
   TBranch        *b_AK4JetPt_singleLepCalc;   //!
   TBranch        *b_AK8JetCSV_singleLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jerdn_singleLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jerup_singleLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jesdn_singleLepCalc;   //!
   TBranch        *b_AK8JetEnergy_jesup_singleLepCalc;   //!
   TBranch        *b_AK8JetEnergy_singleLepCalc;   //!
   TBranch        *b_AK8JetEta_singleLepCalc;   //!
   TBranch        *b_AK8JetPhi_singleLepCalc;   //!
   TBranch        *b_AK8JetPt_jerdn_singleLepCalc;   //!
   TBranch        *b_AK8JetPt_jerup_singleLepCalc;   //!
   TBranch        *b_AK8JetPt_jesdn_singleLepCalc;   //!
   TBranch        *b_AK8JetPt_jesup_singleLepCalc;   //!
   TBranch        *b_AK8JetPt_singleLepCalc;   //!
   TBranch        *b_HadronicVHtD0E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD0Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD1Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2E_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Eta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Phi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtD2Pt_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEnergy_JetSubCalc;   //!
   TBranch        *b_HadronicVHtEta_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPhi_JetSubCalc;   //!
   TBranch        *b_HadronicVHtPt_JetSubCalc;   //!
   TBranch        *b_HdecayEnergy_TpTpCalc;   //!
   TBranch        *b_HdecayEta_TpTpCalc;   //!
   TBranch        *b_HdecayPhi_TpTpCalc;   //!
   TBranch        *b_HdecayPt_TpTpCalc;   //!
   TBranch        *b_LHEweights_singleLepCalc;   //!
   TBranch        *b_LeptonEnergy_TpTpCalc;   //!
   TBranch        *b_LeptonEta_TpTpCalc;   //!
   TBranch        *b_LeptonPhi_TpTpCalc;   //!
   TBranch        *b_LeptonPt_TpTpCalc;   //!
   TBranch        *b_WdecayEnergy_TpTpCalc;   //!
   TBranch        *b_WdecayEta_TpTpCalc;   //!
   TBranch        *b_WdecayPhi_TpTpCalc;   //!
   TBranch        *b_WdecayPt_TpTpCalc;   //!
   TBranch        *b_ZdecayEnergy_TpTpCalc;   //!
   TBranch        *b_ZdecayEta_TpTpCalc;   //!
   TBranch        *b_ZdecayPhi_TpTpCalc;   //!
   TBranch        *b_ZdecayPt_TpTpCalc;   //!
   TBranch        *b_bPrimeEnergy_TpTpCalc;   //!
   TBranch        *b_bPrimeEta_TpTpCalc;   //!
   TBranch        *b_bPrimeMass_TpTpCalc;   //!
   TBranch        *b_bPrimePhi_TpTpCalc;   //!
   TBranch        *b_bPrimePt_TpTpCalc;   //!
   TBranch        *b_bosonEnergy_TpTpCalc;   //!
   TBranch        *b_bosonEta_TpTpCalc;   //!
   TBranch        *b_bosonPhi_TpTpCalc;   //!
   TBranch        *b_bosonPt_TpTpCalc;   //!
   TBranch        *b_elAEff_singleLepCalc;   //!
   TBranch        *b_elChIso_singleLepCalc;   //!
   TBranch        *b_elD0_singleLepCalc;   //!
   TBranch        *b_elDEtaSCTkAtVtx_singleLepCalc;   //!
   TBranch        *b_elDPhiSCTkAtVtx_singleLepCalc;   //!
   TBranch        *b_elDR03TkSumPt_singleLepCalc;   //!
   TBranch        *b_elDZ_singleLepCalc;   //!
   TBranch        *b_elDeta_singleLepCalc;   //!
   TBranch        *b_elDphi_singleLepCalc;   //!
   TBranch        *b_elDxy_singleLepCalc;   //!
   TBranch        *b_elEcalPFClusterIso_singleLepCalc;   //!
   TBranch        *b_elEnergy_singleLepCalc;   //!
   TBranch        *b_elEtaVtx_singleLepCalc;   //!
   TBranch        *b_elEta_singleLepCalc;   //!
   TBranch        *b_elGen_Reco_dr_singleLepCalc;   //!
   TBranch        *b_elHcalPFClusterIso_singleLepCalc;   //!
   TBranch        *b_elHoE_singleLepCalc;   //!
   TBranch        *b_elMVAValue_singleLepCalc;   //!
   TBranch        *b_elMatchedEnergy_singleLepCalc;   //!
   TBranch        *b_elMatchedEta_singleLepCalc;   //!
   TBranch        *b_elMatchedPhi_singleLepCalc;   //!
   TBranch        *b_elMatchedPt_singleLepCalc;   //!
   TBranch        *b_elMiniIso_singleLepCalc;   //!
   TBranch        *b_elMother_energy_singleLepCalc;   //!
   TBranch        *b_elMother_eta_singleLepCalc;   //!
   TBranch        *b_elMother_phi_singleLepCalc;   //!
   TBranch        *b_elMother_pt_singleLepCalc;   //!
   TBranch        *b_elNhIso_singleLepCalc;   //!
   TBranch        *b_elOoemoop_singleLepCalc;   //!
   TBranch        *b_elPFEta_singleLepCalc;   //!
   TBranch        *b_elPFPhi_singleLepCalc;   //!
   TBranch        *b_elPhIso_singleLepCalc;   //!
   TBranch        *b_elPhiVtx_singleLepCalc;   //!
   TBranch        *b_elPhi_singleLepCalc;   //!
   TBranch        *b_elPt_singleLepCalc;   //!
   TBranch        *b_elRelIso_singleLepCalc;   //!
   TBranch        *b_elRhoIso_singleLepCalc;   //!
   TBranch        *b_elSCE_singleLepCalc;   //!
   TBranch        *b_elSihih_singleLepCalc;   //!
   TBranch        *b_evtWeightsMC_singleLepCalc;   //!
   TBranch        *b_genBSLEnergy_singleLepCalc;   //!
   TBranch        *b_genBSLEta_singleLepCalc;   //!
   TBranch        *b_genBSLPhi_singleLepCalc;   //!
   TBranch        *b_genBSLPt_singleLepCalc;   //!
   TBranch        *b_genEnergy_singleLepCalc;   //!
   TBranch        *b_genEta_singleLepCalc;   //!
   TBranch        *b_genJetEnergy_singleLepCalc;   //!
   TBranch        *b_genJetEta_singleLepCalc;   //!
   TBranch        *b_genJetPhi_singleLepCalc;   //!
   TBranch        *b_genJetPt_singleLepCalc;   //!
   TBranch        *b_genPhi_singleLepCalc;   //!
   TBranch        *b_genPt_singleLepCalc;   //!
   TBranch        *b_muChIso_singleLepCalc;   //!
   TBranch        *b_muChi2_singleLepCalc;   //!
   TBranch        *b_muDxy_singleLepCalc;   //!
   TBranch        *b_muDz_singleLepCalc;   //!
   TBranch        *b_muEnergy_singleLepCalc;   //!
   TBranch        *b_muEta_singleLepCalc;   //!
   TBranch        *b_muGIso_singleLepCalc;   //!
   TBranch        *b_muGen_Reco_dr_singleLepCalc;   //!
   TBranch        *b_muInnerEta_singleLepCalc;   //!
   TBranch        *b_muInnerPhi_singleLepCalc;   //!
   TBranch        *b_muInnerPt_singleLepCalc;   //!
   TBranch        *b_muMatchedEnergy_singleLepCalc;   //!
   TBranch        *b_muMatchedEta_singleLepCalc;   //!
   TBranch        *b_muMatchedPhi_singleLepCalc;   //!
   TBranch        *b_muMatchedPt_singleLepCalc;   //!
   TBranch        *b_muMiniIsoDB_singleLepCalc;   //!
   TBranch        *b_muMiniIso_singleLepCalc;   //!
   TBranch        *b_muMother_energy_singleLepCalc;   //!
   TBranch        *b_muMother_eta_singleLepCalc;   //!
   TBranch        *b_muMother_phi_singleLepCalc;   //!
   TBranch        *b_muMother_pt_singleLepCalc;   //!
   TBranch        *b_muNhIso_singleLepCalc;   //!
   TBranch        *b_muPhi_singleLepCalc;   //!
   TBranch        *b_muPt_singleLepCalc;   //!
   TBranch        *b_muPuIso_singleLepCalc;   //!
   TBranch        *b_muRelIso_singleLepCalc;   //!
   TBranch        *b_pfCombinedInclusiveSecondaryVertexV2BJetTags_BTagSFCalc;   //!
   TBranch        *b_pfCombinedMVABJetTags_BTagSFCalc;   //!
   TBranch        *b_pfCombinedSecondaryVertexV2BJetTags_BTagSFCalc;   //!
   TBranch        *b_pfJetBProbabilityBJetTags_BTagSFCalc;   //!
   TBranch        *b_pfJetProbabilityBJetTags_BTagSFCalc;   //!
   TBranch        *b_pfSimpleSecondaryVertexHighEffBJetTags_BTagSFCalc;   //!
   TBranch        *b_pfSimpleSecondaryVertexHighPurBJetTags_BTagSFCalc;   //!
   TBranch        *b_pfTrackCountingHighEffBJetTags_BTagSFCalc;   //!
   TBranch        *b_pfTrackCountingHighPurBJetTags_BTagSFCalc;   //!
   TBranch        *b_quarkEnergy_TpTpCalc;   //!
   TBranch        *b_quarkEta_TpTpCalc;   //!
   TBranch        *b_quarkPhi_TpTpCalc;   //!
   TBranch        *b_quarkPt_TpTpCalc;   //!
   TBranch        *b_tPrimeEnergy_TpTpCalc;   //!
   TBranch        *b_tPrimeEta_TpTpCalc;   //!
   TBranch        *b_tPrimeMass_TpTpCalc;   //!
   TBranch        *b_tPrimePhi_TpTpCalc;   //!
   TBranch        *b_tPrimePt_TpTpCalc;   //!
   TBranch        *b_theJetAK8CEmEFrac_JetSubCalc;   //!
   TBranch        *b_theJetAK8CEmEnergy_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHadEFrac_JetSubCalc;   //!
   TBranch        *b_theJetAK8CHadEnergy_JetSubCalc;   //!
   TBranch        *b_theJetAK8CSV_JetSubCalc;   //!
   TBranch        *b_theJetAK8Energy_JetSubCalc;   //!
   TBranch        *b_theJetAK8Eta_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenDR_JetSubCalc;   //!
   TBranch        *b_theJetAK8GenPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8JetCharge_JetSubCalc;   //!
   TBranch        *b_theJetAK8Mass_JetSubCalc;   //!
   TBranch        *b_theJetAK8NEmEFrac_JetSubCalc;   //!
   TBranch        *b_theJetAK8NEmEnergy_JetSubCalc;   //!
   TBranch        *b_theJetAK8NHadEFrac_JetSubCalc;   //!
   TBranch        *b_theJetAK8NHadEnergy_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau1_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau2_JetSubCalc;   //!
   TBranch        *b_theJetAK8NjettinessTau3_JetSubCalc;   //!
   TBranch        *b_theJetAK8Phi_JetSubCalc;   //!
   TBranch        *b_theJetAK8PrunedMassWtagUncerts_JetSubCalc;   //!
   TBranch        *b_theJetAK8PrunedMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8Pt_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetBTag_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetCSV_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetDR_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetEta_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetMass_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetPhi_JetSubCalc;   //!
   TBranch        *b_theJetAK8SDSubjetPt_JetSubCalc;   //!
   TBranch        *b_theJetAK8SoftDropMass_JetSubCalc;   //!
   TBranch        *b_theJetCEmEFrac_JetSubCalc;   //!
   TBranch        *b_theJetCEmEnergy_JetSubCalc;   //!
   TBranch        *b_theJetCHadEFrac_JetSubCalc;   //!
   TBranch        *b_theJetCHadEnergy_JetSubCalc;   //!
   TBranch        *b_theJetCSV_JetSubCalc;   //!
   TBranch        *b_theJetEnergy_JetSubCalc;   //!
   TBranch        *b_theJetEta_JetSubCalc;   //!
   TBranch        *b_theJetMuonEFrac_JetSubCalc;   //!
   TBranch        *b_theJetNEmEFrac_JetSubCalc;   //!
   TBranch        *b_theJetNEmEnergy_JetSubCalc;   //!
   TBranch        *b_theJetNHadEFrac_JetSubCalc;   //!
   TBranch        *b_theJetNHadEnergy_JetSubCalc;   //!
   TBranch        *b_theJetPhi_JetSubCalc;   //!
   TBranch        *b_theJetPileupJetId_JetSubCalc;   //!
   TBranch        *b_theJetPt_JetSubCalc;   //!
   TBranch        *b_theJetVtx3DSig_JetSubCalc;   //!
   TBranch        *b_theJetVtx3DVal_JetSubCalc;   //!
   TBranch        *b_theJetVtxMass_JetSubCalc;   //!
   TBranch        *b_theJetVtxNtracks_JetSubCalc;   //!
   TBranch        *b_tau_njettiness_XConeCalc;   //!
   TBranch        *b_tau_njettiness_diff_XConeCalc;   //!
   TBranch        *b_tau_njettiness_div_XConeCalc;   //!
   TBranch        *b_theXConeJetEnergy_XConeCalc;   //!
   TBranch        *b_theXConeJetEta_XConeCalc;   //!
   TBranch        *b_theXConeJetPhi_XConeCalc;   //!
   TBranch        *b_theXConeJetPt_XConeCalc;   //!
   TBranch        *b_electron_hltfilters_singleLepCalc;   //!
   TBranch        *b_muon_hltfilters_singleLepCalc;   //!
   TBranch        *b_vsSelMCTriggersEl_singleLepCalc;   //!
   TBranch        *b_vsSelMCTriggersMu_singleLepCalc;   //!
   TBranch        *b_vsSelTriggersEl_singleLepCalc;   //!
   TBranch        *b_vsSelTriggersMu_singleLepCalc;   //!

   step1_XCone(TTree *tree=0,TString inputFileName="", TString outputFileName="");
   virtual ~step1_XCone();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef step1_XCone_cxx
step1_XCone::step1_XCone(TTree *tree,TString inputFileName, TString outputFileName) : inputtree(0), inputFile(0), outputFile(0)  
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.

  isTpTp  = inputFileName.Contains("Tprime");
  isTT	  = inputFileName.Contains("TT");
  outFileName_ = outputFileName;

  std::cout<<"Opening file: "<<inputFileName<<std::endl;
  inputFile=TFile::Open(inputFileName);  
  outputFile=new TFile(outputFileName,"RECREATE");     

   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(inputFileName);
      if (!f || !f->IsOpen()) {
         f = new TFile(inputFileName);
      }
      f->GetObject("ljmet",tree);

   }
   Init(tree);
}

step1_XCone::~step1_XCone()
{
   if (!inputtree) return;
   delete inputtree->GetCurrentFile();
}

Int_t step1_XCone::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!inputtree) return 0;
   return inputtree->GetEntry(entry);
}
Long64_t step1_XCone::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!inputtree) return -5;
   Long64_t centry = inputtree->LoadTree(entry);
   if (centry < 0) return centry;
   if (inputtree->GetTreeNumber() != fCurrent) {
      fCurrent = inputtree->GetTreeNumber();
      Notify();
   }
   return centry;
}

void step1_XCone::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   theJetAK8PrunedTau21Tag_JetSubCalc = 0;
   AK4JetBTag_bSFdn_singleLepCalc = 0;
   AK4JetBTag_bSFup_singleLepCalc = 0;
   AK4JetBTag_lSFdn_singleLepCalc = 0;
   AK4JetBTag_lSFup_singleLepCalc = 0;
   AK4JetBTag_singleLepCalc = 0;
   AK4JetFlav_singleLepCalc = 0;
   HadronicVHtID_JetSubCalc = 0;
   HadronicVHtStatus_JetSubCalc = 0;
   HdecayID_TpTpCalc = 0;
   HdecayIndex_TpTpCalc = 0;
   LHEweightids_singleLepCalc = 0;
   LeptonID_TpTpCalc = 0;
   LeptonParentID_TpTpCalc = 0;
   WdecayID_TpTpCalc = 0;
   WdecayIndex_TpTpCalc = 0;
   ZdecayID_TpTpCalc = 0;
   ZdecayIndex_TpTpCalc = 0;
   bPrimeID_TpTpCalc = 0;
   bPrimeNDaughters_TpTpCalc = 0;
   bPrimeStatus_TpTpCalc = 0;
   bosonID_TpTpCalc = 0;
   elChargeConsistent_singleLepCalc = 0;
   elCharge_singleLepCalc = 0;
   elIsEBEE_singleLepCalc = 0;
   elMHits_singleLepCalc = 0;
   elMatched_singleLepCalc = 0;
   elMother_id_singleLepCalc = 0;
   elMother_status_singleLepCalc = 0;
   elNotConversion_singleLepCalc = 0;
   elNumberOfMothers_singleLepCalc = 0;
   elPdgId_singleLepCalc = 0;
   elStatus_singleLepCalc = 0;
   elVtxFitConv_singleLepCalc = 0;
   electron_1_hltmatched_singleLepCalc = 0;
   genBSLID_singleLepCalc = 0;
   genID_singleLepCalc = 0;
   genIndex_singleLepCalc = 0;
   genMotherID_singleLepCalc = 0;
   genMotherIndex_singleLepCalc = 0;
   genStatus_singleLepCalc = 0;
   muCharge_singleLepCalc = 0;
   muGlobal_singleLepCalc = 0;
   muIsLoose_singleLepCalc = 0;
   muIsMedium_singleLepCalc = 0;
   muIsTight_singleLepCalc = 0;
   muMatched_singleLepCalc = 0;
   muMother_id_singleLepCalc = 0;
   muMother_status_singleLepCalc = 0;
   muNMatchedStations_singleLepCalc = 0;
   muNTrackerLayers_singleLepCalc = 0;
   muNValMuHits_singleLepCalc = 0;
   muNValPixelHits_singleLepCalc = 0;
   muNumberOfMothers_singleLepCalc = 0;
   muPdgId_singleLepCalc = 0;
   muStatus_singleLepCalc = 0;
   muon_1_hltmatched_singleLepCalc = 0;
   quarkID_TpTpCalc = 0;
   tPrimeID_TpTpCalc = 0;
   tPrimeNDaughters_TpTpCalc = 0;
   tPrimeStatus_TpTpCalc = 0;
   theJetAK8SDSubjetIndex_JetSubCalc = 0;
   theJetAK8SDSubjetNCSVL_JetSubCalc = 0;
   theJetAK8SDSubjetNCSVMSF_JetSubCalc = 0;
   theJetAK8SDSubjetNCSVM_bSFdn_JetSubCalc = 0;
   theJetAK8SDSubjetNCSVM_bSFup_JetSubCalc = 0;
   theJetAK8SDSubjetNCSVM_lSFdn_JetSubCalc = 0;
   theJetAK8SDSubjetNCSVM_lSFup_JetSubCalc = 0;
   theJetAK8SDSubjetSize_JetSubCalc = 0;
   theJetAK8nDaughters_JetSubCalc = 0;
   theJetBTag_JetSubCalc = 0;
   theJetBTag_bSFdn_JetSubCalc = 0;
   theJetBTag_bSFup_JetSubCalc = 0;
   theJetBTag_lSFdn_JetSubCalc = 0;
   theJetBTag_lSFup_JetSubCalc = 0;
   theJetHFlav_JetSubCalc = 0;
   theJetPFlav_JetSubCalc = 0;
   theJetnDaughters_JetSubCalc = 0;
   viSelMCTriggersEl_singleLepCalc = 0;
   viSelMCTriggersMu_singleLepCalc = 0;
   viSelTriggersEl_singleLepCalc = 0;
   viSelTriggersMu_singleLepCalc = 0;
   AK4JetBDisc_singleLepCalc = 0;
   AK4JetEnergy_jerdn_singleLepCalc = 0;
   AK4JetEnergy_jerup_singleLepCalc = 0;
   AK4JetEnergy_jesdn_singleLepCalc = 0;
   AK4JetEnergy_jesup_singleLepCalc = 0;
   AK4JetEnergy_singleLepCalc = 0;
   AK4JetEta_singleLepCalc = 0;
   AK4JetPhi_singleLepCalc = 0;
   AK4JetPt_jerdn_singleLepCalc = 0;
   AK4JetPt_jerup_singleLepCalc = 0;
   AK4JetPt_jesdn_singleLepCalc = 0;
   AK4JetPt_jesup_singleLepCalc = 0;
   AK4JetPt_singleLepCalc = 0;
   AK8JetCSV_singleLepCalc = 0;
   AK8JetEnergy_jerdn_singleLepCalc = 0;
   AK8JetEnergy_jerup_singleLepCalc = 0;
   AK8JetEnergy_jesdn_singleLepCalc = 0;
   AK8JetEnergy_jesup_singleLepCalc = 0;
   AK8JetEnergy_singleLepCalc = 0;
   AK8JetEta_singleLepCalc = 0;
   AK8JetPhi_singleLepCalc = 0;
   AK8JetPt_jerdn_singleLepCalc = 0;
   AK8JetPt_jerup_singleLepCalc = 0;
   AK8JetPt_jesdn_singleLepCalc = 0;
   AK8JetPt_jesup_singleLepCalc = 0;
   AK8JetPt_singleLepCalc = 0;
   HadronicVHtD0E_JetSubCalc = 0;
   HadronicVHtD0Eta_JetSubCalc = 0;
   HadronicVHtD0Phi_JetSubCalc = 0;
   HadronicVHtD0Pt_JetSubCalc = 0;
   HadronicVHtD1E_JetSubCalc = 0;
   HadronicVHtD1Eta_JetSubCalc = 0;
   HadronicVHtD1Phi_JetSubCalc = 0;
   HadronicVHtD1Pt_JetSubCalc = 0;
   HadronicVHtD2E_JetSubCalc = 0;
   HadronicVHtD2Eta_JetSubCalc = 0;
   HadronicVHtD2Phi_JetSubCalc = 0;
   HadronicVHtD2Pt_JetSubCalc = 0;
   HadronicVHtEnergy_JetSubCalc = 0;
   HadronicVHtEta_JetSubCalc = 0;
   HadronicVHtPhi_JetSubCalc = 0;
   HadronicVHtPt_JetSubCalc = 0;
   HdecayEnergy_TpTpCalc = 0;
   HdecayEta_TpTpCalc = 0;
   HdecayPhi_TpTpCalc = 0;
   HdecayPt_TpTpCalc = 0;
   LHEweights_singleLepCalc = 0;
   LeptonEnergy_TpTpCalc = 0;
   LeptonEta_TpTpCalc = 0;
   LeptonPhi_TpTpCalc = 0;
   LeptonPt_TpTpCalc = 0;
   WdecayEnergy_TpTpCalc = 0;
   WdecayEta_TpTpCalc = 0;
   WdecayPhi_TpTpCalc = 0;
   WdecayPt_TpTpCalc = 0;
   ZdecayEnergy_TpTpCalc = 0;
   ZdecayEta_TpTpCalc = 0;
   ZdecayPhi_TpTpCalc = 0;
   ZdecayPt_TpTpCalc = 0;
   bPrimeEnergy_TpTpCalc = 0;
   bPrimeEta_TpTpCalc = 0;
   bPrimeMass_TpTpCalc = 0;
   bPrimePhi_TpTpCalc = 0;
   bPrimePt_TpTpCalc = 0;
   bosonEnergy_TpTpCalc = 0;
   bosonEta_TpTpCalc = 0;
   bosonPhi_TpTpCalc = 0;
   bosonPt_TpTpCalc = 0;
   elAEff_singleLepCalc = 0;
   elChIso_singleLepCalc = 0;
   elD0_singleLepCalc = 0;
   elDEtaSCTkAtVtx_singleLepCalc = 0;
   elDPhiSCTkAtVtx_singleLepCalc = 0;
   elDR03TkSumPt_singleLepCalc = 0;
   elDZ_singleLepCalc = 0;
   elDeta_singleLepCalc = 0;
   elDphi_singleLepCalc = 0;
   elDxy_singleLepCalc = 0;
   elEcalPFClusterIso_singleLepCalc = 0;
   elEnergy_singleLepCalc = 0;
   elEtaVtx_singleLepCalc = 0;
   elEta_singleLepCalc = 0;
   elGen_Reco_dr_singleLepCalc = 0;
   elHcalPFClusterIso_singleLepCalc = 0;
   elHoE_singleLepCalc = 0;
   elMVAValue_singleLepCalc = 0;
   elMatchedEnergy_singleLepCalc = 0;
   elMatchedEta_singleLepCalc = 0;
   elMatchedPhi_singleLepCalc = 0;
   elMatchedPt_singleLepCalc = 0;
   elMiniIso_singleLepCalc = 0;
   elMother_energy_singleLepCalc = 0;
   elMother_eta_singleLepCalc = 0;
   elMother_phi_singleLepCalc = 0;
   elMother_pt_singleLepCalc = 0;
   elNhIso_singleLepCalc = 0;
   elOoemoop_singleLepCalc = 0;
   elPFEta_singleLepCalc = 0;
   elPFPhi_singleLepCalc = 0;
   elPhIso_singleLepCalc = 0;
   elPhiVtx_singleLepCalc = 0;
   elPhi_singleLepCalc = 0;
   elPt_singleLepCalc = 0;
   elRelIso_singleLepCalc = 0;
   elRhoIso_singleLepCalc = 0;
   elSCE_singleLepCalc = 0;
   elSihih_singleLepCalc = 0;
   evtWeightsMC_singleLepCalc = 0;
   genBSLEnergy_singleLepCalc = 0;
   genBSLEta_singleLepCalc = 0;
   genBSLPhi_singleLepCalc = 0;
   genBSLPt_singleLepCalc = 0;
   genEnergy_singleLepCalc = 0;
   genEta_singleLepCalc = 0;
   genJetEnergy_singleLepCalc = 0;
   genJetEta_singleLepCalc = 0;
   genJetPhi_singleLepCalc = 0;
   genJetPt_singleLepCalc = 0;
   genPhi_singleLepCalc = 0;
   genPt_singleLepCalc = 0;
   muChIso_singleLepCalc = 0;
   muChi2_singleLepCalc = 0;
   muDxy_singleLepCalc = 0;
   muDz_singleLepCalc = 0;
   muEnergy_singleLepCalc = 0;
   muEta_singleLepCalc = 0;
   muGIso_singleLepCalc = 0;
   muGen_Reco_dr_singleLepCalc = 0;
   muInnerEta_singleLepCalc = 0;
   muInnerPhi_singleLepCalc = 0;
   muInnerPt_singleLepCalc = 0;
   muMatchedEnergy_singleLepCalc = 0;
   muMatchedEta_singleLepCalc = 0;
   muMatchedPhi_singleLepCalc = 0;
   muMatchedPt_singleLepCalc = 0;
   muMiniIsoDB_singleLepCalc = 0;
   muMiniIso_singleLepCalc = 0;
   muMother_energy_singleLepCalc = 0;
   muMother_eta_singleLepCalc = 0;
   muMother_phi_singleLepCalc = 0;
   muMother_pt_singleLepCalc = 0;
   muNhIso_singleLepCalc = 0;
   muPhi_singleLepCalc = 0;
   muPt_singleLepCalc = 0;
   muPuIso_singleLepCalc = 0;
   muRelIso_singleLepCalc = 0;
   pfCombinedInclusiveSecondaryVertexV2BJetTags_BTagSFCalc = 0;
   pfCombinedMVABJetTags_BTagSFCalc = 0;
   pfCombinedSecondaryVertexV2BJetTags_BTagSFCalc = 0;
   pfJetBProbabilityBJetTags_BTagSFCalc = 0;
   pfJetProbabilityBJetTags_BTagSFCalc = 0;
   pfSimpleSecondaryVertexHighEffBJetTags_BTagSFCalc = 0;
   pfSimpleSecondaryVertexHighPurBJetTags_BTagSFCalc = 0;
   pfTrackCountingHighEffBJetTags_BTagSFCalc = 0;
   pfTrackCountingHighPurBJetTags_BTagSFCalc = 0;
   quarkEnergy_TpTpCalc = 0;
   quarkEta_TpTpCalc = 0;
   quarkPhi_TpTpCalc = 0;
   quarkPt_TpTpCalc = 0;
   tPrimeEnergy_TpTpCalc = 0;
   tPrimeEta_TpTpCalc = 0;
   tPrimeMass_TpTpCalc = 0;
   tPrimePhi_TpTpCalc = 0;
   tPrimePt_TpTpCalc = 0;
   theJetAK8CEmEFrac_JetSubCalc = 0;
   theJetAK8CEmEnergy_JetSubCalc = 0;
   theJetAK8CHadEFrac_JetSubCalc = 0;
   theJetAK8CHadEnergy_JetSubCalc = 0;
   theJetAK8CSV_JetSubCalc = 0;
   theJetAK8Energy_JetSubCalc = 0;
   theJetAK8Eta_JetSubCalc = 0;
   theJetAK8GenDR_JetSubCalc = 0;
   theJetAK8GenPt_JetSubCalc = 0;
   theJetAK8JetCharge_JetSubCalc = 0;
   theJetAK8Mass_JetSubCalc = 0;
   theJetAK8NEmEFrac_JetSubCalc = 0;
   theJetAK8NEmEnergy_JetSubCalc = 0;
   theJetAK8NHadEFrac_JetSubCalc = 0;
   theJetAK8NHadEnergy_JetSubCalc = 0;
   theJetAK8NjettinessTau1_JetSubCalc = 0;
   theJetAK8NjettinessTau2_JetSubCalc = 0;
   theJetAK8NjettinessTau3_JetSubCalc = 0;
   theJetAK8Phi_JetSubCalc = 0;
   theJetAK8PrunedMassWtagUncerts_JetSubCalc = 0;
   theJetAK8PrunedMass_JetSubCalc = 0;
   theJetAK8Pt_JetSubCalc = 0;
   theJetAK8SDSubjetBTag_JetSubCalc = 0;
   theJetAK8SDSubjetCSV_JetSubCalc = 0;
   theJetAK8SDSubjetDR_JetSubCalc = 0;
   theJetAK8SDSubjetEta_JetSubCalc = 0;
   theJetAK8SDSubjetMass_JetSubCalc = 0;
   theJetAK8SDSubjetPhi_JetSubCalc = 0;
   theJetAK8SDSubjetPt_JetSubCalc = 0;
   theJetAK8SoftDropMass_JetSubCalc = 0;
   theJetCEmEFrac_JetSubCalc = 0;
   theJetCEmEnergy_JetSubCalc = 0;
   theJetCHadEFrac_JetSubCalc = 0;
   theJetCHadEnergy_JetSubCalc = 0;
   theJetCSV_JetSubCalc = 0;
   theJetEnergy_JetSubCalc = 0;
   theJetEta_JetSubCalc = 0;
   theJetMuonEFrac_JetSubCalc = 0;
   theJetNEmEFrac_JetSubCalc = 0;
   theJetNEmEnergy_JetSubCalc = 0;
   theJetNHadEFrac_JetSubCalc = 0;
   theJetNHadEnergy_JetSubCalc = 0;
   theJetPhi_JetSubCalc = 0;
   theJetPileupJetId_JetSubCalc = 0;
   theJetPt_JetSubCalc = 0;
   theJetVtx3DSig_JetSubCalc = 0;
   theJetVtx3DVal_JetSubCalc = 0;
   theJetVtxMass_JetSubCalc = 0;
   theJetVtxNtracks_JetSubCalc = 0;
   tau_njettiness_XConeCalc = 0;
   tau_njettiness_diff_XConeCalc = 0;
   tau_njettiness_div_XConeCalc = 0;
   theXConeJetEnergy_XConeCalc = 0;
   theXConeJetEta_XConeCalc = 0;
   theXConeJetPhi_XConeCalc = 0;
   theXConeJetPt_XConeCalc = 0;
   electron_hltfilters_singleLepCalc = 0;
   muon_hltfilters_singleLepCalc = 0;
   vsSelMCTriggersEl_singleLepCalc = 0;
   vsSelMCTriggersMu_singleLepCalc = 0;
   vsSelTriggersEl_singleLepCalc = 0;
   vsSelTriggersMu_singleLepCalc = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   inputtree = tree;
   fCurrent = -1;
   inputtree->SetMakeClass(1);

   inputtree->SetBranchAddress("isBHBH_TpTpCalc", &isBHBH_TpTpCalc, &b_isBHBH_TpTpCalc);
   inputtree->SetBranchAddress("isBHTW_TpTpCalc", &isBHTW_TpTpCalc, &b_isBHTW_TpTpCalc);
   inputtree->SetBranchAddress("isBWBW_TpTpCalc", &isBWBW_TpTpCalc, &b_isBWBW_TpTpCalc);
   inputtree->SetBranchAddress("isBZBH_TpTpCalc", &isBZBH_TpTpCalc, &b_isBZBH_TpTpCalc);
   inputtree->SetBranchAddress("isBZBZ_TpTpCalc", &isBZBZ_TpTpCalc, &b_isBZBZ_TpTpCalc);
   inputtree->SetBranchAddress("isBZTW_TpTpCalc", &isBZTW_TpTpCalc, &b_isBZTW_TpTpCalc);
   inputtree->SetBranchAddress("isTHBW_TpTpCalc", &isTHBW_TpTpCalc, &b_isTHBW_TpTpCalc);
   inputtree->SetBranchAddress("isTHTH_TpTpCalc", &isTHTH_TpTpCalc, &b_isTHTH_TpTpCalc);
   inputtree->SetBranchAddress("isTWTW_TpTpCalc", &isTWTW_TpTpCalc, &b_isTWTW_TpTpCalc);
   inputtree->SetBranchAddress("isTZBW_TpTpCalc", &isTZBW_TpTpCalc, &b_isTZBW_TpTpCalc);
   inputtree->SetBranchAddress("isTZTH_TpTpCalc", &isTZTH_TpTpCalc, &b_isTZTH_TpTpCalc);
   inputtree->SetBranchAddress("isTZTZ_TpTpCalc", &isTZTZ_TpTpCalc, &b_isTZTZ_TpTpCalc);
   inputtree->SetBranchAddress("NLeptonDecays_TpTpCalc", &NLeptonDecays_TpTpCalc, &b_NLeptonDecays_TpTpCalc);
   inputtree->SetBranchAddress("dataE_singleLepCalc", &dataE_singleLepCalc, &b_dataE_singleLepCalc);
   inputtree->SetBranchAddress("dataM_singleLepCalc", &dataM_singleLepCalc, &b_dataM_singleLepCalc);
   inputtree->SetBranchAddress("genTDLID_singleLepCalc", &genTDLID_singleLepCalc, &b_genTDLID_singleLepCalc);
   inputtree->SetBranchAddress("lumi_CommonCalc", &lumi_CommonCalc, &b_lumi_CommonCalc);
   inputtree->SetBranchAddress("nAllJets_CommonCalc", &nAllJets_CommonCalc, &b_nAllJets_CommonCalc);
   inputtree->SetBranchAddress("nLooseMuons_CommonCalc", &nLooseMuons_CommonCalc, &b_nLooseMuons_CommonCalc);
   inputtree->SetBranchAddress("nPV_singleLepCalc", &nPV_singleLepCalc, &b_nPV_singleLepCalc);
   inputtree->SetBranchAddress("nPileupInteractions_singleLepCalc", &nPileupInteractions_singleLepCalc, &b_nPileupInteractions_singleLepCalc);
   inputtree->SetBranchAddress("nSelBtagJets_CommonCalc", &nSelBtagJets_CommonCalc, &b_nSelBtagJets_CommonCalc);
   inputtree->SetBranchAddress("nSelElectrons_CommonCalc", &nSelElectrons_CommonCalc, &b_nSelElectrons_CommonCalc);
   inputtree->SetBranchAddress("nSelJets_CommonCalc", &nSelJets_CommonCalc, &b_nSelJets_CommonCalc);
   inputtree->SetBranchAddress("nTightMuons_CommonCalc", &nTightMuons_CommonCalc, &b_nTightMuons_CommonCalc);
   inputtree->SetBranchAddress("nTrueInteractions_singleLepCalc", &nTrueInteractions_singleLepCalc, &b_nTrueInteractions_singleLepCalc);
   inputtree->SetBranchAddress("run_CommonCalc", &run_CommonCalc, &b_run_CommonCalc);
   inputtree->SetBranchAddress("event_CommonCalc", &event_CommonCalc, &b_event_CommonCalc);
   inputtree->SetBranchAddress("AK4HT_jerdn_singleLepCalc", &AK4HT_jerdn_singleLepCalc, &b_AK4HT_jerdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4HT_jerup_singleLepCalc", &AK4HT_jerup_singleLepCalc, &b_AK4HT_jerup_singleLepCalc);
   inputtree->SetBranchAddress("AK4HT_jesdn_singleLepCalc", &AK4HT_jesdn_singleLepCalc, &b_AK4HT_jesdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4HT_jesup_singleLepCalc", &AK4HT_jesup_singleLepCalc, &b_AK4HT_jesup_singleLepCalc);
   inputtree->SetBranchAddress("AK4HT_singleLepCalc", &AK4HT_singleLepCalc, &b_AK4HT_singleLepCalc);
   inputtree->SetBranchAddress("MCWeight_singleLepCalc", &MCWeight_singleLepCalc, &b_MCWeight_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jerdn_phi_singleLepCalc", &corr_met_jerdn_phi_singleLepCalc, &b_corr_met_jerdn_phi_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jerdn_singleLepCalc", &corr_met_jerdn_singleLepCalc, &b_corr_met_jerdn_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jerup_phi_singleLepCalc", &corr_met_jerup_phi_singleLepCalc, &b_corr_met_jerup_phi_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jerup_singleLepCalc", &corr_met_jerup_singleLepCalc, &b_corr_met_jerup_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jesdn_phi_singleLepCalc", &corr_met_jesdn_phi_singleLepCalc, &b_corr_met_jesdn_phi_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jesdn_singleLepCalc", &corr_met_jesdn_singleLepCalc, &b_corr_met_jesdn_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jesup_phi_singleLepCalc", &corr_met_jesup_phi_singleLepCalc, &b_corr_met_jesup_phi_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_jesup_singleLepCalc", &corr_met_jesup_singleLepCalc, &b_corr_met_jesup_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_phi_singleLepCalc", &corr_met_phi_singleLepCalc, &b_corr_met_phi_singleLepCalc);
   inputtree->SetBranchAddress("corr_met_singleLepCalc", &corr_met_singleLepCalc, &b_corr_met_singleLepCalc);
   inputtree->SetBranchAddress("corr_metnohf_phi_singleLepCalc", &corr_metnohf_phi_singleLepCalc, &b_corr_metnohf_phi_singleLepCalc);
   inputtree->SetBranchAddress("corr_metnohf_singleLepCalc", &corr_metnohf_singleLepCalc, &b_corr_metnohf_singleLepCalc);
   inputtree->SetBranchAddress("genTDLEnergy_singleLepCalc", &genTDLEnergy_singleLepCalc, &b_genTDLEnergy_singleLepCalc);
   inputtree->SetBranchAddress("genTDLEta_singleLepCalc", &genTDLEta_singleLepCalc, &b_genTDLEta_singleLepCalc);
   inputtree->SetBranchAddress("genTDLPhi_singleLepCalc", &genTDLPhi_singleLepCalc, &b_genTDLPhi_singleLepCalc);
   inputtree->SetBranchAddress("genTDLPt_singleLepCalc", &genTDLPt_singleLepCalc, &b_genTDLPt_singleLepCalc);
   inputtree->SetBranchAddress("met_phi_singleLepCalc", &met_phi_singleLepCalc, &b_met_phi_singleLepCalc);
   inputtree->SetBranchAddress("met_singleLepCalc", &met_singleLepCalc, &b_met_singleLepCalc);
   inputtree->SetBranchAddress("metnohf_phi_singleLepCalc", &metnohf_phi_singleLepCalc, &b_metnohf_phi_singleLepCalc);
   inputtree->SetBranchAddress("metnohf_singleLepCalc", &metnohf_singleLepCalc, &b_metnohf_singleLepCalc);
   inputtree->SetBranchAddress("theJetHT_JetSubCalc", &theJetHT_JetSubCalc, &b_theJetHT_JetSubCalc);
   inputtree->SetBranchAddress("theJetLeadPt_JetSubCalc", &theJetLeadPt_JetSubCalc, &b_theJetLeadPt_JetSubCalc);
   inputtree->SetBranchAddress("theJetSubLeadPt_JetSubCalc", &theJetSubLeadPt_JetSubCalc, &b_theJetSubLeadPt_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8PrunedTau21Tag_JetSubCalc", &theJetAK8PrunedTau21Tag_JetSubCalc, &b_theJetAK8PrunedTau21Tag_JetSubCalc);
   inputtree->SetBranchAddress("AK4JetBTag_bSFdn_singleLepCalc", &AK4JetBTag_bSFdn_singleLepCalc, &b_AK4JetBTag_bSFdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetBTag_bSFup_singleLepCalc", &AK4JetBTag_bSFup_singleLepCalc, &b_AK4JetBTag_bSFup_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetBTag_lSFdn_singleLepCalc", &AK4JetBTag_lSFdn_singleLepCalc, &b_AK4JetBTag_lSFdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetBTag_lSFup_singleLepCalc", &AK4JetBTag_lSFup_singleLepCalc, &b_AK4JetBTag_lSFup_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetBTag_singleLepCalc", &AK4JetBTag_singleLepCalc, &b_AK4JetBTag_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetFlav_singleLepCalc", &AK4JetFlav_singleLepCalc, &b_AK4JetFlav_singleLepCalc);
   inputtree->SetBranchAddress("HadronicVHtID_JetSubCalc", &HadronicVHtID_JetSubCalc, &b_HadronicVHtID_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtStatus_JetSubCalc", &HadronicVHtStatus_JetSubCalc, &b_HadronicVHtStatus_JetSubCalc);
   inputtree->SetBranchAddress("HdecayID_TpTpCalc", &HdecayID_TpTpCalc, &b_HdecayID_TpTpCalc);
   inputtree->SetBranchAddress("HdecayIndex_TpTpCalc", &HdecayIndex_TpTpCalc, &b_HdecayIndex_TpTpCalc);
   inputtree->SetBranchAddress("LHEweightids_singleLepCalc", &LHEweightids_singleLepCalc, &b_LHEweightids_singleLepCalc);
   inputtree->SetBranchAddress("LeptonID_TpTpCalc", &LeptonID_TpTpCalc, &b_LeptonID_TpTpCalc);
   inputtree->SetBranchAddress("LeptonParentID_TpTpCalc", &LeptonParentID_TpTpCalc, &b_LeptonParentID_TpTpCalc);
   inputtree->SetBranchAddress("WdecayID_TpTpCalc", &WdecayID_TpTpCalc, &b_WdecayID_TpTpCalc);
   inputtree->SetBranchAddress("WdecayIndex_TpTpCalc", &WdecayIndex_TpTpCalc, &b_WdecayIndex_TpTpCalc);
   inputtree->SetBranchAddress("ZdecayID_TpTpCalc", &ZdecayID_TpTpCalc, &b_ZdecayID_TpTpCalc);
   inputtree->SetBranchAddress("ZdecayIndex_TpTpCalc", &ZdecayIndex_TpTpCalc, &b_ZdecayIndex_TpTpCalc);
   inputtree->SetBranchAddress("bPrimeID_TpTpCalc", &bPrimeID_TpTpCalc, &b_bPrimeID_TpTpCalc);
   inputtree->SetBranchAddress("bPrimeNDaughters_TpTpCalc", &bPrimeNDaughters_TpTpCalc, &b_bPrimeNDaughters_TpTpCalc);
   inputtree->SetBranchAddress("bPrimeStatus_TpTpCalc", &bPrimeStatus_TpTpCalc, &b_bPrimeStatus_TpTpCalc);
   inputtree->SetBranchAddress("bosonID_TpTpCalc", &bosonID_TpTpCalc, &b_bosonID_TpTpCalc);
   inputtree->SetBranchAddress("elChargeConsistent_singleLepCalc", &elChargeConsistent_singleLepCalc, &b_elChargeConsistent_singleLepCalc);
   inputtree->SetBranchAddress("elCharge_singleLepCalc", &elCharge_singleLepCalc, &b_elCharge_singleLepCalc);
   inputtree->SetBranchAddress("elIsEBEE_singleLepCalc", &elIsEBEE_singleLepCalc, &b_elIsEBEE_singleLepCalc);
   inputtree->SetBranchAddress("elMHits_singleLepCalc", &elMHits_singleLepCalc, &b_elMHits_singleLepCalc);
   inputtree->SetBranchAddress("elMatched_singleLepCalc", &elMatched_singleLepCalc, &b_elMatched_singleLepCalc);
   inputtree->SetBranchAddress("elMother_id_singleLepCalc", &elMother_id_singleLepCalc, &b_elMother_id_singleLepCalc);
   inputtree->SetBranchAddress("elMother_status_singleLepCalc", &elMother_status_singleLepCalc, &b_elMother_status_singleLepCalc);
   inputtree->SetBranchAddress("elNotConversion_singleLepCalc", &elNotConversion_singleLepCalc, &b_elNotConversion_singleLepCalc);
   inputtree->SetBranchAddress("elNumberOfMothers_singleLepCalc", &elNumberOfMothers_singleLepCalc, &b_elNumberOfMothers_singleLepCalc);
   inputtree->SetBranchAddress("elPdgId_singleLepCalc", &elPdgId_singleLepCalc, &b_elPdgId_singleLepCalc);
   inputtree->SetBranchAddress("elStatus_singleLepCalc", &elStatus_singleLepCalc, &b_elStatus_singleLepCalc);
   inputtree->SetBranchAddress("elVtxFitConv_singleLepCalc", &elVtxFitConv_singleLepCalc, &b_elVtxFitConv_singleLepCalc);
   inputtree->SetBranchAddress("electron_1_hltmatched_singleLepCalc", &electron_1_hltmatched_singleLepCalc, &b_electron_1_hltmatched_singleLepCalc);
   inputtree->SetBranchAddress("genBSLID_singleLepCalc", &genBSLID_singleLepCalc, &b_genBSLID_singleLepCalc);
   inputtree->SetBranchAddress("genID_singleLepCalc", &genID_singleLepCalc, &b_genID_singleLepCalc);
   inputtree->SetBranchAddress("genIndex_singleLepCalc", &genIndex_singleLepCalc, &b_genIndex_singleLepCalc);
   inputtree->SetBranchAddress("genMotherID_singleLepCalc", &genMotherID_singleLepCalc, &b_genMotherID_singleLepCalc);
   inputtree->SetBranchAddress("genMotherIndex_singleLepCalc", &genMotherIndex_singleLepCalc, &b_genMotherIndex_singleLepCalc);
   inputtree->SetBranchAddress("genStatus_singleLepCalc", &genStatus_singleLepCalc, &b_genStatus_singleLepCalc);
   inputtree->SetBranchAddress("muCharge_singleLepCalc", &muCharge_singleLepCalc, &b_muCharge_singleLepCalc);
   inputtree->SetBranchAddress("muGlobal_singleLepCalc", &muGlobal_singleLepCalc, &b_muGlobal_singleLepCalc);
   inputtree->SetBranchAddress("muIsLoose_singleLepCalc", &muIsLoose_singleLepCalc, &b_muIsLoose_singleLepCalc);
   inputtree->SetBranchAddress("muIsMedium_singleLepCalc", &muIsMedium_singleLepCalc, &b_muIsMedium_singleLepCalc);
   inputtree->SetBranchAddress("muIsTight_singleLepCalc", &muIsTight_singleLepCalc, &b_muIsTight_singleLepCalc);
   inputtree->SetBranchAddress("muMatched_singleLepCalc", &muMatched_singleLepCalc, &b_muMatched_singleLepCalc);
   inputtree->SetBranchAddress("muMother_id_singleLepCalc", &muMother_id_singleLepCalc, &b_muMother_id_singleLepCalc);
   inputtree->SetBranchAddress("muMother_status_singleLepCalc", &muMother_status_singleLepCalc, &b_muMother_status_singleLepCalc);
   inputtree->SetBranchAddress("muNMatchedStations_singleLepCalc", &muNMatchedStations_singleLepCalc, &b_muNMatchedStations_singleLepCalc);
   inputtree->SetBranchAddress("muNTrackerLayers_singleLepCalc", &muNTrackerLayers_singleLepCalc, &b_muNTrackerLayers_singleLepCalc);
   inputtree->SetBranchAddress("muNValMuHits_singleLepCalc", &muNValMuHits_singleLepCalc, &b_muNValMuHits_singleLepCalc);
   inputtree->SetBranchAddress("muNValPixelHits_singleLepCalc", &muNValPixelHits_singleLepCalc, &b_muNValPixelHits_singleLepCalc);
   inputtree->SetBranchAddress("muNumberOfMothers_singleLepCalc", &muNumberOfMothers_singleLepCalc, &b_muNumberOfMothers_singleLepCalc);
   inputtree->SetBranchAddress("muPdgId_singleLepCalc", &muPdgId_singleLepCalc, &b_muPdgId_singleLepCalc);
   inputtree->SetBranchAddress("muStatus_singleLepCalc", &muStatus_singleLepCalc, &b_muStatus_singleLepCalc);
   inputtree->SetBranchAddress("muon_1_hltmatched_singleLepCalc", &muon_1_hltmatched_singleLepCalc, &b_muon_1_hltmatched_singleLepCalc);
   inputtree->SetBranchAddress("quarkID_TpTpCalc", &quarkID_TpTpCalc, &b_quarkID_TpTpCalc);
   inputtree->SetBranchAddress("tPrimeID_TpTpCalc", &tPrimeID_TpTpCalc, &b_tPrimeID_TpTpCalc);
   inputtree->SetBranchAddress("tPrimeNDaughters_TpTpCalc", &tPrimeNDaughters_TpTpCalc, &b_tPrimeNDaughters_TpTpCalc);
   inputtree->SetBranchAddress("tPrimeStatus_TpTpCalc", &tPrimeStatus_TpTpCalc, &b_tPrimeStatus_TpTpCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetIndex_JetSubCalc", &theJetAK8SDSubjetIndex_JetSubCalc, &b_theJetAK8SDSubjetIndex_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetNCSVL_JetSubCalc", &theJetAK8SDSubjetNCSVL_JetSubCalc, &b_theJetAK8SDSubjetNCSVL_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetNCSVMSF_JetSubCalc", &theJetAK8SDSubjetNCSVMSF_JetSubCalc, &b_theJetAK8SDSubjetNCSVMSF_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetNCSVM_bSFdn_JetSubCalc", &theJetAK8SDSubjetNCSVM_bSFdn_JetSubCalc, &b_theJetAK8SDSubjetNCSVM_bSFdn_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetNCSVM_bSFup_JetSubCalc", &theJetAK8SDSubjetNCSVM_bSFup_JetSubCalc, &b_theJetAK8SDSubjetNCSVM_bSFup_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetNCSVM_lSFdn_JetSubCalc", &theJetAK8SDSubjetNCSVM_lSFdn_JetSubCalc, &b_theJetAK8SDSubjetNCSVM_lSFdn_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetNCSVM_lSFup_JetSubCalc", &theJetAK8SDSubjetNCSVM_lSFup_JetSubCalc, &b_theJetAK8SDSubjetNCSVM_lSFup_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetSize_JetSubCalc", &theJetAK8SDSubjetSize_JetSubCalc, &b_theJetAK8SDSubjetSize_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8nDaughters_JetSubCalc", &theJetAK8nDaughters_JetSubCalc, &b_theJetAK8nDaughters_JetSubCalc);
   inputtree->SetBranchAddress("theJetBTag_JetSubCalc", &theJetBTag_JetSubCalc, &b_theJetBTag_JetSubCalc);
   inputtree->SetBranchAddress("theJetBTag_bSFdn_JetSubCalc", &theJetBTag_bSFdn_JetSubCalc, &b_theJetBTag_bSFdn_JetSubCalc);
   inputtree->SetBranchAddress("theJetBTag_bSFup_JetSubCalc", &theJetBTag_bSFup_JetSubCalc, &b_theJetBTag_bSFup_JetSubCalc);
   inputtree->SetBranchAddress("theJetBTag_lSFdn_JetSubCalc", &theJetBTag_lSFdn_JetSubCalc, &b_theJetBTag_lSFdn_JetSubCalc);
   inputtree->SetBranchAddress("theJetBTag_lSFup_JetSubCalc", &theJetBTag_lSFup_JetSubCalc, &b_theJetBTag_lSFup_JetSubCalc);
   inputtree->SetBranchAddress("theJetHFlav_JetSubCalc", &theJetHFlav_JetSubCalc, &b_theJetHFlav_JetSubCalc);
   inputtree->SetBranchAddress("theJetPFlav_JetSubCalc", &theJetPFlav_JetSubCalc, &b_theJetPFlav_JetSubCalc);
   inputtree->SetBranchAddress("theJetnDaughters_JetSubCalc", &theJetnDaughters_JetSubCalc, &b_theJetnDaughters_JetSubCalc);
   inputtree->SetBranchAddress("viSelMCTriggersEl_singleLepCalc", &viSelMCTriggersEl_singleLepCalc, &b_viSelMCTriggersEl_singleLepCalc);
   inputtree->SetBranchAddress("viSelMCTriggersMu_singleLepCalc", &viSelMCTriggersMu_singleLepCalc, &b_viSelMCTriggersMu_singleLepCalc);
   inputtree->SetBranchAddress("viSelTriggersEl_singleLepCalc", &viSelTriggersEl_singleLepCalc, &b_viSelTriggersEl_singleLepCalc);
   inputtree->SetBranchAddress("viSelTriggersMu_singleLepCalc", &viSelTriggersMu_singleLepCalc, &b_viSelTriggersMu_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetBDisc_singleLepCalc", &AK4JetBDisc_singleLepCalc, &b_AK4JetBDisc_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetEnergy_jerdn_singleLepCalc", &AK4JetEnergy_jerdn_singleLepCalc, &b_AK4JetEnergy_jerdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetEnergy_jerup_singleLepCalc", &AK4JetEnergy_jerup_singleLepCalc, &b_AK4JetEnergy_jerup_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetEnergy_jesdn_singleLepCalc", &AK4JetEnergy_jesdn_singleLepCalc, &b_AK4JetEnergy_jesdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetEnergy_jesup_singleLepCalc", &AK4JetEnergy_jesup_singleLepCalc, &b_AK4JetEnergy_jesup_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetEnergy_singleLepCalc", &AK4JetEnergy_singleLepCalc, &b_AK4JetEnergy_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetEta_singleLepCalc", &AK4JetEta_singleLepCalc, &b_AK4JetEta_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetPhi_singleLepCalc", &AK4JetPhi_singleLepCalc, &b_AK4JetPhi_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetPt_jerdn_singleLepCalc", &AK4JetPt_jerdn_singleLepCalc, &b_AK4JetPt_jerdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetPt_jerup_singleLepCalc", &AK4JetPt_jerup_singleLepCalc, &b_AK4JetPt_jerup_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetPt_jesdn_singleLepCalc", &AK4JetPt_jesdn_singleLepCalc, &b_AK4JetPt_jesdn_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetPt_jesup_singleLepCalc", &AK4JetPt_jesup_singleLepCalc, &b_AK4JetPt_jesup_singleLepCalc);
   inputtree->SetBranchAddress("AK4JetPt_singleLepCalc", &AK4JetPt_singleLepCalc, &b_AK4JetPt_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetCSV_singleLepCalc", &AK8JetCSV_singleLepCalc, &b_AK8JetCSV_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetEnergy_jerdn_singleLepCalc", &AK8JetEnergy_jerdn_singleLepCalc, &b_AK8JetEnergy_jerdn_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetEnergy_jerup_singleLepCalc", &AK8JetEnergy_jerup_singleLepCalc, &b_AK8JetEnergy_jerup_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetEnergy_jesdn_singleLepCalc", &AK8JetEnergy_jesdn_singleLepCalc, &b_AK8JetEnergy_jesdn_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetEnergy_jesup_singleLepCalc", &AK8JetEnergy_jesup_singleLepCalc, &b_AK8JetEnergy_jesup_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetEnergy_singleLepCalc", &AK8JetEnergy_singleLepCalc, &b_AK8JetEnergy_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetEta_singleLepCalc", &AK8JetEta_singleLepCalc, &b_AK8JetEta_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetPhi_singleLepCalc", &AK8JetPhi_singleLepCalc, &b_AK8JetPhi_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetPt_jerdn_singleLepCalc", &AK8JetPt_jerdn_singleLepCalc, &b_AK8JetPt_jerdn_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetPt_jerup_singleLepCalc", &AK8JetPt_jerup_singleLepCalc, &b_AK8JetPt_jerup_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetPt_jesdn_singleLepCalc", &AK8JetPt_jesdn_singleLepCalc, &b_AK8JetPt_jesdn_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetPt_jesup_singleLepCalc", &AK8JetPt_jesup_singleLepCalc, &b_AK8JetPt_jesup_singleLepCalc);
   inputtree->SetBranchAddress("AK8JetPt_singleLepCalc", &AK8JetPt_singleLepCalc, &b_AK8JetPt_singleLepCalc);
   inputtree->SetBranchAddress("HadronicVHtD0E_JetSubCalc", &HadronicVHtD0E_JetSubCalc, &b_HadronicVHtD0E_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD0Eta_JetSubCalc", &HadronicVHtD0Eta_JetSubCalc, &b_HadronicVHtD0Eta_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD0Phi_JetSubCalc", &HadronicVHtD0Phi_JetSubCalc, &b_HadronicVHtD0Phi_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD0Pt_JetSubCalc", &HadronicVHtD0Pt_JetSubCalc, &b_HadronicVHtD0Pt_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD1E_JetSubCalc", &HadronicVHtD1E_JetSubCalc, &b_HadronicVHtD1E_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD1Eta_JetSubCalc", &HadronicVHtD1Eta_JetSubCalc, &b_HadronicVHtD1Eta_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD1Phi_JetSubCalc", &HadronicVHtD1Phi_JetSubCalc, &b_HadronicVHtD1Phi_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD1Pt_JetSubCalc", &HadronicVHtD1Pt_JetSubCalc, &b_HadronicVHtD1Pt_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD2E_JetSubCalc", &HadronicVHtD2E_JetSubCalc, &b_HadronicVHtD2E_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD2Eta_JetSubCalc", &HadronicVHtD2Eta_JetSubCalc, &b_HadronicVHtD2Eta_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD2Phi_JetSubCalc", &HadronicVHtD2Phi_JetSubCalc, &b_HadronicVHtD2Phi_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtD2Pt_JetSubCalc", &HadronicVHtD2Pt_JetSubCalc, &b_HadronicVHtD2Pt_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtEnergy_JetSubCalc", &HadronicVHtEnergy_JetSubCalc, &b_HadronicVHtEnergy_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtEta_JetSubCalc", &HadronicVHtEta_JetSubCalc, &b_HadronicVHtEta_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtPhi_JetSubCalc", &HadronicVHtPhi_JetSubCalc, &b_HadronicVHtPhi_JetSubCalc);
   inputtree->SetBranchAddress("HadronicVHtPt_JetSubCalc", &HadronicVHtPt_JetSubCalc, &b_HadronicVHtPt_JetSubCalc);
   inputtree->SetBranchAddress("HdecayEnergy_TpTpCalc", &HdecayEnergy_TpTpCalc, &b_HdecayEnergy_TpTpCalc);
   inputtree->SetBranchAddress("HdecayEta_TpTpCalc", &HdecayEta_TpTpCalc, &b_HdecayEta_TpTpCalc);
   inputtree->SetBranchAddress("HdecayPhi_TpTpCalc", &HdecayPhi_TpTpCalc, &b_HdecayPhi_TpTpCalc);
   inputtree->SetBranchAddress("HdecayPt_TpTpCalc", &HdecayPt_TpTpCalc, &b_HdecayPt_TpTpCalc);
   inputtree->SetBranchAddress("LHEweights_singleLepCalc", &LHEweights_singleLepCalc, &b_LHEweights_singleLepCalc);
   inputtree->SetBranchAddress("LeptonEnergy_TpTpCalc", &LeptonEnergy_TpTpCalc, &b_LeptonEnergy_TpTpCalc);
   inputtree->SetBranchAddress("LeptonEta_TpTpCalc", &LeptonEta_TpTpCalc, &b_LeptonEta_TpTpCalc);
   inputtree->SetBranchAddress("LeptonPhi_TpTpCalc", &LeptonPhi_TpTpCalc, &b_LeptonPhi_TpTpCalc);
   inputtree->SetBranchAddress("LeptonPt_TpTpCalc", &LeptonPt_TpTpCalc, &b_LeptonPt_TpTpCalc);
   inputtree->SetBranchAddress("WdecayEnergy_TpTpCalc", &WdecayEnergy_TpTpCalc, &b_WdecayEnergy_TpTpCalc);
   inputtree->SetBranchAddress("WdecayEta_TpTpCalc", &WdecayEta_TpTpCalc, &b_WdecayEta_TpTpCalc);
   inputtree->SetBranchAddress("WdecayPhi_TpTpCalc", &WdecayPhi_TpTpCalc, &b_WdecayPhi_TpTpCalc);
   inputtree->SetBranchAddress("WdecayPt_TpTpCalc", &WdecayPt_TpTpCalc, &b_WdecayPt_TpTpCalc);
   inputtree->SetBranchAddress("ZdecayEnergy_TpTpCalc", &ZdecayEnergy_TpTpCalc, &b_ZdecayEnergy_TpTpCalc);
   inputtree->SetBranchAddress("ZdecayEta_TpTpCalc", &ZdecayEta_TpTpCalc, &b_ZdecayEta_TpTpCalc);
   inputtree->SetBranchAddress("ZdecayPhi_TpTpCalc", &ZdecayPhi_TpTpCalc, &b_ZdecayPhi_TpTpCalc);
   inputtree->SetBranchAddress("ZdecayPt_TpTpCalc", &ZdecayPt_TpTpCalc, &b_ZdecayPt_TpTpCalc);
   inputtree->SetBranchAddress("bPrimeEnergy_TpTpCalc", &bPrimeEnergy_TpTpCalc, &b_bPrimeEnergy_TpTpCalc);
   inputtree->SetBranchAddress("bPrimeEta_TpTpCalc", &bPrimeEta_TpTpCalc, &b_bPrimeEta_TpTpCalc);
   inputtree->SetBranchAddress("bPrimeMass_TpTpCalc", &bPrimeMass_TpTpCalc, &b_bPrimeMass_TpTpCalc);
   inputtree->SetBranchAddress("bPrimePhi_TpTpCalc", &bPrimePhi_TpTpCalc, &b_bPrimePhi_TpTpCalc);
   inputtree->SetBranchAddress("bPrimePt_TpTpCalc", &bPrimePt_TpTpCalc, &b_bPrimePt_TpTpCalc);
   inputtree->SetBranchAddress("bosonEnergy_TpTpCalc", &bosonEnergy_TpTpCalc, &b_bosonEnergy_TpTpCalc);
   inputtree->SetBranchAddress("bosonEta_TpTpCalc", &bosonEta_TpTpCalc, &b_bosonEta_TpTpCalc);
   inputtree->SetBranchAddress("bosonPhi_TpTpCalc", &bosonPhi_TpTpCalc, &b_bosonPhi_TpTpCalc);
   inputtree->SetBranchAddress("bosonPt_TpTpCalc", &bosonPt_TpTpCalc, &b_bosonPt_TpTpCalc);
   inputtree->SetBranchAddress("elAEff_singleLepCalc", &elAEff_singleLepCalc, &b_elAEff_singleLepCalc);
   inputtree->SetBranchAddress("elChIso_singleLepCalc", &elChIso_singleLepCalc, &b_elChIso_singleLepCalc);
   inputtree->SetBranchAddress("elD0_singleLepCalc", &elD0_singleLepCalc, &b_elD0_singleLepCalc);
   inputtree->SetBranchAddress("elDEtaSCTkAtVtx_singleLepCalc", &elDEtaSCTkAtVtx_singleLepCalc, &b_elDEtaSCTkAtVtx_singleLepCalc);
   inputtree->SetBranchAddress("elDPhiSCTkAtVtx_singleLepCalc", &elDPhiSCTkAtVtx_singleLepCalc, &b_elDPhiSCTkAtVtx_singleLepCalc);
   inputtree->SetBranchAddress("elDR03TkSumPt_singleLepCalc", &elDR03TkSumPt_singleLepCalc, &b_elDR03TkSumPt_singleLepCalc);
   inputtree->SetBranchAddress("elDZ_singleLepCalc", &elDZ_singleLepCalc, &b_elDZ_singleLepCalc);
   inputtree->SetBranchAddress("elDeta_singleLepCalc", &elDeta_singleLepCalc, &b_elDeta_singleLepCalc);
   inputtree->SetBranchAddress("elDphi_singleLepCalc", &elDphi_singleLepCalc, &b_elDphi_singleLepCalc);
   inputtree->SetBranchAddress("elDxy_singleLepCalc", &elDxy_singleLepCalc, &b_elDxy_singleLepCalc);
   inputtree->SetBranchAddress("elEcalPFClusterIso_singleLepCalc", &elEcalPFClusterIso_singleLepCalc, &b_elEcalPFClusterIso_singleLepCalc);
   inputtree->SetBranchAddress("elEnergy_singleLepCalc", &elEnergy_singleLepCalc, &b_elEnergy_singleLepCalc);
   inputtree->SetBranchAddress("elEtaVtx_singleLepCalc", &elEtaVtx_singleLepCalc, &b_elEtaVtx_singleLepCalc);
   inputtree->SetBranchAddress("elEta_singleLepCalc", &elEta_singleLepCalc, &b_elEta_singleLepCalc);
   inputtree->SetBranchAddress("elGen_Reco_dr_singleLepCalc", &elGen_Reco_dr_singleLepCalc, &b_elGen_Reco_dr_singleLepCalc);
   inputtree->SetBranchAddress("elHcalPFClusterIso_singleLepCalc", &elHcalPFClusterIso_singleLepCalc, &b_elHcalPFClusterIso_singleLepCalc);
   inputtree->SetBranchAddress("elHoE_singleLepCalc", &elHoE_singleLepCalc, &b_elHoE_singleLepCalc);
   inputtree->SetBranchAddress("elMVAValue_singleLepCalc", &elMVAValue_singleLepCalc, &b_elMVAValue_singleLepCalc);
   inputtree->SetBranchAddress("elMatchedEnergy_singleLepCalc", &elMatchedEnergy_singleLepCalc, &b_elMatchedEnergy_singleLepCalc);
   inputtree->SetBranchAddress("elMatchedEta_singleLepCalc", &elMatchedEta_singleLepCalc, &b_elMatchedEta_singleLepCalc);
   inputtree->SetBranchAddress("elMatchedPhi_singleLepCalc", &elMatchedPhi_singleLepCalc, &b_elMatchedPhi_singleLepCalc);
   inputtree->SetBranchAddress("elMatchedPt_singleLepCalc", &elMatchedPt_singleLepCalc, &b_elMatchedPt_singleLepCalc);
   inputtree->SetBranchAddress("elMiniIso_singleLepCalc", &elMiniIso_singleLepCalc, &b_elMiniIso_singleLepCalc);
   inputtree->SetBranchAddress("elMother_energy_singleLepCalc", &elMother_energy_singleLepCalc, &b_elMother_energy_singleLepCalc);
   inputtree->SetBranchAddress("elMother_eta_singleLepCalc", &elMother_eta_singleLepCalc, &b_elMother_eta_singleLepCalc);
   inputtree->SetBranchAddress("elMother_phi_singleLepCalc", &elMother_phi_singleLepCalc, &b_elMother_phi_singleLepCalc);
   inputtree->SetBranchAddress("elMother_pt_singleLepCalc", &elMother_pt_singleLepCalc, &b_elMother_pt_singleLepCalc);
   inputtree->SetBranchAddress("elNhIso_singleLepCalc", &elNhIso_singleLepCalc, &b_elNhIso_singleLepCalc);
   inputtree->SetBranchAddress("elOoemoop_singleLepCalc", &elOoemoop_singleLepCalc, &b_elOoemoop_singleLepCalc);
   inputtree->SetBranchAddress("elPFEta_singleLepCalc", &elPFEta_singleLepCalc, &b_elPFEta_singleLepCalc);
   inputtree->SetBranchAddress("elPFPhi_singleLepCalc", &elPFPhi_singleLepCalc, &b_elPFPhi_singleLepCalc);
   inputtree->SetBranchAddress("elPhIso_singleLepCalc", &elPhIso_singleLepCalc, &b_elPhIso_singleLepCalc);
   inputtree->SetBranchAddress("elPhiVtx_singleLepCalc", &elPhiVtx_singleLepCalc, &b_elPhiVtx_singleLepCalc);
   inputtree->SetBranchAddress("elPhi_singleLepCalc", &elPhi_singleLepCalc, &b_elPhi_singleLepCalc);
   inputtree->SetBranchAddress("elPt_singleLepCalc", &elPt_singleLepCalc, &b_elPt_singleLepCalc);
   inputtree->SetBranchAddress("elRelIso_singleLepCalc", &elRelIso_singleLepCalc, &b_elRelIso_singleLepCalc);
   inputtree->SetBranchAddress("elRhoIso_singleLepCalc", &elRhoIso_singleLepCalc, &b_elRhoIso_singleLepCalc);
   inputtree->SetBranchAddress("elSCE_singleLepCalc", &elSCE_singleLepCalc, &b_elSCE_singleLepCalc);
   inputtree->SetBranchAddress("elSihih_singleLepCalc", &elSihih_singleLepCalc, &b_elSihih_singleLepCalc);
   inputtree->SetBranchAddress("evtWeightsMC_singleLepCalc", &evtWeightsMC_singleLepCalc, &b_evtWeightsMC_singleLepCalc);
   inputtree->SetBranchAddress("genBSLEnergy_singleLepCalc", &genBSLEnergy_singleLepCalc, &b_genBSLEnergy_singleLepCalc);
   inputtree->SetBranchAddress("genBSLEta_singleLepCalc", &genBSLEta_singleLepCalc, &b_genBSLEta_singleLepCalc);
   inputtree->SetBranchAddress("genBSLPhi_singleLepCalc", &genBSLPhi_singleLepCalc, &b_genBSLPhi_singleLepCalc);
   inputtree->SetBranchAddress("genBSLPt_singleLepCalc", &genBSLPt_singleLepCalc, &b_genBSLPt_singleLepCalc);
   inputtree->SetBranchAddress("genEnergy_singleLepCalc", &genEnergy_singleLepCalc, &b_genEnergy_singleLepCalc);
   inputtree->SetBranchAddress("genEta_singleLepCalc", &genEta_singleLepCalc, &b_genEta_singleLepCalc);
   inputtree->SetBranchAddress("genJetEnergy_singleLepCalc", &genJetEnergy_singleLepCalc, &b_genJetEnergy_singleLepCalc);
   inputtree->SetBranchAddress("genJetEta_singleLepCalc", &genJetEta_singleLepCalc, &b_genJetEta_singleLepCalc);
   inputtree->SetBranchAddress("genJetPhi_singleLepCalc", &genJetPhi_singleLepCalc, &b_genJetPhi_singleLepCalc);
   inputtree->SetBranchAddress("genJetPt_singleLepCalc", &genJetPt_singleLepCalc, &b_genJetPt_singleLepCalc);
   inputtree->SetBranchAddress("genPhi_singleLepCalc", &genPhi_singleLepCalc, &b_genPhi_singleLepCalc);
   inputtree->SetBranchAddress("genPt_singleLepCalc", &genPt_singleLepCalc, &b_genPt_singleLepCalc);
   inputtree->SetBranchAddress("muChIso_singleLepCalc", &muChIso_singleLepCalc, &b_muChIso_singleLepCalc);
   inputtree->SetBranchAddress("muChi2_singleLepCalc", &muChi2_singleLepCalc, &b_muChi2_singleLepCalc);
   inputtree->SetBranchAddress("muDxy_singleLepCalc", &muDxy_singleLepCalc, &b_muDxy_singleLepCalc);
   inputtree->SetBranchAddress("muDz_singleLepCalc", &muDz_singleLepCalc, &b_muDz_singleLepCalc);
   inputtree->SetBranchAddress("muEnergy_singleLepCalc", &muEnergy_singleLepCalc, &b_muEnergy_singleLepCalc);
   inputtree->SetBranchAddress("muEta_singleLepCalc", &muEta_singleLepCalc, &b_muEta_singleLepCalc);
   inputtree->SetBranchAddress("muGIso_singleLepCalc", &muGIso_singleLepCalc, &b_muGIso_singleLepCalc);
   inputtree->SetBranchAddress("muGen_Reco_dr_singleLepCalc", &muGen_Reco_dr_singleLepCalc, &b_muGen_Reco_dr_singleLepCalc);
   inputtree->SetBranchAddress("muInnerEta_singleLepCalc", &muInnerEta_singleLepCalc, &b_muInnerEta_singleLepCalc);
   inputtree->SetBranchAddress("muInnerPhi_singleLepCalc", &muInnerPhi_singleLepCalc, &b_muInnerPhi_singleLepCalc);
   inputtree->SetBranchAddress("muInnerPt_singleLepCalc", &muInnerPt_singleLepCalc, &b_muInnerPt_singleLepCalc);
   inputtree->SetBranchAddress("muMatchedEnergy_singleLepCalc", &muMatchedEnergy_singleLepCalc, &b_muMatchedEnergy_singleLepCalc);
   inputtree->SetBranchAddress("muMatchedEta_singleLepCalc", &muMatchedEta_singleLepCalc, &b_muMatchedEta_singleLepCalc);
   inputtree->SetBranchAddress("muMatchedPhi_singleLepCalc", &muMatchedPhi_singleLepCalc, &b_muMatchedPhi_singleLepCalc);
   inputtree->SetBranchAddress("muMatchedPt_singleLepCalc", &muMatchedPt_singleLepCalc, &b_muMatchedPt_singleLepCalc);
   inputtree->SetBranchAddress("muMiniIsoDB_singleLepCalc", &muMiniIsoDB_singleLepCalc, &b_muMiniIsoDB_singleLepCalc);
   inputtree->SetBranchAddress("muMiniIso_singleLepCalc", &muMiniIso_singleLepCalc, &b_muMiniIso_singleLepCalc);
   inputtree->SetBranchAddress("muMother_energy_singleLepCalc", &muMother_energy_singleLepCalc, &b_muMother_energy_singleLepCalc);
   inputtree->SetBranchAddress("muMother_eta_singleLepCalc", &muMother_eta_singleLepCalc, &b_muMother_eta_singleLepCalc);
   inputtree->SetBranchAddress("muMother_phi_singleLepCalc", &muMother_phi_singleLepCalc, &b_muMother_phi_singleLepCalc);
   inputtree->SetBranchAddress("muMother_pt_singleLepCalc", &muMother_pt_singleLepCalc, &b_muMother_pt_singleLepCalc);
   inputtree->SetBranchAddress("muNhIso_singleLepCalc", &muNhIso_singleLepCalc, &b_muNhIso_singleLepCalc);
   inputtree->SetBranchAddress("muPhi_singleLepCalc", &muPhi_singleLepCalc, &b_muPhi_singleLepCalc);
   inputtree->SetBranchAddress("muPt_singleLepCalc", &muPt_singleLepCalc, &b_muPt_singleLepCalc);
   inputtree->SetBranchAddress("muPuIso_singleLepCalc", &muPuIso_singleLepCalc, &b_muPuIso_singleLepCalc);
   inputtree->SetBranchAddress("muRelIso_singleLepCalc", &muRelIso_singleLepCalc, &b_muRelIso_singleLepCalc);
   inputtree->SetBranchAddress("pfCombinedInclusiveSecondaryVertexV2BJetTags_BTagSFCalc", &pfCombinedInclusiveSecondaryVertexV2BJetTags_BTagSFCalc, &b_pfCombinedInclusiveSecondaryVertexV2BJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfCombinedMVABJetTags_BTagSFCalc", &pfCombinedMVABJetTags_BTagSFCalc, &b_pfCombinedMVABJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfCombinedSecondaryVertexV2BJetTags_BTagSFCalc", &pfCombinedSecondaryVertexV2BJetTags_BTagSFCalc, &b_pfCombinedSecondaryVertexV2BJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfJetBProbabilityBJetTags_BTagSFCalc", &pfJetBProbabilityBJetTags_BTagSFCalc, &b_pfJetBProbabilityBJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfJetProbabilityBJetTags_BTagSFCalc", &pfJetProbabilityBJetTags_BTagSFCalc, &b_pfJetProbabilityBJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfSimpleSecondaryVertexHighEffBJetTags_BTagSFCalc", &pfSimpleSecondaryVertexHighEffBJetTags_BTagSFCalc, &b_pfSimpleSecondaryVertexHighEffBJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfSimpleSecondaryVertexHighPurBJetTags_BTagSFCalc", &pfSimpleSecondaryVertexHighPurBJetTags_BTagSFCalc, &b_pfSimpleSecondaryVertexHighPurBJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfTrackCountingHighEffBJetTags_BTagSFCalc", &pfTrackCountingHighEffBJetTags_BTagSFCalc, &b_pfTrackCountingHighEffBJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("pfTrackCountingHighPurBJetTags_BTagSFCalc", &pfTrackCountingHighPurBJetTags_BTagSFCalc, &b_pfTrackCountingHighPurBJetTags_BTagSFCalc);
   inputtree->SetBranchAddress("quarkEnergy_TpTpCalc", &quarkEnergy_TpTpCalc, &b_quarkEnergy_TpTpCalc);
   inputtree->SetBranchAddress("quarkEta_TpTpCalc", &quarkEta_TpTpCalc, &b_quarkEta_TpTpCalc);
   inputtree->SetBranchAddress("quarkPhi_TpTpCalc", &quarkPhi_TpTpCalc, &b_quarkPhi_TpTpCalc);
   inputtree->SetBranchAddress("quarkPt_TpTpCalc", &quarkPt_TpTpCalc, &b_quarkPt_TpTpCalc);
   inputtree->SetBranchAddress("tPrimeEnergy_TpTpCalc", &tPrimeEnergy_TpTpCalc, &b_tPrimeEnergy_TpTpCalc);
   inputtree->SetBranchAddress("tPrimeEta_TpTpCalc", &tPrimeEta_TpTpCalc, &b_tPrimeEta_TpTpCalc);
   inputtree->SetBranchAddress("tPrimeMass_TpTpCalc", &tPrimeMass_TpTpCalc, &b_tPrimeMass_TpTpCalc);
   inputtree->SetBranchAddress("tPrimePhi_TpTpCalc", &tPrimePhi_TpTpCalc, &b_tPrimePhi_TpTpCalc);
   inputtree->SetBranchAddress("tPrimePt_TpTpCalc", &tPrimePt_TpTpCalc, &b_tPrimePt_TpTpCalc);
   inputtree->SetBranchAddress("theJetAK8CEmEFrac_JetSubCalc", &theJetAK8CEmEFrac_JetSubCalc, &b_theJetAK8CEmEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8CEmEnergy_JetSubCalc", &theJetAK8CEmEnergy_JetSubCalc, &b_theJetAK8CEmEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8CHadEFrac_JetSubCalc", &theJetAK8CHadEFrac_JetSubCalc, &b_theJetAK8CHadEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8CHadEnergy_JetSubCalc", &theJetAK8CHadEnergy_JetSubCalc, &b_theJetAK8CHadEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8CSV_JetSubCalc", &theJetAK8CSV_JetSubCalc, &b_theJetAK8CSV_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8Energy_JetSubCalc", &theJetAK8Energy_JetSubCalc, &b_theJetAK8Energy_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8Eta_JetSubCalc", &theJetAK8Eta_JetSubCalc, &b_theJetAK8Eta_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8GenDR_JetSubCalc", &theJetAK8GenDR_JetSubCalc, &b_theJetAK8GenDR_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8GenPt_JetSubCalc", &theJetAK8GenPt_JetSubCalc, &b_theJetAK8GenPt_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8JetCharge_JetSubCalc", &theJetAK8JetCharge_JetSubCalc, &b_theJetAK8JetCharge_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8Mass_JetSubCalc", &theJetAK8Mass_JetSubCalc, &b_theJetAK8Mass_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NEmEFrac_JetSubCalc", &theJetAK8NEmEFrac_JetSubCalc, &b_theJetAK8NEmEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NEmEnergy_JetSubCalc", &theJetAK8NEmEnergy_JetSubCalc, &b_theJetAK8NEmEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NHadEFrac_JetSubCalc", &theJetAK8NHadEFrac_JetSubCalc, &b_theJetAK8NHadEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NHadEnergy_JetSubCalc", &theJetAK8NHadEnergy_JetSubCalc, &b_theJetAK8NHadEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NjettinessTau1_JetSubCalc", &theJetAK8NjettinessTau1_JetSubCalc, &b_theJetAK8NjettinessTau1_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NjettinessTau2_JetSubCalc", &theJetAK8NjettinessTau2_JetSubCalc, &b_theJetAK8NjettinessTau2_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8NjettinessTau3_JetSubCalc", &theJetAK8NjettinessTau3_JetSubCalc, &b_theJetAK8NjettinessTau3_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8Phi_JetSubCalc", &theJetAK8Phi_JetSubCalc, &b_theJetAK8Phi_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8PrunedMassWtagUncerts_JetSubCalc", &theJetAK8PrunedMassWtagUncerts_JetSubCalc, &b_theJetAK8PrunedMassWtagUncerts_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8PrunedMass_JetSubCalc", &theJetAK8PrunedMass_JetSubCalc, &b_theJetAK8PrunedMass_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8Pt_JetSubCalc", &theJetAK8Pt_JetSubCalc, &b_theJetAK8Pt_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetBTag_JetSubCalc", &theJetAK8SDSubjetBTag_JetSubCalc, &b_theJetAK8SDSubjetBTag_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetCSV_JetSubCalc", &theJetAK8SDSubjetCSV_JetSubCalc, &b_theJetAK8SDSubjetCSV_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetDR_JetSubCalc", &theJetAK8SDSubjetDR_JetSubCalc, &b_theJetAK8SDSubjetDR_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetEta_JetSubCalc", &theJetAK8SDSubjetEta_JetSubCalc, &b_theJetAK8SDSubjetEta_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetMass_JetSubCalc", &theJetAK8SDSubjetMass_JetSubCalc, &b_theJetAK8SDSubjetMass_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetPhi_JetSubCalc", &theJetAK8SDSubjetPhi_JetSubCalc, &b_theJetAK8SDSubjetPhi_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SDSubjetPt_JetSubCalc", &theJetAK8SDSubjetPt_JetSubCalc, &b_theJetAK8SDSubjetPt_JetSubCalc);
   inputtree->SetBranchAddress("theJetAK8SoftDropMass_JetSubCalc", &theJetAK8SoftDropMass_JetSubCalc, &b_theJetAK8SoftDropMass_JetSubCalc);
   inputtree->SetBranchAddress("theJetCEmEFrac_JetSubCalc", &theJetCEmEFrac_JetSubCalc, &b_theJetCEmEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetCEmEnergy_JetSubCalc", &theJetCEmEnergy_JetSubCalc, &b_theJetCEmEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetCHadEFrac_JetSubCalc", &theJetCHadEFrac_JetSubCalc, &b_theJetCHadEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetCHadEnergy_JetSubCalc", &theJetCHadEnergy_JetSubCalc, &b_theJetCHadEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetCSV_JetSubCalc", &theJetCSV_JetSubCalc, &b_theJetCSV_JetSubCalc);
   inputtree->SetBranchAddress("theJetEnergy_JetSubCalc", &theJetEnergy_JetSubCalc, &b_theJetEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetEta_JetSubCalc", &theJetEta_JetSubCalc, &b_theJetEta_JetSubCalc);
   inputtree->SetBranchAddress("theJetMuonEFrac_JetSubCalc", &theJetMuonEFrac_JetSubCalc, &b_theJetMuonEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetNEmEFrac_JetSubCalc", &theJetNEmEFrac_JetSubCalc, &b_theJetNEmEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetNEmEnergy_JetSubCalc", &theJetNEmEnergy_JetSubCalc, &b_theJetNEmEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetNHadEFrac_JetSubCalc", &theJetNHadEFrac_JetSubCalc, &b_theJetNHadEFrac_JetSubCalc);
   inputtree->SetBranchAddress("theJetNHadEnergy_JetSubCalc", &theJetNHadEnergy_JetSubCalc, &b_theJetNHadEnergy_JetSubCalc);
   inputtree->SetBranchAddress("theJetPhi_JetSubCalc", &theJetPhi_JetSubCalc, &b_theJetPhi_JetSubCalc);
   inputtree->SetBranchAddress("theJetPileupJetId_JetSubCalc", &theJetPileupJetId_JetSubCalc, &b_theJetPileupJetId_JetSubCalc);
   inputtree->SetBranchAddress("theJetPt_JetSubCalc", &theJetPt_JetSubCalc, &b_theJetPt_JetSubCalc);
   inputtree->SetBranchAddress("theJetVtx3DSig_JetSubCalc", &theJetVtx3DSig_JetSubCalc, &b_theJetVtx3DSig_JetSubCalc);
   inputtree->SetBranchAddress("theJetVtx3DVal_JetSubCalc", &theJetVtx3DVal_JetSubCalc, &b_theJetVtx3DVal_JetSubCalc);
   inputtree->SetBranchAddress("theJetVtxMass_JetSubCalc", &theJetVtxMass_JetSubCalc, &b_theJetVtxMass_JetSubCalc);
   inputtree->SetBranchAddress("theJetVtxNtracks_JetSubCalc", &theJetVtxNtracks_JetSubCalc, &b_theJetVtxNtracks_JetSubCalc);
   inputtree->SetBranchAddress("tau_njettiness_XConeCalc", &tau_njettiness_XConeCalc, &b_tau_njettiness_XConeCalc);
   inputtree->SetBranchAddress("tau_njettiness_diff_XConeCalc", &tau_njettiness_diff_XConeCalc, &b_tau_njettiness_diff_XConeCalc);
   inputtree->SetBranchAddress("tau_njettiness_div_XConeCalc", &tau_njettiness_div_XConeCalc, &b_tau_njettiness_div_XConeCalc);
   inputtree->SetBranchAddress("theXConeJetEnergy_XConeCalc", &theXConeJetEnergy_XConeCalc, &b_theXConeJetEnergy_XConeCalc);
   inputtree->SetBranchAddress("theXConeJetEta_XConeCalc", &theXConeJetEta_XConeCalc, &b_theXConeJetEta_XConeCalc);
   inputtree->SetBranchAddress("theXConeJetPhi_XConeCalc", &theXConeJetPhi_XConeCalc, &b_theXConeJetPhi_XConeCalc);
   inputtree->SetBranchAddress("theXConeJetPt_XConeCalc", &theXConeJetPt_XConeCalc, &b_theXConeJetPt_XConeCalc);
   inputtree->SetBranchAddress("electron_hltfilters_singleLepCalc", &electron_hltfilters_singleLepCalc, &b_electron_hltfilters_singleLepCalc);
   inputtree->SetBranchAddress("muon_hltfilters_singleLepCalc", &muon_hltfilters_singleLepCalc, &b_muon_hltfilters_singleLepCalc);
   inputtree->SetBranchAddress("vsSelMCTriggersEl_singleLepCalc", &vsSelMCTriggersEl_singleLepCalc, &b_vsSelMCTriggersEl_singleLepCalc);
   inputtree->SetBranchAddress("vsSelMCTriggersMu_singleLepCalc", &vsSelMCTriggersMu_singleLepCalc, &b_vsSelMCTriggersMu_singleLepCalc);
   inputtree->SetBranchAddress("vsSelTriggersEl_singleLepCalc", &vsSelTriggersEl_singleLepCalc, &b_vsSelTriggersEl_singleLepCalc);
   inputtree->SetBranchAddress("vsSelTriggersMu_singleLepCalc", &vsSelTriggersMu_singleLepCalc, &b_vsSelTriggersMu_singleLepCalc);
   Notify();
}

Bool_t step1_XCone::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void step1_XCone::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!inputtree) return;
   inputtree->Show(entry);
}
Int_t step1_XCone::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef step1_XCone_cxx
