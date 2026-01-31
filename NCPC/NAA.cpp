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
#define end "\n"

const int N = 1005;
vi adj[N];
bool vis[N];

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

bool check(int start){
    memset(vis, 0, sizeof(vis));
    queue<int> q;

    q.push(start);
    vis[start] = true;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(vis[v]) return true; 
            vis[v] = true;
            q.push(v);
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n;

    rep(i,1,n+1){
        adj[i].clear();
        int m;
        cin >> m;
        while(m--){
            int p;
            cin >> p;
            adj[i].pb(p);
        }
    }

    rep(i,1,n+1){
        if(check(i)){
            cout << "Yes" << end;
            return;
        }
    }
    cout << "No" << end;
}

int32_t main(){
    fast
    int t;
    cin >> t;
    while(t--){
        solve();
    }
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