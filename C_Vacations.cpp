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
    int n; cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];

    vvi dp(n,vi(3,INT_MAX));
    dp[0][0] = 1;
    if(a[0] == 1 || a[0] ==3) dp[0][1] = 0;
    if(a[0] == 2 || a[0] == 3) dp[0][2] = 0;

    rep(i,1,n){
        dp[i][0] = 1 + min({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
        if(a[i] == 1 || a[i] ==3) dp[i][1] = min(dp[i-1][0],dp[i-1][2]);
        if(a[i] == 2 || a[i] == 3) dp[i][2] = min(dp[i-1][0],dp[i-1][1]);
    }
    cout << min({dp[n-1][0],dp[n-1][1],dp[n-1][2]}) << nl;
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