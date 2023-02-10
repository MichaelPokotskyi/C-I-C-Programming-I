//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/6/2023
// C1A5E3_main.cpp
// Win10
// Visual C++ 2022, ISO C17
//
// Assignment #5 C1A5E3 (C)
// This program comparing and returning MAX and MIN values 
// from two numbers user input using two different functions.
// Each function argument list and returning types are pointers
// of type double.

#include <iostream>
using namespace std;

double *ComputeMinimum(const double *nbr1, const double *nbr2);
double *ComputeMaximum(const double *nbr1, const double *nbr2);

int main()
{
    double nbr1, nbr2;
    cout << "Enter two numbers: ";
    cin >> nbr1 >> nbr2;
    // MIN and MAX output statements,
    // the third value is appropriate function call
    // returning pointer of type double
    cout << "ComputeMinimum(&" << nbr1 << ", &" << nbr2 <<
        ") returned &" << *ComputeMinimum(&nbr1, &nbr2) << "\n";
    cout << "ComputeMaximum(&" << nbr1 << ", &" << nbr2 <<
        ") returned &" << *ComputeMaximum(&nbr1, &nbr2) << "\n";
    return 0;
}
