#include <bits/stdc++.h>
using namespace std;
using vi=vector<long long>;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vi pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = max(pref[i-1], a[i]);
        }
        vi b(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) {
                b[i] = pref[i];
            } else {
                b[i] = a[i];
            }
        }
        ll cost = 0;
        for (int i = 0; i < n; i += 2) {
            ll target;
            if (i == 0) {
                if (n > 1) {
                    target = b[1] - 1;
                } else {
                    target = 0; 
                }
            } else if (i == n - 1) {
                target = b[i-1] - 1;
            } else {
                target = min(b[i-1], b[i+1]) - 1;
            }
            if (b[i] > target) {
                cost += (b[i] - target);
                b[i] = target;
            }
        }
        cout << cost << endl;
    }
}

/* 
can we do a single loop which moves 2 position in array check the previous elements and do the operation accordingly

no that would affect the next elements which are yet to be processed


 b1<b2>b3<b4

is this the only allwoed or the other way is it fine 
*/