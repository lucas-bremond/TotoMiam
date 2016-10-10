////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	This file is part of the TotoMiam library.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file 						TotoMiam/ApplicationStorage.hpp
///	@author 					Lucas Bremond <lucas@axelspace.com>
///	@date 						9 Oct 2016

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __TotoMiam_ApplicationStorage_HPP_INCLUDED__
#define __TotoMiam_ApplicationStorage_HPP_INCLUDED__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <SmingCore/SmingCore.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace TotoMiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define APP_SETTINGS_FILE "Settings.json"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ApplicationStorage
{

	public:

								ApplicationStorage							( ) ;

		bool 					isDefined									( ) ;

		const String&			accessSSID									( ) const ;
		const String&			accessPassword								( ) const ;

		void 					load										( ) ;
		void 					save										( ) ;

	private:

		String 					ssid_ ;
		String 					password_ ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////