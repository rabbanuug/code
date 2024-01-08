#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0) return;

    std::cout << n;
    if(n != 1) cout << " ";
    return print(n-1);
    
}

int main(){
    int n; std::cin >> n;
    print(n);
}