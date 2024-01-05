#include <stdio.h>

int main(){

    int l, u, oddsum = 0, evensum = 0, oddcnt = 0, evencnt = 0;
    scanf("%d %d", &l, &u);

    for(int i = l; i<=u; ++i){
        if(i%2 != 0) printf("%d ", i), oddsum += i, ++oddcnt;
    }
    printf("\n");
    for(int i = l; i<=u; ++i){
        if(i%2 == 0) printf("%d ", i),  evensum += i, ++evencnt;
    }

    // printf("\noddavg : %d\n", oddsum/oddcnt);
    // printf("evenAvg : %d", evensum/evencnt);
}
