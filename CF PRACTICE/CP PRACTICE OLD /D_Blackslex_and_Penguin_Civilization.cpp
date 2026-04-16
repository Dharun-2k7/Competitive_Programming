#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int N = 1 << n;
        cout << N - 1 << " ";
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < (1 << i); j += 2) {
                int x = j * (1 << (n - i)) + (1 << (n - i)) - 1;
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

/*


s(p)== is the popcount of AND of  elements in array (prefix array of size 2^n -1)
we shld maximize s(p) while minimising the elements in the array 
 
we must make an array of size 2^n-1

one num shld appear only once in the array 

how can we maximise the popcount of AND of adjacent elements?

the summataion of popcount will not be the same when the order of the elements change
so we need to try with arrangements were the elements are small as well as the sp is maximised


we shld try to delay the summation bit being 0 

the number with the highest num of bits turned on is 2^n -1 , so we start with 2^n-1

the tie breaker here is the legicographically smallest 
so the next element = minimum number that has the maximum possible popcount next to the 2^n-1

*/