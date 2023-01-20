//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/17/2023
// C1A2E2_main.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #2 C1A2E2 (C)
//

#include <stdio.h>

int main(void)
{
    int number = 0, countdown = 0;
    const char LEADER_CHAR = '^';
    const char DIAGONAL_CHAR = '$';

    printf("Enter positive value: ");
    scanf_s("%d", &number);
    countdown = number;
    for (int i = 0; i < countdown; i++)
    {
        for (int k = number - 1; k > 0; k--)
        {
            printf("%c", LEADER_CHAR);
        }
        number--;
        printf("%c\n", DIAGONAL_CHAR);
    }
    return 0;
}