#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int,int>> v;
    for (int i = 1; i <= N; i++) {
        int t;
        cin >> t;
        v.push_back({t, i});
    }

    sort(v.begin(), v.end());

    cout << v[0].second << " "
         << v[1].second << " "
         << v[2].second << endl;

    return 0;
}
