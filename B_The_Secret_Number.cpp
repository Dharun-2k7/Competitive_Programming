#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> ans;
        for(ll k = 1; k< 18 ; k++){
            ll d = 1;
            for(int i = 0; i < k; i++) d *= 10;
            d += 1;
            if(d > n) break;
            if(n % d == 0){
                ans.push_back(n/d);
            }
        }
        if(ans.empty()){
            cout << 0 << endl;
        }else{
            sort(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for(int i = 0; i < ans.size(); i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}
