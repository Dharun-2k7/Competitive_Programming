#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >>t;
    while (t--) {
        int n; cin >> n;
        int m = 2 * n;
        vector<int> ans(m, 0);
        for (int i = n; i >= 1; --i) {
            bool ins = false;
            for (int r = 0; r < i && !ins; ++r) {                
                int first = -1;
                for (int pos = r; pos < m; pos += i) {
                    if (ans[pos] == 0) {
                        if (first == -1) first = pos;
                        else {
                            ans[first] = i;
                            ans[pos] = i;
                            ins = true;
                            break;
                        }
                    }
                }
            }
        }
        for (int k = 0; k < m; ++k) {
            if (k) cout << ' ';
            cout << ans[k];
        }
        cout << endl;
    }
}




/*
we must make an array and place the integer such that the distance between them is divisible by the number itself
the array size must be 2*n ( each num shld be twice)
can we find the multiples of that number and add the num at that position? but how does this help in distance
so nah  we shldnt place in the index where its the multiple 
we shld find the distance b/2 two positions
so we can keep x at some pos the next one liek pos+k*x so the dis can be k*x ( divsisble by x)
*/