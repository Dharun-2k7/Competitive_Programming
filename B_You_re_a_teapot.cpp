#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    double maxi = 0.0;
    for (int l = 0; l < n; l++) {
        for (int r = l + 1; r < n; r++) {
            if (s[l] == s[r]) {
                char c = s[l];
                int cnt = 0;
                for (int i = l; i <= r; ++i) {
                    if (s[i] == c) cnt++;
                }
                if (cnt > 1) {
                    int length = r - l + 1;
                    if (length - 2 > 0) { 
                        double rate = (double)(cnt - 2) / (length - 2);
                        if (rate > maxi) maxi = rate;
                    }
                }
            }
        }
    }
    cout << fixed << setprecision(17) << maxi << "\n";  
    return 0;
}