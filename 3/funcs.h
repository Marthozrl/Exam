#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#define COUNT 10 // Linked list size

struct Node
{
    uint64_t data;
    struct Node *next;
};

#ifndef _FUNCS_H_
#define _FUNCS_H_

uint64_t RandGenerator(int min, int max);   // Generates random value between min and max
void AddNode(struct Node **head, int data); // Create new Node
void PrintLinkedList(struct Node **head);   // Print linked list
struct Node *MaxNumber(struct Node **head); // Return the address of the node which holds the bihhest number
int BitCounter(struct Node **head);         // Return the ammount of 1's in all numbers of the linked list
void FreeMemory(struct Node **head);        // Free the alocated memory for the linked list

#endif