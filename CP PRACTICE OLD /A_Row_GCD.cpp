#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vll a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    ll G = 0;
    for (int i = 1; i < n; i++) {
        G = gcd(G, abs(a[i] - a[0]));
    }
    for (int i = 0; i < m; i++) {
        cout << gcd(a[0] + b[i], G) << " ";
    }
    cout << endl;

    return 0;
}
