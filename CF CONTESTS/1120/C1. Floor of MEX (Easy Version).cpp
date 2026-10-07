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

void solve(){
    int n;cin >> n;
    vi a(n + 1);
    rep(i,1,n + 1) cin >> a[i];
    vi dif(n + 1, 0);
    rep(k,1,n + 1){
        int l = k * a[k];
        int r = l + k - 1;
        if(l < n){
            dif[l]++;
            if(r + 1 < n)
                dif[r + 1]--;
        }
    }

    vi b;
    int cur = 0;
    rep(i,0,n){
        cur += dif[i];
        if(cur == 0)
            b.pb(i);
    }

    cout << b.size() << nl;
    rep(i,0,b.size()){
        cout << b[i];
        if(i + 1 < b.size())
            cout << " ";
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░   ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░

 Author: Dharun
*/