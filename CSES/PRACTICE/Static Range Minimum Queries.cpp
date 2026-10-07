#include <bits/stdc++.h>
using namespace std;

#define int long long

struct SegTree {
    int n; vector<int> tree;
    SegTree(vector<int>& a) {
        n = a.size();
        tree.resize(4 * n);
        build(1, 0, n - 1, a);
    }
    void build(int node, int l, int r, vector<int>& a) {
        if (l == r) {
            tree[node] = a[l];
            return;
        }
        int mid = (l + r) / 2;
        build(node * 2, l, mid, a);
        build(node * 2 + 1, mid + 1, r, a);
        tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
    }

    int query(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return LLONG_MAX;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return min(
            query(node * 2, l, mid, ql, qr),
            query(node * 2 + 1, mid + 1, r, ql, qr)
        );
    }

    int query(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};

int32_t main() {
    int n,q;cin >>n>>q;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    SegTree seg(a);
    while (q--) {
        int l, r;
        cin >>l>>r;
        --l;
        --r;
        cout << seg.query(l, r) << endl;
    }
}