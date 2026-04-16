#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n ; cin >>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >>a[i];
        vector<int>cnt(32,0);
        for(int i=0;i<n;i++){
            int bit=__builtin_clz(a[i]);
            cnt[bit]+=1;
        }
        long long ans=0;
        for(int bit=0;bit<32;bit++){
            ans+=(long long)cnt[bit]*(cnt[bit]-1)/2;
        }
        cout<<ans<<endl;
    }
}