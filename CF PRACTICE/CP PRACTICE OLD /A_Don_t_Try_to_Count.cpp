#include <bits/stdc++.h>
using namespace std;

bool contains(string a,string b){
    int n=a.size(), m=b.size();
    for(int i=0;i+m<=n;i++){
        bool ok=true;
        for(int j=0;j<m;j++){
            if(a[i+j]!=b[j]){ ok=false; break; }
        }
        if(ok) return true;
    }
    return false;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool done=false;
        for(int i=0;i<6;i++){
            if(contains(x,s)){
                cout<<i<<endl;
                done=true;
                break;
            }
            x+=x;
        }
        if(!done) cout<<-1<<endl;
    }
}
