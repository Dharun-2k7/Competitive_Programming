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

void solve(){
    int n; cin >> n;
    vi a(n);
    vi res(n+1, 0);

    rep(i,0,n){
        cin >> a[i];
        if(a[i] >= 1 && a[i] <= n)
            res[a[i]] = 1;
    }

    const int INF = 1e9;
    vi dp(n+1, INF);

    rep(i,1,n+1){
        if(res[i]) dp[i] = 1;
    }

    rep(k,1,n+1){
        if(dp[k] == INF) continue;
        for(int j = 1; j <= n/k; j++){
            if(res[j]){
                int pd = k * j;
                if(dp[k] + 1 < dp[pd]){
                    dp[pd] = dp[k] + 1;
                }
            }
        }
    }

    rep(i,1,n+1){
        if(dp[i] >= INF) cout << -1 << " ";
        else cout << dp[i] << " ";
    }
    cout << nl;
}

int32_t main(){
    fast
    int t;
    cin >> t;
    while(t--){
        solve();
    }
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