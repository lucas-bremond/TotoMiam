////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	This file is part of the TotoMiam library.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file 						TotoMiam/ServerManager.hpp
///	@author 					Lucas Bremond <lucas@axelspace.com>
///	@date 						9 Oct 2016

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __TotoMiam_ServerManager_HPP_INCLUDED__
#define __TotoMiam_ServerManager_HPP_INCLUDED__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <SmingCore/SmingCore.h>

#include <TotoMiam/TaskManager.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace TotoMiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ServerManager
{

	public:

								ServerManager 								( ) ;

		bool					isActive									( ) const ;

		void					start										( ) ;
		void					stop										( ) ;

		void					associateTaskManager						(			TaskManager&				aTaskManager						) ;

	private:

		uint					port_ ;

		HttpServer*				serverPtr_ ;

		TaskManager*			taskManagerPtr_ ;

		void					onStatus									(			HttpRequest&				aRequest,
																						HttpResponse&				aResponse							) ;

		void					onCurrentTime								(			HttpRequest&				aRequest,
																						HttpResponse&				aResponse							) ;

		void					onTask										(			HttpRequest&				aRequest,
																						HttpResponse&				aResponse							) ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////