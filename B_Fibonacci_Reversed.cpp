#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll x){
    string s = to_string(x);
    reverse(s.begin(), s.end());
    return stoll(s);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y;
    cin >> x >> y;
    ll a1 = x, a2 = y, a3;
    for(int i = 3; i <= 10; i++){
        a3 = f(a1 + a2); 
        a1 = a2;          
        a2 = a3;
    }
    cout << a2 << endl;   
}
