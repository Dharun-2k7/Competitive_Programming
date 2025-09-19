<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int maxi = arr[0];
        int ans = 1;
        for (int j = 1; j < n; j++) {
            if (arr[j] > maxi) {
                maxi = arr[j];
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
}
=======
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int maxi = arr[0];
        int ans = 1;
        for (int j = 1; j < n; j++) {
            if (arr[j] > maxi) {
                maxi = arr[j];
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
}
>>>>>>> b9054e93db9d6de379b4b331ce29a691516046cc
