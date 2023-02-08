//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/6/2023
// C1A5E1_main.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #5 C1A5E1 (C)
// Program 

#include <stdio.h>

#define SHOPPERS 13                                 // number of shoppers
#define WORST -10                                   // lowest number <= BEST
#define BEST -4                                     // highest number >= WORST
#define CHOICES (BEST - WORST + 1)                  // working range
#define MAX_ERRORS  3                               // out of range attempts

int main(void)
{
    printf("Allowed rating range: [%d to %d]\nMaximum inputs to terminate: %d\n",
        BEST, WORST, MAX_ERRORS);

    int responses[CHOICES] = { 0 };                // storing count of each number
    int errCount = 0;                              // error counter initialization
    // Loop to get guest responses.
    for (int shopper = 1; shopper <= SHOPPERS; ++shopper)
    {
        printf("Shopper %d: ", shopper);
        int userInput;
        scanf_s("%d", &userInput);
        if (shopper == SHOPPERS)
        {
            printf("\n");                          // extra whitespace before table
        }

        // couuect input
        if (userInput >= WORST && userInput <= BEST)
        {
            ++responses[userInput - WORST];        // increment response count
            errCount = 0;                         // refresh error counter
        }
        // input out of range
        else 
        {
            printf("->Out of range: %d<-\n", userInput);
            ++errCount;
            if (errCount == MAX_ERRORS)
            {
                printf("->Survey incomplete: Range error termination<-\n\n");
                break;
            }
            shopper -= 1;                         // stay at current index
            continue;
        }

    }

    //format table and output numbers
    printf("Rating       Quantity\n------      --------\n");
    for (int countArr = CHOICES - 1; countArr >= 0; --countArr)
        printf("%6d %14d\n", countArr + WORST, responses[countArr]);
}
