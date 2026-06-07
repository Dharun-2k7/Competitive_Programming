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

void dfs(int idx, int state, int cur, vi &digs, vi &d, int a, int &mn){
    if(idx == digs.size()){
        mn = min(mn, abs(cur - a));
        return;
    }
    int dig = digs[idx];
    if(state == 1) dfs(idx + 1, 1, cur * 10 + d.back(), digs, d, a, mn);
    else if(state == 2) dfs(idx + 1, 2, cur * 10 + d[0], digs, d, a, mn);
    else{
        rep(j,0,d.size()){
            int x = d[j];
            if(x < dig)  dfs(idx + 1, 1, cur * 10 + x, digs, d, a, mn);
            else if(x > dig) dfs(idx + 1, 2, cur * 10 + x, digs, d, a, mn);
            else dfs(idx + 1, 0, cur * 10 + x, digs, d, a, mn);
            
        }
    }
}

void solve(){
    int a,n; cin >>a>>n;
    vi d(n);
    rep(i,0,n) cin >>d[i];
    
    if(a == 0){
        cout << d[0] << nl;
        return;
    }
    vi digs;
    int k = a;
    while(k){
        digs.pb(k % 10);
        k /= 10;
    }
    reverse(all(digs));
    int mn = LLONG_MAX;
    dfs(0, 0, 0, digs, d, a, mn);
    if(digs.size() > 1){
        int cur = 0;
        rep(i,0,digs.size()-1) cur = cur * 10 + d.back();
        mn = min(mn, abs(a - cur));
    }
    if(!(n == 1 && d[0] == 0)){
        int cur = d[0];
        if(cur == 0 && n > 1) cur = d[1];
        rep(i,0,digs.size()) cur = cur * 10 + d[0];
        mn = min(mn, abs(cur - a));
    }

    cout << mn << nl;
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