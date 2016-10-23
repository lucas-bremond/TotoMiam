////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	This file is part of the TotoMiam library.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file 						TotoMiam/Version.cpp
///	@author 					Lucas Bremond <lucas@axelspace.com>
///	@date 						9 Oct 2016

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <TotoMiam/Version.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace TotoMiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

								Version::Version							( )
								:	major_(0),
									minor_(0),
									patch_(0)
{

}

uint 							Version::getMajor							( ) const
{
	return major_ ;
}

uint							Version::getMinor							( ) const
{
	return minor_ ;
}

uint							Version::getPatch							( ) const
{
	return patch_ ;
}

String							Version::getString							( ) const
{

	char buffer[10] ;
	
	sprintf(buffer, "%d.%d.%d", major_, minor_, patch_) ;	

	return String(buffer) ;

}

Version 						Version::Current							( )
{

	Version						version ;

	version.major_																=		1 ;
	version.minor_																=		0 ;
	version.patch_																=		0 ;

	return version ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////