#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int dir = 1;
    int dist = 1;
    int total = 0;
    while (true) {
        if ((dir == 1 && x <= y && y <= x + dist) || (dir == -1 && y <= x && x - dist <= y)) {
            total += abs(y - x);
            cout << total << "\n";
            break;
        } else {
            total += dist * 2;
            dist *= 2;
            dir *= -1;
        }
    }
}
