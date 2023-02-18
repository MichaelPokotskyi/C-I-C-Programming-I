//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/30/2023
// C1A4E4_MaxOf.h
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #4 C1A4E4 (C++)
// File contains implementation of inline functions 
// and functions-like macros used for determine MAX value
// of three numbers, based on two numbers comparison

////include guard to avoid double includes
//#ifndef C1A4E4_MAXOF_H
//#define C1A4E4_MAXOF_H
//
//// two numbers comparison, function-like macros
//#define mMaxOf2(numberOne, numberTwo) \
//        ((numberOne) > (numberTwo) ? (numberOne) : (numberTwo))     \
//
//// three numbers comparison, function-like macros
//#define mMaxOf3(numberOne, numberTwo, numberThree) \
//        (mMaxOf2((numberOne), mMaxOf2((numberTwo), (numberThree)))) \
//
//// two numbers comparison, inline function
//inline double fMaxOf2(double numberOne, double numberTwo)
//{
//        return numberOne > numberTwo ? numberOne : numberTwo;
//}
//// three numbers comparison, inline function
//inline double fMaxOf3(double numberOne, double numberTwo, double numberThree)
//{
//        return fMaxOf2(numberOne, fMaxOf2(numberTwo, numberThree));
//}
//#endif // C1A4E4_MAXOF_H
