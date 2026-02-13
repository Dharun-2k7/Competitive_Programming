#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vb vector<bool>
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
#define end "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    string s; 
    cin >> s;
    int n = s.length();

    vector<vi> dp(n, vi(n));
    vector<vb> pal(n, vb(n));

    for(int i = n-1; i >= 0; i--){
        dp[i][i] = 1;
        pal[i][i] = 1;

        for(int j = i+1; j < n; j++){
            if(s[i] == s[j]){
                if(j - i == 1) 
                    pal[i][j] = 1;
                else 
                    pal[i][j] = pal[i+1][j-1];
            }

            dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1] + pal[i][j];
        }
    }

    int q; 
    cin >> q;
    while(q--){
        int l,r; 
        cin >> l >> r;
        cout << dp[l-1][r-1] << end;
    }
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