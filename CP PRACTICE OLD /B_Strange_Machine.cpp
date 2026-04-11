#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int t;cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        string s; cin>>s;
        vector<int> qs(q);
        for(int i=0;i<q;i++) cin>>qs[i];
        bool hasB = s.find('B') != string::npos;
        for(long long a : qs){
            if(!hasB){ 
                cout<<a<<endl; 
                continue; 
            }
            int pos = 0; ll steps = 0;
            while(a>0){
                if(s[pos]=='A') --a;
                else a >>= 1;           
                pos = (pos+1==n?0:pos+1);
                steps++;
            }
            cout<<steps<<endl;
        }
    }
}
