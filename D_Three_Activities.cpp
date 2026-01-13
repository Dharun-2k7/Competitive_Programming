#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
        int t; cin >> t;
        while (t--) {
            int n; cin >> n;
            vector<pair<ll,int>> a(n), b(n), c(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i].first;
                a[i].second = i;
            }
            for (int i = 0; i < n; i++) {
                cin >> b[i].first;
                b[i].second = i;
            }
            for (int i = 0; i < n; i++) {
                cin >> c[i].first;
                c[i].second = i;
            }
     
            
            sort(a.rbegin(), a.rend());
            sort(b.rbegin(), b.rend());
            sort(c.rbegin(), c.rend());
     
            ll maxi = -1;
     
           
            for (int i = 0; i < min(3, n); i++) {
                for (int j = 0; j < min(3, n); j++) {
                    for (int k = 0; k < min(3, n); k++) {
                        if (a[i].second != b[j].second &&
                            b[j].second != c[k].second &&
                            a[i].second != c[k].second) 
                        {
                            maxi = max(maxi, a[i].first + b[j].first + c[k].first);
                        }
                    }
                }
            }
     
            cout << maxi << endl;
        }
}