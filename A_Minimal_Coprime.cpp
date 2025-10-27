#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int l,r; cin >>l>>r;
        cout<<(l==1&&r==1?1:abs(l-r))<<endl;

    }
}
