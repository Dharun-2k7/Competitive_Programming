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
#define nl endl

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int q(int u, int v){
    cout << "? " << u << " " << v << nl; 
    int r; cin >> r;
    if(r == -1) exit(0);
    return r;
}

void solve(){
    int n;  cin >> n;
    if(q(1,2) == 1){
        cout << "! 1" << nl;
        return;
    }
    if(q(2,3) == 1){
        cout << "! 2" << nl;
        return;
    }
    if(q(1,3) == 1){
        cout << "! 1" << nl;
        return;
    }
    for(int i = 4; i < 2*n; i += 2){
        if(q(i, i+1) == 1){
            cout << "! " << i << nl;
            return;
        }
    }
    cout << "! " << 2*n << nl;
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