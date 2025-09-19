#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main(){
    int t; cin >> t;
    while(t--){
        int n, tot; cin >> n >> tot;
        vi m(n), gym(n);
        for(int i=0;i<n;i++) cin >> m[i] >> gym[i];
        int pos = 0, time = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            int gap = m[i] - time;
            ans += gap;
            if((pos + gap) % 2 != gym[i]) ans--;
            pos = gym[i];
            time = m[i];
        }
        ans += tot - time;
        cout << ans << endl;
    }
}