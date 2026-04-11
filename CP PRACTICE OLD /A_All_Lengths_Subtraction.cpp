#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> p(n),a(n,0);
        fo(i,n) cin>>p[i];
        bool ok=1;
        for(int k=n;k>=1 && ok;k--){
            bool f=0;
            for(int s=0;s+k-1<n;s++){
                bool can=1;
                for(int i=s;i<s+k;i++) 
                {
                if(a[i]>=p[i])can=0;break;
            }
                if(can){
                    for(int i=s;i<s+k;i++) a[i]++;
                    f=1;break;
                }
            }
            if(!f) ok=0;
        }
        fo(i,n) if(a[i]!=p[i]) ok=0;
        cout<<(ok?"YES":"NO")<<endl;
    }
}

