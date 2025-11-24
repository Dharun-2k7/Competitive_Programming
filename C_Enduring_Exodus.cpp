#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> a;
    a.reserve(n);
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') a.push_back(i);
    }

    int m = a.size();
    int res = 1e9;

    int l = 0, mid = 0, r = k;

    while(r < m) {
        while(mid + 1 <= r &&
              max(a[mid] - a[l], a[r] - a[mid]) >= 
              max(a[mid+1] - a[l], a[r] - a[mid+1])) {
            mid++;
        }

        res = min(res, max(a[mid] - a[l], a[r] - a[mid]));

        l++;
        r++;
        if(mid < l) mid = l;
        if(mid > r) mid = r;
    }

    cout << res << endl;
}
