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
    int n; cin >> n;
    string s; cin >> s;

    int os = 0;
    rep(i,0,n) if(s[i]=='1') os++;

    if(os == 0){
        cout << (n + 2) / 3 << end;
        return;
    }

    int ans = os;
    vi pos;
    rep(i,0,n){
        if(s[i]=='1') pos.pb(i);
    }

    int l = pos[0];
    ans += (l + 1) / 3;

    rep(i,0,(int)pos.size()-1){
        int gp = pos[i+1] - pos[i] - 1;
        if(gp > 0){
            ans += gp / 3;
        }
    }

    int r = (n - 1) - pos.back();
    ans += (r + 1) / 3;

    cout << ans << end;
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
if there are no 1s 

    we can just make ans as ceil of n/3 
     
    00000 tc 3 
     
    possible ways :

        01010 -- 2 
        10101 -- 3
        01001 --2

        min val we can get is 2 ie ceil of n/2

    how can we mininise if 1 is there 

     can we break the array into segments when an 1 is found 
        
          eg :  0000100001000   tc 5 
         
             so here we can break it as [0000] 1 [0000] 1 [000]
                           if the zero seg is between two 1's
                             then the 1st 0 is blocked by left 1 last 0 is blocked by rigth 1
                        
                             so the rest mid 0's can be placed like the gap /3 
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