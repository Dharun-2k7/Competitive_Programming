#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int m=n*(n-1)/2;
        vector<int>b(m);
        for(int &i:b) cin >>i;
        sort(b.begin(),b.end());
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        cout<<"1000000000\n";

    }
}