#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
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
#define end "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n, m;
    cin >> n >> m;

    ld s = 0;
    ld pi = acosl(-1.0L);

    rep(i,0,m){
        ld r;
        cin >> r;
        s += pi * r * r;
    }

    cout << fixed << setprecision(6)
         << s / ((ld)n * n) << end;
}

int32_t main(){
    fast
    /*int t;
    cin >> t;
    while(t--){
        solve();
    }*/
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