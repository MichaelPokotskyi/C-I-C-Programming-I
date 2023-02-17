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

char* GetSubstring(const char source[], int start, int count, char result[])
{
    char* p = result;
    
    //while()

    for (; *source; ++source, --start)
    {
        if (start == 0) { break; }
    }

    for (; *result = *source; ++result, ++source, count-- ) {
        if (count == 0) { break; }
    }
    *result = '\0';

    

    //for (; *result; ++result, --start) {
    //    if (start == 0) { 
    //        while (*result = *source) {
    //            result++;
    //            source++;
    //        }
    //            
    //    }
    //    //*result++;
    //    *result = '\0';
    //    break;
    //}
    //    
    return p;
    //return source;
}

//for (; *result = *source; ++result, ++source, --start) {
//    if (start == 0) { *result = '\0'; }
//}