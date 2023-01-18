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
    int number{0}, count {0};
    cout << "Enter number: ";
    cin >> number;
    for (int i = 0; i < number; i++) {
        //count++;
        for (int k = number; k > 0; k--) {
            cout << "^";
        }
        cout << endl;
    }
    return 0;
}