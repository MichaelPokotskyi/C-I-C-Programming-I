//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/24/2023
// C1A2E3_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A3E3 (C++)
//

#include <iostream>
using namespace std;

int main()
{
    const int BASE = 8; // 
    int number;
    bool isNeg = false;
    cout << "Enter octal number: ";
    cin >> oct >> number;
    cout << "\"";
    if (number < 0) { cout << "-"; number *= -1; isNeg = true; }
    cout << oct << number << "\" in words is \"";
    if (isNeg) { cout << "minus"; }
    int divisor = 1;
    for (int dividend = number; dividend > BASE - 1; dividend /= BASE)
    {
        divisor *= BASE;
    }
    int divident = number;
    do
    {
        int MSD = divident / divisor;
        switch (MSD)
        {
        case 0: cout << " zero"; break;
        case 1: cout << " one"; break;
        case 2: cout << " two"; break;
        case 3: cout << " tree"; break;
        case 4: cout << " four"; break;
        case 5: cout << " five"; break;
        case 6: cout << " six"; break;
        case 7: cout << " seven"; break;
        }
        divident -= divisor * MSD;
        divisor /= BASE;
    } while (divisor);
    cout << "\"\n";
    return 0;
}