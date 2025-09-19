#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int month = (x + y - 1) % 12 + 1;
    cout << month << endl;
}
