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
    int n, k; cin >> n >> k;
    vi  a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];

    int l = n - k;   
    int r = k - 1;   

    vi nd(n + 1, 0);
    rep(i,l,r+1) nd[a[i]] = 1;

    bool ok = true;
    vi vis(n + 1, 0);

    rep(i,0,n){ 
        if (i < l || i > r) {
            if (b[i] != -1 && b[i] != a[i]) {
                ok = false;
                break;
                }
            } 
        else {
            if (b[i] != -1) {
                if (!nd[b[i]] || vis[b[i]]) {
                    ok = false;
                    break;
                    }
                vis[b[i]] = 1;
                }
            }
            }
    cout << (ok ? "YES" : "NO") << nl;
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