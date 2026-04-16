#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        vector<int>a(n),b(n),c(n);
        int tot=0;
        for(int&i:a){cin >>i; tot+=i;}
        for(int&i:b) cin >>i;
        for(int&i:c) cin >>i;
        cout<<tot<<endl;
    }
}
/*
we dont have to make the share equal in values
we only have to make sure we get a value >= tot/3 while the indeces being non intersected
its easy to luk and find ns btu how to implement
*/