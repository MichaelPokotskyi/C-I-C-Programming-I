//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/20/2023
// C1A7E1_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 14
//
// Assignment #7 C1A7E1 (C++)
// Testing DetermineElapsedTime implementation.

#include <iostream>
#include <iomanip>
#include "C1A7E1_MyTime.h"

using namespace std;

//user input count
const int INPUT = 3;

int main()
{
    cout << setfill('0');
    for (int input = 0; input < INPUT; ++input)
    {
        MyTime start, stop;
        // input separator character omitted
        char delim;
        cout << "Enter START and STOP time in HH:MM:SS"
            "format - space separated: ";
        // directly into the appropriate members of two MyTime structures
        cin >> start.hours >> delim >> start.minutes >> delim >> start.seconds
            >> stop.hours >> delim >> stop.minutes >> delim >> stop.seconds;
        MyTime *result = DetermineElapsedTime(&start, &stop);
        // output section
        cout << "The time elapsed from " 
            << setw(2) << start.hours << ":"
            << setw(2) << start.minutes << ":"
            << setw(2) << start.seconds << " to "
            << setw(2) << stop.hours << ":"
            << setw(2) << stop.minutes << ":"
            << setw(2) << stop.seconds << " is "
            << setw(2) << result->hours << ":"
            << setw(2) << result->minutes << ":"
            << setw(2) << result->seconds << "\n";
    }
    return 0;
}
