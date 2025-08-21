#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    ll odd;
    if (n % 2 == 1)
        odd = n / 2 + 1;
    else
        odd = n / 2;

    if (k <= odd) {
        cout << 1 + (k - 1) * 2 << endl;
    } else {
        ll even = k - odd;
        cout << 2 + (even - 1) * 2 << endl;
    }
}
