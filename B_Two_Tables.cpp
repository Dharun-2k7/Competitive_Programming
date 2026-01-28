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
    int W,H; cin >> W >> H;
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int w2,h2;
    cin >> w2 >> h2;

    int w1 = x2 - x1;
    int h1 = y2 - y1;

    int left = w2;
    int right = W - w2;
    int bottom = h2;
    int top = H - h2;

    int needL = max(left - x1, 0LL);
    int needR = max(x2 - right, 0LL);
    int needB = max(bottom - y1, 0LL);
    int needT = max(y2 - top, 0LL);

    const int INF = 4e18;

    if(w1 + w2 > W){
        needL = needR = INF;
    }
    if(h1 + h2 > H){
        needT = needB = INF;
    }

    int ans = min({needL, needR, needT, needB});

    if(ans >= INF){
        cout << -1 << end;
    }else{
        cout << fixed << setprecision(9) << (double)ans << end;
    }
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