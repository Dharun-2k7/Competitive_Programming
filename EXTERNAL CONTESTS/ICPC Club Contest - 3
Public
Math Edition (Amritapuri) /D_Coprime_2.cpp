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
    int n ,m; cin >>n>>m;
    vi a(n);
    rep(i,0,n) cin >>a[i];

    set<int>bad;
    for(int x:a){
        for(int d=2;d*d<=x;d++){
            if(x%d==0){
                bad.insert(d);
                while(x%d==0)x/=d;
            }
        }
        if(x>1)bad.insert(x);
    }
    vector<bool>ok(m+1,true);
    for(int p:bad){
        for(int j=p;j<=m;j+=p)ok[j]=false;
    }
    vi ans;
    rep(i,1,m+1) if(ok[i])ans.pb(i);

    cout<<ans.size()<<nl;
    for(int i:ans)cout<<i<<nl;

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
    //test();
    solve();
    return 0;
}
/*
only k we can get are prime numbers 
  but not all prime numbers < Ai can satisfy the given condition 
    eg 
    gcd(6,2) -->  2
    gcd (6,3) --- > 3
    gcd(6,5) --> 1 

    we can consider the primes which are factors of any Ai as bad primes 
    -- so we can store a set of bad prime facs

    also we shld remove the multiples of those primes eg  : 2-- 4 6 8 10 etc gcd != 1

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