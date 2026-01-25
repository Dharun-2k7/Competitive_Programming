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
#define end "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n,k;
    cin >> n >> k;

    vll cnt(60,0);

    rep(i,0,n){
        int a; 
        cin >> a;
        int t = 0;
        while(a > 0){
            cnt[t] += a % k;
            a /= k;
            t++;
        }
    }

    bool ok = 1;
    rep(i,0,60){
        if(cnt[i] > 1){
            ok = 0;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << end;
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
