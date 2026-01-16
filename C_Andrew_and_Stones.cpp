#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        if (n == 3 && a[1] % 2 == 1) {
            cout << -1 << endl;
            return;
        }
        if (n > 2 && *max_element(a.begin() + 1, a.end() - 1) == 1) {
            cout << -1 << endl;
            return;
        }
        long long ans = 0;
        for (int i = 1; i < n - 1; i++)
            ans += (a[i] + 1) / 2;

        cout << ans << endl;
    }
}
