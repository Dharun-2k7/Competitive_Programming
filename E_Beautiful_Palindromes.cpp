#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 1; i <= k; i++) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

/*
does this have any connection with MEX?
i can see that every answer has atleast 
1 mex and the next minimum number after mex which is in the given array 


*/