#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cur = 0, best = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;   
        cur -= a;            
        cur += b;            
        best = max(best, cur);
    }
    cout << best << endl;
}
