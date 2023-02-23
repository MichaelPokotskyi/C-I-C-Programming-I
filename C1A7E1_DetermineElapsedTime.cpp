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
// DetermineElapsedTime implementing calculation 
// of elapsed time between given two time values.

#include "C1A7E1_MyTime.h"

const int SEC_IN_HOUR = 3600;
const int SEC_IN_MIN = 60;
const int HOUR_IN_DAY = 24;

MyTime *DetermineElapsedTime(const MyTime *start, const MyTime *stop) {
    static MyTime elapsed;
    // converting start and stop times to seconds
    // and calculating their difference
    long int SecStart = 
        start->hours * SEC_IN_HOUR + start->minutes * SEC_IN_MIN 
        + start->seconds;
    long int SecStop = 
        stop->hours * SEC_IN_HOUR + stop->minutes * SEC_IN_MIN + stop->seconds;
    long int diffTime = SecStop - SecStart;
    // if > 0 - current day, converting seconds back to min and hours
    // and subtracting calculated value from difference
    if (diffTime > 0)
    {
        elapsed.hours = diffTime / SEC_IN_HOUR;
        diffTime -= elapsed.hours * SEC_IN_HOUR;
        elapsed.minutes = diffTime / SEC_IN_MIN;
        diffTime -= elapsed.minutes * SEC_IN_MIN;
        elapsed.seconds = diffTime;
    }
    // if < 0 - next day, converting seconds back to min and hours
    // and subtracting calculated value from difference
    if (diffTime < 0) 
    {
        diffTime += HOUR_IN_DAY * SEC_IN_HOUR;
        elapsed.hours = diffTime / SEC_IN_HOUR;
        diffTime -= elapsed.hours * SEC_IN_HOUR;
        elapsed.minutes = diffTime / SEC_IN_MIN;
        diffTime -= elapsed.minutes * SEC_IN_MIN;
        elapsed.seconds = diffTime;
    }
    // if == 0, no difference between start and stop, next day given
    if (diffTime == 0)
    {
        elapsed.hours = HOUR_IN_DAY;
        elapsed.minutes = 0;
        elapsed.seconds = 0;
    }
    return &elapsed;
}
