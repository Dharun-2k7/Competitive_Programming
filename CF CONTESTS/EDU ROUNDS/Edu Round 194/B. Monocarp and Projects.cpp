#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t; cin >>t;
    while (t--) {
        int x,y,k; cin>>x>>y>>k;
        int d = y-x;
        int s = 0;
        int n=max(0LL,min(k, d - x + 1));
        for (int i = 0; i < n; i++)
            s +=d%(x+i);
        s += (k - n) * d;
        cout << s <<endl;
    }
}