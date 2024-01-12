#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int fib(int n){
    if(n == 0) return 0;
    if(n==1) return 1;

    return fib(n-1) + fib(n-2);
}

int main(){
    optimize();

    cout << fib(1);

    return 0;
}