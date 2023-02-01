//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/30/2023
// C1A4E2_PrintLines-2.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A4E2 (C++)
// Function printing given character as many times as passed in arguments.

#include <iostream>
using namespace std;

void PrintLines(int symbol, int symbol_qty)
{
    // loop control character quantity
    for (int symbol_control = 0; symbol_control < symbol_qty; ++symbol_control)
    {
        // character output
        cout << (char)symbol;
    }
    cout << "\n";
}
