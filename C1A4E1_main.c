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
// This programm comparing and returning MAX and MIN values 
// from two numbers user imput using two methods
//

#include <stdio.h>

double ComputeMinimum(double a, double b);
double ComputeMaximum(double a, double b);

int main()
{
    /*double first_number, second_number, min = 0;
    printf("Enter two numbers:");
    scanf_s("%lg %lg", &first_number, &second_number);
    min = ComputeMinimum(first_number, second_number);
    printf("%g %g %g", first_number, second_number, min);
    //"ComputeMinimum %lg %lg returned %lg\n", */

    printf("%g\n", ComputeMinimum(1.1, 2.6));
    printf("%g\n", ComputeMaximum(1.1, 2.6));
    return 0;


    return 0;
}
