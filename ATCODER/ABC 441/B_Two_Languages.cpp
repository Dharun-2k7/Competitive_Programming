#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;  cin>>n>>m;
    string s,t; cin>>s>>t;
    bool a[26]={0}, b[26]={0};
    for(char c:s) a[c-'a']=1;
    for(char c:t) b[c-'a']=1;

    int q;cin>>q;
    
    while(q--){
        string w; 
        cin>>w;

        bool ok1=1, ok2=1;
        for(char c:w){
            if(!a[c-'a']) ok1=0;
            if(!b[c-'a']) ok2=0;
        }

        if(ok1 && !ok2) cout<<"Takahashi"<<endl;
        else if(!ok1 && ok2) cout<<"Aoki"<<endl;
        else cout<<"Unknown"<<endl;
    }
}
