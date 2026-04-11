#include <bits/stdc++.h>
using namespace std;

int N, M, S1, S2, t;
vector<vector<int>> g;

void dfs_paths(int u, long long mask, int len, vector<pair<long long,int>> &res){
    if(u == t){
        res.push_back({mask, len});
        return;
    }
    for(int v : g[u]){
        if(!(mask & (1LL << v))){
            dfs_paths(v, mask | (1LL << v), len + 1, res);
        }
    }
}

int bfs_avoid(int start, long long avoid_mask){
    if(avoid_mask & (1LL << start)) return -1; 
    vector<int> dist(N, -1);
    queue<int> q;
    dist[start] = 1; 
    q.push(start);
    while(!q.empty()){
        int u = q.front(); q.pop();
        if(u == t) return dist[u];
        for(int v : g[u]){
            if(dist[v] == -1 && !(avoid_mask & (1LL << v))){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    if(!(cin >> N >> M)) return 0;
    g.assign(N, {});

    for(int i = 0; i < M; ++i){
        int a, b; cin >> a >> b;
        --a; --b;
        if(a < 0 || a >= N || b < 0 || b >= N) continue; // safety
        g[a].push_back(b);
        g[b].push_back(a);
    }

    cin >> S1 >> S2 >> t;
    --S1; --S2; --t;

    if(N > 60){
        
    }

    vector<pair<long long,int>> p1, p2;
    dfs_paths(S1, (1LL << S1), 1, p1);
    dfs_paths(S2, (1LL << S2), 1, p2);

    int best = INT_MAX;
    for(auto &pp : p1){
        long long mask = pp.first;
        int len1 = pp.second;
        long long avoid = mask & ~(1LL << t); // allow t even if present
        int len2 = bfs_avoid(S2, avoid);
        if(len2 != -1) best = min(best, len1 + len2 - 2);
    }
    for(auto &pp : p2){
        long long mask = pp.first;
        int len2 = pp.second;
        long long avoid = mask & ~(1LL << t);
        int len1 = bfs_avoid(S1, avoid);
        if(len1 != -1) best = min(best, len1 + len2 - 2);
    }

    if(best == INT_MAX) cout << "Impossible\n";
    else cout << best << "\n";

    return 0;
}
