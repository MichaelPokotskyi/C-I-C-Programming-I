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
#include "C1A7E1_MyTime.h"

const int INPUT = 3;
using namespace std;

int main()
{
    MyTime start, stop;
    MyTime* result;
    char delim = ':';

    for (int input = 0; input < INPUT; ++input)
    {
        cout << "Enter START and STOP time in HH:MM:SS format - space separated: ";
        cin >> start.hours >> delim >> start.minutes >> delim >> start.seconds >> 
            stop.hours >> delim >> stop.minutes >> delim >> stop.seconds;
        //cin >> start.hours >> start.minutes >> start.seconds;
        
        //cout << "Enter STOP time HH:MM:SS space separated: ";
        //cin >> stop.hours >> delim >> stop.minutes >> delim >> stop.seconds;
        //cin >> stop.hours >> stop.minutes >> stop.seconds;

        result = DetermineElapsedTime(&start, &stop);
        cout << "The time elapsed from " <<
            start.hours << ":" << start.minutes << ":" << start.seconds << " to " <<
            stop.hours << ":" << stop.minutes << ":" << stop.seconds << " is " <<
            result->hours << ":" << result->minutes << ":" << result->seconds << "\n";
        return 0;
    }
}