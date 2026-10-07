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

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}


void solve(){
    int n;cin >> n;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    vvi dp(n, vi(n, 0));
    rep(i,0,n) dp[i][i] = 1;

    for(int len= 2; len <= n; len++){
        for(int l = 0; l + len - 1 < n; l++){
            int r = l + len - 1;
            dp[l][r] = 1 + dp[l + 1][r];
            for(int k = l + 1; k <= r; k++){
                if(a[l] == a[k]){
                    if(k == l + 1){
                        int x = (k + 1 <= r ? dp[k + 1][r] : 0);
                        dp[l][r] = min(dp[l][r], 1 + x);
                    } else {
                        int x = (k + 1 <= r ? dp[k + 1][r] : 0);
                        dp[l][r] = min(dp[l][r], dp[l + 1][k - 1] + x);
                    }
                }
            }
        }
    }

    cout << dp[0][n - 1] << nl;
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
░░░░░░░░░░   ░░░░ ░░░░░░░░░  ░░░░░░░░░  ░░░░░░░░   ░░░░ ░░░░ ░░░░

 Author: Dharun
*/