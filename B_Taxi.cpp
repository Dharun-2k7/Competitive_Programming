<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(5, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int taxis = 0;
    int pair31 = min(cnt[3], cnt[1]);
    taxis += pair31;
    cnt[3] -= pair31;
    cnt[1] -= pair31;
    taxis += cnt[3];
    cnt[3] = 0;
    taxis += cnt[2] / 2;
    cnt[2] %= 2;
    if (cnt[2] == 1) {
        taxis++;
        cnt[2] = 0;
        cnt[1] = max(0, cnt[1] - 2);
    }
    if (cnt[1] > 0) {
        taxis += (cnt[1] + 3) / 4;
    }
    taxis += cnt[4];
    cout << taxis << "\n";
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(5, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int taxis = 0;
    int pair31 = min(cnt[3], cnt[1]);
    taxis += pair31;
    cnt[3] -= pair31;
    cnt[1] -= pair31;
    taxis += cnt[3];
    cnt[3] = 0;
    taxis += cnt[2] / 2;
    cnt[2] %= 2;
    if (cnt[2] == 1) {
        taxis++;
        cnt[2] = 0;
        cnt[1] = max(0, cnt[1] - 2);
    }
    if (cnt[1] > 0) {
        taxis += (cnt[1] + 3) / 4;
    }
    taxis += cnt[4];
    cout << taxis << "\n";
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
