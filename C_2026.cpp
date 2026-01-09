#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cnt(N + 1, 0);
    int lim = sqrt(N);
    for (int x = 1; x <= lim; x++) {
        for (int y = x + 1; y <= lim; y++) {
            int s = x * x + y * y;
            if (s > N) break;
            cnt[s]++;
        }
    }
    vector<int> ans;
    for (int i = 1; i <= N; i++) {
        if (cnt[i] == 1)
            ans.push_back(i);
    }
    cout << ans.size() << '\n';
    for (int x : ans)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
