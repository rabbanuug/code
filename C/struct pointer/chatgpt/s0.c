#include <stdio.h>

// Define a struct
struct Student {
    int id;
    char name[50];
    float GPA;
};

int main() {
    // Declare a struct variable
    struct Student student1;

    // Access and modify struct members
    student1.id = 101;
    strcpy(student1.name, "John Doe");
    student1.GPA = 3.8;

    // Display struct information
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student GPA: %.2f\n", student1.GPA);

    return 0;
}
