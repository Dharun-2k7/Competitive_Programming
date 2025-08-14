#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[j]) {
                a.erase(a.begin() + i);  
                break;                  
            }
        }
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
