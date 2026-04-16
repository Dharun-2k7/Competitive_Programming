<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<bool> ans(n + 1, false);
        queue<int> q;

        q.push(n);
        ans[n] = true;
        int cnt = 1;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            if (cur > 2 && !ans[cur - 2]) {
                ans[cur - 2] = true;
                cnt++;
                q.push(cur - 2);
            }
            if (cur % 2 == 0 && !ans[cur / 2]) {
                ans[cur / 2] = true;
                cnt++;
                q.push(cur / 2);
            }
        }
        cout << cnt << "\n";
    }
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<bool> ans(n + 1, false);
        queue<int> q;

        q.push(n);
        ans[n] = true;
        int cnt = 1;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            if (cur > 2 && !ans[cur - 2]) {
                ans[cur - 2] = true;
                cnt++;
                q.push(cur - 2);
            }
            if (cur % 2 == 0 && !ans[cur / 2]) {
                ans[cur / 2] = true;
                cnt++;
                q.push(cur / 2);
            }
        }
        cout << cnt << "\n";
    }
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
