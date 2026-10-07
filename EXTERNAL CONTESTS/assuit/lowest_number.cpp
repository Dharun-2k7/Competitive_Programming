#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[idx]) {
            idx = i;
        }
    }
    cout << a[idx] << " " << idx + 1 << endl;
}