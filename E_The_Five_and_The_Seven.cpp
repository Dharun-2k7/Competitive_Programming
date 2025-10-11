#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x) {
    if(x < 2) return false;
    for(int i = 2; i*i <= x; i++)
        if(x % i == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<long long> blessed;
    for(int p = 2; p <= 100; p++) {
        if(is_prime(p)) {
            long long p4 = 1LL * p * p * p * p;
            if(p4 <= 1e8) blessed.push_back(p4);
        }
    }
    for(int p = 2; p <= 46; p++) {
        if(is_prime(p)) {
            long long p6 = 1LL * p * p * p * p * p * p;
            if(p6 <= 1e8) blessed.push_back(p6);
        }
    }
    
    sort(blessed.begin(), blessed.end());
    
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        // count numbers <= n using upper_bound
        int ans = upper_bound(blessed.begin(), blessed.end(), n) - blessed.begin();
        cout << ans << "\n";
    }
}
