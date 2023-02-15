//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E1_MyStrlen.c
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #6 C1A6E1 (C)

#include <stddef.h>

size_t MyStrlen(const char* s1) 
{
    const char* const START = s1;
    char* p = s1;
    
    while (*s1 == *p) {}

    return 5;
}