#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifndef _FUNCS_H_
#define _FUNCS_H_

void PrintArr(char *arr, int size);           // Print array
int RandGenerator(int min, int max);          // Generate random value between min and max
char List(int num);                           // Returns a symbol from a list
int LowerCaseCounter(char *arr, int size);    // Return the count of lower case letters in the array
char MostFrequentSymbol(char *arr, int size); // Return the most frequent symbol of the array

#endif