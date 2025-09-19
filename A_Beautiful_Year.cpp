#include <bits/stdc++.h>
using namespace std;

int main() {
    int y; 
    cin >> y;
    while (true) {
        y++;
        string s = to_string(y);
        sort(s.begin(), s.end());
        if (unique(s.begin(), s.end()) == s.end()) {
            cout << y;
            break;
        }
    }
    return 0;
}
