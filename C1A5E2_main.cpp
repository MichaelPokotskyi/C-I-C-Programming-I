//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/6/2023
// C1A5E2_main.cpp
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #5 C1A5E2 (C)
// This program comparing and returning MAX and MIN values 
// from two numbers user input using two different functions.
// Each function argument list and returning types are references
// to double.

#include <iostream>
using namespace std;

//functions declared with constant argument list and returning reference
//of type double
double &ComputeMinimum(const double &first_number, const double &second_number);
double &ComputeMaximum(const double &first_number, const double &second_number);

int main()
{
    double first_number, second_number;
    cout << "Enter two numbers: ";
    cin >> first_number >> second_number;
    // MIN and MAX output statements,
    // the third value is appropriate fumction call 
    // retutrning reference of type double
    cout << "ComputeMinimum(" << first_number << ", " << second_number <<
        ") returned " << ComputeMinimum(first_number, second_number) << "\n";
    cout << "ComputeMaximum(" << first_number << ", " << second_number << 
        ") returned " << ComputeMaximum(first_number, second_number) << "\n";
    return 0;
}
