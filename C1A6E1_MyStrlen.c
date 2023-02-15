//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E1_MyStrlen.c
// Win10
// Visual Studio 2022, ISO C17
//
// Assignment #6 C1A6E1 (C)
// MyStrlen function return the string length with NO null terminator
// character using pointer arithmetic technique.

#include <stddef.h> // for size_t

size_t MyStrlen(const char* s1) 
{
    const char* const ORIG = s1;
    while (*s1)
    { 
        // increment while '\0' are reached
        s1++; 
    }
    // substract original length from increased length ('\0' not included)
    return (size_t)(s1 - ORIG);
}
