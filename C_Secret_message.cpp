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
    int n, k; cin >> n >> k;
    vector<string> s(k);
    rep(i,0,k) cin >> s[i];

    rep(d,1,n+1){
        string res = "";
        bool ok = true;

        rep(r,0,d){
            vi freq(26, 0);
            int nd = 0;

            for(int i = r; i < n; i += d){
                nd++;
                vi sn(26, 0);
                rep(j,0,k){
                    sn[s[j][i] - 'a'] = 1;
                }
                rep(c,0,26){
                    if(sn[c]) freq[c]++;
                }
            }

            bool fd = false;
            rep(c,0,26){
                if(freq[c] == nd){
                    res.pb(char('a' + c));
                    fd = true;
                    break;
                }
            }

            if(!fd){
                ok = false;
                break;
            }
        }

        if(ok){
            string ans = "";
            rep(i,0,n){
                ans.pb(res[i % d]);
            }
            cout << ans << end;
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