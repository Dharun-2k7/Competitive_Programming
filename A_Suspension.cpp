#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int  y ,r; cin >>y>>r;
        int ely=y/2;
        int elx=r;
        int elt=min(n,elx+ely);
        cout <<elt<<endl;
    }
}
