#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<bool> used(n, false);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        cnt++;
        for (int j = i; j < n; j++) {
            if (!used[j] && a[j] % a[i] == 0) {
                used[j] = true;
            }
        }
    }
    cout << cnt << endl;
}
