#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Fenwick {
    int n;vector<int> bit;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void update(int ind, int val) {
        while (ind <= n) {
            bit[ind] += val;
            ind += ind & -ind;
        }
    }

    int query(int ind) {
        int sum = 0;
        while (ind > 0) {
            sum += bit[ind];
            ind -= ind & -ind;
        }
        return sum;
    }

    int rangeSum(int l, int r) {
        return query(r) - query(l - 1);
    }
};

int32_t main() {
    
    int n,q;cin>>n>>q;

    vector<int> a(n + 1);
    Fenwick fw(n);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        fw.update(i, a[i]);
    }

    while (q--) {
        int type, x, y;
        cin >> type >> x >> y;
        if (type == 1) {
            int diff = y - a[x];
            a[x] = y;
            fw.update(x, diff);
        }
        else {
            cout << fw.rangeSum(x, y) << endl;
        }
    }
}