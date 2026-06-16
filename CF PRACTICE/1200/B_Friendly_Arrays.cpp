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
    int n,m;cin >>n>>m;
    vi a(n), b(m);
    int xr = 0, orb = 0;
    rep(i,0,n){
        cin >> a[i];
        xr ^= a[i];
    }
    rep(i,0,m){
        cin >> b[i];
        orb |= b[i];
    }
    int mn, mx;
    
    if(n & 1){
        mn = xr;
        mx = xr | orb;
    }
    else{
        mn = xr & (~orb);
        mx = xr;
    }
    cout << mn << " " << mx << nl;
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
 we need to take an element bj from array B and then do ai|bj for each and every element in the array a 

 and we must find max and min value of

    a1 ^ a2 ^ ... ^ an

 OR can only turn 0 ---> 1

 doing multiple operations is same as taking OR of some bjs and applying it once

 xor depends on parity of set bits

 consider one bit ,

 if we force this bit using OR , then this bit becomes 1 in every ai

 so count of 1s in this bit becomes n

 therefore xor contribution of this bit becomes

    n % 2

 ah so if n is even , forcing a bit makes xor bit = 0
 if n is odd  , forcing a bit makes xor bit = 1

 so for even n , OR can only decrease xor
 for odd n  , OR can only increase xor
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