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
const int N = 2e5 + 10;

vvi pf(N);

void sieve(){
    rep(i,2,N){
        if(pf[i].empty()){
            for(int j=i;j<N;j+=i){
                pf[j].pb(i);
            }
        }
    }
}

void solve(){
    int n;cin >> n;
    vi a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];

    int ans = 2;
    vi cnt(N,0);
    rep(i,0,n){
        for(int x : pf[a[i]]){
            if(cnt[x] > 0){
                ans = 0;
            }
            cnt[x]++;
        }
    }
    if(ans > 0){
        rep(i,0,n){
            for(int x : pf[a[i]]){
                cnt[x]--;
            }
            for(int x : pf[a[i] + 1]){
                if(cnt[x] > 0){
                    ans = min(ans,1LL);
                }
            }

            for(int x : pf[a[i]]){
                cnt[x]++;
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
    sieve();
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