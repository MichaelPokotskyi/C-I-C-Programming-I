//
//// #include <stdio.h>
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    
//    const int BASE = 8;
//    int number;
//
//    //Part A
//    cout << "Enter octal number: ";
//    cin >> oct >> number;
//    //cout << "\"";
//    //if (number < 0) { cout << "-" ; number *= -1; }
//    //cout << oct << number << "\" in words is \"";
//    //cout << "\n\n\n";
//    
//    // Part B
//    int divisor = 1, MSD;
//    for (int dividend = number; dividend > BASE - 1; dividend /= BASE)
//    {
//        divisor *= BASE;
//    }
//    //MSD = number / divisor;
//    //cout << oct << divisor << "\n";
//    //cout << MSD << "\n";
//        
//    // Part C
//    int divident = number;
//    //int diviser1 = MSD;
//        do
//        {
//            int MSD = divident / divisor;
//            switch (MSD)
//            {
//            case 0: cout << "zero"; break;
//            case 1: cout << "one"; break;
//            case 3: cout << "tree"; break;
//            case 4: cout << "four"; break;
//            case 5: cout << "five"; break;
//            case 6: cout << "six"; break;
//            case 7: cout << "seven"; break;
//            }
//          divident -= divisor * MSD;       
//          divisor /= BASE;
//      } while (divisor);                 
//      cout << "\n";
//    return 0;
//
//}
