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
    int n,d; cin >>n>>d;
    vi a(n),b(n);
    rep(i,0,n) cin >>a[i];
    rep(i,0,n) cin >>b[i];
    queue<pii>q;
    int tot=0;

    rep(i,0,n){
        q.push({i,a[i]});
        tot+=a[i];
    int cons=b[i];
    while(cons!=0){
        auto &gt=q.front();
        int tk= min(cons,gt.ss);
        gt.ss-=tk;
        cons-=tk;
        tot-=tk;
        if(gt.ss==0)q.pop();
    }
    while(!q.empty() && q.front().first<=i-d){
        tot-=q.front().ss;
        q.pop();
    }
}
    cout<<tot<<end;
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
we need to store the num of eggs stored currently and should also take care they get discarded
one the D Day comes , can we use  a queue to store the day and cnt of eggs
stroed , tot can keep a track of eggs 

for each morngn we can add smth to Q
and tot gets increased by ai;

and reduce the bi , we need to use the stock whcih was stored 1st , 

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