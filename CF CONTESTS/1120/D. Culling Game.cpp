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

struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, 0);
    }

    void update(int ind, int val) {
        while(ind <= n) {
            bit[ind] += val;
            ind += ind & -ind;
        }
    }

    int query(int ind) {
        int sum = 0;
        while(ind > 0) {
            sum += bit[ind];
            ind -= ind & -ind;
        }
        return sum;
    }

    int rangeSum(int l, int r) {
        return query(r) - query(l - 1);
    }
};

void solve(){
    int n;cin >>n;
    vi a(n), p(n);
    for(int &i:a) cin >> i;
    for(int &i:p) cin >> i;
    Fenwick fw(n);
    set<int> chmp;
    vi ans(n);

    revrep(i,n-1,0){
        int idx = p[i];
        fw.update(idx + 1, a[idx]);
        bool ok = false;
        auto it = chmp.lower_bound(idx);
        if(it == chmp.begin()){
            ok = true;
        }
        else{
            int prv = *prev(it);
            int skl = fw.rangeSum(prv + 2, idx);
            if(a[idx] > skl)
                ok = true;
        }
        if(ok) chmp.insert(idx);
        auto cur = chmp.upper_bound(idx);
        while(cur != chmp.end()){
            int r = *cur;
            int prv = *prev(cur);
            int skl = fw.rangeSum(prv + 2, r);
            if(a[r] > skl) break;
            cur = chmp.erase(cur);
        }
        ans[i] = chmp.size() - 1;
    }
    rep(i,0,n){
        cout << ans[i] << " ";
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
 ██████████   ████ █████░░████████ █████     ░░████████ ████ ░░░░
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░   ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░

 Author: Dharun
*/