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
    int n;cin>>n;
    vi a(n);
    rep(i,0,n) cin >>a[i];
    int bt=0,bl=n,br=0;
    int l=0;
    while(l<n){
        if(a[l]==0){
            l++;
            continue;
        }
        int r=l-1,tc=0, neg=1;
        while(r+1<n&&a[r+1]!=0){
            r++;
            if(abs(a[r])==2)tc++;
            if(a[r]<0)neg*=-1;
        }
        if(neg==1){
            if(tc>bt)bl=l,br=(n-1)-r,bt=tc;
            l=r+1;
            continue;
        }
        int ntc=tc,ml=l-1;
        do{
            ml++;
            ntc-=(abs(a[ml])==2);
        }while(a[ml]>0);

        if(ntc>bt)bl=ml+1 , br=(n-1)-r,bt=ntc;

        int nr=r+1; ntc=tc;
        do{
            nr--;
            ntc-=(abs(a[nr])==2);
        }while(a[nr]>0);

        if(ntc>bt)bl=l,br=n-nr,bt=ntc;
        l=r+1;
    }
    cout<<bl<<" "<<br<<nl;
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