//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/20/2023
// C1A7E1_DetermineElapsedTime.cpp
// Win10
// Visual C++ 2022, ISO C++ 14
//
// Assignment #7 C1A7E1 (C++)

#include"C1A7E1_MyTime.h"

const int SECONDS_IN_MINUTE = 60;
const int MINUTES_IN_HOUR = 60;
const int HOURS_IN_DAY = 24;

MyTime* DetermineElapsedTime(const MyTime* start, const MyTime* stop) {
    static MyTime elapsed;

    if (start == stop) { return &elapsed; }

    // HOURS
    if (start->hours < stop->hours)
    {
        elapsed.hours = stop->hours - start->hours;
    }
    if (start->hours > stop->hours)
    {
        elapsed.hours = HOURS_IN_DAY - (start->hours - stop->hours);
    }
    if (start->hours == stop->hours)
    {
        elapsed.minutes = 0;
    }
    
    // MINUTWS
    if (start->minutes < stop->minutes)
    {
        elapsed.minutes = stop->minutes - start->minutes;
    }
    if (start->minutes > stop->minutes)
    {
        elapsed.minutes = MINUTES_IN_HOUR  - (start->minutes - stop->minutes);
    }
    if (start->minutes == stop->minutes) 
    {
        elapsed.minutes = 0;
    }

    // SECONDS
    if (start->seconds < stop->seconds)
    {
        elapsed.seconds = stop->seconds - start->seconds;
    }
    if (start->seconds > stop->seconds)
    {
        elapsed.seconds = SECONDS_IN_MINUTE - (start->seconds + stop->seconds);
    }
    if (start->seconds == stop->seconds)
    {
        elapsed.seconds = 0;
    }

    return &elapsed;
}
