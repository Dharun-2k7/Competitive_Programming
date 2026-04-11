#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<vi> g(n, vi(n, 0));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            g[i][j] = gcd(a[i], a[j]);
        }
    }

    vector<vi> dp(n, vi(n, 0));
    int ans = 1; 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            dp[i][j] = 2;
            ans = max(ans, 2);
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<j;i++){
            int gab = g[i][j];
            for(int k=j+1;k<n;k++){
                int gbc = g[j][k]; 
                if(gbc >= gab){
                    if(dp[j][k] < dp[i][j] + 1){
                        dp[j][k] = dp[i][j] + 1;
                        ans = max(ans, dp[j][k]);
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

/*obs
so we have n houses with some num of strength
naive approach not possible as we need gcd in increasing order( also order maters)
gcd(a,b)<gcd(b,c)..... 

test case eg:

the rule is  the GCD of neighbors has to increase, hmm so if i pick 2,2,1,2,2 then gcds are like 2,2=2, 2,1=1, 1,2=1, 2,2=2? we only care about consecutive gcds in the subsequence
so basically we need to pick numbers so that when we take gcd of neighbors in the subsequence it’s strictly increasing

we shld store 2 nums ( to know last gcd)
dp[i][j]=max subseq at house ai and aj
we can better precompute gcd to avoid calculating again 
*/