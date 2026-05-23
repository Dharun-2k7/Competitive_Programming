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
    int n,q; cin >> n >> q;
    vi a(n+1,0);
    vi freq(q+5,0);
    freq[0] = n;

    int val = 0;
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int x;cin >> x;
            freq[a[x]]--;
            a[x]++;
            freq[a[x]]++;
            if(freq[val] == 0) val++;
        }

        else{
            int y;cin >> y;
            int nd = y +val;
            int ans = 0;
            rep(i,nd,q+5)ans += freq[i];
            cout << ans << nl;
        }
    }
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




 void solve(){
    int n,q; cin >> n >> q;
    vi a(n+1,0);
    while(q--){
        int t; cin >> t;
        if(t == 1){
            int x; cin >> x;
            a[x]++;
            bool ok = true;
            rep(i,1,n+1){
                if(a[i] == 0){
                    ok = false;
                    break;
                }
            }

            if(ok)rep(i,1,n+1)a[i]--;            
        }

        else{
            int y;cin >> y;
            int cnt = 0;
            rep(i,1,n+1)if(a[i] >= y)cnt++;
            cout << cnt << nl;
        }
    }
}


*/





