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
    int n,x,y; cin >> n>>x>>y;
    vi a(n);
    rep(i,0,n) cin >>a[i];

    vi ot;
    rep(i,0,x) ot.pb(a[i]);
    rep(i,y,n) ot.pb(a[i]);

    sort(all(ot));
    vi ans(n);
    rep(i,0,x) ans[i]=ot[i];
    rep(i,x,y) ans[i]=a[i];
    rep(i,y,n) ans[i]=ot[x+(i-y)];

    for(int v:ans) cout <<v <<" ";
    cout <<nl;
    
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
[A | B | C] 
     a==> [1...x]
     b==> [x+1...y]
     c===> [y+1 ...n]

     we can do 2 operations , either take elemtn jst left to one portal and place in just right of other portal
                               or we can take just ryt of one portal and place on just left pos of anothe rportal 

                               the segment B is unchanged=> the one between 2 portals

                               to make it lexicographically small we must place small elements in segment A 


*/
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