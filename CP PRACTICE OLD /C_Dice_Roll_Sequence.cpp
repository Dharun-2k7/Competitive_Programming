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
bool is_adj(int u , int v){
    return u!=v &&(u+v!=7);
}
// direct greedy version
void solve(){
    int n; cin >>n;
    vi a(n);
    rep(i,0,n) cin >> a[i];
    int cnt=0, j=1;
    while(j<n){
        if((a[j]==a[j-1])||a[j]==abs(7-a[j-1])){
            cnt++;
            j+=2;
        }
        else j++;
    }
    cout << cnt << end;
}




//overkill soln :()
/*void solve(){
   int n; cin >>n;
   vi a(n+1);
   for(int i=1;i<=n;i++) cin >> a[i];
   const int MAX=1e18;
   vi dp(7,MAX);

   rep(j,1,7){
    dp[j]=(a[1]==j?0:1);
   }
   rep(i,2,n+1){
    vi adj(7,MAX);
    rep(cur,1,7){
        int cst=(a[i]==cur?0:1);
        rep(prv,1,7){
            if(is_adj(cur,prv)){
                adj[cur]=min(adj[cur],dp[prv]+cst);
            }
        }
    }
    dp=adj;
   }
   int ans=MAX;
   rep(j,1,7) ans=min(ans,dp[j]);
   cout << ans << end;
}
*/

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
         1    1  1 1
    (4) ---5  2  3 4--(5)
         6   6  6 6

         adj of 1--> 2,3,4,5
         adj of 2--> 1,3,5
         adj of 3--> 1,2,4
         adj of 4--> 1,3,5
         adj of 5--> 1,2,4
         adj of 6--> 2,3,4,5

so we can treat the dice as a graph , we can use a dp  to find the min num of changes 
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