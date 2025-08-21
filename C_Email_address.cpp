#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    ans += s[0];
    bool used = false;
    for(int i = 1; i < n; ){
        if(i + 2 < n && s.substr(i, 3) == "dot" && i + 3 != n){
            ans += ".";
            i += 3;
        }
        else if(i + 1 < n && s.substr(i, 2) == "at" && !used && i + 2 != n){
            ans += "@";
            used = true;
            i += 2;
        }
        else{
            ans += s[i];
            i++;
        }
    }
    cout << ans << "\n";
    return 0;
}
