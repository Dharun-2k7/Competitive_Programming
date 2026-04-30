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
    int n; cin >> n;
    int m = 2 * n;
    vi a(m + 1);
    vvi pos(n);

    rep(i,1,m+1){
        cin >> a[i];
        pos[a[i]].pb(i);
    }

    set<int> cts;
    int p1 = pos[0][0], p2 = pos[0][1];
    cts.insert(p1 + p2);
    cts.insert(2 * p1);
    cts.insert(2 * p2);

    int ans = 1;
    vi freq(n + 1, 0);

    for(int s : cts){
        int l, r;
        if(s % 2 == 0){
            int m = s / 2;
            if(m < 1 || m > m) continue;
            l = r = m;
        }
        else{
            int m1 = s / 2;
            int m2 = m1 + 1;
            if(m1 < 1 || m2 > m || a[m1] != a[m2]) continue;
            l = m1;
            r = m2;
        }
        while(l > 1 && r < m && a[l-1] == a[r+1]){
            l--;
            r++;
        }
        rep(i,l,r+1){
            if(a[i] < n) freq[a[i]]++;
        }

        int mex = 0;
        while(mex < n && freq[mex] > 0) mex++;
        ans = max(ans, mex);
        rep(i,l,r+1){
            if(a[i] < n) freq[a[i]]--;
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