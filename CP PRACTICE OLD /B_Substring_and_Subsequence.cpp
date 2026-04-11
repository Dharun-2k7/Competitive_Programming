#include <bits/stdc++.h>
 
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = n + m;
    for (int i = 0; i < m; ++i) {
      int j = i;
      for (char c : a) {
        if (j < m && c == b[j]) ++j;
      }
      ans = min(ans, n + m - (j - i));
    }
    cout << ans << '\n';
  }
}

/*
its always good to add /remove b to a as we need A to be the substring 
ok so its not just adding a single letter from B we need to use entire B and A
our minmum possible ans is size of a 
ans is size of a if b is substring of a?

*/