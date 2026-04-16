#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        if (is_sorted(arr.begin(), arr.end())) {
            cout << "0\n";
            continue;
        }

        if (arr[n - 2] > arr[n - 1] || arr[n - 1] < 0) {
            cout << "-1\n";
            continue;
        }

        cout << n - 2 << "\n";
        for (int i = n - 3; i >= 0; i--) {
            cout << i + 1 << " " << i + 2 << " " << n << "\n";
        }
    }
    return 0;
}
