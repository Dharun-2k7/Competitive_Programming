#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 200005;
vector<ll> g[N];
ll sz[N];

void dfs(ll u, ll p)
{
    sz[u] = 1;
    for (ll v : g[u])
    {
        if (v == p) continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll c1 = 0, cq = 0;
        for (ll i = 1; i <= n; i++)
        {
            char c; cin >> c;
            if (c == '1') c1++;
            else if (c == '?') cq++;
            g[i].clear();
        }

        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(1, 0);

        map<ll, ll> mp;
        for (ll i = 2; i <= n; i++)
            mp[sz[i]]++;

        ll ans = 0;
        for (auto it : mp)
        {
            ll s = it.first;
            ll f = it.second;
            if (s >= c1 && s <= c1 + cq)
                ans = max(ans, f);
        }

        cout << ans << endl;
    }
}
