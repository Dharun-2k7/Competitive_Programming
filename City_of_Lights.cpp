#include <bits/stdc++.h>
using namespace std;

struct E {
    int id, u, v, c;
};

int f(vector<int> &p, int x) {
    if (p[x] == x) return x;
    return p[x] = f(p, p[x]);
}

bool u(vector<int> &p, vector<int> &r, int a, int b) {
    a = f(p, a);
    b = f(p, b);
    if (a == b) return 0;
    if (r[a] < r[b]) swap(a, b);
    p[b] = a;
    if (r[a] == r[b]) r[a]++;
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<E> e(m);
    for (int i = 0; i < m; i++) cin >> e[i].id >> e[i].u >> e[i].v >> e[i].c;

    sort(e.begin(), e.end(), [](E a, E b) {
        if (a.c != b.c) return a.c < b.c;
        return a.id < b.id;
    });

    vector<int> p(n+1), r(n+1, 0);
    for (int i = 1; i <= n; i++) p[i] = i;

    long long tot = 0, sid = 0;
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        if (u(p, r, e[i].u, e[i].v)) {
            tot += e[i].c;
            sid += e[i].id;
            cnt++;
            if (cnt == n-1) break;
        }
    }

    cout << tot << "\n" << sid << "\n";
}
