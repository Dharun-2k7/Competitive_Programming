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

int lcm (int a, int b) {
return a / gcd(a, b) * b;
}

void solve(){
    int n,k;cin >>n>>k;
    int t =k^n;
    int mx = 0;
    if(n > 1){
        int p = 1;
        while(p * 2 < n) p *= 2;
        mx = (p * 2) - 1;
    }
    if(t > mx){
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
    vi ans;
    rep(i,1,n){
        if((i & (i - 1)) == 0 && (t & i) == i) continue;
        ans.pb(i);
    }
    ans.pb(0);
    for(int i = 0; (1 << i) < n; i++){
        int val = (1 << i);
        if((t & val) == val) ans.pb(val);
    }
    for(auto x : ans) cout << x << " ";
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░       ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/

/*
 we must make the XOR  mex of each sub segment in the permutation  to be equal to K 

      so our res will be changing each time when we do XOR of each i , how can we make it eq to K 

       what kind of bits must we kill and where do we have to set a bit, does this co relate with the bin rep of K ?

         can we try making xor of [a0....a[n-1]] to be equal to 00000 and then setting the bits needed to make the ans eq to k ?

         then what bits do we need to set  ? the tot arr mex will always be n . so to get k , we need the extra bits to be t = k^n


*/