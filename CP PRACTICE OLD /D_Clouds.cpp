#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> u(n), d(n), l(n), r(n);
    for(int i = 0; i < n; i++){
        cin >> u[i] >> d[i] >> l[i] >> r[i];
    }

    const int sz = 2002;
    static int diff[sz][sz];

    for(int i = 0; i < n; i++){
        diff[u[i]][l[i]]++;
        diff[u[i]][r[i] + 1]--;
        diff[d[i] + 1][l[i]]--;
        diff[d[i] + 1][r[i] + 1]++;
    }

    static int cover[sz][sz];
    for(int i = 1; i <= 2000; i++){
        for(int j = 1; j <= 2000; j++){
            diff[i][j] += diff[i-1][j] + diff[i][j-1] - diff[i-1][j-1];
            cover[i][j] = diff[i][j];
        }
    }

    ll covered_total = 0;
    static int one[sz][sz];
    for(int i = 1; i <= 2000; i++){
        for(int j = 1; j <= 2000; j++){
            if(cover[i][j] >= 1) covered_total++;
            one[i][j] = (cover[i][j] == 1 ? 1 : 0);
        }
    }

    static int ps[sz][sz];
    for(int i = 1; i <= 2000; i++){
        for(int j = 1; j <= 2000; j++){
            ps[i][j] = one[i][j] + ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1];
        }
    }

    const ll total = 2000ll * 2000ll;

    for(int i = 0; i < n; i++){
        ll x = ps[d[i]][r[i]] - ps[u[i]-1][r[i]] - ps[d[i]][l[i]-1] + ps[u[i]-1][l[i]-1];
        ll rem = covered_total - x;
        ll ans = total - rem;
        cout << ans << endl;
    }

    return 0;
}
