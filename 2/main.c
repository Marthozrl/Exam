#include "funcs.h"

int main()
{
    srand(time(0)); // Random time seed
    int n, m, k, size = 0;
    printf("Enter initial array size: ");
    scanf("%d", &n); // Set initial array size
    size += n;

    char *arr = malloc(size * sizeof(char)); // Allocate space for the initial array
    if (NULL == arr)                         // Check if the initial array was created succesfully
    {
        fprintf(stderr, "Malloc problem");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < size; i++) // Fill up the initial array elements with letters from a to z
    {
        arr[i] = RandGenerator(97, 122);
    }

    printf("Initial array:\n");
    PrintArr(arr, size); // Print the initial array

    //**********************************************************
    printf("Number of elements to add: ");
    scanf("%d", &m); // Set the number of elements to be added to the initial array
    size += m;

    arr = realloc(arr, size * sizeof(char)); // Realocate memory for the new elements
    if (NULL == arr)                         // Check if the array was resized succesfully
    {
        fprintf(stderr, "Realloc problem");
        return EXIT_FAILURE;
    }

    for (int i = n; i < size; i++) // Fill up the initial array elements with letters from A to Z
    {
        arr[i] = RandGenerator(65, 90);
    }

    printf("Array after first resize:\n");
    PrintArr(arr, size); // Print the resized array
    //**********************************************************
    printf("Number of elements to add: ");
    scanf("%d", &k); // Set the number of elements to be added to the initial array
    size += k;

    arr = realloc(arr, size * sizeof(char)); // Realocate memory for the new elements
    if (NULL == arr)                         // Check if the array was resized succesfully
    {
        fprintf(stderr, "Realloc problem");
        return EXIT_FAILURE;
    }

    for (int i = n + m; i < size; i++) // Fill up the new array elements with random symbols (! ? $ @ * % -)
    {
        arr[i] = List(RandGenerator(1, 7));
    }

    printf("Array after second resize:\n");
    PrintArr(arr, size); // Print the resized array

    printf("Lower case count: %d\n", LowerCaseCounter(arr, size)); // Print the ammount of lower case letters in the array

    printf("Most frequent element: %c\n", MostFrequentSymbol(arr, size)); // Print the most frequent element in the array

    free(arr);

    return EXIT_SUCCESS;
}
