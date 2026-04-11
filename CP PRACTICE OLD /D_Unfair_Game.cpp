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

#define M 30

int ncr[M][M];

int comb(int n,int r){
    if(r<0 || r>n) return 0;
    return ncr[n][r];
}

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n,k; cin >> n >> k;
    int d = 0;
    while((1<<d) < n) d++;
    int ans = (d+1 > k);
    rep(i,0,d){
        rep(z,0,i+1){
            if(i+1+z > k){
                ans += comb(i,z);
            }
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
    rep(i,0,M){
        rep(j,0,M) ncr[i][j] = 0;
    }
    ncr[0][0] = 1;
    rep(i,1,M){
        ncr[i][0] = 1;
        rep(j,1,M){
            ncr[i][j] = ncr[i-1][j] + ncr[i-1][j-1];
        }
    }
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