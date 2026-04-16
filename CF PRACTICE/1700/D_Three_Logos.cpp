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
    int n = 3;
    vpii a(n);
    rep(i,0,n) cin >> a[i].ff >> a[i].ss;
    int ar = 0;
    for(auto x : a) ar += x.ff * x.ss;
    int l = 1;
    while(l*l < ar) l++;
    if(l*l != ar){
        cout << -1 << nl;
        return;
    }
    for(int m = 0; m < (1<<n); m++){
        vector<string> g(l, string(l,'Z'));
        int k = 0;
        bool ok = true;
        rep(i,0,l){
            rep(j,0,l){
                if(g[i][j]=='Z'){
                    if(k == n){
                        ok = false;
                        break;
                    }
                    int w = a[k].ff;
                    int h = a[k].ss;
                    if(m & (1<<k)) swap(w,h);
                    for(int r=i; r<i+h; r++){
                        for(int c=j; c<j+w; c++){
                            if(r>=l || c>=l || g[r][c]!='Z'){
                                ok = false;
                                break;
                            }
                            g[r][c] = char('A'+k);
                        }
                        if(!ok) break;
                    }
                    if(!ok) break;
                    k++;
                }
            }
            if(!ok) break;
        }
        if(ok && k==n){
            cout << l << nl;
            rep(i,0,l) cout << g[i] << nl;
            return;
        }
    }
    cout << -1 << nl;
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