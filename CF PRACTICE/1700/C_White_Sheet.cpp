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

int area(int x1,int y1,int x2,int y2){
    if(x1 >= x2 || y1 >= y2) return 0;
    return (x2 - x1) * (y2 - y1);
}

void solve(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3,y3,x4,y4;
    cin >> x3 >> y3 >> x4 >> y4;
    int x5,y5,x6,y6;
    cin >> x5 >> y5 >> x6 >> y6;
    int white = area(x1,y1,x2,y2);
    int a = area( max(x1,x3),max(y1,y3), min(x2,x4), min(y2,y4));
    int b = area(max(x1,x5), max(y1,y5),min(x2,x6),min(y2,y6));
    int ab = area(max({x1,x3,x5}),max({y1,y3,y5}),min({x2,x4,x6}),min({y2,y4,y6}));
    int cov = a + b - ab;
    cout << (cov < white ? "YES" : "NO") << nl;
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