#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while(t--){
        int l,a,b; cin >>l >>a>>b;
        int g = gcd(l, b);
        int ans = l - g + (a % g);
        cout << ans << endl;
    }
}