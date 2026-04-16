#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

void multiply(ll a[3][3], ll b[3][3]) {
    ll res[3][3] = {};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                res[i][j] = (res[i][j] + a[i][k]*b[k][j])%MOD;
            }
        }
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            a[i][j] = res[i][j];
}

void power(ll mat[3][3], ll n) {
    ll res[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    while(n){
        if(n&1) multiply(res, mat);
        multiply(mat, mat);
        n >>= 1;
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            mat[i][j] = res[i][j];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n==1){cout<<0<<"\n"; continue;}
        if(n==2 || n==3){cout<<1<<"\n"; continue;}

        ll mat[3][3] = {{1,1,1},{1,0,0},{0,1,0}};
        power(mat, n-3);

        ll ans = (mat[0][0] + mat[0][1] + mat[0][2]) % MOD; // multiply with initial vector [1,1,0]^T
        cout << ans << "\n";
    }
}
