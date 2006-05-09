//____________________________________________________________________________
/*!

\namespace genie::controls

\brief     Misc GENIE control constants

\author    Costas Andreopoulos <C.V.Andreopoulos@rl.ac.uk>
           CCLRC, Rutherford Appleton Laboratory

\created   May 03, 2004

\cpright   Copyright (c) 2003-2006, GENIE Neutrino MC Generator Collaboration
           All rights reserved.
           For the licensing terms see $GENIE/USER_LICENSE.
*/
//____________________________________________________________________________

#ifndef _CONTROLS_H_
#define _CONTROLS_H_

namespace genie {
namespace controls {

// Maximum allowed number of iterations in rejection MC method
// before selecting a valid number
static const unsigned int kRjMaxIterations = 1000;

// Maximum allowed depth when GENIE is running in recursive mode
static const unsigned int kRecursiveModeMaxDepth = 100;

// Maximum allowed number of EVGThreadExceptions that is allowed
// to be caught by EventGenerator at a single event generation thread
static const unsigned int kMaxEVGThreadExceptions = 350;

// Default random number generator seed number. It can be overriden
// setting the $GSEED env. var. or by using RandomGen::SetSeed(int)
static const unsigned int kDefaultRandSeed = 65539;

static const double kASmallNum    = 1E-6;  
static const double kMinQ2Limit   = 1E-4;
static const double kMinX         = 1E-4;
static const double kMaxX         = 1.-kASmallNum;
static const double kMinY         = 1E-4;
static const double kMaxY         = 1.-kASmallNum;

// KNO Hadronization model control parameters

// Default 'maximum' multiplicity for multiplicity probability distributions.
// This is not a 'hard limit'. If it is needed it will be extended internally
// by the KNO hadronization model.
static const int kMaxMultiplicity = 35;  

// Maximum number of attempts by the KNO hadronizer for finding a valid f/s
// hadronic system before going in error and quiting
static const int kMaxKNOHadSystIterations = 400;  

} // namespace controls
} // namespace genie

#endif // _CONTROLS_H_


