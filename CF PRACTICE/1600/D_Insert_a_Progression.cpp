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
    int n,x; cin >> n>>x;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    int mn = *min_element(all(a));
    int mx = *max_element(all(a));

    int ans = 0;
    rep(i,0,n-1) ans += abs(a[i] - a[i+1]);
    int c1 = INT_MAX, cx = INT_MAX;
    c1 = min(c1, abs(a[0] - 1LL));
    c1 = min(c1, abs(a[n-1] - 1LL));
    cx = min(cx, abs(a[0] - x));
    cx = min(cx, abs(a[n-1] - x));

    rep(i,0,n-1){
        c1 = min(c1, max(0LL, 2 * (min(a[i], a[i+1]) - 1)));
        cx = min(cx, max(0LL, 2 * (x - max(a[i], a[i+1]))));
    }

    if(mn > 1) ans += c1;
    if(mx < x) ans += cx;

    cout<<ans<<nl;
    //cout << ans + c1 + cx << nl;
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

    we must try to minimise the final score , as we know 

    initial score is fixed

    abs(a[i] - a[i+1])

    suppose we insert k between u and v

    old contribution :

        abs(u-v)

    new contribution :

        abs(u-k) + abs(k-v)

    if k lies between u and v ,

        u ---- k ---- v

    then

        abs(u-k) + abs(k-v) = abs(u-v)

    ahh so we can insert such numbers for free

    otherwise score increases

    so numbers already lying inside some segment of the array
    can be added without changing the answer

    therefore we only have to worry about the extremes

        what about 1 ?
        what about x ?

    if 1 already lies inside the range of some adjacent pair,
    then we can insert it (and all smaller covered values) for free

    otherwise we need some extra cost to connect 1

    for a pair u,v the extra cost is

        abs(u-1) + abs(v-1) - abs(u-v)

    but if we put 1 at the beginning/end,

        extra cost = min(abs(a[0]-1), abs(a[n-1]-1))

    so answer for connecting 1 is the minimum among all such choices

    similarly, find the minimum extra cost for connecting x

    so do we have to do 

        initial score
        + cheapest way to connect 1
        + cheapest way to connect x
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