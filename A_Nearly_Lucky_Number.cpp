#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    int luck = 0;

    for (ll x = n; x > 0; x /= 10)
        if (x % 10 == 4 || x % 10 == 7) luck++;

    cout << ((luck == 4 || luck == 7) ? "YES" : "NO") << '\n';
}
