#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >>t;
    while(t--){
        int n; cin >>n;
        int m; cin >>m;
        vector<int> a(n), b(m);
        for(int &i:a) cin >>i;
        for(int &i:b) cin >>i;
        sort(b.begin(),b.end());
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=lower_bound(b.begin(),b.end(),a[i]) - b.begin();
        }
        cout<<ans<<endl;
    }
}