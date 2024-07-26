#include "funcs.h"

unsigned sumArrayDigits(int *arr, size_t n) // Return the sum of all array digits
{
    char string[100]; // Holds all the digits of all the numbers in the array
    int count = 0;    // Counter
    int sum = 0;      // Sum of all the digits

    for (int i = 0; i < n; i++) // Loop trough the array and concat all numbers in one string
    {
        char temp[100];
        sprintf(temp, "%d", arr[i]);
        strcat(string, temp);
    }

    while (string[count] != '\0') // Loop trough every element of the string
    {
        char temp[2]; // Holds the current string element
        temp[0] = string[count];
        temp[1] = '\0';
        int num;
        sscanf(temp, "%d", &num); // Cast the string value to int
        sum += num;
        count++;
    }

    return sum;
}