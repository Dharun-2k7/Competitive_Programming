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


bool ok(int x, int y, vi c){
    if(c[0] < x) return false;
    c[0] -= x;

    if(c[1] < y) return false;
    c[1] -= y;

    if(c[0] + c[1] < y) return false;
    int t = min(c[0], y);

    c[0] -= t;
    y -= t;
    c[1] -= y;
    int s = 0;
    rep(i,0,6) s += c[i];
    if(s < x+y) return false;
    int z = 0;
    rep(i,0,10) z += c[i];
    return z >= 2*x + y;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vi c(10,0);
    for(char x : s) c[x-'0']++;
    int ans = 0;
    rep(x,0,n+1){
        int l = 0;
        int r = n;
        int bs = -1;
        while(l <= r){
            int m = (l+r)/2;
            if(ok(x,m,c)){
                bs = m;
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        if(bs != -1)
            ans = max(ans, x+bs);
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