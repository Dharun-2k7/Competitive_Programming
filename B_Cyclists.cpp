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
    int n,k,p,m;
    cin>>n>>k>>p>>m;

    vi a(n+1);
    rep(i,1,n+1) cin>>a[i];

    vi dk;
    rep(i,1,n+1) dk.pb(i);
    
    int eg=m,ans=0;

    while(true){
        int pos=-1;
        rep(i,0,min(n,k)){
            if(dk[i]==p){
                pos=i;
                break;
            }
        }

        if(pos!=-1){   
            if(a[p]>eg) break;
            eg-=a[p];
            ans++;
            int x=dk[pos];
            dk.erase(dk.begin()+pos);
            dk.pb(x);
        }
        else{          
            int bst=-1;
            int cst=INT_MAX;
            rep(i,0,min(n,k)){
                int id=dk[i];
                if(a[id]<cst){
                    cst=a[id];
                    bst=i;
                }
            }
            if(cst>eg) break;
            eg-=cst;
            int x=dk[bst];
            dk.erase(dk.begin()+bst);
            dk.pb(x);
        }
    }

    cout<<ans<<nl;
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