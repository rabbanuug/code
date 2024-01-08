#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*
2^n
*/

int topowerN(int n){
    if(n==0) return 1;
    return 2*topowerN(n-1);
}

int main(){
    optimize();

    int n = 5;
    cout << topowerN(n);

    return 0;
}