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

void solve(){
    int n,k;cin>>n>>k;
    vi a(n),b(n),c(n);

    int mn = LLONG_MAX;
    int mx = LLONG_MIN;
    rep(i,0,n){
        cin >> a[i] >> b[i] >> c[i];
        int sum = a[i] + b[i] + c[i];
        mn = min(mn,sum);
        mx = max(mx,sum);
    }

    int l = mn;
    int r = mx + k;
    int ans = l;
    while(l <= r){
        int mid = l + (r - l) / 2;
        int tot = 0;
        bool pos = true;
        rep(i,0,n){
            int sum = a[i] + b[i] + c[i];
            if(mid <= sum) continue;
            int cst = 0;
            if(a[i] <= b[i] && b[i] <= c[i]){
                if(a[i] == c[i]){
                    pos = false;
                    break;
                }

                int m = b[i] - a[i] + 1;
                if(a[i] < b[i]) m = min(m,c[i] - b[i] + 1);
                cst = (mid - sum) + 2 * m;
            }
            else cst = mid - sum;
            tot += cst;
            if(tot > k){
                pos = false;
                break;
            }
        }

        if(pos){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << nl;
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
░░░░░░░░░░   ░░░░ ░░░░░  ░░░░░░░░ ░░░░░░░░   ░░░░░░░░ ░░░░ ░░░░░

 Author: Dharun
*/