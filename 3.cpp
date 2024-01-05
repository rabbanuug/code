
#include<stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void reverse(int arr[], int n){
    
}

void sort(int arr[], int n){
    for(int x = 0; x< n; ++x){
        bool cnt = false;
        for(int i = 1; i<n; ++i){
            if(arr[i]>arr[i-1]){
                cnt = true;
                 swap(&arr[i], &arr[i-1]);
            }
            
        }
        if(!cnt){
        printf("\nx = %d\n", x);
        for(int i = 0; i<n; ++i){
        printf("%d ", arr[i]);
        }
    break;
        }
    }
}


int main(){
    int y = 110, n = y;
    int a[180] = {9,8,7,6,5,4,3,2,1, 0, -1,-2,-3,-5,-6,-7,-8};
    
    
    for(int i = 0, j = y-1; i<y/2; ++i, --j){
        swap(&a[i], &a[j]);
        }
    for(int i = 0; i<y; ++i){
        printf("%d ", a[i]);
        }
        printf("\n");
        sort(&a[n], n);
    //for(int x = 0; x< n; ++x){
//        bool cnt = false;
//        for(int i = 1; i<y; ++i){
//            if(a[i]>a[i-1]){
//                cnt = true;
//                swap(&a[i], &a[i-1]);
//            }
//            
//        }
//        if(!cnt){
//        printf("\nx = %d\n", x);
//        for(int i = 0; i<y; ++i){
//        printf("%d ", a[i]);
//        }
//    break;
//        }
//    }
    int x = 1, z = 2;
    swap(&x, &y);
    printf("\n%d %d", x, y);
}