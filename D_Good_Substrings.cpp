#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll b = 1315423911;
const ll m1 = 1000000007;
const ll m2 = 1000000009;
int main() {
    string s; cin >> s;
    string g; cin >> g;
    int k; cin >> k;

    int n = s.size();
    unordered_set<ll> st;  

    for (int i = 0; i < n; i++) {
        int bad = 0;
        ll h1 = 0, h2 = 0;

        for (int j = i; j < n; j++) {
            if (g[s[j] - 'a'] == '0') bad++;

            if (bad > k) break;

            h1 = (h1 * 131 + s[j]) % m1;
            h2 = (h2 * 137 + s[j]) % m2;

            ll h = (h1 << 32) ^ h2; 
            st.insert(h);
        }
    }

    cout << st.size() << "\n";
}
