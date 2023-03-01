//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/28/2023
// C1A8E1_SavingsAccount.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #8 C1A8E1 (C++)
//

#include <iostream>
#include "C1A8E1_SavingsAccount.h"

using namespace std;

void SavingsAccount::GetInitialValues() 
{
    cout << "Account type: ";
    cin >> this->type;
    cout << "Owner name: ";
    cin >> this->ownerName;
    cout << "ID number: ";
    cin >> this->IDnbr;
    cout << "Account balance: ";
    cin >> this->balance;
    cout << "Account closure penalty percent: ";
    cin >> this->closurePenaltyPercent;
}