#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];
    int x;
    string y;
    cin >> x >> y;
    cout << (s[x - 1] == y ? "Yes" : "No") << endl;

}