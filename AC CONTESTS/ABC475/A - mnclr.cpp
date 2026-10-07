#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i += 2)s.insert(i, "o");
    cout << s;
}