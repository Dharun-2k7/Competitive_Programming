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
    vi a;
    if(n % 2 == 1){
        cout << n << nl;
        a.pb(2);
        a.pb(1);
        rep(i,3,n+1) a.pb(i);
    }
    else{
        int x = 1;
        while(x * 2 <= n) x *= 2;
        cout << (2*x - 1) << nl;
        rep(i,x+1,n+1) a.pb(i);
        a.pb(2);
        a.pb(1);
        rep(i,3,x+1) a.pb(i);
    }

    for(auto v : a) cout << v << " ";
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
for every odd indice we need to do k&pi and for every even index we need to do k|p

0000 - eve
0001 - odd
0010 - eve
0011 - odd
0100 - eve

for every even index we must try to alternate the 1's in the n and pi 
and in odd indices we shld try to make sure that most of the 1st gets matched
but the problem needs global bit accumulation

so every 
odd steps → destroy bits
even steps → build bits

so we can try to build as many bits possible during even steps and protect them during odd steps
we must try to place the larger numbers in the even positions 
helps to add the bit 


this placing large numbers in eve pos fails

so we shld group numbers that share highest bit (power of 2 block)

let x be the largest power of 2 <= n

numbers from x to n share highest bit

placing them strategically ensures:
- or builds bits
- and preserves those bits

so instead of alternating or pairing,
we must construct permutation based on bit groups
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