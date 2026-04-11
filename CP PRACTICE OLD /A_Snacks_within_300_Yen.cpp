#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
    int n; cin >>n;
    if(n==0) break;
    vector<int>a(n);
    for(int &x:a) cin >>x;
    int cost=0;
    for(int i=0;i<n;i++){
        if(cost+a[i]<=300){
            cost+=a[i];
        }
        else continue;
    }
    cout<<cost<<endl;
}
}