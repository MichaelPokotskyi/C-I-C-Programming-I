//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/28/2023
// C1A8E1_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #8 C1A8E1 (C++)
//

#include <iostream>
#include "C1A8E1_SavingsAccount.h"

using namespace std;

int main()
{
    SavingsAccount account;
    account.GetInitialValues();
    account.DisplayValues();
    cout << "Account closure penalty: " << account.CalculatePenalty();

    return 0;
}