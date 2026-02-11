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
#define nl "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n; cin >> n;
    vi a(n+1);
    rep(i,1,n+1) cin >> a[i];

    vector<vi> pos(n+1);
    rep(i,1,n+1)  if(a[i] <= n) pos[a[i]].pb(i);
    int ans = 0;
    rep(i,1,n+1){
        if(pos[i].empty()) continue;
        for(int k = 1; k*i <= n; k++){
            for(int ind : pos[i]){
                int j = ind + k*i;
                if(j > n) break;
                if(a[j] == k) ans++;
            }
        }
    }
    cout << ans << nl;
}

int32_t main(){
    fast
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
 ai⋅aj=j−i 

    i<j , so our rhs wl be j-i<=n
    so we dont have to consider the producst which give ans more than n
    ai⋅aj<=n
    
    so we can ignore the products which have val more than n
    
    can wrt as 
          j=i+ai⋅aj
    so for any j the ans will be i+ prod of two nums
    so we can just check the vals of j in the particular pos
      
       eg ) ai = 3
            3 * aj = j.i
         ===> j-i = 3*aj  so we can now just check the vals of j in the particular pos
              muls of 3 
              j=i+3
              j=i+6 etc...
              so we can check the vals in such patter upto n 

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