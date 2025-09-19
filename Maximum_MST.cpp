#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int M = N * (N - 1) / 2;
        vector<long long> W(M);
        for (int i = 0; i < M; i++) {
            cin >> W[i];
        }
        sort(W.begin(), W.end());
        
        long long ans = 0;
        for (int i = M - (N - 1); i < M; i++) {
            ans += W[i];  // sum the largest N-1 weights
        }
        
        cout << ans << "\n";
    }
    return 0;
}
