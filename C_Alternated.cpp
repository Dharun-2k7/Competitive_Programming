#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    string s; cin >> s;
    ll ab = 0, ba = 0;
    ll a = 0, b = 0;
    for (ll i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) {
            if (s[i] == 'B') ab += a;
            else ba += b;
        } else {
            if (s[i] == 'A') ab += b;
            else ba += a;
        }

        if (s[i] == 'A') a++;
        else b++;
    }

    cout << min(ab, ba) << endl;
    
}
