#include "funcs.h"

int main()
{
    int arr[] = {12, 34, 5, 70};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]); // Holds the size of the array

    if (arrSize == 0) // Check if the array is empty
    {
        fprintf(stderr, "Empty array!\n");
        return EXIT_FAILURE;
    }

    printf("Sum of array elements: %d\n", sumArrayDigits(arr, arrSize)); // Print the sum of all the digits
    return EXIT_SUCCESS;
}
