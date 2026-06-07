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
    int n ; cin >>n;
    vi a(n);
    rep(i,0,n) cin >>a[i];
    
    int ans=0;
    vpii hv;

    rep(i,0,n){
        int x= a[i];
        int cur=0;
        bool to = false , oe= false;

        while(true){
            if(x==1 && oe) break;
            if(x==2 && to ) break;
            if(x==2) to = true;
            if(x==1) oe= true;
            hv.pb({x,cur});
            if(x%2==0)x/=2;
            else x++;
            cur ++;       
        }
    }
    sort(all(hv));
    int mn =  INT_MAX;
    rep(i,0,hv.size()){
        int ind =i;
        int sum=0;
        while(ind<hv.size()&&hv[ind].ff==hv[i].ff){
            sum+=hv[ind].ss;
            ind++;
        }
        if(ind-i==n)mn=min(mn,sum);
        i=ind-1;
    }
    cout<<mn<<nl;
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