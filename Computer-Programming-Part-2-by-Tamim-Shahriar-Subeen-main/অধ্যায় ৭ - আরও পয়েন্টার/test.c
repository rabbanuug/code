#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    free(ptr);
    *ptr = 10;

    printf("%d", *ptr);
}