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
    int n,m;cin >> n >> m;
    int r,c;cin >> r >> c;
    int x,y;cin >> x >> y;
    r--;
    c--;
    vector<string> g(n);
    
    rep(i,0,n)cin >> g[i];
    vvi dist(n,vi(m,1e18));
    deque<pii> dq;
    dist[r][c]=0;
    dq.push_front({r,c});

    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    while(!dq.empty()){
        auto [cx,cy]=dq.front();
        dq.pop_front();
        rep(i,0,4){
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if(g[nx][ny]=='*') continue;
            int w=0;
            if(ny<cy) w=1;
            if(dist[cx][cy]+w < dist[nx][ny]){
                dist[nx][ny]=dist[cx][cy]+w;
                if(w==1) dq.push_back({nx,ny});
                
                else{
                    dq.push_front({nx,ny});
                }
            }
        }
    }

    int ans=0;
    rep(i,0,n){
        rep(j,0,m){
            if(dist[i][j]==1e18) continue;
            int lf=dist[i][j];
            int rt=lf + (j-c);
            if(lf<=x && rt<=y){
                ans++;
            }
        }
    }
    cout << ans << nl;
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