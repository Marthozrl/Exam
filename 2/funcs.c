#include "funcs.h"

void PrintArr(char *arr, int size) // Print all the elements of an array
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
    putchar('\n');
}

int RandGenerator(int min, int max) // Generate a randum number between min and max
{
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

char List(int num)
{
    switch (num)
    {
    case 1:
        return '!';
        break;
    case 2:
        return '?';
        break;
    case 3:
        return '$';
        break;
    case 4:
        return '@';
        break;
    case 5:
        return '*';
        break;
    case 6:
        return '%';
        break;
    case 7:
        return '-';
        break;
    default:
        break;
    }
}

int LowerCaseCounter(char *arr, int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            counter++;
        }
    }
    return counter;
}

char MostFrequentSymbol(char *arr, int size) // Return the most frequent symbol of the array
{
    char mostFrequent;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        int count2 = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count2++;
        }

        if (count2 > count)
        {
            count = count2;
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}
