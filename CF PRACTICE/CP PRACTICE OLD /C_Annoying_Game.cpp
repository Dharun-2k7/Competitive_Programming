#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll kadane(const vector<ll> &a){
    ll best = a[0], cur = 0;
    for(ll x : a){
        cur = max(x, cur + x);
        best = max(best, cur);
    }
    return best;
}

int main(){
 
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;

        ll base = kadane(a);

        if(k % 2 == 0){
            cout << base << '\n';
            continue;
        }

        vector<ll> l(n), r(n);
        ll cur = 0;
        for(int i = 0; i < n; i++){
            cur = max(0ll, cur + a[i]);
            l[i] = cur;
        }
        cur = 0;
        for(int i = n - 1; i >= 0; i--){
            cur = max(0ll, cur + a[i]);
            r[i] = cur;
        }

        ll ans = base;
        for(int i = 0; i < n; i++){
            ll left = (i == 0 ? 0 : l[i - 1]);
            ll right = (i == n - 1 ? 0 : r[i + 1]);
            ans = max(ans, left + a[i] + b[i] + right);
        }

        cout << ans << '\n';
    }
}


