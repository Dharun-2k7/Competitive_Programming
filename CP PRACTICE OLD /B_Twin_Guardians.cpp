#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;
vector<bool> is_prime(MAX, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << ((b == a + 2 && is_prime[a] && is_prime[b]) ? 'Y' : 'N') << endl;
    }
}
