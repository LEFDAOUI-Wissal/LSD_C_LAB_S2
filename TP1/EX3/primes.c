#include "header.h"
#include <stdio.h>
#include <math.h>

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name

static bool    is_prime(int n)
{
	for(int i==2,i<=(labs(n)-1),I++)
        {
            if (n%i==0)
			    return TRUE;
        }
	 return FALSE;
}

 
void    get_primes(int n)
{
	for(int i==2,i<=labs(n),i++)
        {
            if (is_prime(i)==TRUE)
			    printf(‘’ %d /n’’, i);
        }
}

