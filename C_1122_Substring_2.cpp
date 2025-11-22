#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n=s.size();
    long long ans=0;

    char pc=0; int pl=0;
    char cc=s[0]; int cl=1;
    for(int i=1;i<n;i++){
        if(s[i]==cc) cl++;
        else{
            if(pl>0 && (cc-'0')== (pc-'0') + 1) ans += min(pl,cl);
            pc=cc; pl=cl;
            cc=s[i]; cl=1;
        }
    }
    if(pl>0 && (cc-'0')== (pc-'0') + 1) ans += min(pl,cl);

    cout<<ans<<endl;
    return 0;
}
