#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin >>a[i];
        
        ll even=-1;
        bool found=false;
        for(int i=0;i<n;i++){
            if (a[i]%2==0){
                if (even==-1) even=i;
                else{
                    cout<<a[even]<<" "<<a[i]<<endl;
                    found=true;
                    break;
                }
            }
        }
        if(found) continue;
        int lim=min(n,100);
        for(int i=0;i<lim && !found;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]%a[i]%2==0){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    found = true;
                    break;
                }
            }
        }
        if(!found) cout<<-1<<endl;
    }
}