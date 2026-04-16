#include<bits/stdc++.h>
using namespace std;
#define int  long long

int fun(int r){
    int tot = 2 * 3 * 5 * 7;
    int F1 = r / 2 + r / 3 + r / 5 + r / 7 ;
    int F2 = r / 6 + r / 15 + r / 10 + r / 21 + r / 14 + r / 35 ;
    int F3 = r / (tot / 3) + r / (tot / 2) + r / (tot / 5) + r / (tot / 7);
    int F4 = r / tot;
    return F1 - F2 + F3 - F4;
}
int32_t main(){
    int t; cin >> t;
    while (t--) {
    int l, r; cin >> l >> r;
    int ans = fun(r) - fun(l - 1);
    ans = (r - l + 1) - ans;
    cout << ans << '\n';
}
}