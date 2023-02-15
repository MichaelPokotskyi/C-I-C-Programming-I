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
#include <string.h> // for strlen()

#define BUF_LENGTH 256

size_t MyStrlen(const char* s1);

int main(void)
{
    printf("Enter a string: ");
    char inBuf[BUF_LENGTH];
    fgets(inBuf, BUF_LENGTH, stdin);
    inBuf[strcspn(inBuf, "\n")] = '\0';
    printf("strlen (\"%s\") returned %d\n", inBuf, strlen(inBuf));
    printf("MyStrlen (\"%s\") returned %d\n", inBuf, MyStrlen(inBuf));
}