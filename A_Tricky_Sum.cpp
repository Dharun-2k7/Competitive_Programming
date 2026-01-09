    #include <bits/stdc++.h>
    using namespace std;
     
    typedef pair<int, int> pii;
    typedef long long ll;
    typedef pair<ll, ll> pll;
    typedef long double ld;
     
    int t, n;
    ll ans, p;
     
    int main(){
        cin >> t;
        while (t --){
            cin >> n;
            ans = 1LL * n * (n + 1) / 2;
            p = 1;
            while (p <= n) p *= 2;
            ans -= 2 * p - 2;
            cout << ans << '\n';
        }
        return 0;
    }