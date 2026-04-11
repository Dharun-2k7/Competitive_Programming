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
    int n,m,k;
    cin >> n >> m >> k;

    vi b(n);
    rep(i,0,n) cin >> b[i];

    vi l(m), r(m), d(m);
    rep(i,0,m) cin >> l[i] >> r[i] >> d[i];

    vi op(m+1,0);
    vi ans(n+1,0);

    rep(i,0,k){
        int x,y;
        cin >> x >> y;
        op[x-1]++;
        op[y]--;
    }

    rep(i,1,m) op[i] += op[i-1];

    rep(i,0,m){
        int times = op[i];
        ans[l[i]-1] += d[i] * times;
        ans[r[i]] -= d[i] * times;
    }

    rep(i,1,n) ans[i] += ans[i-1];

    rep(i,0,n) cout << ans[i] + b[i] << " ";
    cout << end;
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