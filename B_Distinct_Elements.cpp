#include <bits/stdc++.h>
using namespace std;
using vi = vector<long long>;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi b(n+1);      
        for(int i=1;i<=n;i++) cin >> b[i];
        vector<int> a(n+1);
        int nxt = 1;
        for(int i=1;i<=n;i++){
            ll s = b[i] - b[i-1];    
            int p = int(i - s);      
            if(p == 0) a[i] = nxt++;
            else a[i] = a[p];
        }
        for(int i=1;i<=n;i++){
            if(i>1) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
