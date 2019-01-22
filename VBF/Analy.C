#include <TChain.h>
#include <TSystem.h>
#include <TClonesArray.h>
#include <TH1F.h>
#include <TH1.h>
#include </home/twkang/Madgraph/MG5_aMC_v2_6_4/ExRootAnalysis/ExRootAnalysis/ExRootClasses.h>
#include </home/twkang/Madgraph/MG5_aMC_v2_6_4/ExRootAnalysis/ExRootAnalysis/ExRootTreeBranch.h>
#include </home/twkang/Madgraph/MG5_aMC_v2_6_4/ExRootAnalysis/ExRootAnalysis/ExRootTreeReader.h>

void Analy(){
  gSystem->Load("/home/twkang/Madgraph/MG5_aMC_v2_6_4/ExRootAnalysis/libExRootAnalysis.so");
  gSystem->Load("libPhysics");
  TChain chain("LHCO");
  chain.Add("13TeVQCDZeroMass1000.root");

  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  Long64_t numberOfEntries = treeReader->GetEntries();

  TClonesArray *branchJet = treeReader->UseBranch("Jet");
  TClonesArray *branchElectron = treeReader->UseBranch("Electron");
//  TClonesArray *branchMET = treeReader->UseBranch("");


  TH1 *histJetPT = new TH1F("jet_pt", "jet P_{T}", 100, 0.0, 100.0);
  TH1 *histMass = new TH1F("mass", "M_{inv}(e_{1}, e_{2})", 100, 40.0, 140.0);




  for(Int_t entry = 0; entry < numberOfEntries; ++entry) {
    treeReader->ReadEntry(entry);
    if(branchJet->GetEntries() > 0) {
      TRootJet *jet = (TRootJet*) branchJet->At(0);
      histJetPT->Fill(jet->PT);
      TLorentzVector vec;
      elec1 = (TRootElectron *) branchElectron->At(0);
      histMass->Fill(vec.M());
	}	
}	

  histJetPT->Draw();
  histMass->Draw();
}

