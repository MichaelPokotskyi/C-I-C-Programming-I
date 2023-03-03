//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming I
// C1 168566 Raymond L. Mitchell
// 2/28/2023
// C1A8E1_SavingsAccount.h
// Win10
// Visual C++ 2022, ISO C++ 17
//
// Assignment #8 C1A8E1 (C++)
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

int main(int argc, char* argv[])
{
    char delay;
    // testing correct number of arguments
    if (argc != CLINE_ARG_NUM)
    {
        cerr << "Command line argument failed, expected ", CLINE_ARG_NUM, " args.\n";
        exit(EXIT_FAILURE);
    }

    // Open the input file.  If it fails, terminate program with a failure code.
    ifstream inFile(argv[INPUT_FILE], ios_base::binary);
    if (!inFile.is_open())
    {
        cerr << "Open failed: " << argv[INPUT_FILE] << "\n";
        exit(EXIT_FAILURE);
    }

    // Open the output file.  If it fails, terminate program with a failure code.
    ofstream outFile(argv[OUTPUT_FILE], ios_base::binary | ios_base::trunc);
    if (!outFile.is_open())
    {
        cerr << "Open failed: " << argv[OUTPUT_FILE] << "\n";
        exit(EXIT_FAILURE);
    }
    for (;;) 
    {
        char fileBuf[FILE_BUF_LENGTH], *cp;
        inFile.read(fileBuf, sizeof(fileBuf));
        streamsize bytesRead = inFile.gcount();
        if (bytesRead == 0) 
        {
            break;
        }
        cp = strstr(fileBuf, argv[3]);
        if (cp != NULL) 
        {
            strncpy(cp, argv[4], sizeof(argv[4]));
        }
        outFile.write(fileBuf, bytesRead);
    }
    inFile.close();
    outFile.close();
    return 0;
}