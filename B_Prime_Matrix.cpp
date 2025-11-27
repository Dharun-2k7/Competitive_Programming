#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    int mx = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }

    int LIM = 200000;
    vector<int> isPrime(LIM + 1, 1);
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= LIM; i++)
        if (isPrime[i])
            for (int j = i * i; j <= LIM; j += i)
                isPrime[j] = 0;

    vector<int> nextPrime(LIM + 1);
    int last = -1;
    for (int i = LIM; i >= 0; i--) {
        if (isPrime[i]) last = i;
        nextPrime[i] = last;
    }

    vector<ll> rowSum(n, 0), colSum(m, 0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            int x = a[i][j];
            ll cost = nextPrime[x] - x;
            rowSum[i] += cost;
            colSum[j] += cost;
        }

    ll ans = LLONG_MAX;
    for (int i = 0; i < n; i++) ans = min(ans, rowSum[i]);
    for (int j = 0; j < m; j++) ans = min(ans, colSum[j]);

    cout << ans << "\n";
    return 0;
}
