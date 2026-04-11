#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi=vector<int>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vi freq(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            freq[x]++;
        }
        vi pref(n + 2, 0);
        for (int v = n; v >= 1; v--) pref[v] = pref[v+1] + freq[v];

        int ans = 1;
        for (int g = n; g >= 1; g--) {
            int cnt = 0;
            if ((ll)4 * g <= n) cnt += pref[4*g];
            if (g <= n) cnt += freq[g];
            if (2*g <= n) cnt += freq[2*g];
            if (3*g <= n) cnt += freq[3*g];
            if (cnt >= n - k) {
                 ans = g; 
                 break;
             }
        }
        cout << ans << endl;
    }
}

/*
which number shle we erase first?
is the splitting into 3 related to the number we erase?

-- splitting makes us to decrease gcd

we can set a gcd for reff
 
we can decide which num to erase by checking the divisibility of the num with g  or the x must be more than thrice greater than g 

if a[i] is multiple of g we can keep it as it is 

so the nums which are no div by g and trice more than g can be erases ( 7 in test case as given )

we can build a  pref array to store the num of elements > g 

*/
