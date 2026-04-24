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

const db PI = acos(-1.0);
const db EPS = 1e-5;

db dist(db x1, db y1, db x2, db y2){
    return hypot(x1 - x2, y1 - y2);
}

db area(db x1, db y1, db x2, db y2, db x3, db y3){
    return fabs( x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) ) / 2.0;
}

db gcdDouble(db a, db b){
    while(b > EPS){
        db t = fmod(a, b);
        a = b;
        b = t;
    }
    return a;
}

void solve(){
    db x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    db a = dist(x2, y2, x3, y3);
    db b = dist(x1, y1, x3, y3);
    db c = dist(x1, y1, x2, y2);

    db ar = area(x1, y1, x2, y2, x3, y3);

    db R = (a * b * c) / (4.0 * ar);

    db A = 2.0 * asin(a / (2.0 * R));
    db B = 2.0 * asin(b / (2.0 * R));
    db C = 2.0 * asin(c / (2.0 * R));

    for(int n = 3; n <= 100; n++){
        db unit = 2.0 * PI / n;
        db k1 = round(A / unit);
        db k2 = round(B / unit);
        db k3 = round(C / unit);

        if(fabs(A - k1 * unit) < EPS && fabs(B - k2 * unit) < EPS && fabs(C - k3 * unit) < EPS){
            db ans = 0.5 * n * R * R * sin(2.0 * PI / n);
            cout << fixed << setprecision(8) << ans << nl;
            return;
        }
    }
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
    //test();
    solve();
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