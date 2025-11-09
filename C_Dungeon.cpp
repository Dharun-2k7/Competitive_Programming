#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        multiset<ll> s;
        
        for(int i = 0; i < n; i++){
            ll x;
            cin >> x;
            s.insert(x);
        }
        
        vector<pair<ll, ll>> pos;  
        vector<pair<ll, ll>> mons; 
        
        for(int i = 0; i < m; i++){
            ll b, c;
            cin >> b >> c;
            if(c > 0) pos.push_back({b, c});
            else mons.push_back({b, c});
        }
        
        sort(pos.begin(), pos.end());
        
        int k = 0;
        
        for(auto &m : mons){
            ll ans = m.first, cnt = m.second;
            auto it = s.lower_bound(ans);
            if(it == s.end()) break;
            ll pow = *it;
            s.erase(it);
            if(cnt > 0){
                s.insert(max(pow, ans));
            }
            k++;
        }
        
        for(auto &m : mons){
            ll ans = m.first;
            auto it = s.lower_bound(ans);
            if(it == s.end()) break;
            s.erase(it);
            k++;
        }
        
        cout << k << endl;
    }
}
