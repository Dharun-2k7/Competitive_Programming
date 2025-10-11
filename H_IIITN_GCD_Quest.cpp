#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
    while(b){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        unordered_set<ll> cur, temp;
        for(ll x : a){
            temp.clear();
            temp.insert(x);
            for(ll g : cur){
                temp.insert(gcd(g, x));
            }
            for(ll v : temp) 
                cur.insert(v);
        }
        int q; 
        cin >> q;
        while(q--){
            ll k; 
            cin >> k;
            cout << (cur.count(k) ? 'Y' : 'N') << endl;
        }
    }
}
