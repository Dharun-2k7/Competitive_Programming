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

const int mod = 998244353;

void solve(){
    int n; cin >> n;
    vi a(n+1);
    rep(i,1,n+1) cin >> a[i];
    vi p(n+1);
    p[0] = 1;

    rep(i,1,n+1) p[i] = (p[i-1] * 2) % mod;
    

    vector<pii> v;
    rep(i,1,n+1)v.push_back({a[i],i});
    

    sort(v.rbegin(),v.rend());
    vi u(n+1,0);
    int b = 0;
    int ans = 0;

    for(auto [x,id] : v){
        vi d;
        for(int i=1;i*i<=id;i++){
            if(id%i==0){
                d.push_back(i);
                if(i*i!=id){
                    d.push_back(id/i);
                }
            }
        }
        int add = 0;
        for(auto z : d){
            if(!u[z]){
                u[z] = 1;
                add++;
            }
        }
        b += add;
        int ways =(p[n-b+add]-p[n-b]+mod)%mod;
        ans = (ans + x*ways)%mod;
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