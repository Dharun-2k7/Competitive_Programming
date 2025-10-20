#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        int last = -1000000; 
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last >= k) {
                    ans++; 
                    last = i;
                } else {
                    last = i; 
                }
            }
        }

        cout << ans << endl;
    }
}
