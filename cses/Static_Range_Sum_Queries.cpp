#include <iostream>

using namespace std;

const int mx = 2e5+5;
long long arr[mx], prefix[mx];

int main(){
    int n, q; cin >> n >> q;
    // long long int arr[n+1], prefix[n+1];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    for(int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + arr[i];

    int l, r;
    while(q--){
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    
    }


}