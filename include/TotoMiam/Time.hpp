////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	This file is part of the TotoMiam library.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file 						TotoMiam/Time.hpp
///	@author 					Lucas Bremond <lucas@axelspace.com>
///	@date 						9 Oct 2016

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __TotoMiam_Time_HPP_INCLUDED__
#define __TotoMiam_Time_HPP_INCLUDED__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <SmingCore/SmingCore.h>

#include <TotoMiam/Duration.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace TotoMiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Time
{

	public:

								Time 										( ) ;

		bool					operator ==									(	const 	Time&						aTime 								) const ;
		bool					operator !=									(	const 	Time&						aTime 								) const ;
		bool					operator <=									(	const 	Time&						aTime 								) const ;
		bool					operator <									(	const 	Time&						aTime 								) const ;
		bool					operator >=									(	const 	Time&						aTime 								) const ;
		bool					operator >									(	const 	Time&						aTime 								) const ;

		Time 					operator +									(	const 	Duration&					aDuration							) const ;

		bool					isDefined									( ) const ;

		String					getString									( ) const ;

		static Time 			Undefined									( ) ;

		static Time 			Now											( ) ;

		static Time 			Unix										( 	const 	time_t&						aTimestamp							) ;

		static Time 			Parse										( 	const 	String&						aTimeString							) ;

	private:

		time_t					timestamp_ ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////