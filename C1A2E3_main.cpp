//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/17/2023
// C1A2E3_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C1A2E3 (C++)
// 

#include <iostream>
using namespace std;

int main()
{
    int number{}, countdown{};
    cout << "Enter number: ";
    cin >> number;
    countdown = number;
    for (int i = 0; i < countdown; i++) {
        for (int k = number - 1; k > 0; k--) 
        {
            cout << "'";
        }
        number--;
        cout << "$" << endl;
        
    }
    return 0;
}
