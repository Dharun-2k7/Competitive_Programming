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

const int MOD=676767677;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int div(int n){
    int cnt = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(i * i != n) cnt++;
        }
    }
    return cnt;
}

void solve(){
    int x, y; cin >> x >> y;
    int s = x - y;
    if(s == 0) cout << (1 % MOD) << nl;
    else  cout << (div(abs(s)) % MOD) << nl;
    
    if(x >= y){
        rep(i,0,x) cout << 1 << " ";
        rep(i,0,y) cout << -1 << " ";
    } else {
        rep(i,0,y) cout << -1 << " ";
        rep(i,0,x) cout << 1 << " ";
    }
    cout << nl;
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
