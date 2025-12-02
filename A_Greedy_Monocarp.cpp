#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,k; cin >> n>>k;
        vector<int>a(n);
        for(int &i:a) cin >>i;
        sort(a.rbegin(),a.rend());
        int s=0;
        for(auto &x:a) {
            if(s+x<=k)s+=x;
            else break;
        }
        cout<<k-s<<endl;
    }
}