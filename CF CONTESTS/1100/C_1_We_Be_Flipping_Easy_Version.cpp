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
    int n;cin >> n;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    vi ans;
    int flip = 0;
    revrep(i,n-1,0){
        int cur = a[i];
        if(flip % 2) cur = -cur;
        if(cur > 0){
            ans.pb(i + 1);
            flip ^= 1;
        }
    }
    cout << ans.size() << nl;
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

 if all the elements are already negetaive return 0 
 
    if any element gets flipped even number of times its same and changes if odd num of flips

         our idea shld be to make everything negative 

          if all elements are pos then choose the last index 
          
          we must traverse l<-r , so that once a bit changes to - we dont have to wry abt it


            for prev elems we can maintain a flag flip  if , 
               flip - ev then same else diff 

               if current element is pos we must take the index and flip it 

               example :
               -1 -2 3 -5 4
               4 is positive  so we can take ind 5
               
               new arr -- 1 2 -3 5 -4
               
               5 is positive , ind  4
               
               new arr-- -1 -2 3 -5 -4
               
               3 is positive 
               1 2 -3 -5 -4
               
               2 is positive
               final :
               -1 -2 -3 -5 -4
               
               ops :
               5 4 3 2

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