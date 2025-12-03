#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >>n>>m;
    vector<int>a(n),b(m);
    for(int &i:a) cin >>i;
    for(int &i:b) cin >>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int mn=2*a[0];
    mn=max(mn,a[n-1]);
    cout<<(b[0]<=mn?-1:mn)<<endl;
}