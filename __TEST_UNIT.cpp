<<<<<<< HEAD
<<<<<<< HEAD

// #include <stdio.h>

/*
#include <iostream>
using namespace std;


int main()
{
    const int BASE = 8;
    int number;

    cout << "Enter octal number: ";
    cin >> oct >> number;
    //cout << "\"";
    //if (number < 0) { cout << "-" ; number *= -1; }
    //cout << oct << number << "\" in words is \"";
    //cout << "\n\n\n";
    
    int divisor = 1, MSD = 0;
    for (int dividend = number; dividend > BASE - 1; dividend /= BASE) {
        //cout << oct << dividend << "\n";
        divisor *= BASE; // increase divisor by a power of RADIX
        //dividend /= BASE;
        // cout << oct << divisor; 10, 100, 1000
        //LSD = dividend % 8 ;
        //MSD = number / divisor;
        //MSD = number / divisor;
        //dividend /= BASE;
        } 
        //cout << MSD << "\n";
    

    //cout << dividend << "\n";

      MSD = number / divisor;
      
    
    cout << oct <<
        "Dividing octal " << number << " by octal " << divisor <<
        " produces its MSD (" << number / divisor << ")\n";

    //while () {
        int val = number;
        val /= (MSD);
        cout << oct << val << "\n";
        //MSD = MSD * 
    //}

    //cout << number << " decimal" << " = " << oct << number
      //  << " octal" << " = " << hex << number << " hexadecimal\n";
    return 0;
}
*/
=======
=======
>>>>>>> 7db969f5ee9426afe233395115549f0fd4c8acaf
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
<<<<<<< HEAD
>>>>>>> 7db969f5ee9426afe233395115549f0fd4c8acaf
=======
>>>>>>> 7db969f5ee9426afe233395115549f0fd4c8acaf
