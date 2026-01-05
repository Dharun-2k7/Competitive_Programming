#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_EXP = 60;
const int MAX_N = 500;

int C[MAX_N + 5][MAX_N + 5];

void precompute_binom() {
    for (int i = 0; i <= MAX_N; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++) {
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    precompute_binom();
    
    int n, m;
    cin >> n >> m;
    
    vector<int> cnt(MAX_EXP + 1, 0);
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        cnt[c]++;
    }
    
    while (m--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int x;
            cin >> x;
            cnt[x]++;
        } else if (type == 2) {
            int x;
            cin >> x;
            cnt[x]--;
        } else {
            long long x;
            cin >> x;
            
            vector<vector<pair<__int128, int>>> dp(MAX_N + 1);
            dp[0].emplace_back(0, 1);
            
            for (int exp = MAX_EXP; exp >= 0; exp--) {
                if (cnt[exp] == 0) continue;
                
                vector<vector<pair<__int128, int>>> new_dp(MAX_N + 1);
                
                for (int r = 0; r <= MAX_N; r++) {
                    if (dp[r].empty()) continue;
                    
                    for (int k = 0; k <= cnt[exp]; k++) {
                        int new_r = r + k;
                        if (new_r > MAX_N) break;
                        
                        __int128 contribution = 0;
                        if (exp >= r) {
                            int k_eff = min(k, exp - r + 1);
                            if (k_eff > 0) {
                                contribution = ((__int128)1 << (exp - r + 1)) - 
                                              ((__int128)1 << (exp - r + 1 - k_eff));
                            }
                        }
                        
                        int ways_mult = C[cnt[exp]][k];
                        
                        for (auto [cap, ways] : dp[r]) {
                            __int128 new_cap = cap + contribution;
                            int new_ways = (1LL * ways * ways_mult) % MOD;
                            
                            new_dp[new_r].emplace_back(new_cap, new_ways);
                        }
                    }
                }
                
                for (int r = 0; r <= MAX_N; r++) {
                    if (new_dp[r].empty()) continue;
                    
                    sort(new_dp[r].begin(), new_dp[r].end());
                    vector<pair<__int128, int>> merged;
                    
                    for (auto [cap, w] : new_dp[r]) {
                        if (merged.empty() || merged.back().first != cap) {
                            merged.emplace_back(cap, w);
                        } else {
                            merged.back().second = (merged.back().second + w) % MOD;
                        }
                    }
                    
                    new_dp[r] = move(merged);
                }
                
                dp = move(new_dp);
            }
            
            int ans = 0;
            for (int r = 0; r <= MAX_N; r++) {
                for (auto [cap, ways] : dp[r]) {
                    if (cap >= x) {
                        ans = (ans + ways) % MOD;
                    }
                }
            }
            
            cout << ans << '\n';
        }
    }
    
    return 0;
}