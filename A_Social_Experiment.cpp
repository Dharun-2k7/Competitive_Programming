#include <bits/stdc++.h>
using namespace std;
int main() {;
    int t;cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n == 2 ? 2 : (n == 3 ? 3 : (n % 2 == 0 ? 0 : 1))) << endl;
    }
}
