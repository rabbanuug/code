#include <stdio.h>
//https://www.youtube.com/watch?v=kepBmgvWNDw&list=PLBlnK6fEyqRjTO_UNGKuaaoxEqvSF0t5h&ab_channel=NesoAcademy
int fun(int n){
    if(n==1) return 1;
    return 1 + fun(n-1);
}

int main(){
    int n = 3;
    printf("%d\n", fun(n));
    return 0;
}