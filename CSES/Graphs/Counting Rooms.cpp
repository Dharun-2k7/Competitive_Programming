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

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

int n,m;
vector<string>grid;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void dfs(int x,int y){
    grid[x][y] = '#';
    for(int d=0;d<4;d++){
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(nx<0 || nx>=n || ny<0 || ny>=m)
            continue;
        if(grid[nx][ny]=='.'){
            dfs(nx,ny);
        }
    }
}

void solve(){
    cin >> n >> m;
    grid.resize(n);
    rep(i,0,n)cin >> grid[i];
    int ans = 0;
    rep(i,0,n){
        rep(j,0,m){
            if(grid[i][j]=='.'){
                ans++;
                dfs(i,j);
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
 ░███    ░███ ░███░░███  ░░░░░███ ░░███░░███ ░░███ ░███ ░░███░░███
 ░███    ░███ ░███ ░███   ███████  ░███ ░░░  ░███ ░███  ░███ ░███
 ░███    ███  ░███ ░███  ███░░███  ░███      ░███ ░███  ░███ ░███
 ██████████   ████ █████░░████████ █████     ░░████████ ████ █████
░░░░░░░░░░   ░░░░ ░░░░ ░░░░░░░░░░░ ░░░░░░░░   ░░░░ ░░░░ ░░░░

 Author: Dharun
*/