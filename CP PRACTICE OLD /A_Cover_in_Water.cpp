#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool thrice=false;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'&& i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                thrice=true;
                break;
            }
            if(s[i]=='.') cnt++;
        }
        if(thrice) cout << 2<<endl;
        else cout<<cnt<<endl;
    }
}