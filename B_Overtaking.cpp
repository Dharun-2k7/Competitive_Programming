#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int sumA = 0, sumB = 0;
        int prev = 0; 
        int overtakes = 0;

        for (int i = 0; i < n; i++) {
            sumA += a[i];
            sumB += b[i];

            if (sumA == sumB) continue; 
            int now = (sumA > sumB ? 1 : 2);
            if (prev != 0 && now != prev) overtakes++;
            prev = now;
        }

        cout << overtakes << endl;
    }

}
