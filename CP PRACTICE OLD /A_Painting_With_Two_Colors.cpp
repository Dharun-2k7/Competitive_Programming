<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a <= b) cout << ((n - b) % 2 == 0 ? "YES" : "NO") << endl;
        else  cout << (((n - a) % 2 == 0 && (n - b) % 2 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a <= b) cout << ((n - b) % 2 == 0 ? "YES" : "NO") << endl;
        else  cout << (((n - a) % 2 == 0 && (n - b) % 2 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
