#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        ll n, rk, ck, rd, cd;
        cin >> n >> rk >> ck >> rd >> cd;

        ll esc;
        if (rk == rd) {
            if (ck < cd) 
                esc = ck + 1;      
            else 
                esc = (n - ck) + 1; 
        }
        else if (ck == cd) {
            if (rk < rd)
                esc = rk + 1;     
            else
                esc = (n - rk) + 1; 
        }
        else {
            ll xr = (rd > rk) ? 0 : n;
            ll xc = (cd > ck) ? 0 : n;
            ll krug = abs(rk - xr) + abs(ck - xc);
            ll doran = max(abs(rd - xr), abs(cd - xc));
            esc = max(krug, doran);
        }

        cout << esc << endl;
    }
}

