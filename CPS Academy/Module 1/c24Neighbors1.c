#include <stdio.h>
int main(){
    
    // code is not working as expected

    int n, m; scanf("%d %d", &n, &m);
    char ch[n][m]; 

    int ok = 1;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            scanf("%c", ch[i][j]);
        }
    }
    
    int x, y; scanf("%d %d", &x, &y);

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            if((i==0 || i = n-1) || (j==0 || j == m-1)){
                if(ch[i][j]=='.') ok = 0;
            }
        }
    }

    // ok ? puts("yes") : puts("no");
    printf("h");
}