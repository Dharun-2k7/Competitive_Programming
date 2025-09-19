#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        cout << ((s[0]=='y'||s[0]=='Y') && (s[1]=='e'||s[1]=='E') && (s[2]=='s'||s[2]=='S') ? "YES" : "NO") << "\n";
    }
}
