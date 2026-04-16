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
    int n,m ; cin >>n >>m ;
    string s; cin >>s;
    vvi a(n,vi(m));
    rep(i,0,n){
        rep(j,0,m){
            cin >> a[i][j];
        }
    }
   vi r(n), c(m);
   rep(i,0,n){
     int sum=0;
     rep(j,0,m){
        sum+=a[i][j];
     }
     r[i]=sum;
   }
   rep(j,0,m){
     int sum=0;
     rep(i,0,n){
        sum+=a[i][j];
     }
     c[j]=sum;
   }
   int x=0,y=0;
   int cnt=0;
   while(cnt<n+m-1){
    if(s[cnt]=='D'){
        a[x][y]=-r[x];
        r[x]+=a[x][y];
        c[y]+=a[x][y];
        x++;
   }
   else{
        a[x][y]=-c[y];
        r[x]+=a[x][y];
        c[y]+=a[x][y];
        y++;
   }
   cnt++;
   }
   rep(i,0,n){
    rep(j,0,m){
        cout << a[i][j] << " ";
    }
    cout << nl;
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