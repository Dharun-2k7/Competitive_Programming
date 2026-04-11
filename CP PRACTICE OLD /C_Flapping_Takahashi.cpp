#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        ll n, h;
        cin >> n >> h;

        ll low = h, high = h;
        ll prev_t = 0;
        bool ok = true;
        while(n--){
            ll ti, l, u;
            cin >> ti >> l >> u;
            ll dt = ti - prev_t;
            low  -= dt;
            high += dt;
            if(low < 1) low = 1;
            low  = max(low, l);
            high = min(high, u);

            if(low > high) ok = false;

            prev_t = ti;
        }

        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;
}
