#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string s; cin >> s;
    int pos = -1;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (isVowel(s[i])) {
            pos = i;
            break;
        }
    }
    cout << s.substr(0, pos + 1) + "ntry";
}
