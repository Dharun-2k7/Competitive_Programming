#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    string s; cin >>s;
    int nd=n-s.size();
    cout<<string(nd,'o')+s<<endl;
}