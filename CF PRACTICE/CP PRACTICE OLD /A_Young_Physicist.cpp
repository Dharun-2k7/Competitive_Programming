#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin >> n;
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        c1 += a;
        c2 += b;
        c3 += c;
    }

    cout << ((c1 == 0 && c2 == 0 && c3 == 0) ? "YES" : "NO") << endl;

    return 0;
}
