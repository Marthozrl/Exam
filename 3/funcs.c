#include "funcs.h"

uint64_t RandGenerator(int min, int max) // Generates random value between min and max
{
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

void AddNode(struct Node **head, int data) // Create new Node
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        struct Node *temp2 = *head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}

void PrintLinkedList(struct Node **head) // Print linked list
{
    struct Node *temp = *head;

    printf("Linked list:\n");
    printf("Number: %lu, Address: %p\n", temp->data, temp);
    while (temp->next != NULL)
    {
        temp = temp->next;
        printf("Number: %lu, Address: %p\n", temp->data, temp);
    }
}

struct Node *MaxNumber(struct Node **head) // Return the address of the node which holds the bihhest number
{
    uint64_t maxNumber = 0;
    struct Node *p;
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        if (maxNumber < temp->data)
        {
            maxNumber = temp->data;
            p = temp;
        }

        temp = temp->next;
    }

    return p;
}

int BitCounter(struct Node **head) // Return the ammount of 1's in all numbers of the linked list
{
    struct Node *temp = *head;
    int counter = 0;

    while (temp != NULL)
    {
        for (int bit = 63; bit >= 0; bit--)
        {
            if (!!(temp->data & (1L << bit)))
            {
                counter++;
            }
        }
        printf("%lu in binary: ", temp->data);
        for (int bit = 63; bit >= 0; bit--)
        {
            printf("%d", !!(temp->data & (1L << bit)));
        }
        printf("\n");
        temp = temp->next;
    }

    return counter;
}

void FreeMemory(struct Node **head) // Free the alocated memory for the linked list
{
    struct Node *current = *head, *prev;
    while (current)
    {
        prev = current;
        current = current->next;
        free(prev);
    }
    *head = NULL;
}