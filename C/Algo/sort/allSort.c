#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int cnt = 0;

void selection_sort(int *arr, int n){ //also you can write arr[] instead of *arr
    int minIndex;
    for(int i = 0; i<n-1; ++i){
        minIndex = i;
        for(int j = i+1; j<n; ++j){
            cnt++;
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j<n-i-1; ++j){
            ++cnt;
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


void insertion_sort(int arr[], int n){
    int i, j, item;

    for(i = 1; i<n; ++i){
        item = arr[i];
        j = i-1;
        
        while(j >= 0 && arr[j] > item){
            arr[j+1] = arr[j];
            --j;   
            // ++cnt;
        }
        arr[j+1] = item;
    }
}

void merge_sort(int arr[], int n){
    
}

int main(){
    int a[1000]; // = {5,4,3,2,1};
    for (int i = 0; i < 1000; ++i) {
        a[i] = i % 7 == 0 ? 64 : i % 7 == 1 ? 34 : i % 7 == 2 ? 25 : i % 7 == 3 ? 12 : i % 7 == 4 ? 22 : i % 7 == 5 ? 11 : 90;
    }
    int n = sizeof(a)/sizeof(a[0]);// this line will not work when i'll input value via loop
    // selection_sort(a, n); // 499500 times loop when 1000 value inserted via loop
    // bubble_sort(a, n); // 499500 times loop when 1000 value inserted via loop
    insertion_sort(a, n);

    for(int i = 0; i<n; ++i){
        printf("%d ", a[i]);
    }
    printf("\n%d", cnt);

    
}