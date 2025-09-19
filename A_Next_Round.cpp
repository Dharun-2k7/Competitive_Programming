#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pass = arr[k - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= pass && arr[i] > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
