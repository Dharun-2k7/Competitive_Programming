#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    string word = "hello";
    int j = 0;
    for (char c : n) {
        if (j < word.size() && c == word[j]) j++;
    }
    cout << (j == word.size() ? "YES" : "NO") << endl;

    return 0;
}
