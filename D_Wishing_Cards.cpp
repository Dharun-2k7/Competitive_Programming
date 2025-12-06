#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        ll ans = 0;

        for(int M=1; M<=k; M++){
            int p = 0, h = 1;
            vector<int> pos;
            while(h <= M){
                while(p < n && a[p] < h) p++;
                if(p == n) goto nextM;
                pos.push_back(p);
                p++;
                h++;
            }
            {
                ll cur = 0;
                int last = pos.back();
                for(int i=0;i<pos.size();i++) cur += (i+1);
                cur += 1LL * (n - last - 1) * M;
                ans = max(ans, cur);
            }
            nextM:;
        }

        cout << ans << '\n';
    }
}
