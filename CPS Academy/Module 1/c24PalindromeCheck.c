#include <stdio.h>

int main(){
    char s[1200];
    scanf("%s", s);
    int len = 0;

    while(s[len] != 0) ++len;
    int isEqual = 1;
    for(int i = 0, j = len-1; i<j; ++i, --j){
        if(s[i] != s[j]) isEqual = 0;
    }
    (isEqual) ? puts("YES") : puts("NO");
}