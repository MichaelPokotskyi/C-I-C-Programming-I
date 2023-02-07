//#include <iostream>
//using namespace std;

//int main()
//{

//}


#include <stdio.h>

// SET B
#define SHOPPERS 3
#define BEST (-3)
#define WORST (-3)
#define CHOICES ((BEST) - (WORST) + (1))
#define MAX_ERRORS 3

int main(void)
{
    int arr[CHOICES] = {0};
    printf("Allowed rating range is: %d MAX_ERRORS value is: %d\n",
        CHOICES, MAX_ERRORS);
    
}