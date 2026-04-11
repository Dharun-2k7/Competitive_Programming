#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >>t;
    while(t--){
        int n,m; cin >>n>>m;
        vector<int> x(n),y(n);
        for(int i=0;i<n;i++){
            cin >>x[i]>>y[i];
        }
        int ans = 2 * (accumulate(x.begin(), x.end(), 0) + m - x[0] + accumulate(y.begin(), y.end(), 0) + m - y[0]);
    
        cout << ans << endl;
}
}

