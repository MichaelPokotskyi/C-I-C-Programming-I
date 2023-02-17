//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E3_main.c
// Win10
// Visual Studio 2022, ISO C17
//
// Assignment #6 C1A6E3 (C)

#include <stdio.h>

#define BUF_LENGTH 256

char* GetSubstring(const char source[], int start, int count, char result[]);

int main(void)
{
    int start, count;
    char source[BUF_LENGTH], result[BUF_LENGTH], *p;
    
    printf("Enter string: ");
    fgets(source, BUF_LENGTH, stdin);
    source[strcspn(source, "\n")] = '\0';

    printf("Enter start and count values to get substring: ");
    scanf("%d %d", &start, &count);
       
    printf("%s", GetSubstring(source, start, count, result));
}
