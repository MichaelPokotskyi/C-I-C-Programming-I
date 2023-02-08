//#include <stdio.h>
//
//#define SHOPPERS 10  // number of shoppers
//#define WORST 0                         // lowest number - must be <= BEST (LOWEST)
//#define BEST 3                          // highest number - must be >= WORST (HIGHEST)
//#define CHOICES (BEST - WORST + 1)    // range
//#define MAX_ERRORS  2 
//
//int main(void)
//{
//    printf("Allowed rating range: [%d to %d]\nMaximum inputs to terminate: %d\n",
//                BEST, WORST, MAX_ERRORS);
//
//    int responses[CHOICES] = { 0 };                // holds count of each number
//    int err_count = 0;
//    // Loop to get guest responses.
//    for (int shopper = 1; shopper <= SHOPPERS; ++shopper)
//    {
//        printf("Shopper %d: ", shopper);              // prompt guest
//        int response;
//        scanf_s("%d", &response);                   // get response
//
//        // Record the guest's choice if in range.
//        if (response >= WORST && response <= BEST)
//        {
//            ++responses[response - WORST];        // increment response count
//            err_count = 0;
//        }
//        else 
//        {
//
//            printf("->Out of range: %d<-\n", response);
//            ++err_count;
//            if (err_count == MAX_ERRORS)
//            {
//                printf("->Survey incomplete: Range error termination<-\n");
//                break;
//            }
//            shopper -= 1;
//            continue;
//        }
//
//    }
//
//    
//    printf("Rating       Quantity\n------      --------\n");
//    // Display the number of occurrences of each possible choice.
//    for (int respIx = CHOICES - 1; respIx >= 0; --respIx)
//                printf("%6d %14d\n", respIx + WORST, responses[respIx]);
//}

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "He lo lo" << endl;
//    return 0;
//}
