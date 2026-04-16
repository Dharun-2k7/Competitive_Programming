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

const int MAX=1000;
int pref[MAX+1][MAX+1];
int a[MAX+1][MAX+1];

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n, q; cin >>n>>q;
    rep(i,0,n){
        rep(j,0,n){
            char b; cin >>b;
            a[i+1][j+1]+=b=='*';
        }        
    }
    rep(i,1,n+1){
        rep(j,1,n+1){
            pref[i][j]=a[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];    
        }
    }
    rep(x,0,q){
        int x1,y1,x2,y2; cin >>x1>>y1>>x2>>y2;
        cout <<pref[x2][y2]-pref[x1-1][y2]-pref[x2][y1-1]+pref[x1-1][y1-1]<<end;
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