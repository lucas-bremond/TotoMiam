$(document).ready
(
	function ()
	{
	
		(
			function worker ()
			{
				$.getJSON
				(
					'/status',
					function (data)
					{
						
						console.log(data) ;

						$('span[name="version"]').html(data['version']) ;
						
						setTimeout(worker, 5000) ;

					}
				) ;
			}
		)() ;

		(
			function worker ()
			{
				$.getJSON
				(
					'/current_time',
					function (data)
					{

						$('span[name="current-time"]').html(data['time'].substr(11, 8)) ;
						
						setTimeout(worker, 5000) ;

					}
				) ;
			}
		)() ;

		$('button[action="add-immediate-task"]').click
		(
			function ()
			{

				$('button[action="add-immediate-task"]').prop('disabled', true) ;

				$('button[action="add-immediate-task"]').removeClass('btn-info') ;
				$('button[action="add-immediate-task"]').removeClass('btn-success') ;
				$('button[action="add-immediate-task"]').removeClass('btn-danger') ;
				$('button[action="add-immediate-task"]').addClass('btn-warning') ;

				$.post
				(
					'/task',
					function (data)
					{
						
					}
				)
				.done
				(
					function ( )
					{
						$('button[action="add-immediate-task"]').removeClass('btn-warning') ;
						$('button[action="add-immediate-task"]').addClass('btn-success') ;
					}
				)
				.fail
				(
					function ( )
					{
						$('button[action="add-immediate-task"]').removeClass('btn-warning') ;
						$('button[action="add-immediate-task"]').addClass('btn-danger') ;
					}
				)
				.always
				(
					function ( )
					{
    					$('button[action="add-immediate-task"]').prop('disabled', false) ;
					}
				) ;

			}
		) ;
	
	}
) ;