//int 7 check

integer main()
{
	integer i,pid,status;
	i=1;
	pid = Fork();
	if(pid==-2) then
		print("about to call exec");
		status = Exec("odd.xsm");
	else
		while( i<=20 ) do 
			if ( i%2==0) then
				print("even");
				print(i);
			endif;
			if(i==4) then
				print("before exit");
				Exit();
				print("after exit");
			endif;
			i=i+1;
		endwhile;
	endif;	
	return 0;					
}
