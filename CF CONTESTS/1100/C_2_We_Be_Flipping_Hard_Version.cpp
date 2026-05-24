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
const int INF = 1e18;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n;cin >> n;
    vi a(n);
    rep(i,0,n) cin >> a[i];

    vector<vi> dp(n + 1, vi(3, -INF));
    vector<vi> pick(n + 1, vi(3, 0));
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    rep(i,1,n + 1){
        int val = a[i - 1];
        int op1 = dp[i - 1][0] + val;
        int op2 = -INF;

        if(val > 0)op2 = dp[i - 1][1] - val;
        if(op1 >= op2){
            dp[i][0] = op1;
            pick[i][0] = 0;
        }
        else{
            dp[i][0] = op2;
            pick[i][0] = 1;
        }
        int op3 = dp[i - 1][1] - val;
        int op4 = dp[i - 1][2] + val;
        if(op3 >= op4){
            dp[i][1] = op3;
            pick[i][1] = 0;
        }
        else{
            dp[i][1] = op4;
            pick[i][1] = 1;
        }
        int op5 = dp[i - 1][2] + val;
        int op6 = dp[i - 1][1] - val;
        if(op5 >= op6){
            dp[i][2] = op5;
            pick[i][2] = 0;
        }
        else{
            dp[i][2] = op6;
            pick[i][2] = 1;
        }
    }

    vi s;
    int p = 0;
    revrep(i,n,1){
        if(pick[i][p]){
            s.pb(i);
            if(p == 0) p = 1;
            else if(p == 1) p = 2;
            else p = 1;
        }
    }
    deque<int> ans;
    for(auto x : s){
        if(a[x - 1] > 0){
            ans.push_front(x);
        }
        else{
            int first = ans.front();
            ans.pop_front();
            ans.push_front(x);
            ans.push_front(first);
        }
    }

    cout << ans.size() << nl;
    for(auto x : ans) cout << x << " ";
    cout << nl;
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
// XD , is this just the opposite of C1?
 
 but c1 we can convert pos to neg to minimise but here we cant convert neg to pos , only operation is to do pos to neg but we have to maxmise ,

 do we need to do a dp approach ?
 

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