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

void solve(){
    int n; cin >> n;
    vi a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    vpii ops;
    rep(i,0,n){
        int x = i + 1;
        int pos = -1, row = -1;
        rep(j,i,n){
            if(a[j] == x){
                pos = j;
                row = 0;
                break;
            }
            if(b[j] == x){
                pos = j;
                row = 1;
                break;
            }
        }
        if(row == 1){
            swap(a[pos], b[pos]);
            ops.pb({3, pos + 1});
        }
        while(pos > i){
            swap(a[pos], a[pos - 1]);
            ops.pb({1, pos});
            pos--;
        }
        int y = n + i + 1;
        pos = -1, row = -1;
        rep(j,i,n){
            if(a[j] == y){
                pos = j;
                row = 0;
                break;
            }
            if(b[j] == y){
                pos = j;
                row = 1;
                break;
            }
        }
        if(row == 0){
            swap(a[pos], b[pos]);
            ops.pb({3, pos + 1});
        }
        while(pos > i){
            swap(b[pos], b[pos - 1]);
            ops.pb({2, pos});
            pos--;
        }
    }
    cout << ops.size() << nl;
    for(auto &p : ops){
        cout << p.ff << " " << p.ss << nl;
    }
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