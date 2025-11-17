#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        ll a,b,n; cin >> a >> b >> n;
        ll k = a / b;
        cout << (b == a ? 1 : (n <= k ? 1 : 2)) << endl;
    }
}