#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        map<int,int> cnt;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        ll base = 0;
        vi odd, even;
        for(auto p : cnt) {
            int x = p.first;
            int c = p.second;
            base += (ll)x * (c/2);
            if(c % 2 == 1) odd.push_back(x);
            else if(c >= 2) even.push_back(x);
}


        if(base == 0) {
            cout << 0 << endl;
            continue;
        }

        ll ans = 0;

        for(int x : odd) {
            if(2*base > x) ans = max(ans, 2*base + x);
        }

        sort(odd.begin(), odd.end()); 
        for(int i = 1; i < (int)odd.size(); i++) {
            if(odd[i-1] + 2*base > odd[i]) {
                ans = max(ans, odd[i-1] + 2*base + odd[i]);
            }
        }

        for(int x : even) {
            if(base - x > 0) ans = max(ans, 2*base);
        }

        cout << ans << "\n";
    }

    return 0;
}

 
/*
just an intuition 
acc to the given diagram i can observe that when the sides are odd we need pairs and the single one shld be equal to no of pair
in tc 1 
5 5 7 
we got 1 pair(5,5) and single 7 
in tc 4:
we got 2 pair (3,3) (5,5) and single 4 and 3 
but what abt the one ? how do we eliminate that ?
is that because it should have one odd and one even? but acc to other test case odd was preferred more than even 
lol wat am i ?? they have asked the maximum possible is that y 4 was chosen over 1 ?
 
 
also in tc 3
we got pair(5,5) and single 10 --- kinda similar to tc 1
but the answer is no then why does it not work here?
maybe am i soo much idiotic to not see that 10 is not odd?
so the single one shld be odd and equal to no of pairs
and the pairs shld be odd too
was my intuition totally idiotic????????
 y i got 20 instead of 23 for the code? did this approach take 1 instead of 4 
 
 we can get 3 type of polygons 
 Option 0: just pairs 
 Option 1: pairs + one leftover 
 Option 2: pairs + two leftovers (even-sided polygon with axis through midpoints) -- it might be the example for our test case 4 where it fails
 we can use the largest left over as the center so we can maximise the perimeter
 
*/