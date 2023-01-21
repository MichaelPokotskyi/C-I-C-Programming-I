//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/17/2023
// C1A2E1_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #2 C1A2E1 (C++)
// 
// If user input anything other then uppercase character, 
// this algorithm will continue work with ASCII - displaying symbol from
// regular or extended ASCII table keeping given difference, 
// for instance <0> -> <P> where (in DEC):
// <P>(080) = <0>(048) + <given diff>(032).
// 
// Since variable declared as an single char it can hold only one character
// and will hold first entered value. In case if whitespace will be placed
// proir any other symbol(s) entered, an '@' will be displayed because:
// <sp>(032) + <given diff>(032) = <@>(064).

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int DIFF { 'a' - 'A' }; //more elegant way to describe
//    char any_symbol {}, upper_symbol {};
//    cout << "Enter any character: ";
//    cin.get(any_symbol);
//    upper_symbol = any_symbol + DIFF;
//    cout << "The lowercase equivalent of ""'" << any_symbol 
//        << "'"" is ""'" << upper_symbol << "'\n";
//    return 0;
//}
