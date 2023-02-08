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
// Calculating how many of each rating values was assigned from customer input
// in a given range. End of customers or given consecutive out of range 
// attempts used to finish the program.

#include <stdio.h>

#define SHOPPERS ('q' - 'd')                       // number of shoppers
#define WORST (-10)                                // lowest number <= BEST
#define BEST (-4)                                  // highest number >= WORST
#define CHOICES (BEST - WORST + 1)                 // working range
#define MAX_ERRORS  3                              // out of range attempts

int main(void)
{
    printf("Allowed rating range: [%d to %d]\n"
           "Maximum inputs to terminate: %d\n", 
           BEST, WORST, MAX_ERRORS);

    int feedbacks[CHOICES] = {0};                  // count for each number
    int errors = 0;                                // out of range counter
    for (int shopper = 1; shopper <= SHOPPERS;)
    {
        printf("Shopper %d: ", shopper);
        int userInput;
        scanf_s("%d", &userInput);
        // correct input
        if (userInput >= WORST && userInput <= BEST)
        {
            ++feedbacks[userInput - WORST];        // increment response count
            errors = 0;                            // refresh error counter
        }
        // input out of range
        else 
        {
            printf("->Out of range: %d<-\n", userInput);
            ++errors;
            if (errors == MAX_ERRORS)
            {
                printf("->Survey incomplete: Range error termination<-\n\n");
                break;
            }
            continue;
        }
        ++shopper;
    }
    //format table and output numbers
    printf("\nRating       Quantity\n"
           "------       --------\n");
    for (int countArr = CHOICES - 1; countArr >= 0; --countArr)
        printf("%6d %14d\n", countArr + WORST, feedbacks[countArr]);
}
