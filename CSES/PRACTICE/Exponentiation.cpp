#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=10^9+7;
    int t;cin >>t;
    while(t--){
        int a,b;cin >>a>>b;
        cout<<((a%m)^b)%m<<endl;
    }
}