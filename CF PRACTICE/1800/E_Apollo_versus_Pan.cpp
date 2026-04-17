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

const int mod=1e9+7;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
 

  void solve(){
    int n; cin >>n;
    int ans=0;
    vi a(n);
    vi cnt (62);
    rep(i,0,n) {
        cin >> a[i];
        rep(b,0,60){
            if((a[i]>>b)&1)cnt[b]++;
        }
    }
    rep(j,0,n){
        int as=0;
        int os=0;
        int c=a[j];
        rep(b,0,60){ 
            int p = (1LL<<b) % mod;
            if((c>>b)&1){
                as = (as + cnt[b] * p) % mod;
                os = (os + n * p) % mod;
            }
            else{
                os = (os + cnt[b] * p) % mod;
            }
        }
        ans = (ans + (as * os) % mod) % mod;
    }
    cout<<ans<<nl;
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