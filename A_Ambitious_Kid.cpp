#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    vector<int> a(n);  
    for(int i = 0; i < n; i++) cin >> a[i];
    int minop = INT_MAX;  
    for(int i = 0; i < n; i++) {
        minop = min(minop, abs(a[i]));  
    }
    cout << minop << endl;
}

