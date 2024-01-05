#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

// Function that takes a struct as a parameter
void printRectangle(struct Rectangle rect) {
    printf("Length: %d, Width: %d\n", rect.length, rect.width);
}

int main() {
    struct Rectangle myRect = {10, 5};

    // Call the function and pass the struct
    printRectangle(myRect);

    return 0;
}
