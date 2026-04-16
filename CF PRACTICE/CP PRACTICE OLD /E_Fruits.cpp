#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> prices(n);
    for (int &p : prices) cin >> p;
    sort(prices.begin(), prices.end());

    map<string, int> freq;
    for (int i = 0; i < m; ++i) {
        string fruit;
        cin >> fruit;
        freq[fruit]++;
    }

    vector<int> counts;
    for (auto &x : freq) counts.push_back(x.second);
    sort(counts.rbegin(), counts.rend());

    int k = counts.size();
    int mini = 0, maxi = 0;

    for (int i = 0; i < k; ++i) {
        mini += counts[i] * prices[i];
        maxi += counts[i] * prices[n - 1 - i];
    }

    cout << mini << ' ' << maxi << '\n';
}
