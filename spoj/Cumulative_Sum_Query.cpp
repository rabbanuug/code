#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    long long int arr[n+1], prefix[n+1];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i<=n; ++i) prefix[i] = prefix[i-1] + arr[i];
    
    int q; cin >> q;
    // int l, r;
    while(q--){
        int l, r;
        cin >> l >> r;
        
        cout << prefix[r+1] - prefix[l] << endl;
    }
    return 0;
}