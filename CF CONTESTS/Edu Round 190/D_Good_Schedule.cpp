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
    int n;cin>>n;
    vi a(n + 1), b(n + 1);
    rep(i,1,n + 1) cin >> a[i];
    rep(i,1,n + 1) cin >> b[i];
    vi na(n + 2, n + 1);
    vi nb(n + 2, n + 1);
    vi dp(n + 2, 0);
    int ans = 0;
    revrep(i,n,1){
        if(a[i] == b[i]){
            int pa = na[a[i] + 1];
            int pb = nb[a[i] + 1];
            if(pa == pb){
                if(pa == n + 1) dp[i] = n;
                else dp[i] = dp[pa];
            }
            else{
                dp[i] = min(pa,pb) - 1;
            }
        }
        na[a[i]] = i;
        nb[b[i]] = i;
        int pa = na[1];
        int pb = nb[1];
        int r = 0;
        if(pa == pb){
            if(pa == n + 1){
                r = n;
            }
            else{
                r = dp[pa];
            }
        }
        else{
            r = min(pa,pb) - 1;
        }
        if(r >= i){
            ans += (r - i + 1);
        }
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
obs: 
   on any day, they must either watch the same episode or nothing at all


*/
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