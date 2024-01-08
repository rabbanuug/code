#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return tribonacci(n)+tribonacci(n-1)+tribonacci(n-2);
    }

int main(){
    optimize();

    cout << tribonacci(4);

    return 0;
}