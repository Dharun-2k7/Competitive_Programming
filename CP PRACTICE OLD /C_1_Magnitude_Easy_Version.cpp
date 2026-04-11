#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        vector<int>a(n);
        for(int &i:a)cin >>i;
        ll sum=0,mn=0;
        for(int  i=0;i<n;i++) sum+=a[i], mn=min(mn,sum);
        cout<<sum-2*mn<<endl;
    }
}