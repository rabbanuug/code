// written via gpt

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    int cnt = 0;

    for (i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        minIndex = i;
        for (j = i + 1; j < n; ++j) {
            ++cnt;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }


        // Swap the found minimum element with the first element
        swap(&arr[minIndex], &arr[i]);
    }
    printf("%d", cnt);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {90, 64, 34, 25, 12, 22, 11};
    

    // int arr[] = {22, 12, 11, 64, 90, 25, 34};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}