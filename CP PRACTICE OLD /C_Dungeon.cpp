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

void solve(){
    int n, m; 
    cin >> n >> m;

    vi a(n), b(m), c(m);
    rep(i,0,n) cin >> a[i];
    rep(i,0,m) cin >> b[i];
    rep(i,0,m) cin >> c[i];

    vi x;
    vector<pii> y;

    rep(i,0,m){
        if(c[i] == 0) x.pb(b[i]);
        else y.pb(mp(b[i], c[i]));
    }

    multiset<int> s;
    rep(i,0,n) s.insert(a[i]);

    sort(all(x));
    sort(all(y));

    int i = 0, j = 0;
    int ans = 0;

    while(!s.empty() && (i < x.size() || j < y.size())){
        auto it = s.begin();
        int cur = *it;
        s.erase(it);

        if(j < y.size() && y[j].ff <= cur){
            cur = max(cur, y[j].ss);
            j++;
            s.insert(cur);
            ans++;
            continue;
        }

        if(i < x.size() && x[i] <= cur){
            i++;
            ans++;
            continue;
        }
    }

    cout << ans << nl;
}
/*
obs
3 5
1 7 7
6 6 2 2 2
2 0 0 7 2

our sword vanishes after killing a monster and if the ci of that place is greater than 0 its value can be replaced with the max
i think i shld not waste my sword where ci=0

but if we get a new swords it will alwayrs be greater than or eql to the prev sword

but when can i kill the mosters when ci=0 ? coz i wont get a new swords wwhen ci =0

its better to kill the monster with ci>0 befroe going to monster with ci=0

maybe we can go from largest value to the smallest value of mosnter
coz each time u kill a moster u get a new sword which is greater than or eql to the prev sword
if bj can be killed the next small can be killed too 

*/
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