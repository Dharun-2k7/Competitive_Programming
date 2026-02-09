#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define revrep(i,a,b) for(int i=a;i>=b;i--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}


void solve(){
    int n, m; cin >>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    rep(i,0,m){
        int u,v,c; cin >>u >>v>>c;
        adj[u].pb({v,c});
        adj[v].pb({u,c});
    }
    
    vector<vi> dist(n+1, vi(4, -1));
    queue<pii> q;
    
    dist[1][0] = 0;
    q.push({1, 0});
    
    while(!q.empty()){
        int u = q.front().ff;
        int pv= q.front().ss;
        q.pop();
        
        int d = dist[u][pv];
        
        if(u == n){
            cout << d << nl;
            return;
        }
        
        for(auto& eg : adj[u]){
            int v = eg.ff;
            int c = eg.ss;
            if(c != pv){
                if(dist[v][c] == -1){
                    dist[v][c] = d + 1;
                    q.push({v, c});
                }
            }
        }
    }
    cout << -1 << nl;
}
int32_t main(){
    fast
    solve();
    return 0;
}

/*
 ██████████   █████                                              
░░███░░░░███ ░░███                                               
 ░███   ░░███ ░███████    ██████   ████████  █████ ████ ████████ 
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░       ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/