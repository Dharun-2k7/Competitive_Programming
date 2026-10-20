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

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

void solve(){
    int n,m;cin >>n>>m;
    vvi adj(n+1);
    vi deg(n+1,0);
    rep(i,0,m){
        int u,v; cin >>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        deg[u]++;
        deg[v]++;
    }

    vector<bool> vis(n+1,false);
    int cnt = 0;
    bool single = false;

    rep(i,1,n+1){
        if(!vis[i]){
            cnt++;
            int size = 0;
            queue<int> q;
            q.push(i);
            vis[i] = true;
            while(!q.empty()){
                int u = q.front();
                q.pop();
                size++;
                for(auto v:adj[u]){
                    if(!vis[v]){
                        vis[v] = true;
                        q.push(v);
                    }
                }
            }

            if(size == 1) single = true;
        }
    }

    if(single){
        cout<<"Brain Melt"<< nl;
        return;
    }

    if(cnt > 1){
        cout<<"Many"<< nl;
        return;
    }

    int mx = 0;
    rep(i,1,n+1) mx = max(mx,deg[i]);
    if(mx == n-1 && m == n-1) cout << 2 << nl;
    else cout << "Many" << nl;
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/