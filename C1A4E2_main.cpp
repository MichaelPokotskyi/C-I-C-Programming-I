//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/30/2023
// C1A4E2_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A4E2 (C++)
//

#include <iostream>
using namespace std;

void PrintLines();
void PrintLines(int symbol);
void PrintLines(int symbol, int symbol_qty);
void PrintLines(int symbol, int symbol_qty, int line_qty);

int main()
{
    for (int iter = 0; iter < 2; ++iter)
    {
        char charValue;
        int charCount, lineCount;
        cout << "Enter 3 items CHAR_VALUE, CHAR_COUNT, LINE_COUNT \n";
        cin >> charValue >> charCount >> lineCount;

        PrintLines(charValue, charCount, lineCount);
        PrintLines(charValue, charCount);
        PrintLines(charValue);
        PrintLines();
    }
    return 0;
}
