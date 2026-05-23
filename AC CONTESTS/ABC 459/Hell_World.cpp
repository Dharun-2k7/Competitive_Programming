#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;cin >> x;
    string s = "HelloWorld";
    for(int i = 0; i < s.size(); i++) {
        if(i != x - 1) {
            cout << s[i];
        }
    }
    return 0;
}