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
    int n, x;
    cin >>n>>x;
    vi a(n);
    rep(i,0,n)cin >> a[i];
    /*
    map<int,int> dp;
    dp[x] = 0;
    for(auto v : a){
        map<int,int> ndp = dp;
        for(auto it : dp){
            int g = it.first;
            int coins = it.second;
            int ng = gcd(g,v);
            if(ng > 1) ndp[ng] = max(ndp[ng], coins + v);
        }
        dp = ndp;
    }
    */

    int ans = 0;
    int temp = x;
    for(int p = 2;p*p <=temp;p++){
        if(temp % p != 0)continue;
        int sum = 0;
        for(auto v : a){
            if(v % p == 0)
                sum += v;
        }
        ans = max(ans, sum);
        while(temp % p == 0)
            temp /= p;
    }

    if(temp > 1){
        int sum = 0;
        for(auto v : a){
            if(v % temp == 0)
                sum += v;
        }
        ans = max(ans, sum);
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/