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
    string s, t; cin  >>s>>t;
    int fq[26] = {0};
    for(char c : t) fq[c - 'a']++;
    for(char c : s) fq[c - 'a']--;
    
    string z; 

    rep(i,0,26){
        if(fq[i]<0){
            cout <<"Impossible" <<end;
            return ;
        }
        while(fq[i]--) z.pb('a'+i);
    }
    string res;
    int i=0,j=0;
    while(i!=s.size() && j!=z.size()){
        if(s[i]<=z[j]){
            res.pb(s[i]);
            i++;
        }
        else{
            res.pb(z[j]);
            j++;
        }
    }
    while(i!=s.size()){
        res.pb(s[i]);
        i++;
    }
    while(j!=z.size()){
        res.pb(z[j]);
        j++;
    }
     cout << res <<end;
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