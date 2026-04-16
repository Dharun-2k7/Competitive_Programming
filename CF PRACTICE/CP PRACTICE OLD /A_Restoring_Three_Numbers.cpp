#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int mx = max({a,b,c,d});
    if(mx!=a) cout << mx-a << " ";
    if(mx!=b) cout << mx-b << " ";
    if(mx!=c) cout << mx-c << " ";
    if(mx!=d) cout << mx-d;
}
