#include "header.h"
#include <stdio.h>

int recursive_fibo(unsigned n)
{
   if (n==0)
		return 0;
	if (n==1)
		return 1;
	else	
		int m=recursive_fibo(n-1)+recursive_fibo(n-2);
	return m; 
}
