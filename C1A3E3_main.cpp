//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/24/2023
// C1A3E3_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A3E3 (C++)
// This program are converting user-provided octal integer into their words
// representation. In case if entered value < 0, an '-' character will be 
// added in to the number section and word "minus" to word representation 
// section as well.

#include <iostream>
using namespace std;

int main()
{
    const int BASE = 8; // input number base
    int input_number;
    bool isNeg = false; // negative imput flag
    cout << "Enter octal number: ";
    cin >> oct >> input_number;
    cout << "\"";
    // output '-' character if number < 0 found in input, changing isNeg flag
    if (input_number < 0)
    { 
        cout << "-";
        input_number = -input_number;
        isNeg = true;
    }
    cout << oct << input_number << "\" in words is \"";
    // output "minus" word in word section if number < 0 found
    if (isNeg) 
    {
        cout << "minus "; 
    }
    // divisor calculated
    int divisor = 1;
    for (int dividend = input_number; dividend > BASE - 1; dividend /= BASE)
    {
        divisor *= BASE;
    }
    int dividend = input_number;
    do
    {
        int msd = dividend / divisor;
        // each MSD word representation
        switch (msd) 
        {
        case 0: cout << "zero"; break;
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        }
        //updating divisor and dividend
        dividend -= divisor * msd;
        divisor /= BASE;
        // control of the whitespace between words representation
        if (divisor)
        { 
            cout << " "; 
        }
    } while (divisor);
    cout << "\"\n";
    return 0;
}
