//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/30/2023
// C1A4E1_main.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #4 C1A4E1 (C)
// This program comparing and returning MAX and MIN values 
// from two numbers user imput using two functions
//

#include <stdio.h>

double ComputeMinimum(double first_number, double second_number);
double ComputeMaximum(double first_number, double second_number);

int main(void)
{
    double first_number, second_number;
    printf("Enter two numbers:");
    scanf_s("%lg %lg", &first_number, &second_number);
    printf("ComputeMinimum(%g, %g) returned %g\n", first_number, second_number,
        ComputeMinimum(first_number, second_number));
    printf("ComputeMaximum(%g, %g) returned %g\n",
        first_number, second_number, ComputeMaximum(first_number, second_number));
    return 0;
}
