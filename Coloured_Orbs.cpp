#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,b; cin>>r>>b;
    cout<<(r-min(r,b))*1+(b-min(r,b))*2+min(r,b)*5;
}
