//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/30/2023
// C1A4E2_PrintLines-3.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A4E3 (C++)
//

#include <iostream>
using namespace std;

void PrintLines(int symbol, int symbol_qty, int line_qty)
{
    for (int line_control = 0; line_control < line_qty; ++line_control)
    {
        for (int symbol_control = 0; symbol_control < symbol_qty; ++symbol_control)
        {
            cout << (char)symbol;
        }
        cout << "\n";
    }
}
