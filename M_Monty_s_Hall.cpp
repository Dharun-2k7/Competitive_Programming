#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = long double;

int main() {
    ll d, s, e;
    cin >> d >> s >> e;
    ll m = d - s - e; 
    db P;
    if (m >= s) {
        P = (db)s * (db)(d - s) / ((db)d * (db)m);
    } else {
        P = (db)(s + e) / (db)d;
    }
    cout << fixed << setprecision(10) << (double)P << endl;
 
}

