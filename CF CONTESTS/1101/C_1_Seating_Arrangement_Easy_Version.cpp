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

//C2 logic
void solve(){
    int n,x,s;cin>>n>>x>>s;
    string u; cin >> u;
    int avail = 0;
    int ambi = 0;
    int ans = 0;
    for(char c : u){
        if(c == 'I'){
            if(x > 0){
                x--;
                avail += (s - 1);
                ans++;
            }
        }
        else if(c == 'E'){
            if(avail > 0){
                avail--;
                ans++;
            }
            else if(ambi > 0 && x > 0){
                ambi--;
                x--;
                avail += (s - 1);
                ans++;
            }

        }
        else{
            if(avail > 0){
                avail--;
                ambi++;
                ans++;
            }
            else if(x > 0){
                x--;
                avail += (s - 1);
                ans++;
            }
        }
    }
    cout << ans << nl;
}


/*
XD , DP was an overkill , greedy solution would have been even easier :>
void solve(){
    int n,x,s;cin>>n>>x>>s;
    string u; cin >> u;
    vi dp(x + 1, -1);
    dp[x] = 0;
    for(char c : u){
        vi ndp = dp;
        rep(j,0,x + 1){
            if(dp[j] == -1) continue;
            int k = dp[j];
            int ps = (x - j) * s - k;
            if((c == 'I' || c == 'A') && j > 0){
                ndp[j - 1] = max(ndp[j - 1], k + 1);
            }
            if((c == 'E' || c == 'A') && ps > 0){
                ndp[j] = max(ndp[j], k + 1);
            }
        }
        dp = ndp;
    }

    int ans = 0;
    rep(j,0,x + 1) ans = max(ans, dp[j]);
    cout << ans << nl;
}
*/

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