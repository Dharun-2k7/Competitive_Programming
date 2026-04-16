#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<set<int>> s(n + 1);
    vector<int> ans;
    vector<bool> res(n + 1);
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        s[a].insert(b);
        if (!res[a] && (int)s[a].size() == m) {
            ans.push_back(a);
            res[a] = 1;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
    cout << endl;
}

