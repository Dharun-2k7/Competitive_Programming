#include<bits/stdc++.h>
using namespace std;
bool sqr(int m){
    int y=sqrt(m);
    return y*y==m;
}
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        if(n%2==0 && sqr(n/2)) cout<<"YES"<<endl;
        else if (n%4==0 && sqr(n/4)) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;

    }
}