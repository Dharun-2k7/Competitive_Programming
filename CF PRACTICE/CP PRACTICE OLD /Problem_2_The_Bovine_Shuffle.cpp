#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    for (int t = 0; t < 3; t++) {
        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            c[i] = b[a[i] - 1]; 
        }
        b = c;
    }
    for (int x : b) cout << x << '\n';
}

//problem statement:https://usaco.org/index.php?page=viewproblem2&cpid=760
