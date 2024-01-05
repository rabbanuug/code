//written via gpt

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// int cnt = 0;
// cnt = 215215 Sorted array:
// Time taken: 0.000000 seconds
// Number of iterations: 215215
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                // cnt++;
            }
        }
    }
    // printf("cnt = %d ", cnt);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    

    // int arr[] = {64, 34, 25, 12, 22, 11, 90};
    // int arr[1000];// = {64, 34, 25, 12, 22, 11, 90};
    // for (int i = 0; i < 1000; ++i) {
    //     arr[i] = i % 7 == 0 ? 64 : i % 7 == 1 ? 34 : i % 7 == 2 ? 25 : i % 7 == 3 ? 12 : i % 7 == 4 ? 22 : i % 7 == 5 ? 11 : 90;
    // }
    // int n = sizeof(arr) / sizeof(arr[0]);

    // printf("Unsorted array: \n");
    // printArray(arr, n);

    // bubbleSort(arr, n);

    // printf("Sorted array: \n");
    // printArray(arr, n);

    // return 0;
}