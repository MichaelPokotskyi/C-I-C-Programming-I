//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E1_main.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #6 C1A6E1 (C)


#include <stdio.h>
#include <string.h>

#define BUF_LENGTH 256

size_t MyStrlen(const char* s1);

int main(void)
{
    printf("Enter a string: ");
    char inBuf[BUF_LENGTH];
    scanf("%255s", inBuf);
    printf("strlen (\"%s\") returned %u\n", inBuf, strlen(inBuf));
    printf("MyStrlen (\"%s\") returned %u\n", inBuf, MyStrlen(inBuf));

    //printf("%s", inBuf);
}