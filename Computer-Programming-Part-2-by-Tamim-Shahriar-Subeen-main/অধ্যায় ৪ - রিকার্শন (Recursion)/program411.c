#include <stdio.h>

int cnt = 0;

int fact(int n){
    if(n == 1) return 1;
    // if(n == 1) return 1;
    ++cnt;
    return n*fact(n-1);
    /*
    
    */
}

int main(){

    printf("%d\n", fact(5));
    printf("%d", cnt);
    
}