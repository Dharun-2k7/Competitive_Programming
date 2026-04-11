#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        ll ans=0;
        vector<int>odd;
        for(int i=0;i<n;i++){
            int x; cin >>x;
            if(x%2) odd.push_back(x);
            else ans+=x;
        }   
        if(!odd.size()){
            cout << 0 << endl;
            continue;
        }
        sort(odd.begin(),odd.end());
        int m=odd.size();
        for(int i=m/2;i<m;i++) ans+=odd[i];
        cout<<ans<<endl;
    }
    }

