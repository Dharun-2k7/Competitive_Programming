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

vector<string> rot(vector<string> g){
    int n = g.size();
    vector<string> r(n, string(n,' '));
    rep(i,0,n) rep(j,0,n)
        r[j][n-1-i] = g[i][j];
    return r;
}

vector<string> flh(vector<string> g){
    reverse(all(g));
    return g;
}

vector<string> flv(vector<string> g){
    for(auto &s: g) reverse(all(s));
    return g;
}

void solve(){
    int n; cin >> n;
    vector<string> a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];

    vector<string> cur = a;

    rep(k,0,4){
        if(cur == b || flh(cur) == b || flv(cur) == b){
            cout << "Yes" << nl;
            return;
        }
        cur = rot(cur);
    }

    cout << "No" << nl;
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
