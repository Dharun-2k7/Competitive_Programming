#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int pos=n+1;
        for(int i=0;i<=n;i++){
            if(s[i]=='0')
            { 
                pos=i; 
                break; 
            }
        }
        for(int i=0;i<n;i++) cout<<i%pos<<" ";
        cout<<endl;
    }
}
