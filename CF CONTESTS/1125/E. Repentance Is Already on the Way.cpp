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

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

int C(int x,int y){
    return x == y ? 2 : 1;
}

void solve(){
    int n;cin >> n;
    vi a(n),b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    if(n == 1){
        cout << C(a[0],b[0]) << nl;
        return;
    }
    int base = 0;
    rep(i,0,n - 1) base += C(b[i],a[i + 1]);
    base += C(a[n - 1],b[n - 1]);
    int cur = 0;
    rep(i,0,n - 1){
        cur += C(a[i],b[i + 1]);
    }
    int mx = cur;
    rep(k,1,n){
        cur -= C(a[k - 1],b[k]);
        cur += C(a[k - 1],b[k - 1]);
        mx = max(mx,cur);
    }
    cout << base + mx << nl;
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
 ██████████   █████
░░███░░░░███ ░░███
 ░███   ░░███ ░███████    ██████   ████████  █████ ████ ████████
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/