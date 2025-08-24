#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        set<int> seen;
        bool satis = false;
        for (int x : a) {
            if (seen.find(x) != seen.end()) {
                satis = true;
                break;
            }
            seen.insert(x);
        }

        cout << (satis ? "YES\n" : "NO\n");
    }
    return 0;
}


/*observations
we got n -- gears (each got sm num of teeth)
put them in a order and spin the 1st gear
speed is(y/x).z -- y no of teeth for left gear , x = no of teeth of own gear
satisfactory if rightmost element spins at speed of 1
any 2 num shld be equal - set might have optimised tc
*/