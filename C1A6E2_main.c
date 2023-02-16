//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E2_main.c
// Win10
// Visual Studio 2022, ISO C17
//
// Assignment #6 C1A6E2 (C)
// Function main providing two user-input C-strings, calling standard 'strcmp'
// function to compare strings, then comparing that strings with custom built 
// function 'MyStrcmp' should return same value.

#include <stdio.h>
#include <string.h> // for strcmp()

#define BUF_LENGTH 256

int MyStrcmp(const char *s1, const char *s2);

int main(void)
{
    printf("Enter first string: ");
    // array of chars
    char inBufF[BUF_LENGTH], inBufS[BUF_LENGTH];

    fgets(inBufF, BUF_LENGTH, stdin);
    inBufF[strcspn(inBufF, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(inBufS, BUF_LENGTH, stdin);
    inBufS[strcspn(inBufS, "\n")] = '\0';

    printf("strcmp (\"%s\", \"%s\")  returned %d\n",
        inBufF, inBufS, strcmp(inBufF, inBufS));
    printf("MyStrcmp (\"%s\", \"%s\")  returned %d\n",
        inBufF, inBufS, MyStrcmp(inBufF, inBufS));
}
