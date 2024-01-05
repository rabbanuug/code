#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // Declare a pointer and assign the address of num to it

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value through pointer: %d\n", *ptr); // Dereferencing the pointer

    return 0;
}
