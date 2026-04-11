#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, f;cin >> d >> f;
    int rem = (d - f) % 7;
    int n = (rem == 0) ? 7 : 7 - rem;
    cout << n << '\n';
    return 0;
}
