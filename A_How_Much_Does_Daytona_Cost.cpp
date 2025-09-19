#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin >>t;
    while(t--){
        int n, k; cin >> n >>k;
        vector<int>a(n);
        bool found = false;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int j=0;j<n;j++){
            if(a[j]==k)  found=true;
        }
        cout << (found ? "YES" : "NO") << endl;
    }
}