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

//2 param macro
#define mMaxOf2(numberOne, numberTwo) ((numberOne) > (numberTwo) ? (numberOne) : (numberTwo))

//3 param macro
#define mMaxOf3(numberOne, numberTwo, numberThree) (mMaxOf2((numberOne), mMaxOf2((numberTwo), (numberThree))))

//2 param inline func
inline double fMaxOf2(double numberOne, double numberTwo)
{
	return numberOne > numberTwo ? numberOne : numberTwo;
}

//3 param inline func
inline double fMaxOf3(double numberOne, double numberTwo, double numberThree)
{
	return fMaxOf2(numberOne, fMaxOf2(numberTwo, numberThree));
}