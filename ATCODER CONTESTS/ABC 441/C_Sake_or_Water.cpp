#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k,x; cin >>n>>k>>x;
    vector<int>a(n);
    for(int &i:a) cin>>i;
    sort(a.rbegin(), a.rend());
    vector<int>pref(n+1,0);
    for(int i=0;i<n;i++) pref[i+1]=pref[i]+a[i];
    
    for(int j=1;j<=n;j++){
        int s=max(0LL,j-(n-k));
        if(s==0) continue;

        int ans = pref[j]-pref[j-s];
        if(ans>=x){
            cout<<j;
            return 0;
        }

    }
    
    cout<<-1;
    return 0;
}