#include "funcs.h"

int main()
{
    srand(time(0));           // Random time seed
    struct Node *head = NULL; // Create pointer to the linked list
    for (int i = 0; i < COUNT; i++)
    {
        AddNode(&head, RandGenerator(0, RAND_MAX)); // Create COUNT new Nodes and fill them with values between 0 and RAND_MAX
    }

    PrintLinkedList(&head);                                          // Print the linked list
    printf("Address of the biggest number: %p\n", MaxNumber(&head)); // Print the address off the Node which holds the biggest number
    putchar('\n');
    printf("Number of all 1's: %d\n", BitCounter(&head)); // Print all numbers as binary and the sum of all 1's in all numbers
    FreeMemory(&head);

    return EXIT_SUCCESS;
}
