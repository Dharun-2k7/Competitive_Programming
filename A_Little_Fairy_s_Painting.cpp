#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        vector<int>a(n);
        for(int &i:a)cin >>i;
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        int s=a.size();
        int ans=a.back();
            for(int x:a){
                if(x>=s) {
                    ans=x; 
                    break;
                }
            }
            cout<<ans<<endl;
}
}
