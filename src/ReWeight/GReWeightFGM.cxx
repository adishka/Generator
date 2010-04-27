//____________________________________________________________________________
/*
 Copyright (c) 2003-2010, GENIE Neutrino MC Generator Collaboration
 For the full text of the license visit http://copyright.genie-mc.org
 or see $GENIE/LICENSE

 Authors: Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
          STFC, Rutherford Appleton Laboratory

 For the class documentation see the corresponding header file.

 Important revisions after version 2.0.0 :
 @ Apr 27, 2010 - CA
   First included in v2.7.1.

*/
//____________________________________________________________________________

#include "EVGCore/EventRecord.h"
#include "Messenger/Messenger.h"
#include "PDG/PDGCodes.h"
#include "ReWeight/GReWeightFGM.h"

using namespace genie;
using namespace genie::rew;

//_______________________________________________________________________________________
GReWeightFGM::GReWeightFGM() :
GReWeightI()
{

}
//_______________________________________________________________________________________
GReWeightFGM::~GReWeightFGM()
{

}
//_______________________________________________________________________________________
bool GReWeightFGM::IsHandled(GSyst_t /*syst*/)
{
   return false;
}
//_______________________________________________________________________________________
void GReWeightFGM::SetSystematic(GSyst_t /*syst*/, double /*val*/)
{

}
//_______________________________________________________________________________________
void GReWeightFGM::Reset(void)
{

}
//_______________________________________________________________________________________
void GReWeightFGM::Reconfigure(void)
{

}
//_______________________________________________________________________________________
double GReWeightFGM::CalcWeight(const EventRecord & /*event*/) 
{  
  return 1.0;
}
//_______________________________________________________________________________________
double GReWeightFGM::CalcChisq(void)
{
  return 0.;
}
//_______________________________________________________________________________________
