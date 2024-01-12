#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int cnt = 1;

void print(int n){
    cout << cnt++ << endl;//total time function called
    if(n==0) return;
    print(n-1);
    cout << n << endl;
}

int main(){
    optimize();

    print(5);

    return 0;
}