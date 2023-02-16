//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/14/2023
// C1A6E2_MyStrcmp.c
// Win10
// Visual Studio 2022, ISO C17
//
// Assignment #6 C1A6E2 (C)
// MyStrcmp function return int number as a result 
// of comparing two C-style strings

int MyStrcmp(const char *s1, const char *s2)
{
    // iterating each character each string
    while (*s1 == *s2)
    {
        //if first string equal to second
        if (*s1 == '\0')
        {
            return 0;
        }
        s1++; 
        s2++;
    }
    // returning corresponding value of comparison
    return((*s1 < *s2) ? -1 : 1);
}
