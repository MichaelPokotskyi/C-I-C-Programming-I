//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/17/2023
// C1A2E1_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C1A2E1 (C++)
// 
// If user input anything other then uppercase character, this algorithm will continue work with ASCII - displaying symbol from
// regular or extended ASCII table keeping given difference, for instance <0> -> <P> where:
// <P>(0x50) = 0x30(<0> hex) + 0x20(given diff).
// 
// Since variable declared as an single char it can hold only one character and will hold first entered value. In case if whitespace will be placed
// proir any other symbol(s) entered, an '@' will be displayed because <sp>(0x20) + (0x20)(given diff) = <@>(0x40).

#include <iostream>
using namespace std;

int main()
{
    char any_symbol {}, upper_symbol {};
    cout << "Enter any character: ";
    cin.get(any_symbol);
    upper_symbol = any_symbol + 0x20;
    cout << "The lowercase equivalent of " << "'" << any_symbol << "'" << " is " << "'" << upper_symbol << "'" << endl;
    return 0;
}