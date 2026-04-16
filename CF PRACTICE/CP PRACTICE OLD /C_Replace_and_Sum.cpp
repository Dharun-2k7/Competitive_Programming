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
    int n, q;
    cin >> n >> q;

    vi arr1(n), arr2(n);
    rep(i,0,n) cin >> arr1[i];
    rep(i,0,n) cin >> arr2[i];
    vi arr3(n);

    revrep(i,n - 1,0){
        if(i == n - 1){
            arr3[i] = max(arr1[i], arr2[i]);
        } else {
            arr3[i] = max(arr3[i + 1], max(arr1[i], arr2[i]));
        }
    }

    vi prefix(n);
    prefix[0] = arr3[0];
    rep(i,1,n){
        prefix[i] = prefix[i - 1] + arr3[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;

        if(l == 0){
            cout << prefix[r] << " ";
        } else {
            cout << prefix[r] - prefix[l - 1] << " ";
        }
    }
    cout << end;
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