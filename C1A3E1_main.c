//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/24/2023
// C1A3E1_main.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #3 C1A3E1 (C)
// PRINTF table formatting for entered number to ^7 and ^8 power
// with displaying intermediate powers.
// 
// For representing numbers bigger then supported by built-in types, 
// user defined types might be used.
//

#include <stdio.h>

int main(void) {
    int input_pow1;
    printf("Enter integer value >= 0: ");
    scanf_s("%d", &input_pow1);
    printf(" n^1         n^7         n^8\n"
        "------------------------------\n");
    for (int pow1 = 0; pow1 <= input_pow1; pow1++) {
        int pow7, pow8;
        printf("%4d", pow1);
        // pow7 done by multiplication as advised
        pow7 = pow1 * pow1 * pow1 * pow1 * pow1 * pow1 * pow1;
        printf("%12d", pow7);
        // pow8 done by multiplication by pow7 to pow1
        pow8 = pow1 * pow7;
        printf("%12d\n", pow8);
    }
    return 0;
}
