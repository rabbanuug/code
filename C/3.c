#include <stdio.h>
#include <stdlib.h>

// Define a structure named 'node' to represent a linked list node.
struct node {
    int data;          // Data part of the node, storing an integer.
    struct node *next; // Pointer to the next node in the linked list.
};

// Function to create a new node with the given data and next node.
struct node *createNode(int item, struct node *next) {
    // Allocate memory for the new node using malloc.
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    // Check if memory allocation was successful.
    if (newNode == NULL) {
        // Print an error message and exit the program if memory allocation fails.
        printf("Error! Could not create a new node\n");
        exit(1);
    }

    // Assign the data and next pointer values to the new node.
    (*newNode).data = item; //also can write `newNode->data = item;` this way
    newNode->next = next;

    // Return the pointer to the newly created node.
    return newNode;
}

// Main function where the program execution begins.
int main() {
    // Declare a pointer to a 'node' structure named 'n'.
    struct node *n;

    // Call the 'createNode' function to create a new node with data 4 and a NULL next pointer.
    n = createNode(4, NULL);

    // Print the 'data' field of the created node.
    printf("data = %d\n", n->data);

    // Return 0 to indicate successful program execution.
    return 0;
}
