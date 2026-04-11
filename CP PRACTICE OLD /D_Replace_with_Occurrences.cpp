#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        vector<vector<int>> freq(n+1);
        for(int i=0;i<n;i++) freq[a[i]].push_back(i);
        vector<int> b(n,0);
        int cnt=1, ok=1;
        for(int i=1;i<=n;i++){
            if(freq[i].size()%i){
                 cout << -1 << "\n"; 
                 ok=0; 
                 break; 
                }
            int c=0;
            while(c<freq[i].size()){
                for(int v=0;v<i;v++) b[freq[i][c++]]=cnt;
                cnt++;
            }
        }
        if(ok){
            for(int i=0;i<n;i++) cout << b[i] << " \n"[i==n-1];
        }
    }
}
