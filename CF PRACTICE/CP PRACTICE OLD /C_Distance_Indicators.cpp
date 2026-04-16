<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int n; 
    cin >> n;
    vector<int>a(n+1);  
    for (int i = 1; i <= n; i++) cin >> a[i];
    unordered_map<int, int> cnt;
    long long ans = 0; 
    for (int j = 1; j <= n; j++) {
        int y = j - a[j];
        if (cnt.count(y)) {
            ans += cnt[y];
        }

        int x = j + a[j];
        cnt[x]++;
    }
    cout << ans << "\n";
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int n; 
    cin >> n;
    vector<int>a(n+1);  
    for (int i = 1; i <= n; i++) cin >> a[i];
    unordered_map<int, int> cnt;
    long long ans = 0; 
    for (int j = 1; j <= n; j++) {
        int y = j - a[j];
        if (cnt.count(y)) {
            ans += cnt[y];
        }

        int x = j + a[j];
        cnt[x]++;
    }
    cout << ans << "\n";
    return 0;
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
