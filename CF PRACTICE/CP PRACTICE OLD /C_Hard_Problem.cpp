#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
        ll row1 = min(m, a);
        ll row2 = min(m, b);
        ll rem = (m - row1) + (m - row2);
        ll fin = min(c, rem);
        cout << row1 + row2 + fin << endl;
    }
}
