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

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

void solve(){
    int n;cin>>n;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    int mn = *min_element(all(a));
    int mx = *max_element(all(a));
    if(mn == mx){
        cout << mx << nl;
        return;
    }

    int k = __lg(mx ^ mn);
    int mask = (1LL << (k + 1)) - 1;
    cout << (mx|mask)<< nl;
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
    we must try to maximise bitwise OR of entire array 

       if we set a bit in any one pos in any ele then thats gonna be set throughout the process

        but the answer only depends on the MSB of the bit , 

          OR value maximises as the msb is more 

          we must find the difference in bits using xor 

           so mx ^ mn gives us the positions where their bits are different


   

*/
/*
 ██████████   █████
░░███░░░░███ ░░███
 ░███   ░░███ ░███████    ██████   ████████  █████ ████ ████████
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/