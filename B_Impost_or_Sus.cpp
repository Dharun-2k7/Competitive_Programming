#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll t; cin >> t;
    while (t--) {
        string r; cin >> r;
        ll n = r.size();
        vector<ll> ps;
        ll tu = 0;
        for (ll i = 0; i < n; i++) {
            if (r[i] == 's') ps.push_back(i);
            else tu++;
        }
        ll ku = 0;
        if (ps.empty()) {
            ku = (n - 1) / 2;
        } else {
            ll pre = ps[0];
            ku += pre / 2;

            ll suf = (n - 1) - ps.back();
            ku += suf / 2;
            for (ll i = 0; i + 1 < (ll)ps.size(); i++) {
                ll gp = ps[i + 1] - ps[i] - 1;
                if (gp > 0) ku += (gp + 1) / 2;
            }
        }

        cout << tu - ku << '\n';
    }

}

/*
obs:

a sus string shld have atleast 2 s and every u in that shld have same num of diff b/w the nearest s on right and left 
so u must be in mid of 2 s 
no 2 U characters can be consecutive between 2 s’s , as that would make our 2nd condition false
*/