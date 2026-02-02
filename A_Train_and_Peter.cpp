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
#define nl "\n"

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}


bool check(string s, string p1, string p2){
    int pos1 = s.find(p1);
    if(pos1 == string::npos) return false;

    int pos2 = s.find(p2, pos1 + p1.size());
    return pos2 != string::npos;
}

void solve(){
    string s, p1, p2;
    cin >> s >> p1 >> p2;

    bool f = check(s, p1, p2);

    reverse(s.begin(), s.end());
    bool r = check(s, p1, p2);

    if(f && r) cout << "both" << nl;
    else if(f) cout << "forward" << nl;
    else if(r) cout << "backward" << nl;
    else cout << "fantasy" << nl;
}

int32_t main(){
    fast
    //int t;
    //cin >> t;
    //while(t--){
        solve();
    //}
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