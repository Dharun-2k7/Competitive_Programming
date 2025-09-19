#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> g(n+1);
        vector<int> ind(n+1, 0);
        fo(i,n-1){
            int u,v; ll x,y;
            cin >> u >> v >> x >> y;
            if(x > y){
                g[u].push_back(v);
                ind[v]++;
            } else if(y > x){
                g[v].push_back(u);
                ind[u]++;
            } 
        }

        queue<int> q;
        for(int i=1;i<=n;i++) if(ind[i]==0) q.push(i);
        vector<int> topo;
        topo.reserve(n);
        while(!q.empty()){
            int u = q.front(); q.pop();
            topo.push_back(u);
            for(int v: g[u]){
                ind[v]--;
                if(ind[v]==0) q.push(v);
            }
        }
        vector<int> p(n+1,0);
        int cur = n;
        for(int u: topo) p[u] = cur--;

        for(int i=1;i<=n;i++) cout << p[i] << (i==n?'\n':' ');
    }
}


/*
ok so we have a tree n vertices, each edge has x and y, we need permutation 1..n
edge contributes x if u>v else y, hmm so every edge kinda tells us which should be bigger
so like if x>y we want u bigger than v, if y>x we want v bigger than u, 
tree is acyclic so no cycles, nice, means we can assign numbers along tree without conflicts
maybe pick a root and DFS, then along each edge decide who gets bigger, hmm
if x>y parent bigger, assign bigger number, if y>x child bigger assign bigger number, easy

we just need one valid permutation that satisfies these local bigger/smaller preferences, problem says any max is ok
so we can do DFS and assign numbers from largest to smallest along the way
that should work, multiple answers possible, doesnt have to be unique
yeah seems fine, tree structure helps, no conflicts, just follow the DFS and assign numbers? 
*/
