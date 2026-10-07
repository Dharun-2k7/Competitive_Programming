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


int  kadane(vector<int> &a){
	int best=a[0];
	int cur=0;
	for(int x:a){
		cur =max(x,cur+x);
		best= max(best,cur);
	}
	return best;
}


int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

void solve(){
    int n,k;cin >>n>>k;
    vi a(n), b(n);
    for(int &i:a) cin >>i;
    for(int &i:b) cin >>i;

    int base =kadane(a);
    if(k%2==0){
    	cout<<base<<nl;
    	return;
    } 	

    vi l(n),r(n);
    int cur=0;
    rep(i,0,n){
    	cur=max(0ll,cur+a[i]);
    	l[i]=cur;
    }
    cur=0;
    revrep(i,n-1,0){
    	cur=max(0ll,cur+a[i]);
    	r[i]=cur;
    }
    int  ans = base;
    for(int i = 0; i < n; i++){
        int left = (i == 0 ? 0 : l[i - 1]);
        int right = (i == n - 1 ? 0 : r[i + 1]);
         ans = max(ans, left + a[i] + b[i] + right);
        }
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