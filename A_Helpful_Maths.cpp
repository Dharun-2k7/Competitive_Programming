#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++) {
        if(i > 0) cout << "+";
        cout << s[i];
    }
    cout << endl;
}
