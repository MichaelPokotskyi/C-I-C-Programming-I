////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming I
//// C1 168566 Raymond L. Mitchell
//// 2/20/2023
//// C1A7E2_main.c
//// Win10
//// Visual Studio 2022, ISO C17
////
//// Assignment #7 C1A7E2 (C)
//// Dymnamic allocation memory for character member of the structure,
//// displaying all (given and user-entered) elements 
//// in a formatted table manner.
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define LUNCH_QTY 5
//#define BUF_LENGTH 256
//#define START_COUNT 1
//
//int main(void)
//{
//    struct Food
//    {
//        char *name;
//        int weight, calories;
//    } lunches[LUNCH_QTY] = 
//    {
//        {"Apple", 4, 100},
//        {"Salad", 2, 80},
//    };
//    // 0 and 1 index struct elements are given, omitted
//    for (int input = START_COUNT + START_COUNT; input < LUNCH_QTY; ++input)
//    {
//        char inBuf[BUF_LENGTH];
//        printf("Enter space separated food name (no spaces),"
//            "food weight and calories:");
//        scanf("%255s %d %d", inBuf,
//            &lunches[input].weight, &lunches[input].calories);
//        size_t sLength = strlen(inBuf) + 1;
//        // allocating mamory and test for failure
//        lunches[input].name = (char *)malloc(sLength);
//        if (lunches[input].name == NULL)
//        {
//            fprintf(stderr, "Allocation failed.\n");
//            exit(EXIT_FAILURE);
//        }
//        memcpy(lunches[input].name, inBuf, sLength);
//    }
//    printf("           LUNCH MENU\n"
//        "ITEM           CALORIES     WEIGHT\n");
//    for (int output = 0; output < LUNCH_QTY; ++output)
//    {
//        printf("%-17s %5d %10d\n",
//            lunches[output].name,
//            lunches[output].weight, lunches[output].calories);
//        // only dynamically allocated memory need to be freed,
//        // 0 and 1 index struct elements are omitted again
//        if (output > START_COUNT)
//        {
//            free(lunches[output].name);
//        }
//    }
//    return 0;
//}
