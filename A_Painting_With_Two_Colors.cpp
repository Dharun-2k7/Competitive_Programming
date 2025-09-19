#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a <= b) cout << ((n - b) % 2 == 0 ? "YES" : "NO") << endl;
        else  cout << (((n - a) % 2 == 0 && (n - b) % 2 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}
