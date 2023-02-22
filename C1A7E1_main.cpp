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

#include <iostream>
#include <iomanip>
#include "C1A7E1_MyTime.h"

const int INPUT = 3;
using namespace std;

int main()
{
    for (int input = 0; input < INPUT; ++input)
    {
        MyTime start, stop;
        char delim;
        cout << "Enter START and STOP time in HH:MM:SS format - space separated: ";
        cin >> start.hours >> delim >> start.minutes >> delim >> start.seconds 
            >> stop.hours >> delim >> stop.minutes >> delim >> stop.seconds;
        MyTime *result = DetermineElapsedTime(&start, &stop);
        cout << "The time elapsed from " <<
            setfill('0') << setw(2) << start.hours << ":" << 
            setfill('0') << setw(2) << start.minutes << ":" <<
            setfill('0') << setw(2) << start.seconds << " to " << 

            setfill('0') << setw(2) << stop.hours << ":" << 
            setfill('0') << setw(2) << stop.minutes << ":" << 
            setfill('0') << setw(2)<< stop.seconds << " is " <<

            setfill('0') << setw(2) << result->hours << ":" << 
            setfill('0') << setw(2) << result->minutes << ":" << 
            setfill('0') << setw(2) << result->seconds << "\n";
    }
    return 0;
}