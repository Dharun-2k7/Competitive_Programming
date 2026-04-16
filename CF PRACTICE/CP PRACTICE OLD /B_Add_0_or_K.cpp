<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] += (a[i] % (k + 1)) * k;  
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] += (a[i] % (k + 1)) * k;  
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
