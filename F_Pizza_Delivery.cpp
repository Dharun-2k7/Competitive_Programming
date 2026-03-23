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
    int n,a1,a2,b1,b2;
    cin >> n >> a1 >> a2 >> b1 >> b2;

    vi x(n), y(n);
    map<int,int> mx, mn;

    mn[a1]=mx[a1]=a2;
    mn[b1]=mx[b1]=b2;

    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];
    for(int i=0;i<n;i++){
        if(!mx.count(x[i])) mx[x[i]] = y[i];
        else mx[x[i]] = max(mx[x[i]], y[i]);

        if(!mn.count(x[i])) mn[x[i]] = y[i];
        else mn[x[i]] = min(mn[x[i]], y[i]);
    }
    vi dp0(n+5,0), dp1(n+5,0);
    int lst = a1, cnt = 0;
    for(auto i: mx){
        if(i.first == a1) continue;
        int cur = i.first;
        int nd = (cur - lst) + (mx[cur] - mn[cur]);
        cnt++;
        dp0[cnt] = min( dp0[cnt-1] + abs(mx[cur] - mn[lst]), dp1[cnt-1] + abs(mx[cur] - mx[lst])) + nd;
        dp1[cnt] = min( dp0[cnt-1] + abs(mn[cur] - mn[lst]), dp1[cnt-1] + abs(mn[cur] - mx[lst])) + nd;
        lst = cur;
    }

    cout << min(dp0[cnt], dp1[cnt]) << nl;
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