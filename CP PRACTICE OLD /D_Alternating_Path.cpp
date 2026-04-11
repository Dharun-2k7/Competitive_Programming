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

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n,m; cin >> n >> m;
    vvi g(n+1);
    rep(i,0,m){
        int u,v; cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    vi vis(n+1,-1);
    int ans = 0;

    rep(i,1,n+1){
        if(vis[i] != -1) continue;
        queue<int> q;
        q.push(i);
        vis[i] = 0;
        int c0 = 1, c1 = 0;
        bool ok = true;
        while(!q.empty()){
            int v = q.front();
            q.pop();
            for(auto x : g[v]){
                if(vis[x] == -1){
                    vis[x] = vis[v] ^ 1;
                    if(vis[x]) c1++;
                    else c0++;
                    q.push(x);
                }
                else if(vis[x] == vis[v]){
                    ok = false;
                }
            }
        }
        if(ok) ans += max(c0, c1);
    }
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