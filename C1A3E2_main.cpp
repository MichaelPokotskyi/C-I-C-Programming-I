//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 1/24/2023
// C1A3E2_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #3 C1A3E2 (C++)
// HEX in reverse mechanic
// 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int BASE = 16;
//    int input_number { };
//    bool is_neg = false;
//
//    cout << "Enter a hexadecimal value: ";
//    cin >> hex >> input_number;
//    cout << "\"";
//    
//    if (input_number < 0) // negative input?
//    {
//        is_neg = true; 
//        input_number = -input_number;
//        cout << "-";
//    }
//    cout << hex << input_number << "\" in reverse is \""; 
//    do                    // no special ZERO case implemented
//    {
//        int LSDigit = input_number % BASE;
//        cout << LSDigit;  // output characters in reverse
//        input_number /= BASE;
//    } while (input_number > 0);
//    if (is_neg)           // for minus sign output
//    { 
//        cout << "-"; 
//    }
//    cout << "\"\n";
//    return 0;
//}
