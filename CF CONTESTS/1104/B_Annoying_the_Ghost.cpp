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
    int n;cin>>n;
    vi a(n), b(n);
    rep(i,0,n)cin>>a[i];
    rep(i,0,n)cin>>b[i];
    vector<bool> vis(n,false);
    vi dest(n,-1);
    rep(j,0,n){
        bool ok = false;
        rep(i,0,n){
            if(!vis[i] && a[i] <= b[j]){
                vis[i] = true;
                dest[i] = j;
                ok = true;
                break;
            }
        }
        if(!ok){
            cout << -1 << nl;
            return;
        }
    }

    int ans = 0;
    rep(i,0,n){
        rep(j,i+1,n){
            if(dest[i] > dest[j]){
                ans++;
            }
        }
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
    so here we must try to make the array a and b eq, 

    we can add  x to ai
    and try to make arr a eq to arr b 

    so  ai must eventually become some bj

    therefore ai can be matched with bj only if
        ai<= bj

    but by just adding our order maybe wrong 
    operation 2 allows swapping adjacent elements

    we must somehow map every ai to a dist bj


        ai <= bj

    if we cant assign all ai to dist bj , then -1 

    now there can be multiple valid assignments

    among all those valid assignments ,
    we need the one which results in the minimum number of adjacent swaps
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