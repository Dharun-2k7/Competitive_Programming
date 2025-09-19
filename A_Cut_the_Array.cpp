#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int ans1 = 0, ans2 = 0;
        for (int l = 1; l < n - 1 && !ans1; l++) { 
            for (int r = l + 1; r < n; ++r) {
                int sum1 = 0, sum2 = 0, sum3 = 0;
                for (int i = 0; i < l; ++i) sum1 += a[i];
                for (int i = l; i < r; ++i) sum2 += a[i];
                for (int i = r; i < n; ++i) sum3 += a[i];
                int s1 = sum1 % 3, s2 = sum2 % 3, s3 = sum3 % 3;
                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s1 != s3 && s2 != s3)) {
                    ans1 = l;
                    ans2 = r;
                    break;
                }
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
}
