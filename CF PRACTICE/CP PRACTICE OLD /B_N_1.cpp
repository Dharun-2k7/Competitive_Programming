#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >>  n>> m;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (total_sum - a[i] == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
}
