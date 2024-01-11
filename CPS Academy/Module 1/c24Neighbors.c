#include <stdio.h>
int main(){
    
    // code is not working as expected

    int n, m; scanf("%d %d", &n, &m);
    char ch[n][m]; 
    int ok = 1;
    for(int j = 0; j<m; ++j){
            scanf("%c", ch[0][j]);
            if(ch[0][j] == '.') ok = 0;
        }
    for(int i = 1; i<n-1; ++i){
        for(int j = 0; j<m; ++j){
            scanf("%c", ch[i][j]);
            if(j==0 || j==m-1){
                if(ch[i][j]=='.') ok = 0;
            }
        }
    }
    for(int j = 0; j<m; ++j){
            scanf("%c", ch[n-1][j]);
            if(ch[n-1][j] == '.') ok = 0;
        }
    int x, y; scanf("%d %d", &x, &y);

    // ok ? puts("yes") : puts("no");
    printf("h");
}