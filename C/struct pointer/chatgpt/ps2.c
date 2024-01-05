#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[3]; // Array of structs

    // Assign values to struct members
    points[0].x = 10;
    points[0].y = 20;

    points[1].x = 30;
    points[1].y = 40;

    points[2].x = 50;
    points[2].y = 60;

    // Access and print struct members using a loop
    for (int i = 0; i < 3; ++i) {
        printf("Point %d: (%d, %d)\n", i+1, points[i].x, points[i].y);
    }

    return 0;
}
