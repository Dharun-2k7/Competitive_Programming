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

int kanakupodu(vvi &motham, int l, int r){
    int ans = 0;

    rep(b,0,30){
        if(motham[b][r+1] - motham[b][l] == 0){
            ans |= (1LL << b);
        }
    }

    return ans;
}

void solve(){
    int n;cin>>n;
    vi a(n);
    vvi motham(30, vi(n+1));
    rep(i,0,n) cin >> a[i];
    rep(b,0,30){
        rep(i,0,n){
            motham[b][i+1] = motham[b][i];
            if((a[i] & (1LL << b)) == 0){
                motham[b][i+1]++;
            }
        }
    }

    int q;cin>>q;
    while(q--){
        int l,k;
        cin >>l>>k;
        l--;
        if(a[l] < k){
            cout << -1 << ' ';
            continue;
        }
        int kuraintha = l;
        int uyarntha = n-1;
        while(kuraintha < uyarntha){
            int nadula = (kuraintha + uyarntha + 1) / 2;
            if(kanakupodu(motham,l,nadula) >= k){
                kuraintha = nadula;
            }
            else{
                uyarntha = nadula-1;
            }
        }
        cout << kuraintha+1 << ' ';
    }
    cout << nl;
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
░░░░░░░░░░   ░░░░ ░░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/