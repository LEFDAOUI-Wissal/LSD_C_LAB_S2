#include "header.h"
#include <stdio.h>
#include <math.h>

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime_opt(int n)
{
    for(int i==2,i<=(sqrt(labs(n)),i++)
        {   
            if (n%i==0)
			    return TRUE;
        }
	 return FALSE;
}


void    get_primes_opt(int n)
{
	if (n==0)
		return ;
	if(n==1)
		printf(’’%c’’, 1);
    else
    {
	    printf(’’%c’’, 2);
	    for(int i==3,i<=(labs(n)), i=i+2)
		    if (is_prime(i)==1)
			    printf(‘’ %d ’’, i);
    }
}
