#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define revrep(i,a,b) for(int i=a;i>=b;i--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define end "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n; cin >>n;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    bool sorted=true;
    bool rsorted=true;
    rep(i,1,n){
        if(a[i]!=a[i-1]+1) sorted=false;
        if(a[i]!=a[i-1]-1) rsorted=false;
    }
    if(sorted)cout<<n<<end;
    else if(rsorted) cout << 1 <<end;
    else{
        map<int, int>mp;
        int ans=0;
        rep(i,0,n){
            int x=a[i];
            mp[x]=mp[x-1]+1;
            if(mp[x]>ans){
                ans=mp[x];

            }
        }
        cout <<ans<<end;
    }
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
we can break down this problem in to 3 diff sections 
  1) sorted
  2) sorted but in reverse
  3) random

the ans for 1st case is always N , the ans for 2nd case is always 1 , 
yeah coz if its completely sorted in rev order nothign can be we can never get a continous sequence

wt mehtod can we flw to solve 3rd case so TLE doesnt occur 
maybe we can use an map to store the max length of the sequence 

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