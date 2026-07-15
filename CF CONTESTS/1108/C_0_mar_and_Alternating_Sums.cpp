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

int mod=1e9+7;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm (int a, int b) {
return a / gcd(a, b) * b;
}

int pw(int a,int b){
    int ans = 1;
    a %= mod;
    while(b){
        if(b & 1)ans = (ans * a) % mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return ans;
}

void solve(){
    int n;cin >>n;
    int m = 0;
    int k = 0;
    int u = 0;
    int p = 0;
    int lst = 0;
    rep(i,0,n){
        int x; cin >>x;
        if(x==-1)m++;
        else{
            k++;
            if(x!=lst){
                u++;
                if(x==lst+1) p++;
                lst=x;
            }
        }
    }
    int pos = pw(2,k-u);
    if(m == 0){
        cout << pos << nl;
        return;
    }
    int neg = pw(2,m-1);
    int ans = (neg * pos) % mod;
    ans = (ans * (p+1)) % mod;
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