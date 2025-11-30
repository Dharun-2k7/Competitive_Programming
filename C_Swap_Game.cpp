#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        vector<int>a(n);
        int sum=0;
        for(int &i:a) cin >>i;
        sort(a.begin()+1,a.end()) ;
        cout<<(a[0]>a[1]?"Alice":"Bob")<<endl;
        }
}