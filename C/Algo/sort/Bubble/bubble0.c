#include <stdio.h>

// void swap(int *n1, int *n2){
//     int tmp
// }

void swap1(int *a, int *b){
    int tmp1 = *a;
    *a = *b;
    *b = tmp1;
}

int main(){
    int a = 1, b = 3;
    swap1(&a,&b);
    printf("%d %d\n", a, b);

    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    // bool swapped = 0;
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n-1; ++j){
            if(arr[j]>arr[j+1]){
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i<n; ++i)
        printf("%d ", arr[i]);

}