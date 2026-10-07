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
   int n,q; cin >>n>>q;

   string ans(n,'a');
   vi tile(n,0);
   vi lst(n,0);
   char cur = 'a';
   int lt = 0;
   int t=1;

   while(q--){
   	  int num;cin >>num;
   	  if(num == 1){
   	  	int x;cin >>x;
   	  	x--;
   	  	if(tile[x]){
   	  		tile[x] = 0;
   	  		//ans[x] = cur;
   	  		lst[x] = t;
   	  	}
   	  	else{
   	  		if(lt > lst[x]) ans[x] = cur;
   	  		tile[x] = 1;
   	  		lst[x] = t;
   	  		//ans[x] = cur;
   	  	}
   	  }
   	  else{
   	  	char clr; cin >>clr;
   	  	cur = clr;
   	  	lt = t;
   	  }
   	  t++;
   }
   rep(i,0,n){
   	  if(!tile[i] && lt > lst[i]) ans[i] = cur;
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
    //test();
    solve();
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