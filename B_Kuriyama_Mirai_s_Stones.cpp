using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
int main() {
    int n;
    cin >> n;
    vector<ll> vals(n+1);
    vector<ll> inord(n+1);
    for (int i=1; i<=n; i++) {
        cin >> vals[i];
        inord[i] = vals[i];
    }
    sort(inord.begin(), inord.end());
    for (int i=1; i<=n; i++) vals[i] += vals[i-1];
    for (int i=1; i<=n; i++) inord[i] += inord[i-1];
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 1)
            cout << vals[v] - vals[u-1] << endl;
        else
            cout << inord[v] - inord[u-1] << endl;
    }

    return 0;
}
