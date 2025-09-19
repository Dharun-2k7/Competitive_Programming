#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        a.insert(a.begin(), 0);
        a.push_back(x);
        int maxi = 0;
        int l= a.size();
        for (int i = 1; i <l; i++) {
            maxi = max(maxi, a[i] - a[i - 1]); 
        }
        int prev = x - a[l - 2];
        maxi = max(maxi, prev * 2);

        cout << maxi << endl;
    }
}
