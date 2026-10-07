#include<bits/stdc++.h>
using namespace std;

int main(){    
    int t;cin>>t;
    while(t--){
    int n,m; cin >>n>>m;
    int a[26]={0};
    for(int i=0;i<n;i++){
        string s;cin >>s;
        a[s[0]-'a']=1;
    }
    int bad  = 0;
    for (int i = 0; i < m; i++){
        string s; cin >> s;
        for (char c : s){
            if (!a[c - 'A']) bad = 1;
        }
    }
    cout << (bad?"NO":"YES")<<endl;
    }
}


