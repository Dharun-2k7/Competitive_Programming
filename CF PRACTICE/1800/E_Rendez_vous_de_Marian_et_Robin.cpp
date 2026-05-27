#include<bits/stdc++.h>
using namespace std;
#define int long long
#define db double
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
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

const int INF = 1e18;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}


vi dij(vector<vpii> &adj , vi &hr , int st){
    int n = adj.size();
    vvi dis(n , vi(2 , INF));
    priority_queue<vi,vector<vi>,greater<vi>>pq;
    pq.push({0 , st , hr[st]});
    dis[st][hr[st]] = 0;
    while(!pq.empty()){
        auto tp = pq.top();
        pq.pop();
        int d = tp[0];
        int u = tp[1];
        int f = tp[2];
        
        if(dis[u][f] < d) continue;

        for(auto &x : adj[u]){
            int w = x.ff;
            int v = x.ss;
            if(f) w /= 2;
            int nf = 0;
            if(f || hr[v]) nf = 1;
            if(d + w < dis[v][nf]){
                dis[v][nf] = d + w;
                pq.push({dis[v][nf] , v , nf});
            }
        }
    }

    vi res;
    rep(i,0,n) res.pb(min(dis[i][0] , dis[i][1]));
    
    return res;
}

void solve(){
    int n,m,h;cin >> n >> m >> h;
    vi hr(n , 0);
    rep(i,0,h){
        int x;cin >> x;
        x--;
        hr[x] = 1;
    }

    vector<vpii> adj(n);
    rep(i,0,m){
        int u , v , w;
        cin >> u >> v >> w;
        u--;
        v--;
        adj[u].pb({w , v});
        adj[v].pb({w , u});
    }
    vi a = dij(adj , hr , 0);
    vi b = dij(adj , hr , n-1);
    int ans = INF;
    rep(i,0,n) ans = min(ans , max(a[i] , b[i]));
    if(ans == INF) ans = -1;
    cout << ans << nl;
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
    test();
    //solve();
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