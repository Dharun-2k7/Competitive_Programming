#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int diff = b - a;
        int rem = c - diff;

        if (rem == b) {
            cout << "YES\n";
        }
        else if (rem< b) {
            cout << "NO\n";
        }
        else {
            a = b;
            c = rem;
            cout << (((c - b) % 3 == 0) ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
