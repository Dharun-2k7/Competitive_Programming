#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        unordered_map<int, int> freq;
        for (int c : arr) freq[c]++;

        int maxi = 0;
        for (auto it : freq) {
            if (it.second > maxi) maxi = it.second;
        }
        int op1 = 1 + (n - maxi);
        int op2 = 0;
        for (int c : arr) if (c != 1) op2++;
        cout << min(op1, op2) << "\n";
    }
}
