Introduction to Doubly Linked Lists:

A doubly linked list is a data structure in C that consists of a sequence of elements, each containing a data part and two pointers - one pointing to the previous element and another pointing to the next element in the sequence.

Structure Definition:

c
Copy code

// lists.h - Header file
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

#endif /* LISTS_H */

Initialization:

c
Copy code
#include "lists.h"
#include <stdlib.h>

Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    if (!newNode) {
        return NULL; // Memory allocation failed
    }

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}
Insertion:

c
Copy code
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (!newNode) {
        return; // Handle memory allocation failure
    }

    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}
c
Copy code
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (!newNode) {
        return; // Handle memory allocation failure
    }

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}
Deletion:

c
Copy code
void deleteNode(Node** head, Node* target) {
    if (*head == NULL || target == NULL) {
        return; // List or target node is empty
    }

    if (*head == target) {
        *head = target->next;
    }

    if (target->next != NULL) {
        target->next->prev = target->prev;
    }

    if (target->prev != NULL) {
        target->prev->next = target->next;
    }

    free(target);
}
Traversal:

c
Copy code
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
Remember to include the necessary header files and follow the specified style guidelines while implementing and testing your doubly linked list operations.
