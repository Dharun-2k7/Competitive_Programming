#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;cin >> n;
    if (n % 4 == 1) {
        cout << (n + 1) / 2 << endl;
    } else {
        cout << "impossible"<<endl;
    }
}
