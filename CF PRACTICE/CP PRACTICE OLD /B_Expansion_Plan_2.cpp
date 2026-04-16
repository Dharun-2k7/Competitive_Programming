#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        ll n,x,y; cin >> n >> x >> y;
        string s; cin >> s;
        ll c = 0;
        for(char ch : s) c += (ch == '8');
        
        ll d = n - c;
        ll ax = llabs(x), ay = llabs(y);
        ll need = max(0ll, ax - c) + max(0ll, ay - c);
        cout << (need <= d ? "YES" : "NO") << endl;
    }
}
