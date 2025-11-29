#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        map<int,int> mp;
        for(int x : a) mp[x]++;
        int ans = 0;
        for(auto &p : mp){
            int x = p.first, c = p.second;
            if(x == 0){
                ans += c;
                continue;
            }
            int k = (c >= x ? c - x : INT_MAX);
            int r = c;
            ans += min(k, r);
        }
        cout << ans << endl;
    }
}
