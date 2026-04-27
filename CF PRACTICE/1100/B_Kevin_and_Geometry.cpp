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

void  solve(){
    int n; cin >> n;
    vi a(n);
    map<int,int> fr;
    rep(i,0,n){
        cin >> a[i];
        fr[a[i]]++;
    }
    vi p;
    for(auto it : fr){
        if(it.ss >= 2) p.pb(it.ff);
    }
    if(p.size() >= 2){
        cout << p[0] << " " << p[0] << " " << p[1] << " " << p[1] << nl;
        return;
    }
    if(p.empty()){
        cout << -1 << nl;
        return;
    }
    int c = p[0];
    vi v;
    int tk = 0;
    rep(i,0,n){
        if(a[i] == c && tk < 2) tk++;
        else v.pb(a[i]);
    }
    sort(all(v));
    rep(i,0,(int)v.size()-1){
        if(v[i+1] - v[i] < 2*c){
            cout << c << " " << c << " " << v[i] << " " << v[i+1] << nl;
            return;
        }
    }
    cout << -1 << nl;
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