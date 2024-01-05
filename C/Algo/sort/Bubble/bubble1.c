#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int cnt = 0;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                cnt++;
            }
        }
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

    // Filling the array with a pattern
    for (int i = 0; i < 1000; ++i) {
        arr[i] = i % 7 == 0 ? 64 : i % 7 == 1 ? 34 : i % 7 == 2 ? 25 : i % 7 == 3 ? 12 : i % 7 == 4 ? 22 : i % 7 == 5 ? 11 : 90;
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    // Measure the start time
    clock_t start_time = clock();

    // Run the sorting algorithm
    bubbleSort(arr, n);

    // Measure the end time
    clock_t end_time = clock();

    // Calculate the time taken
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Display the time taken and the number of iterations
    printf("Time taken: %f seconds\n", time_taken);
    printf("Number of iterations: %d\n", cnt);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
