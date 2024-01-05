#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n, int *iterations) {
    int i, j, minIndex;
    *iterations = 0;  // Initialize the iteration counter

    for (i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        minIndex = i;
        for (j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                ++(*iterations);
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(&arr[minIndex], &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[1000];
    for (int i = 0; i < 1000; ++i) {
        arr[i] = i % 7 == 0 ? 64 : i % 7 == 1 ? 34 : i % 7 == 2 ? 25 : i % 7 == 3 ? 12 : i % 7 == 4 ? 22 : i % 7 == 5 ? 11 : 90;
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    // Measure the start time
    clock_t start_time = clock();

    // Run the sorting algorithm
    int iterations;
    selectionSort(arr, n, &iterations);

    // Measure the end time
    clock_t end_time = clock();

    // Calculate the time taken
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Display the time taken and the number of iterations
    printf("Time taken: %f seconds\n", time_taken);
    printf("Number of iterations: %d\n", iterations);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
