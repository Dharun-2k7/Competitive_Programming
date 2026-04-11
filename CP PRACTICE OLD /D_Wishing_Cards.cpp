#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = -4e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt; 
    cin >> tt;
    while(tt--){
        int n, K;
        cin >> n >> K;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<vector<ll>> dp(K+1, vector<ll>(K+1, N));
        dp[0][0] = 0;

        for(int i=0;i<n;i++){
            int c = min(a[i], K);
            vector<vector<ll>> ndp(K+1, vector<ll>(K+1, N));

            for(int m=0;m<=K;m++){
                for(int u=0;u<=K;u++){
                    if(dp[m][u] == N) continue;

                    for(int x=0;x<=c && u+x<=K;x++){
                        int nm = max(m,x);
                        int nu = u+x;
                        ll v = dp[m][u] + nm;
                        ll &r = ndp[nm][nu];
                        if(v > r) r = v;
                    }
                }
            }
            dp.swap(ndp);
        }

        ll ans = 0;
        for(int m=0;m<=K;m++)
            for(int u=0;u<=K;u++)
                ans = max(ans, dp[m][u]);

        cout << ans << "\n";
    }
}
