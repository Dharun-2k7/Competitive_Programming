#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long mx = max({a, b, c});
        long long A = (a == mx ? ( (a > b && a > c) ? 0 : mx - a + 1 ) : mx - a + 1);
        long long B = (b == mx ? ( (b > a && b > c) ? 0 : mx - b + 1 ) : mx - b + 1);
        long long C = (c == mx ? ( (c > a && c > b) ? 0 : mx - c + 1 ) : mx - c + 1);

        cout << A << " " << B << " " << C << "\n";
    }
}
