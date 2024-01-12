#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}

int main(){
    optimize();

    int n = 6;
    cout << fact(n);

    return 0;
}