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
    int n; cin >> n;
    string s; cin >> s;
    int e10 = 0;
    rep(i,1,n) {
        if (s[i] < s[i - 1]){
            e10 = 1;
        }
    }
    if (!e10){
        cout << "Bob"<<end;
        return;
    }
    int val = 0;
    for (char c : s){
        val += c == '1';
    }

    revrep(i, n-1, 0){
        char c = s[i];
        val--;
 
        if (val == 0){
            vi ans;
            rep(j,0,n){
                if (j < i && s[j] == '1') ans.pb(j + 1);
                if (j >= i && s[j] == '0') ans.pb(j + 1);
            }
            cout << "Alice"<<end;
            cout << ans.size() << end;
            for (int i : ans) cout << i << ' ';
            cout << end;
            return;
        }
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