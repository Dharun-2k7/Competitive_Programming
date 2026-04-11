#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long k, x;
        cin >> k >> x;

        long long start = 1LL << k; 
        if(x == start){
            cout << 0 << "\n";
            continue;
        }

        vector<int> ops;
        for(int i = k-1; i >= 0; i--){
            if((x >> i) & 1){
                ops.push_back(2); 
            }else{
                ops.push_back(1); 
            }
        }

        cout << ops.size() << "\n";
        for(int v : ops) cout << v << " ";
        cout << "\n";
    }
}
