#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

long long n;
long long m;
vector<long long> a;

bool check(long long V) {
    long long count = 0;
    for (int i = 0; i < n; ++i) {
        if (V / a[i] > m) {
            count += m;
        } else {
            count += V / a[i];
        }
    }
    return count >= m;
}

void solve() {
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long low = 1, high = 1e14;
    long long limit_val = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid)) {
            limit_val = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    long long total_cakes = 0;
    long long count_lt = 0;

    for (int i = 0; i < n; ++i) {
        long long k_i = (limit_val - 1) / a[i];
        
        if (k_i > m) {
            k_i = m;
        }

        total_cakes += a[i] * k_i * (k_i + 1) / 2;
        count_lt += k_i;
    }

    total_cakes += (m - count_lt) * limit_val;
    cout << total_cakes << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}