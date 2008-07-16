//////////////////////////////// -*- C++ -*- //////////////////////////////
//
// FILE NAME
//    BaseFieldSource.hh
//
// CREATED
//    04/21/2003
//
// DESCRIPTION
//    The base class for field source. It should be sub-classed. The units
//    for E and B are unknown at this point. They should be defined in 
//    subclasses.
//
///////////////////////////////////////////////////////////////////////////
#ifndef BASE_FIELD_SOURCE_H
#define BASE_FIELD_SOURCE_H

#include "CppPyWrapper.hh"

namespace OrbitUtils{
	class  BaseFieldSource: public CppPyWrapper
	{
	public:
		
		BaseFieldSource();
		virtual ~BaseFieldSource();
		
		virtual void getElectricField(double x, double y, double z, double t, double& f_x, double& f_y, double& f_z);
		virtual void getMagneticField(double x, double y, double z, double t, double& f_x, double& f_y, double& f_z);

	};
};

#endif