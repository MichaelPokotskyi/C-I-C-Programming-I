//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/28/2023
// C1A8E1_SavingsAccount.h
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #8 C1A8E1 (C++)
//

#ifndef C1A8E1_SAVINGSACCOUNT_H
#define C1A8E1_SAVINGSACCOUNT_H

//#include <iostream>
#include <string>

using namespace std;

class SavingsAccount
    {
    public:
        void GetInitialValues();
        inline void DisplayValues() const;
        inline const double CalculatePenalty()
        {
            return closurePenaltyPercent * balance;
        }
    private:
        int type;
        string ownerName;
        long IDnbr;
        double balance, closurePenaltyPercent;
    };

inline void SavingsAccount::GetInitialValues() 
    {
        
    }

inline const void DisplayValues()
    {
        
    }

#endif C1A8E1_SAVINGSACCOUNT_H // C1A8E1_SAVINGSACCOUNT_H