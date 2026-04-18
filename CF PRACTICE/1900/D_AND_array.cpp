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

const int MAXN = 1005;
const int mod=1e9+7;

int c[MAXN][MAXN];
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    int n; cin>>n;
    vi b(n+2,0);
    rep(i,1,n+1)cin >>b[i];

    vi cnt(30,0);
    revrep(cur,n,1){
        int val=b[cur];
        rep(bit,0,30){
            if(val&(1LL<<bit)){
                cnt[bit]=cur;
                rep(k,1,cur+1){
                    int sub=(c[cur][k]*(1LL<<bit))%mod;
                    b[k]=(b[k]-sub)%mod;
                    if(b[k]<0)b[k]+=mod;
                }
            }
        }
    }
    vi a(n,0);
    rep(bit,0,30){
        rep(i,0,cnt[bit]) a[i] |= (1LL<<bit);
    }
    rep(i,0,n) cout << a[i] << " ";
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
    rep(i,0,MAXN){
        c[i][0]=1;
        rep(j,1,i+1){
            c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
        }
    }
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