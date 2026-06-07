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
    vi a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    bool ok = (a[n-1] == b[n-1]);
    rep(i,0,n-1)if(a[i] != b[i] && a[i] != (b[i] ^ b[i+1]) && a[i] != (b[i] ^ a[i+1])) ok = false;
    cout << (ok ? "YES" : "NO") << nl;
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

        1 -> 2 <- 3 -> 4 <- 5
 
        Does, this fix b ?
 
        1, 2, 3, .. n
 
        for some i, 
            before it goes to i - 1,
 
            is it getting updated or not 
 
        for i, i - 1 ok ? 
            if 
                i came before i - 1
 
                then i wont be updated from here right ? 
                    and it will be bi, if theres a way
                
                if i - 1 never came then ai-1 = bi-1
                else
                    ai-1 ^ bi = bi-1
 
                ai-1 becomes bi-1
 
                i - 1 came before i
 
                    then ai-1 ^ ai = bi-1
 
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