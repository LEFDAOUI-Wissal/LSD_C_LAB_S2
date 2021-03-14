#include "header.h"
#include <stdio.h>

int iterative_fibo(int n)
{
    int m=1, s=1;
	for (int i =1, i<=n , i++)
	    {
		    int F= m+ s;
		    m=s;
		    s=F;
	    }
	return F;
}
