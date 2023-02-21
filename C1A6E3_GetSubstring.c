//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E3_GetSubstring.c
// Win10
// Visual Studio 2022, ISO C17
//
// Assignment #6 C1A6E3 (C)
// Function GetSubstring() return pointer to the array of chars that contains
// part of string limited by given two int values 'start' - first char index
// at string and 'count' - quantity of characters need to be output.

//char *GetSubstring(const char source[], int start, int count, char result[])
//{
//    char *p = result;
//    // loop that not copying characters while 'start' position will be reached
//    for (; *source; ++source, --start)
//    {
//        // if 'start' reached before '\0' terminator
//        if (start == 0) 
//        { 
//            break; 
//        }
//    }
//    // loop that copying characters of the 'count' length
//    for (; *result = *source; ++result, ++source, --count)
//    {
//        // if 'count' reached before '\0' terminnator
//        if (count == 0) 
//        { 
//            break; 
//        }
//    }
//    // '\0' terminator append to final result
//    *result = '\0';
//    return p;
//}
