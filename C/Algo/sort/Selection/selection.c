// written via gpt

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// cnt = 1788 Sorted array: 
void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    // int cnt = 0;
    for (i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        minIndex = i;
        for (j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                // ++cnt;
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(&arr[minIndex], &arr[i]);
    }
    // printf("%d ", cnt);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    // for (int i = 0; i < 1000; ++i) {
    //     arr[i] = i % 7 == 0 ? 64 : i % 7 == 1 ? 34 : i % 7 == 2 ? 25 : i % 7 == 3 ? 12 : i % 7 == 4 ? 22 : i % 7 == 5 ? 11 : 90;
    // }
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}