#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
using ll=long long;

ll binpow(ll a,ll b){
    if(b==0) return 1;
    if (b%2) return (a*binpow(a,b-1))%mod;
    return binpow((a*a)%mod,b/2);
}
int main(){
    int t; cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int>a(n);
        int sum,sumsq=0;
        for(int i=0;i<n;i++) 
        { 
            cin >>a[i];
            sum+=a[i];sum%=mod;
            sumsq+=a[i]*a[i];
            sumsq%=mod;
        }
        sum*=sum;sum%=mod;
        sum=(sum-sumsq+mod)%mod;
        sum=(sum*binpow(2,mod-2))%mod;
        long long cnt=n*(n-1)/2;cnt%=mod;
        cout<<(sum%mod)*binpow(cnt,mod-2)%mod<<endl;


        
    }
}