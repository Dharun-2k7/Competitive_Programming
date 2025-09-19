#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    unordered_map<string, int> mp;
    while (n--) {
        string nm1;
        cin >> nm1;

        if (mp.find(nm1) == mp.end()) {
            cout << "OK" << endl;
            mp[nm1] = 0;
        } else {
            mp[nm1]++;
            string nm2 = nm1 + to_string(mp[nm1]);
            cout << nm2 << endl;
            mp[nm2] = 0;
        }
    }
    return 0;
}
