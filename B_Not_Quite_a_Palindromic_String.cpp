#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        int count0 = 0, count1 = 0;
        for (char ch : s) {
            if (ch == '0') count0++;
            else count1++;
        }
        int half = n / 2;
        int min_good = max(count0, count1) - half;

        int max_good = (count0 / 2) + (count1 / 2);
        if (k >= min_good && k <= max_good && (k - min_good) % 2 == 0) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}






/*
is there any connection between the k and no of terms?

shld the count of 0s and 1s should be odd to make the string good ?


*/