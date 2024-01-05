#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n, int *iterations) {
    int i, key, j;
    *iterations = 0; // Initialize the iteration counter

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            ++(*iterations);
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, n, &iterations);

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
