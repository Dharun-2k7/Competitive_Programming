#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>a(n),b(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        ll mx=0,mn=0;
        for(int i=0;i<n;i++){
            ll r1=mx-a[i],r2=mn-a[i];
            ll bl1=b[i]-mx,bl2=b[i]-mn;
            ll nmx=max(max(r1,r2),max(bl1,bl2));
            ll nmn=min(min(r1,r2),min(bl1,bl2));
            mx=nmx;mn=nmn;
        }
        cout<<mx<<endl;
    }
}
