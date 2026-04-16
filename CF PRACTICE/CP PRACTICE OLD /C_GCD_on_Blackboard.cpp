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
const int MAX = 1e5+5;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int arr[MAX];
int prefgcd[MAX];
int suffgcd[MAX];

void solve(){
    int n; cin >>n;
    vi a(n); 
    rep (i,0,n) cin >> a[i];
    sort(all(a));
    prefgcd[0] = a[0];
    suffgcd[n+1] = 0;
    revrep (i,n-1,0) suffgcd[i] = gcd(suffgcd[i+1],a[i]);
    rep (i,1,n) prefgcd[i] = gcd(prefgcd[i-1],a[i]);
    int ans = 0;
    rep (i,0,n) ans = max(ans,gcd(prefgcd[i-1],suffgcd[i+1]));
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