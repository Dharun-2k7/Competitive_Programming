#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a(3);
    for(int &i:a) cin >>i;
    sort(a.begin(),a.end());
    if(a[0]==a[2]-2) cout<<0<<endl;
    else if ((a[1]==a[2])-2||a[0]==a[1]-2) cout<<1<<endl;
    else cout<<2<<endl;
    cout << max(a[2] - a[1], a[1] - a[0]) - 1;
}