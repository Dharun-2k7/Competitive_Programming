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


int ans = 0, n, m;
vvi adj(100001);
int pres[100001];

void solve(int from, int to, int x){
    pres[to]==1?x++:x=0;
    if(x > m)return;
    int deg = adj[to].size();
    if(deg == 1){
        ans++;
        return;
    }
    rep(i,0,deg){
        if(adj[to][i] == from) continue;
        solve(to, adj[to][i], x);
    }
    return;
}


int32_t main(){
    fast
    cin >>n>>m;
    rep(i,0,n) cin >> pres[i + 1];
    adj[1].pb(0);
    rep(i,0,n-1){
        int x, y;
        cin >>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    solve(0, 1, 0);
    cout << ans << nl;
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░ ░░░░ ░░░░ ░░░░ ░░░░ ░░░░ ░░░░

 Author: Dharun
*/