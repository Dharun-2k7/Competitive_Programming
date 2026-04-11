#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        string s; cin>>s;
        string t="abc";
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i])b++;
        }
        cout<<(b==0||b==2?"YES":"NO")<<endl;
    }

}