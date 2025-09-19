#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s = "abcd";
    for (int i = 0; i < n; i++) {
        cout << s[i % 4];
    }
    cout << endl;
    return 0;
}
