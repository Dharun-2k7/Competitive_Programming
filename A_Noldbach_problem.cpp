<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    int size= primes.size();
    int cnt = 0;
    for (int i = 0; i + 1 < size; i++) {
        int val = primes[i] + primes[i + 1] + 1;
        if (val <= n && isPrime(val)) cnt++;
    }

    if (cnt >= k) cout << "YES"<< endl;
    else cout << "NO" << endl;
}
// we can use sieve of erothosthenes to find primes from i --> n;
=======
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    int size= primes.size();
    int cnt = 0;
    for (int i = 0; i + 1 < size; i++) {
        int val = primes[i] + primes[i + 1] + 1;
        if (val <= n && isPrime(val)) cnt++;
    }

    if (cnt >= k) cout << "YES"<< endl;
    else cout << "NO" << endl;
}
// we can use sieve of erothosthenes to find primes from i --> n;
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
// later jusy add the adjacent terms and check if the sum is equal to the given N