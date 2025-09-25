#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;  cin >> t;
    while (t--) {
        int n;  cin >> n;
        vector<int> b(n);
        for (int &x : b) cin >> x;
        int mini = b[0];
        bool ok = true;
        for (int ind : b) {
            if (ind >= 2 * mini) {
                ok = false;
                break;
            }
            mini = min(mini, ind);
        }
        cout << (ok ? "YES" : "NO")<<endl;
    }
}
