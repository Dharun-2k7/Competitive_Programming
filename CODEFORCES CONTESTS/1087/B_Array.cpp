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
    int n; cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n){
        vpii ev;
        int cur=0;
        rep(j,i+1,n){
            int s = a[i] + a[j];
            if(a[j] > a[i]){
                int x;
                if(s>=0) x = s/2 + 1;
                else x = -(( -s + 1)/2) + 1;
                ev.pb({x,1});
            }
            else if(a[j] < a[i]){
                int x;
                if(s>=0) x = (s+1)/2;
                else x = s/2;
                ev.pb({x,-1});
                cur++;
            }
        }
        sort(all(ev));
        int ans = cur;
        for(int p=0;p<ev.size();){
            int x = ev[p].ff;
            while(p<ev.size() && ev[p].ff==x){
                cur += ev[p].ss;
                p++;
            }
            ans = max(ans,cur);
        }
        cout<<ans<<" ";
    }
    cout<<nl;
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