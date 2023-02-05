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

#include <iostream>
#include "C1A4E4_MaxOf.h"
using namespace std;

int main()
{
    //test cases
    cout << mMaxOf3(-3.8, -3.5, -3.2) << endl;
    cout << fMaxOf3(-3.8, -3.5, -3.2) << endl;
    cout << endl;
    cout << mMaxOf2(-3.8, -3.5) << endl;
    cout << fMaxOf2(-3.8, -3.5) << endl;
    cout << endl;
    cout << mMaxOf3(1, 2, 3) << endl;
    cout << fMaxOf3(1, 2, 3) << endl;
    cout << endl;
    cout << mMaxOf2(1, 2) << endl;
    cout << fMaxOf2(1, 2) << endl;
        return 0;
}
