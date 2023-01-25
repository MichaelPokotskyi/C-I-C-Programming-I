//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/24/2023
// C1A3E2_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A3E2 (C++)
// HEX in reverse mechanic
// 
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a hexadecimal value: ";
    int input_number { };
    cin >> hex >> input_number;
    cout << "\"";
    bool is_neg = 0;
    // negative input?
    if (input_number < 0) { is_neg = 1; input_number *= -1; cout << "-"; }
    cout << hex << input_number << "\" in reverse is \"";
    // no special ZERO case implemented
    while (input_number > 0) 
    {
        int LSD = input_number % 16;
        cout << LSD;
        input_number /= 16;
    }
    if (is_neg) { cout << "-"; }
    cout << "\"\n";
    return 0;
}
