{
  //gSystem->Load("../build/libPrt.so");
  gROOT->ProcessLine(".L ../src/PrtHit.cxx+");   // in prtdirc/src
  gROOT->ProcessLine(".L ../src/PrtEvent.cxx+");
  gROOT->ProcessLine(".L ../src/PrtLutNode.cxx+");
}
