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

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n; cin >>n;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    int l0=0,r0=0;
    rep(i,0,n) {
        if(a[i]==0){
            l0+=i<2;
            r0+=i>=2;
        }
    }
    if(l0==0 && r0==0){
        cout<<1<<nl;
        cout <<1 << ' ' << n << nl;
    }
    else if (l0 == 0 && r0 != 0){
        cout << 2 << nl;
        cout << 3 << ' ' << n << nl;
        cout << 1 << ' ' << 3 << nl;
    }
    else if (l0 != 0 && r0 == 0){
        cout << 2 << nl;
        cout << 1 << ' ' << 2 << nl;
        cout << 1 << ' ' << n - 1 << nl;
    }
    else{
        cout << 3 << nl;
        cout << 3 << ' ' << n << nl;
        cout << 1 << ' ' << 2 << nl;
        cout << 1 << ' ' << 2 << nl;
    }
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