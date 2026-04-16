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

void solve(){
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    rep(i,0,n) cin >> s[i];

    vi score(n, 0);

    rep(j,0,m){
        int c0 = 0, c1 = 0;
        rep(i,0,n){
            if(s[i][j] == '0') c0++;
            else c1++;
        }

        if(c0 == 0 || c1 == 0){
            rep(i,0,n) score[i]++;
        } else if(c0 < c1){
            rep(i,0,n) if(s[i][j] == '0') score[i]++;
        } else {
            rep(i,0,n) if(s[i][j] == '1') score[i]++;
        }
    }

    int mx = *max_element(all(score));

    rep(i,0,n){
        if(score[i] == mx){
            cout << i+1 << " ";
        }
    }
    cout << nl;
}

int32_t main(){
    fast
    solve();
    return 0;
}
