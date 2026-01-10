#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    string s = to_string(n);
    int len = s.size();
    for (int L = (len % 2 == 0 ? len : len + 1); L <= 10; L += 2) {

        int need = L / 2;          
        int total = 1 << L; 
        for (int mask = 0; mask < total; mask++) {
            if (__builtin_popcount(mask) != need) continue;
            ll val = 0;
            for (int i = L - 1; i >= 0; i--) {
                val *= 10;
                if (mask & (1 << i))
                    val += 7;
                else
                    val += 4;
            }
            if (val >= n) {
                cout << val << '\n';
                return 0;
            }
        }
    }
}
