#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll get_cost(ll x) {
    return 3 * x * x + 2 * x + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll x1 = n / 3;
        ll r = n % 3;
        ll cost1 = get_cost(x1) + r * 3;

        ll x2 = (n + 2) / 3;
        ll cost2 = get_cost(x2);

        cout << min(cost1, cost2) << endl;
    }
    return 0;
}


/* observations
-- there are 2 kinda deal to buy a wtrmelon 
3 wm -- 10 rs 
1 wm -- 3 rs 
we wanna find the mini cost ? no no the leat psbl no of deal
so we shld prioritize minimizing deal rather than cost 
*/