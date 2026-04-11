#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int m = max(y, w);
    int a = 6 - m + 1;
    int b = 6;
    int g = __gcd(a, b);
    cout << a/g << "/" << b/g;
}
