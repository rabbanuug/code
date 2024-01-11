#include <stdio.h>

int mx = 1e5+123;
int a[26];

int main(){
    
    char s[mx]; 
    scanf("%s", s);

    int i = 0;
//if a appear, then array a's index 0 will be 1
//if b, then array a's index 1 will be 1
    while(s[i] != '\0'){
        int index = s[i]-'a';
        a[index]++;
        ++i;
    }
    
    for(int i = 0; i<26; ++i){
        if(a[i]>0) 
            printf("%c : %d\n", 'a'+i, a[i]);
    }


}