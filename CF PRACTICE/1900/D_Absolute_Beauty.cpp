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
    int n;cin >>n;
    vi a(n) ,b(n);
    rep(i,0,n) cin >>a[i];
    rep(i,0,n) cin >>b[i];

    int ans=0;
    rep(i,0,n)ans+=abs(a[i]-b[i]);

    int i1=0, i2=0;
    rep(i,1,n){
        if (max(a[i], b[i]) < max(a[i1], b[i1])) i1 = i;
		if (min(a[i], b[i]) > min(a[i2], b[i2])) i2 = i;
    }
    int res=ans;

    if(i1!=i2){
        int cur=ans;
        cur -= abs(a[i1] - b[i1]);
		cur -= abs(a[i2] - b[i2]);
		cur += abs(a[i1] - b[i2]);
        cur += abs(a[i2] - b[i1]);
		ans = max(ans, cur);
    }
    cout<<ans<<nl;
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