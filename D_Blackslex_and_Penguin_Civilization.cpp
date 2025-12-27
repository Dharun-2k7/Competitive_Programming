#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int N = 1 << n;
        vector<int> g(N);
        for (int i = 0; i < N; ++i) g[i] = i ^ (i >> 1);
        int m = N - 1, ind = 0;
        for (int i = 0; i < N; ++i) {
            if (g[i] == m){ 
                ind = i; 
                break;
             }
        }
        for (int j = 0; j < N; ++j) {
            int p = ind - j;
            if (p < 0) p += N;
            cout << g[p] << (j + 1 == N ? '\n' : ' ');
        }
    }
    return 0;
}
