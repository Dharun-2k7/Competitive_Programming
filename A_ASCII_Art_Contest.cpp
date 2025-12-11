#include <bits/stdc++.h>
using namespace std;
int main(){
    int g,c,l; 
    cin >> g >> c >> l;
    vector<int> v = {g,c,l};
    sort(v.begin(), v.end());
    if(v[2] - v[0] >= 10) cout << "check again";
    else cout << "final " << v[1];

}
