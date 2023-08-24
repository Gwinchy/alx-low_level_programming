# Linked Lists

A linked list is a fundamental data structure in computer science used to organize and store a collection of elements. Unlike arrays, linked lists do not require contiguous memory locations, allowing for dynamic allocation and efficient insertion/removal of elements.

## Table of Contents

- [Introduction](#introduction)
- [Types of Linked Lists](#types-of-linked-lists)
- [Advantages](#advantages)
- [Operations](#operations)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A linked list is composed of individual nodes, where each node contains data and a reference (pointer) to the next node in the sequence. The last node's reference typically points to a null value, indicating the end of the list.

## Types of Linked Lists

There are several types of linked lists, including:

- **Singly Linked List**: Each node has a reference to the next node.
- **Doubly Linked List**: Each node has references to both the next and previous nodes.
- **Circular Linked List**: Similar to a singly or doubly linked list, but the last node's reference points back to the first node.

## Advantages

Linked lists offer several advantages:

1. **Dynamic Size**: Linked lists can grow or shrink dynamically, enabling efficient memory usage.
2. **Efficient Insertion and Removal**: Adding or removing elements is more efficient compared to arrays since it doesn't require shifting elements.
3. **Memory Allocation**: Nodes can be scattered in memory, reducing memory wastage due to fragmentation.
4. **Versatility**: Different types of linked lists cater to specific use cases, balancing requirements of memory and traversal speed.

## Operations

Common operations performed on linked lists include:

- **Insertion**: Adding a new node at a specific position or at the end.
- **Deletion**: Removing a node from the list.
- **Traversal**: Iterating through the nodes to access or modify data.
- **Search**: Finding a specific element based on its value.
- **Concatenation**: Combining two linked lists.
- **Reversal**: Changing the order of the nodes.

## Usage

```c
#include <stdio.h>
#include <stdlib.h>

// Define a basic structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create nodes
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // ... Perform linked list operations

    return 0;
}

 let's dive deeper into the various operations that can be performed on linked lists:

1. Insertion
Insertion involves adding a new node to the linked list. It can be done at different positions:

Insertion at the Beginning: Create a new node, set its next pointer to the current head, and update the head to the new node.

Insertion in the Middle: Create a new node, set its next pointer to the next node of the intended position, and update the previous node's next pointer to the new node.

Insertion at the End: Create a new node, traverse to the last node, and update the last node's next pointer to the new node.

2. Deletion
Deletion removes a node from the linked list:

Deletion at the Beginning: Update the head to the second node and free the memory of the deleted node.

Deletion in the Middle: Update the previous node's next pointer to skip the node to be deleted, and then free the memory of the deleted node.

Deletion at the End: Traverse to the second-to-last node, update its next pointer to null, and free the memory of the last node.

3. Traversal
Traversal involves visiting each node in the linked list to access or modify its data:

c
Copy code
struct Node* current = head;
while (current != NULL) {
    // Access or modify current->data
    current = current->next;
}
4. Search
Searching is the process of finding a specific element in the linked list based on its value:

c
Copy code
int target = 42;
struct Node* current = head;
while (current != NULL) {
    if (current->data == target) {
        // Element found
        break;
    }
    current = current->next;
}
5. Concatenation
Concatenation involves combining two linked lists:

Traverse to the end of the first linked list.
Update the last node's next pointer to the head of the second linked list.
6. Reversal
Reversal changes the order of the nodes in the linked list:

Traverse the linked list while maintaining pointers to the previous, current, and next nodes.
Update the next pointer of the current node to point to the previous node.
Move the pointers to the next positions and continue until the end of the list.
7. Splitting
Splitting divides a linked list into two parts based on a certain condition:

Traverse the linked list while maintaining two pointers: one for the current node and another for the previous node.
Check the condition on the current node's data.
If the condition is met, update the previous node's next pointer to NULL, effectively splitting the list.
8. Merging
Merging combines two sorted linked lists into a single sorted linked list:

Create a new linked list to store the merged result.
Traverse both linked lists, comparing the current nodes of each list.
Insert the smaller node into the merged list and move the pointer of that linked list to the next node.
These are just a few examples of operations on linked lists. The choice of operation depends on the specific problem you're trying to solve. Linked lists are versatile and can be used in various applications, including data structures like queues and stacks, as well as more complex scenarios like implementing hash tables or memory management systems.





