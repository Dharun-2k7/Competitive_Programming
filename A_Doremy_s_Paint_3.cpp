#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        map<int,int>mp;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }
        if (mp.size() >= 3) cout << "No"<<endl;
        else if (abs(mp.begin()->second - mp.rbegin()->second) <= 1) cout << "Yes" <<endl;
        else cout << "No" <<endl;
    }
}
