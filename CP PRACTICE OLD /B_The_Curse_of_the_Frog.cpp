#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
/*
algorithm to solve :

   if mx >=x then it can be reached in 0 step

each jump we get :
 
       a gain of ai*bi-ci
 str the maxgain
 
 if mxgn is 0 ans -1

so our remaining distance to reach the final place would be x-max of ai

*/
void solve(){
    int n; ll x;
    cin >> n >> x;
    ll sf = 0, gn = 0;
    while(n--){
        ll a,b,c;
        cin >> a >> b >> c;
        sf += a * (b - 1);
        ll cur = a * b - c;
        if(cur > 0) gn = max(gn, cur);
    }
    if(sf >= x){
        cout << 0 << end;
        return;
    }
    if(gn <= 0){
        cout << -1 << end;
        return;
    }
    
    ll rem = x - sf;
    ll ans = (rem + gn - 1) / gn;
    cout << ans << end;

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