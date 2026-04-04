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
    int n;cin >> n;
    vi a(n), b(n);
    rep(i,0,n) cin >> a[i] >> b[i];
    
    int m; cin >> m;
    vector<string> s(m);
    rep(i,0,m) cin >> s[i];
    
    bool res[11][11][26] = {};
    for(auto &x : s){
        int len = x.size();
        rep(i,0,len){
            res[len][i][x[i]-'a'] = 1;
        }
    }

    for(auto &x : s){
        if(x.size() != n){
            cout << "No" << nl;
            continue;
        }

        bool ok = 1;
        rep(i,0,n){
            if(!res[a[i]][b[i]-1][x[i]-'a']){
                ok = 0;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << nl;
    }
}

void test(){
    int n;
    cin >> n;
    while(n--){
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