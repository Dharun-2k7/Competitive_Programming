#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;
        ll ans;
        if(a[0] != -1 && a[n-1] != -1){
            ans = llabs(a[n-1] - a[0]);
        } else {
            ans = 0;
        }
        vector<ll> res = a;
        if(res[0] == -1 && res[n-1] == -1){
            res[0] = 0;
            res[n-1] = 0;
        }
        else if(res[0] == -1){
            res[0] = res[n-1];
        }
        else if(res[n-1] == -1){
            res[n-1] = res[0];
        }

        for(int i = 0; i < n; i++){
            if(res[i] == -1) res[i] = 0;
        }

        cout << ans << endl;
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
