#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, m, l; ll s, t;
    cin >> n >> m >> l >> s >> t;
    vector<vector<pair<int,ll>>> g(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        ll c;
        cin >> u >> v >> c;
        g[u].push_back({v,c});
    }

    vector<vector<vector<ll>>> dp(l+1, vector<vector<ll>>(n+1));
    dp[0][1].push_back(0);

    for(int i=1;i<=l;i++){
        for(int u=1;u<=n;u++){
            for(ll cost : dp[i-1][u]){
                for(auto [v,c] : g[u]){
                    ll nc = cost + c;
                    if(nc <= t){
                        dp[i][v].push_back(nc);
                    }
                }
            }
        }
    }

    bool first = false;
    for(int v=1;v<=n;v++){
        for(ll cost : dp[l][v]){
            if(cost >= s && cost <= t){
                if(first) cout << " ";
                cout << v;
                first = true;
                break;
            }
        }
    }
    cout << "\n";
    return 0;
}
