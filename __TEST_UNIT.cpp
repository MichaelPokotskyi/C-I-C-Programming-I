//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

///* strstr example */
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//
//struct Savings {
//    double principal, interest;
//public:
//    double total()
//    {
//        return(principal + interest);
//    }
//};
//
//
//int main()
//{
//    return 0;
//}


//The number - sign or "stringizing" operator (#) converts macro
//parameters(after expansion) to string constants.It is used
//only with macros that take arguments.If it precedes a formal
//parameter in the macro definition, the actual argument passed
//by the macro invocation is enclosed in quotation marksand
//treated as a string literal.The string literal then replaces
//each occurrence of a combination of the stringizing operator
//and formal parameter within the macro definition.
//
//White space preceding the first token of the actual argument
//and following the last token of the actual argument is ignored.
//Any white space between the tokens in the actual argument is
//reduced to a single white space in the resulting string literal.
//Thus, if a comment occurs between two tokens in the actual
//argument, it is reduced to a single white space.The resulting
//string literal is automatically concatenated with any adjacent
//string literals from which it is separated only by white space.

//int main(void)
//{
//    int xyz;
//    scanf("%x", &xyz);
//    ungetc('A', stdin);
//    scanf("%x", &xyz);
//    printf("%x", xyz);
//}

//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//int main()
//{
//    std::cout << std::setfill('x') << std::setw(10);
//    std::cout << 77 << std::endl;
//    return 0;
//
//}
