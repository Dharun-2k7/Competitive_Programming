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
    int n;cin >>n;
    string s; cin >>s;
    vll cnt(3,0);
    cnt[0] = 1;
    int df = 0;
    int ans = 0;
    rep(i,0,n){
        if(s[i] == '0') df++;
        else df--;
        int md = ((df % 3) + 3) % 3;
        ans += cnt[(md + 1) % 3];
        ans += cnt[(md + 2) % 3];
        cnt[md]++;
    }
    auto bad = [&](int l){
        int m = l / 2;
        if(l & 1) ans -= m * m;
        else ans -= m * (m - 1);
    };

    int ln = 1;
    rep(i,1,n){
        if(s[i] != s[i-1]) ln++;
        else{
            bad(ln);
            ln = 1;
        }
    }
    bad(ln);
    cout << ans << nl;
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
 obs : 

    so here we have a binary string

    and we can do

        00 -> 1
        11 -> 0

    first thing i wanna check is whether
    some quantity remains unchanged

    let d = cnt0 - cnt1

    for

        00 -> 1

    we lose 2 zeros and gain 1 one

    so d changes by

        -2 - 1 = -3

    for

        11 -> 0

    we gain 1 zero and lose 2 ones

    so d changes by

        1 - (-2) = +3

    therefore d % 3 never changes

    now what are we trying to reach ?

    a string of length 1

    if final string is

        0

    then d = 1

    if final string is

        1

    then d = -1

    therefore for a beautiful string

        d % 3 can only be 1 or 2

    if d % 3 == 0

    then no chance of reaching a single bit

    but this alone cannot be enough

    because operation requires 2 equal adjacent bits

    for example

        010

    has valid d

    but we cannot make even one move

    so arrangement of bits also matters

    alternating strings are suspicious

    since they never contain

        00
        11

    and therefore get stuck immediately

    so 
         (cnt0 - cnt1) % 3 != 0

        substring should not get stuck in an alternating configuration

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