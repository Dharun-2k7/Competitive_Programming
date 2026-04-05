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
        vi a(n), p(n);

        int s=0, mx=LLONG_MIN, mn=LLONG_MAX;

        rep(i,0,n){
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
            s+=a[i];
            p[i]=s;
        }

        vi d;

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if(i*i!=n){
                    d.pb(i);
                    d.pb(n/i);
                }else d.pb(i);
            }
        }

        int ans=0;

        for(auto k: d){
            int mx2=LLONG_MIN, mn2=LLONG_MAX;
            int pr=-1;

            rep(i,0,n){
                if((i+1)%k) continue;

                int r;
                if(pr==-1) r=p[i];
                else r=p[i]-p[pr];

                mx2=max(mx2,r);
                mn2=min(mn2,r);

                pr=i;
            }

            ans=max(ans,mx2-mn2);
        }

        ans=max(ans,mx-mn);

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
