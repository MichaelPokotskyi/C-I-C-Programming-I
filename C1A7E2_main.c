//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/20/2023
// C1A7E2_main.c
// Win10
// Visual Studio 2022, ISO C17
//
// Assignment #7 C1A7E2 (C)

#include <stdio.h>

#define LUNCH_QTY 5



int main(void)
{

    struct Food
    {
        char* name; /* "name" attribute of food */
        int weight, calories; /* "weight" and "calories" attributes of food */
    } lunches[LUNCH_QTY] = {
        {"Apple", 4, 100},
        {"Salad", 2, 80},
    };



    return 0;
}