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
    int n,m; cin>>n>>m;
    vector<string> s(n);
    rep(i,0,n) cin >> s[i];
    int mnr = INT_MAX , mnr2 = -1;
    int mnc = INT_MAX , mxc = -1;
    int cnt = 0;
    rep(i,0,n){
        rep(j,0,m){
            if(s[i][j]=='B'){
                cnt++;
                mnr = min(mnr,i);
                mnr2 = max(mnr2,i);
                mnc = min(mnc,j);
                mxc = max(mxc,j);
            }
        }
    }
    if(cnt==0){
        cout << 1 << nl;
        return;
    }
    int h = mnr2 - mnr + 1;
    int w = mxc - mnc + 1;
    int sz = max(h,w);
    if(sz > n || sz > m){
        cout << -1 << nl;
        return;
    }
    cout << sz*sz - cnt << nl;
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