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
    int n, m;
    cin >> n >> m;

    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<string,int> cnt;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        cnt[s]++;
    }

    vi c;
    for(auto it : cnt){
        c.push_back(it.second);
    }

    c.resize(n);
    sort(all(a));
    sort(all(c));

    int mn = 0, mx = 0;
    for(int i = 0; i < n; i++){
        mx += a[i] * c[i];
        mn += a[i] * c[n - 1 - i];
    }

    cout << mn << " " << mx << nl;

}

int32_t main(){
    fast
    //int t;
    //cin >> t;
    //while(t--){
        solve();
    //}
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