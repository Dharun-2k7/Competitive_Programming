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

const int INF = (int)4e18;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();

    bool inf = false;
    rep(i,0,n-1){
        bool a = (s[i] == '>' || s[i] == '*');
        bool b = (s[i+1] == '<' || s[i+1] == '*');
        if(a && b) inf = true;
    }

    if(inf){
        cout << -1 << end;
        return;
    }

    vll l(n), r(n);

    rep(i,0,n){
        if(s[i] == '>') l[i] = -INF;
        else{
            if(i == 0) l[i] = 1;
            else l[i] = 1 + l[i-1];
        }
    }

    revrep(i,n-1,0){
        if(s[i] == '<') r[i] = -INF;
        else{
            if(i == n-1) r[i] = 1;
            else r[i] = 1 + r[i+1];
        }
    }

    int ans = 0;
    rep(i,0,n){
        int best = max(l[i], r[i]);
        ans = max(ans, best);
    }

    cout << ans << end;
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