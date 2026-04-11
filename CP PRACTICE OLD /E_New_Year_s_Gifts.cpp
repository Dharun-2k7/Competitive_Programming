#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct nd {
    ll mn, lz;
};

vector<nd> st;

void build(vector<ll> &a, int v, int l, int r) {
    if (l == r) {
        st[v] = {a[l], 0};
        return;
    }
    int m = (l + r) >> 1;
    build(a, v<<1, l, m);
    build(a, v<<1|1, m+1, r);
    st[v].mn = min(st[v<<1].mn, st[v<<1|1].mn);
    st[v].lz = 0;
}

void push(int v) {
    if (!st[v].lz) return;
    for (int u : {v<<1, v<<1|1}) {
        st[u].mn += st[v].lz;
        st[u].lz += st[v].lz;
    }
    st[v].lz = 0;
}

void upd(int v, int l, int r, int ql, int qr, ll val) {
    if (ql > qr) return;
    if (l == ql && r == qr) {
        st[v].mn += val;
        st[v].lz += val;
        return;
    }
    push(v);
    int m = (l + r) >> 1;
    upd(v<<1, l, m, ql, min(qr, m), val);
    upd(v<<1|1, m+1, r, max(ql, m+1), qr, val);
    st[v].mn = min(st[v<<1].mn, st[v<<1|1].mn);
}

struct fr {
    int x;
    ll y, z, c;
};

void solve() {
    int n, m;
    ll k;
    cin >> n >> m >> k;

    vector<ll> cnt(m + 2, 0);
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        cnt[x]++;
    }

    vector<ll> suf(m + 2, 0);
    for (int i = m; i >= 1; i--) suf[i] = suf[i + 1] + cnt[i];

    vector<fr> f(n);
    ll sumy = 0;
    for (int i = 0; i < n; i++) {
        cin >> f[i].x >> f[i].y >> f[i].z;
        f[i].c = f[i].z - f[i].y;
        sumy += f[i].y;
    }

    ll kk = k - sumy;

    st.assign(4 * (m + 5), {0, 0});
    build(suf, 1, 1, m);

    sort(f.begin(), f.end(), [](fr &a, fr &b) {
        return a.c > b.c;
    });

    int res = 0;
    vector<ll> need;

    for (int i = 0; i < n; i++) {
        upd(1, 1, m, 1, f[i].x, -1);
        if (st[1].mn >= 0) {
            res++;
        } else {
            upd(1, 1, m, 1, f[i].x, 1);
            need.push_back(f[i].c);
        }
    }

    sort(need.begin(), need.end());
    for (ll x : need) {
        if (kk >= x) {
            kk -= x;
            res++;
        } else break;
    }

    cout << res << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
