//
//  main.c
//  PrimeNumberBetweenRange
//
//  Created by Prajwal Dhungana on 10/20/20.
//

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

#include "header.h"

//beginning of the main function
int main(int argc, char** argv) {
    //declaring variables
    int a;
    int b;
    
    //Instruction for user input
    printf("**************************************************\n");
    printf("*  Prints prime numbers between entered numbers  *\n");
    printf("**************************************************\n");

    //Asking for the user input
    printf("Please enter the first number: ");
    scanf(" %d", &a);

    printf("Please enter the second number: ");
    scanf(" %d", &b);
    printf("\n");
    printf("Prime numbers between %d and %d: \n", a, b);

    //incrementing value of a by 1 and storing it into a variable so that we dont count a as prime
    int checker = a + 1;

    while(checker < b)
    {
        //Calling return value from function and storing it to a variable
        int retVal = is_prime(checker);
        
        if (retVal == 1)
        {
            printf(" %d\n", checker);
        }
        
        //increment checker
        checker++;
    }
    
    //print greeting message
    printf("\nThanks for using the program.\n");
    printf("\n");
    
    return (EXIT_SUCCESS);
}
//end of main

