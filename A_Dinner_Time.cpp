#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n,m,p,q;
        cin >>n>>m>>p>>q;
        cout<<(((n%p==0) && (n/p)*q!=m)?"NO":"YES")<<endl;
    }
}