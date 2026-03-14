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
    int n; cin>>n;
    vector<string> s(n);
    rep(i,0,n) cin>>s[i];

    rep(i,0,n){
        if(s[i][i]!='1'){
            cout<<"No"<<nl;
            return;
        }
    }

    rep(i,0,n){
        rep(j,0,n){
            if(i!=j && s[i][j]=='1' && s[j][i]=='1'){
                cout<<"No"<<nl;
                return;
            }
        }
    }

    vector<pii> v;

    rep(i,0,n){
        int cnt=0;
        rep(j,0,n){
            if(s[i][j]=='1') cnt++;
        }
        v.pb({cnt,i});
    }

    sort(all(v),greater<pii>());

    vector<pii> ans;

    rep(i,1,n){
        int cur=v[i].ss;

        rep(j,0,i){
            int par=v[j].ss;

            if(s[par][cur]=='1'){
                ans.pb({par+1,cur+1});
                break;
            }
        }
    }

    if(ans.size()!=n-1){
        cout<<"No"<<nl;
        return;
    }

    cout<<"Yes"<<nl;
    for(auto x:ans){
        cout<<x.ff<<" "<<x.ss<<nl;
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