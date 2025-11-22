#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for(ll &x : a) cin >> x;

    vector<ll> pw(11);
    pw[0] = 1 % m;
    for(int i = 1; i <= 10; i++)
        pw[i] = (pw[i-1] * 10) % m;

    unordered_map<ll, ll> mp[11];

    for(ll x : a){
        ll r = x % m;
        for(int L = 1; L <= 10; L++)
            mp[L][(r * pw[L]) % m]++;
    }

    ll ans = 0;

    for(ll x : a){
        int L = to_string(x).size();
        ll need = (m - (x % m)) % m;
        ans += mp[L][need];
    }

    for(ll x : a){
        int L = to_string(x).size();
        ll r = x % m;
        ll val = ( (r * pw[L]) % m + r ) % m;
        if(val == 0) ans--;
    }

    cout << ans;
    return 0;
}

