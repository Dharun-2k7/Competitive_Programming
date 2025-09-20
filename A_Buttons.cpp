#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (c % 2 == 0 ? (a > b ? "First" : "Second") : (b > a ? "Second" : "First")) << endl;
    }
}
