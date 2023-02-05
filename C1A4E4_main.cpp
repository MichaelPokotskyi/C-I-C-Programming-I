//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/30/2023
// C1A4E4_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #4 C1A4E4 (C++)
// Program getting three user-inputed values and testing 
// mMaxOf3 inline function and fMaxOf3 function-like macros

#include <iostream>
#include "C1A4E4_MaxOf.h"
using namespace std;

int main()
{   
    // variable and input section
    double numberOne, numberTwo, numberThree;
    cout << "Enter 3 numbers\n";
    cin >> numberOne >> numberTwo >> numberThree;
    //formatted output of determined maximum value
    cout << "mMaxOf3(" << numberOne << ", " << numberTwo << ", " << numberThree
         << ") " << "returned " << mMaxOf3(numberOne, numberTwo, numberThree)
         << "\n";

    cout << "fMaxOf3(" << numberOne << ", " << numberTwo << ", " << numberThree
         << ") " << "returned " << fMaxOf3(numberOne, numberTwo, numberThree)
         << "\n";
    return 0;
}
