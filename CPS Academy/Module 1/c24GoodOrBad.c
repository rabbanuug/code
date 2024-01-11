#include <stdio.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        char s[100000+123];
        scanf("%s", s);
        int len = 0;

        while(s[len] != 0){
            len++;
        }

        int ok = 0;
        for(int i = 0; i<len-2; ++i){
            char s1 = s[i], s2 = s[i+1], s3 = s[i+2];
            if((s1=='1' && s2=='0' && s3=='1') || (s1=='0' && s2=='1' && s3=='0')) ok = 1;

        }

        ok ? puts("Good") : puts("Bad");
    }
}