//
//  source.c
//  PrimeNumberBetweenRange
//
//  Created by Prajwal Dhungana on 10/20/20.
//

//Linking source to header file
#include "header.h"

//Prime checker function
int is_prime(int n)
{
    //declaration of variables
    int  i;
    int num_factors = 0;

    for (i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            num_factors ++ ;
        }
    }//end of for loop

    if (num_factors == 2)
    {
        return 1 ;
    }//end if

    else
    {
        return 0;
    }//end else
}
//end of function

