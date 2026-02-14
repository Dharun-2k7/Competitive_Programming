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
    int n,m;
    cin >> n >> m;

    vector<vector<pii>> adj(n+1);
    rep(i,0,m){
        int a,b,w;
        cin >> a >> b >> w;
        adj[a].pb({b,w});
        adj[b].pb({a,w});
    }

    const int INF = 1e18;
    vi dist(n+1, INF), par(n+1, -1);

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[1] = 0;
    pq.push({0,1});

    while(!pq.empty()){
        auto [d,u] = pq.top();
        pq.pop();

        if(d > dist[u]) continue;

        for(auto [v,w] : adj[u]){
            if(dist[v] > d + w){
                dist[v] = d + w;
                par[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    if(dist[n] == INF){
        cout << -1 << nl;
        return;
    }

    vi path;
    int cur = n;
    while(cur != -1){
        path.pb(cur);
        cur = par[cur];
    }

    reverse(all(path));
    for(int x : path) cout << x << " ";
    cout << nl;
}

void test(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int32_t main(){
    fast
    //test();
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