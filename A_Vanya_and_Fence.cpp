#include <bits/stdc++.h>
using namespace std; 
int main() {
    int n, h; 
    cin >> n >> h;
    vector<int> a(n);
    int ans = n;  
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > h) {
            ans++;
        }
    }
    cout << ans << endl;
}
