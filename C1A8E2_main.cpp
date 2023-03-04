//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/28/2023
// C1A8E2_main.cpp
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #8 C1A8E2 (C++)
//

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int INPUT_FILE = 1;
const int OUTPUT_FILE = 2;
const int SQ_SEARCH_FOR = 3;
const int SQ_REPLACE_TO = 4;
const int CLINE_ARG_NUM = 5;
const int FILE_BUF_LENGTH = 8192;

int main(int argc, char *argv[])
{
    // Test correct number of arguments.
    if (argc != CLINE_ARG_NUM)
    {
        cerr << "Command line argument failed, expected " <<
            CLINE_ARG_NUM << " args.\n";
        exit(EXIT_FAILURE);
    }
    // Open and test the input file. 
    ifstream inFile(argv[INPUT_FILE], ios_base::binary);
    if (!inFile.is_open())
    {
        cerr << "Open failed: " << argv[INPUT_FILE] << "\n";
        exit(EXIT_FAILURE);
    }
    // Open and test the output file.
    ofstream outFile(argv[OUTPUT_FILE], ios_base::binary | ios_base::trunc);
    if (!outFile.is_open())
    {
        cerr << "Open failed: " << argv[OUTPUT_FILE] << "\n";
        exit(EXIT_FAILURE);
    }
    char fileBuf[FILE_BUF_LENGTH];
    while (inFile.getline(fileBuf, sizeof(fileBuf), EOF))
    {
        for (char *cp1 = fileBuf; char *cp2 = strstr(cp1, argv[SQ_SEARCH_FOR]);)
        {
            // data before replace match occurred writes into file 
            // without characters combination needs to be replaced
            outFile.write(cp1, cp2 - cp1);
            // whole replacement argument writes to file
            outFile << argv[SQ_REPLACE_TO];
            cp1 = cp2 + strlen(argv[SQ_SEARCH_FOR]);
        }
    }
    outFile.write("\n", 1);
    inFile.close();
    outFile.close();
    return 0;
}
