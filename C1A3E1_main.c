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
//

#include <stdio.h>

int main(void) {

    int input_pow1, pow7, pow8;

    printf("Enter integer value >= 0: ");
    scanf_s("%d", &input_pow1);

    printf("n         n^7         n^8 \n-------------------------\n");

    for (int j = 0; j <= input_pow1; j++) {
        printf("%d", j);

        pow7 = j * j * j * j * j * j * j;
        printf("%12d", pow7);

        pow8 = j * pow7;
        printf("%12d\n", pow8);
    }
    return 0;
}