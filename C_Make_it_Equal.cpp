<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> s(n), t(n);
        for (ll i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> t[i];
        }
        vector<ll> S(k, 0), T(k, 0);
        for (ll i = 0; i < n; i++) {
            S[s[i] % k]++;
        }
        for (ll i = 0; i < n; i++) {
            T[t[i] % k]++;
        }
        bool pos = true;
        for (ll r = 0; r <= k / 2; r++) {
            ll r2 = (k - r) % k;
            if (r == r2) {
                if (S[r] != T[r]) {
                    pos = false;
                    break;
                }
            } else {
                if (S[r] + S[r2] != T[r] + T[r2]) {
                    pos = false;
                    break;
                }
            }
        }

        cout << (pos ? "YES\n" : "NO\n");
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> s(n), t(n);
        for (ll i = 0; i < n; i++) {
            cin >> s[i];
        }
        for (ll i = 0; i < n; i++) {
            cin >> t[i];
        }
        vector<ll> S(k, 0), T(k, 0);
        for (ll i = 0; i < n; i++) {
            S[s[i] % k]++;
        }
        for (ll i = 0; i < n; i++) {
            T[t[i] % k]++;
        }
        bool pos = true;
        for (ll r = 0; r <= k / 2; r++) {
            ll r2 = (k - r) % k;
            if (r == r2) {
                if (S[r] != T[r]) {
                    pos = false;
                    break;
                }
            } else {
                if (S[r] + S[r2] != T[r] + T[r2]) {
                    pos = false;
                    break;
                }
            }
        }

        cout << (pos ? "YES\n" : "NO\n");
    }
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
