#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >>a>>b;
    int n=a.size();
    string ans="";
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) ans+='1';
        else ans+='0';
    }
    cout<< ans <<endl;

}