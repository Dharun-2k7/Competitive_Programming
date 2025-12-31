#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(i % 2) ans -= a[i];
            else ans += a[i];
        }
 
        ll res = ans;
 
        for(int i = 0; i < n; i++) ans = max(ans,res + i - (i % 2));
 
        ll eve = LLONG_MAX / 2, odd = LLONG_MAX / 2;
        for(int i = 0; i < n; i++){
            if(i % 2){
                ans = max(res + i + a[i] + a[i] - eve, ans);
                odd = min(odd, i - a[i] - a[i]);
            }
            else{
                ans = max(res + i - a[i] - a[i] - odd, ans);
                eve = min(eve, i + a[i] + a[i]);
            }
        } 
        cout << ans << endl;
    }
}