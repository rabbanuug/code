#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person *personPtr;

    // Dynamically allocate memory for a struct
    personPtr = (struct Person *)malloc(sizeof(struct Person));

    // Check if allocation was successful
    if (personPtr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Assign values to struct members
    strcpy(personPtr->name, "Alice");
    personPtr->age = 25;

    // Access and print struct members
    printf("Person: %s, Age: %d\n", personPtr->name, personPtr->age);

    // Don't forget to free the allocated memory
    free(personPtr);

    return 0;
}
