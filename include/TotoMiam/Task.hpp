////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	This file is part of the TotoMiam library.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file 						TotoMiam/Task.hpp
///	@author 					Lucas Bremond <lucas@axelspace.com>
///	@date 						9 Oct 2016

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __TotoMiam_Task_HPP_INCLUDED__
#define __TotoMiam_Task_HPP_INCLUDED__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <SmingCore/SmingCore.h>

#include <TotoMiam/Time.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace TotoMiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Task
{

	public:

		enum class Status
		{

			Undefined,
			Pending,
			Executing,
			Completed,
			Failed

		} ;

								Task 										( ) ;

								Task 										( 	const 	uint&						anId,
																				const 	Time&						anExecutionTime						) ;

		bool					isDefined									( ) const ;

		uint					getId										( ) const ;
		Task::Status 			getStatus									( ) const ;
		Time 					getExecutionTime							( ) const ;

		void					setStatus									(	const 	Task::Status&				aStatus								) ;

		void					execute										( ) ;

		static Task 			Undefined									( ) ;

		static String			getStringOfStatus							(	const 	Task::Status&				aStatus								) ;

	private:

		uint					id_ ;
		Task::Status			status_ ;
		Time 					executionTime_ ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////